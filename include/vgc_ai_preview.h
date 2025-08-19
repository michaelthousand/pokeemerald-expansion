#ifndef GUARD_VGC_AI_PREVIEW_H
#define GUARD_VGC_AI_PREVIEW_H

#include "global.h"

// Script entry: calls a simple, read-only screen that shows 6 icons + species names.
// Reads species from VAR_0x8000..VAR_0x8005 (0 = empty). Press any button to close.
void Vgc_ScriptShowAiPreviewFromVars(void);

#endif // GUARD_VGC_AI_PREVIEW_H
