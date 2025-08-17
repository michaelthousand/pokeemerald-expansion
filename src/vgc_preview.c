#include "global.h"
#include "pokemon.h"
#include "battle.h"
#include "vgc_preview.h"

#include "event_data.h"     // <-- add this
#include "constants/vars.h" 

// Globals
u8 gVgcPlayerChosenCount = 0;
u8 gVgcPlayerChosenSlots[PARTY_SIZE] = {0};

// Minimal: auto-pick first 4 valid mons and set the preview flag.
// You can call this from script via a special later; for now you can call it
// from C or just rely on the block in CB2 to run only when gVgcPlayerChosenCount > 0.
bool8 StartVgcPreviewAndSelection(u16 trainerId, bool8 isDouble)
{
    gVgcPlayerChosenCount = 0;
    for (u8 i = 0; i < PARTY_SIZE && gVgcPlayerChosenCount < 4; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL);
        if (species == SPECIES_NONE)
            continue;
        if (GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG, NULL))
            continue;
        if (GetMonData(&gPlayerParty[i], MON_DATA_HP, NULL) == 0)
            continue;

        gVgcPlayerChosenSlots[gVgcPlayerChosenCount++] = i;
    }

    if (gVgcPlayerChosenCount < 4)
        return FALSE; // not enough usable mons

    // Mark this battle to use the player’s selected 4 at init
    gBattleTypeFlags |= BATTLE_TYPE_VGC_PREVIEW;
    return TRUE;
}

u8 BuildPlayerBattlePartyFromSelection(struct Pokemon *dstParty)
{
    for (u8 i = 0; i < gVgcPlayerChosenCount; i++)
        CopyMon(&dstParty[i], &gPlayerParty[gVgcPlayerChosenSlots[i]], sizeof(struct Pokemon));
    for (u8 i = gVgcPlayerChosenCount; i < PARTY_SIZE; i++)
        ZeroMonData(&dstParty[i]);
    return gVgcPlayerChosenCount;
}


void Script_StartVgcPreviewAndSelection(void)
{
    u16 trainerId = VarGet(VAR_0x8004);
    bool8 isDouble = (bool8)VarGet(VAR_0x8005);
    bool8 ok = StartVgcPreviewAndSelection(trainerId, isDouble);
    VarSet(VAR_RESULT, ok);
}