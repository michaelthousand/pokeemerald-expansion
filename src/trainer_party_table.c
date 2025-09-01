// src/trainer_party_table.c
#include "global.h"
#include "trainer_party_select.h"

const struct WeightedPartyMeta gWeightedParties[] = {
    WPM4(TRAINER_MORWEN_C1, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_MORWEN_C2, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_KAELEN_C1, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_KAELEN_C2, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_FREYA_C1, 5, 20, 30, 40, 60, 90, 100),
    WPM4(TRAINER_RONAN_C1, 5, 20, 30, 40, 60, 90, 100),
};

const u16 gWeightedPartiesCount = ARRAY_COUNT(gWeightedParties);
