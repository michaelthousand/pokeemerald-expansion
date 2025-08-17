// src/trainer_party_select.c
#include "global.h"
#include "trainer_party_select.h"

// -----------------------------
// Weighted-party catalog
// Add one line per trainer that should use the 4-of-6 selector.
// -----------------------------

// Example: your “Arwen” trainer from earlier threads
// Party order note: aceIndex is the *slot* in the trainer’s defined 6-mon party.
const struct WeightedPartyMeta gWeightedParties[] = {
    // Weights are *relative*. 100/90/60/40/30/20 is exactly your scheme.
    // Ace locked (always brought) + 3 weighted draws.
    WPM4(TRAINER_ARWEN_1, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_ARWEN_2, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_ORION_1, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_ORION_2, 5, 20, 30, 40, 60, 90, 100),


    // Add more trainers below as needed:
    // WPM4(TRAINER_<NAME>_<PHASE>, 1, 100, 90, 60, 40, 30, 20),
    // WPM4(TRAINER_<OTHER>,       2, 100, 80, 80, 50, 30, 10),

    // If you want a “full-power rematch” that brings all 6, you can keep one
    // metadata entry and just set selectCount=6 (no script duplication).
    // WPMX(TRAINER_ARWEN_REMATCH, 6, 0, WPM_FLAGS_DEFAULT, 100,100,100,100,100,100),
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
