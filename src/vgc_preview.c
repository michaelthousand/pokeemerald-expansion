// AI preview (minimal)
#include "global.h"
#include "pokemon.h"
#include "pokemon_summary_screen.h"  // ShowPokemonSummaryScreen(...)
#include "script.h"                  // ScriptContext_Stop, gSpecialVar_Result
#include "overworld.h"               // CB2_ReturnToFieldContinueScriptPlayMapMusic
#include "event_data.h"              // VarGet
#include "constants/vars.h"          // VAR_0x8000.. etc.
#include "constants/species.h"
#include "constants/items.h"
#include "constants/moves.h"  

#define PREVIEW_MAX 6



extern bool8 gVgcSummaryHideDetails;


static struct Pokemon sVgcPreviewParty[PREVIEW_MAX];
static u8 sVgcPreviewCount;

static void Vgc_CB2_ReturnFromPreview(void);

static void Vgc_ClearMonMoves(struct Pokemon *mon)
{
    u16 noneMove = MOVE_NONE;
    u8  zeroPP   = 0;
    u8  zeroPPB  = 0; // PP Ups bitfield

    // Wipe all 4 moves
    SetMonData(mon, MON_DATA_MOVE1, &noneMove);
    SetMonData(mon, MON_DATA_MOVE2, &noneMove);
    SetMonData(mon, MON_DATA_MOVE3, &noneMove);
    SetMonData(mon, MON_DATA_MOVE4, &noneMove);

    // Wipe PP and PP Bonuses
    SetMonData(mon, MON_DATA_PP1, &zeroPP);
    SetMonData(mon, MON_DATA_PP2, &zeroPP);
    SetMonData(mon, MON_DATA_PP3, &zeroPP);
    SetMonData(mon, MON_DATA_PP4, &zeroPP);
    SetMonData(mon, MON_DATA_PP_BONUSES, &zeroPPB);  // <-- plural
}

static void Vgc_BuildPreviewFromVars(void)
{
    sVgcPreviewCount = 0;

    const u16 varIds[PREVIEW_MAX] = {
        VAR_VGC_PREVIEW_0, VAR_VGC_PREVIEW_1, VAR_VGC_PREVIEW_2,
        VAR_VGC_PREVIEW_3, VAR_VGC_PREVIEW_4, VAR_VGC_PREVIEW_5
    };

    // Default preview level (optional override via VAR_0x8006: 1–100)
    u8 level = 50;
    u16 maybeLevel = VarGet(VAR_VGC_PREVIEW_LV);
    if (maybeLevel >= 1 && maybeLevel <= 100)
        level = (u8)maybeLevel;

    for (u8 i = 0; i < PREVIEW_MAX; i++)
    {
        u16 species = VarGet(varIds[i]);
        if (species > SPECIES_NONE && species < NUM_SPECIES)
        {
            // Create a plain mon, then sanitize details
            CreateMon(&sVgcPreviewParty[sVgcPreviewCount], species, level,
                      /*fixedIV*/32, /*otIdType*/TRUE, /*personality*/0,
                      OT_ID_PLAYER_ID, 0);

            Vgc_ClearMonMoves(&sVgcPreviewParty[sVgcPreviewCount]);       // hide moves
            u16 none = ITEM_NONE;
            SetMonData(&sVgcPreviewParty[sVgcPreviewCount], MON_DATA_HELD_ITEM, &none); // hide item

            sVgcPreviewCount++;
        }
    }
}


// Special: opens the Summary Screen and blocks the script until closed.
// Add to specials table:  SPECIAL(StartVgcSummaryPreviewFromVars)
void StartVgcSummaryPreviewFromVars(void)
{
    // --- DEBUG: bypass script vars completely ---
    {
        memset(sVgcPreviewParty, 0, sizeof(sVgcPreviewParty));
        sVgcPreviewCount = 0;

        u16 speciesList[6] = {
            SPECIES_MAGIKARP, SPECIES_MAGIKARP, SPECIES_MAGIKARP,
            SPECIES_MAGIKARP, SPECIES_MAGIKARP, SPECIES_MAGIKARP
        };
        u8 level = 88;

        for (int i = 0; i < 6; i++) {
            CreateMon(&sVgcPreviewParty[sVgcPreviewCount], speciesList[i], level,
                    32, TRUE, 0, OT_ID_PLAYER_ID, 0);
            Vgc_ClearMonMoves(&sVgcPreviewParty[sVgcPreviewCount]);
            u16 none = ITEM_NONE;
            SetMonData(&sVgcPreviewParty[sVgcPreviewCount], MON_DATA_HELD_ITEM, &none);
            sVgcPreviewCount++;
        }
    }

    Vgc_BuildPreviewFromVars();
    if (sVgcPreviewCount == 0) { gSpecialVar_Result = FALSE; return; }
    gSpecialVar_Result = TRUE;

    gVgcSummaryHideDetails = TRUE;  // <— turn on hide + input lock

    ShowPokemonSummaryScreen(
        SUMMARY_MODE_NORMAL,          // use the enum for clarity
        sVgcPreviewParty, 0, sVgcPreviewCount - 1,
        Vgc_CB2_ReturnFromPreview
    );
    ScriptContext_Stop();
}

static void Vgc_CB2_ReturnFromPreview(void)
{
    gVgcSummaryHideDetails = FALSE;   // <— restore normal behavior
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}


// Restore player party after battle
extern struct Pokemon gPlayerParty[PARTY_SIZE];

static struct Pokemon sVgcPartyBackup[PARTY_SIZE];
static bool8 sVgcHasBackup = FALSE;

void Vgc_SavePartyBackup(void)
{
    memcpy(sVgcPartyBackup, gPlayerParty, sizeof(sVgcPartyBackup));
    sVgcHasBackup = TRUE;
    gSpecialVar_Result = TRUE;
}

void Vgc_RestorePartyBackup(void)
{
    if (!sVgcHasBackup) { gSpecialVar_Result = FALSE; return; }
    memcpy(gPlayerParty, sVgcPartyBackup, sizeof(sVgcPartyBackup));
    gSpecialVar_Result = TRUE;
}