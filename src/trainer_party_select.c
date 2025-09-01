// src/trainer_party_select.c
#include "global.h"
#include "trainer_party_select.h"
#include <stdbool.h>
#include <string.h>   // for memset
#include "random.h"

// ---- Runtime gate (default OFF) ----
static bool sWpmEnabled = false;
void WeightedSelector_SetEnabled(bool enabled) { sWpmEnabled = enabled; }
bool WeightedSelector_IsEnabled(void)          { return sWpmEnabled; }

// Lookup
const struct WeightedPartyMeta *FindWeightedPartyMeta(u16 trainerId)
{
    // Optional hard gate: only enable selector when you want it
    if (!WeightedSelector_IsEnabled())
        return NULL;

    for (u16 i = 0; i < gWeightedPartiesCount; i++)
        if (gWeightedParties[i].trainerId == trainerId)
            return &gWeightedParties[i];

    return NULL;
}

// One weighted pick, distinct from 'ace' and already chosen
static u8 sPickOneWeightedDistinct(const struct WeightedPartyMeta *m,
                                   const bool chosen[PARTY_SIZE],
                                   u8 avoidIndex)
{
    u32 total = 0;
    for (u8 i = 0; i < PARTY_SIZE; i++)
        if (i != avoidIndex && !chosen[i])
            total += m->weights[i];

    if (total == 0) {
        for (u8 i = 0; i < PARTY_SIZE; i++)
            if (i != avoidIndex && !chosen[i] && m->weights[i] > 0)
                return i;
        for (u8 i = 0; i < PARTY_SIZE; i++)
            if (i != avoidIndex && !chosen[i])
                return i;
        return avoidIndex; // degenerate fallback
    }

    u32 roll = (Random() % total) + 1, acc = 0;
    for (u8 i = 0; i < PARTY_SIZE; i++) {
        if (i == avoidIndex || chosen[i]) continue;
        u8 w = m->weights[i];
        if (w == 0) continue;
        acc += w;
        if (roll <= acc) return i;
    }

    // Shouldn’t get here; safe fallback
    for (u8 i = 0; i < PARTY_SIZE; i++)
        if (i != avoidIndex && !chosen[i] && m->weights[i] > 0)
            return i;
    for (u8 i = 0; i < PARTY_SIZE; i++)
        if (i != avoidIndex && !chosen[i])
            return i;
    return avoidIndex;
}

// Builds 4 indices: ace + 3 weighted, all distinct
u8 SelectWeightedPartyForTrainer(u16 trainerId, u8 outIndices[6])
{
    const struct WeightedPartyMeta *m = FindWeightedPartyMeta(trainerId);
    if (!m) return 0;

    u8 want = m->selectCount ? m->selectCount : 4;
    if (want > PARTY_SIZE) want = PARTY_SIZE;

    bool chosen[PARTY_SIZE];
    memset(chosen, 0, sizeof(chosen));

    u8 ace = (m->aceIndex < PARTY_SIZE) ? m->aceIndex : (PARTY_SIZE - 1);
    chosen[ace] = true;
    u8 picked = 1;

    while (picked < want) {
        u8 pick = sPickOneWeightedDistinct(m, chosen, ace);
        if (!chosen[pick]) { chosen[pick] = true; picked++; }
        else {
            // pathological fallback only
            for (u8 i = 0; i < PARTY_SIZE && picked < want; i++)
                if (!chosen[i] && i != ace) { chosen[i] = true; picked++; break; }
        }
    }

    u8 outCount = 0;
    for (u8 i = 0; i < PARTY_SIZE; i++)
        if (chosen[i]) outIndices[outCount++] = i;
    return outCount;    // normally 4
}

u8 SelectWeightedPartyMask(u16 trainerId, u8 *outMask)
{
    u8 idxs[PARTY_SIZE];
    u8 count = SelectWeightedPartyForTrainer(trainerId, idxs);
    u8 mask = 0;
    for (u8 i = 0; i < count; i++) mask |= (1u << idxs[i]);
    if (outMask) *outMask = mask;
    return count;
}

