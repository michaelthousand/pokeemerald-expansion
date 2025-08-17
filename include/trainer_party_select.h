// include/trainer_party_select.h
#ifndef GUARD_TRAINER_PARTY_SELECT_H
#define GUARD_TRAINER_PARTY_SELECT_H

#include "global.h"
#include "constants/trainers.h"

#define AI_BRING_USE_WEIGHTS   (1 << 0)  // enable weighted 4-of-6 for this trainer
#define AI_BRING_LOCK_ACE      (1 << 1)  // always include aceIndex in the selection

// For most leaders you'll want: USE_WEIGHTS | LOCK_ACE
// If you ever want “no guaranteed ace,” clear LOCK_ACE and just weight it high.

struct WeightedPartyMeta {
    u16 trainerId;           // e.g., TRAINER_ARWEN_1
    u8  selectCount;         // usually 4 (bring 4 of 6)
    u8  aceIndex;            // 0..5 (index in party list)
    u8  weights[PARTY_SIZE]; // 6 entries; 0 weight => never picked (unless LOCK_ACE)
    u8  flags;               // bitfield above
};

// ---- Table + helpers ----
extern const struct WeightedPartyMeta gWeightedParties[];
extern const u16 gWeightedPartiesCount;

// Returns NULL if trainer is not configured for weighted selection
const struct WeightedPartyMeta *FindWeightedPartyMeta(u16 trainerId);

// ---- Entry helpers/macros (optional sugar) ----
#define WPM_FLAGS_DEFAULT (AI_BRING_USE_WEIGHTS | AI_BRING_LOCK_ACE)

// Typical 4-of-6 with ace locked:
#define WPM4(trId, ace, w0,w1,w2,w3,w4,w5) \
    { .trainerId=(trId), .selectCount=4, .aceIndex=(ace), .weights={w0,w1,w2,w3,w4,w5}, .flags=WPM_FLAGS_DEFAULT }

// Same but custom flags (e.g., no locked ace, or debug):
#define WPMX(trId, count, ace, flags, w0,w1,w2,w3,w4,w5) \
    { .trainerId=(trId), .selectCount=(count), .aceIndex=(ace), .weights={w0,w1,w2,w3,w4,w5}, .flags=(flags) }

#endif // GUARD_TRAINER_PARTY_SELECT_H
