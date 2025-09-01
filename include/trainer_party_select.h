#ifndef GUARD_TRAINER_PARTY_SELECT_H
#define GUARD_TRAINER_PARTY_SELECT_H
#include <stdbool.h>

#include "global.h"
#include "constants/trainers.h"

#define AI_BRING_USE_WEIGHTS   (1 << 0)
#define AI_BRING_LOCK_ACE      (1 << 1)
#define WPM_FLAGS_DEFAULT (AI_BRING_USE_WEIGHTS | AI_BRING_LOCK_ACE)

#ifndef PARTY_SIZE
#define PARTY_SIZE 6
#endif

struct WeightedPartyMeta {
    u16 trainerId;
    u8  selectCount;          // usually 4
    u8  aceIndex;             // 0..5
    u8  weights[PARTY_SIZE];  // 6 entries
    u8  flags;
};

extern const struct WeightedPartyMeta gWeightedParties[];
extern const u16 gWeightedPartiesCount;

#define WPM4(trId, ace, w0,w1,w2,w3,w4,w5) \
    { .trainerId=(trId), .selectCount=4, .aceIndex=(ace), .weights={w0,w1,w2,w3,w4,w5}, .flags=WPM_FLAGS_DEFAULT }

#define WPMX(trId,count,ace,flags,w0,w1,w2,w3,w4,w5) \
    { .trainerId=(trId), .selectCount=(count), .aceIndex=(ace), .weights={w0,w1,w2,w3,w4,w5}, .flags=(flags) }

u8 SelectWeightedPartyForTrainer(u16 trainerId, u8 outIndices[6]);
u8 SelectWeightedPartyMask(u16 trainerId, u8 *outMask);
const struct WeightedPartyMeta *FindWeightedPartyMeta(u16 trainerId);




// Runtime gate for auto-selector
void WeightedSelector_SetEnabled(bool enabled);
bool WeightedSelector_IsEnabled(void);

#endif