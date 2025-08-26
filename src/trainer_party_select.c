// src/trainer_party_select.c
#include "global.h"
#include "trainer_party_select.h"

// -----------------------------
// Weighted-party catalog
// Add one line per trainer that should use the 4-of-6 selector.
// -----------------------------


// Party order note: aceIndex is the *slot* in the trainer’s defined 6-mon party.
const struct WeightedPartyMeta gWeightedParties[] = {
    // Weights are *relative*. 100/90/60/40/30/20 is exactly your scheme.
    // Ace locked (always brought) + 3 weighted draws.
    WPM4(TRAINER_MORWEN_C1, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_MORWEN_C2, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_KAELEN_C1, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_KAELEN_C2, 5, 20, 30, 40, 60, 90, 100),


    // Add more trainers below as needed:
    // WPM4(TRAINER_<NAME>_<PHASE>, 1, 100, 90, 60, 40, 30, 20),
    // WPM4(TRAINER_<OTHER>,       2, 100, 80, 80, 50, 30, 10),

    // If you want a “full-power rematch” that brings all 6, you can keep one
    // metadata entry and just set selectCount=6 (no script duplication).
    // WPMX(TRAINER_MORWEN_REMATCH, 6, 0, WPM_FLAGS_DEFAULT, 100,100,100,100,100,100),
};

const u16 gWeightedPartiesCount = ARRAY_COUNT(gWeightedParties);

// -----------------------------
// Lookup helper
// -----------------------------
const struct WeightedPartyMeta *FindWeightedPartyMeta(u16 trainerId)
{
    for (u16 i = 0; i < gWeightedPartiesCount; i++)
        if (gWeightedParties[i].trainerId == trainerId)
            return &gWeightedParties[i];
    return NULL;
}

// -----------------------------
// (Optional) cheap runtime sanity checks when DEBUG is on
// -----------------------------
#if defined(UG_DEBUG) || defined(BUILD_DEBUG)
#include "malloc.h"
#include "constants/constants.h"

static void AssertValidWPM(const struct WeightedPartyMeta *m)
{
    if (!m) return;
    if (m->selectCount == 0 || m->selectCount > PARTY_SIZE)
        AGB_ASSERT_EX(false, "trainer %d: selectCount=%d invalid", m->trainerId, m->selectCount);
    if (m->aceIndex >= PARTY_SIZE)
        AGB_ASSERT_EX(false, "trainer %d: aceIndex=%d invalid", m->trainerId, m->aceIndex);
    // If ace is locked, ensure ace weight isn’t zero (not strictly required, but helps data hygiene)
    if ((m->flags & AI_BRING_LOCK_ACE) && m->weights[m->aceIndex] == 0)
        AGB_ASSERT_EX(false, "trainer %d: ace weight is 0 with LOCK_ACE", m->trainerId);
}
#endif


#include "pokemon.h"
#include "pokemon_summary_screen.h"  // ShowPokemonSummaryScreen(...)
#include "script.h"                  // ScriptContext_Stop, gSpecialVar_Result
#include "overworld.h"               // CB2_ReturnToFieldContinueScriptPlayMapMusic
#include "event_data.h"              // VarGet/VarSet
#include "constants/vars.h"          // VAR_0x8000.. etc.
#include "constants/species.h"
#include "constants/items.h"

#define PREVIEW_MAX 6

static struct Pokemon sVgcPreviewParty[PREVIEW_MAX];
static u8 sVgcPreviewCount;

static void Vgc_CB2_ReturnFromPreview(void);

static void Vgc_BuildPreviewFromVars(void)
{
    sVgcPreviewCount = 0;

    // Species come from VAR_0x8000..VAR_0x8005 (as you’re already doing)
    const u16 varIds[PREVIEW_MAX] = {
        VAR_0x8000, VAR_0x8001, VAR_0x8002,
        VAR_0x8003, VAR_0x8004, VAR_0x8005
    };

    // Default preview level (you can change this). Optional override: VAR_0x8006
    u8 level = 50;
    u16 maybeLevel = VarGet(VAR_0x8006);
    if (maybeLevel >= 1 && maybeLevel <= 100)
        level = (u8)maybeLevel;

    for (u8 i = 0; i < PREVIEW_MAX; i++)
    {
        u16 species = VarGet(varIds[i]);
        if (species > SPECIES_NONE && species < NUM_SPECIES)
        {
            CreateMon(&sVgcPreviewParty[sVgcPreviewCount], species, level,
                      /*fixedIV*/32, /*otIdType*/TRUE, /*personality*/0, OT_ID_PLAYER_ID, 0);

            // Optional: hide moves/items so you don’t leak info across tabs
            // ClearMonMoves(&sVgcPreviewParty[sVgcPreviewCount]);
            // u16 none = ITEM_NONE;
            // SetMonData(&sVgcPreviewParty[sVgcPreviewCount], MON_DATA_HELD_ITEM, &none);

            sVgcPreviewCount++;
        }
    }
}

// Special: opens the Summary Screen and blocks the script until closed.
// Register this in your specials table as:  StartVgcSummaryPreviewFromVars
void StartVgcSummaryPreviewFromVars(void)
{
    Vgc_BuildPreviewFromVars();

    if (sVgcPreviewCount == 0)
    {
        gSpecialVar_Result = FALSE;    // nothing to show; script should not waitstate
        return;
    }

    gSpecialVar_Result = TRUE;

    // Your branch’s header shows this signature: (mode, mons, first, last, cb)
    ShowPokemonSummaryScreen(
        /*mode*/ 0,                    // normal
        /*mons*/ sVgcPreviewParty,
        /*first*/ 0,
        /*last*/ sVgcPreviewCount - 1,
        /*cb*/   Vgc_CB2_ReturnFromPreview
    );

    ScriptContext_Stop();              // let script `waitstate` until we return
}

static void Vgc_CB2_ReturnFromPreview(void)
{
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}