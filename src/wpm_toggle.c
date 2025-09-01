// src/wpm_toggle.c
#include "global.h"
#include "event_data.h"    // gSpecialVar_Result
#include "trainer_party_select.h"

// SPECIAL(WeightedSelector_On)
void WeightedSelector_On(void)  { WeightedSelector_SetEnabled(TRUE);  gSpecialVar_Result = TRUE; }

// SPECIAL(WeightedSelector_Off)
void WeightedSelector_Off(void) { WeightedSelector_SetEnabled(FALSE); gSpecialVar_Result = TRUE; }
