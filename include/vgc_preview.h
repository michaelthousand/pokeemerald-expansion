#ifndef GUARD_VGC_PREVIEW_H
#define GUARD_VGC_PREVIEW_H

#include "global.h"
#include "pokemon.h"

// Pick a free bit; 27 is usually free. Change if your fork uses it.
#define BATTLE_TYPE_VGC_PREVIEW (1 << 27)

// Selection results (used by battle_main.c)
extern u8 gVgcPlayerChosenCount;               // usually 4
extern u8 gVgcPlayerChosenSlots[PARTY_SIZE];   // indices into gPlayerParty

// Start the preview/selection flow. For now this auto-picks; later you’ll show UI.
bool8 StartVgcPreviewAndSelection(u16 trainerId, bool8 isDouble);

// Copy the chosen mons (by slot) into dstParty[0..count-1]; return count.
u8 BuildPlayerBattlePartyFromSelection(struct Pokemon *dstParty);

#endif // GUARD_VGC_PREVIEW_H