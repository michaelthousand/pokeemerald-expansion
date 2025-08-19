#include "global.h"
#include "bg.h"
#include "window.h"
#include "text.h"
#include "sprite.h"
#include "pokemon_icon.h"
#include "task.h"
#include "malloc.h"
#include "event_data.h"
#include "overworld.h"
#include "pokemon.h"
#include "main.h"           // gMain.newKeys
#include "menu.h"     // DrawStdWindowFrame, LoadStdWindowFrameGfx, LoadUserWindowBorderGfx
#include "palette.h"  // FadeScreen, UpdatePaletteFade, ResetPaletteFade
#include "gpu_regs.h"

#ifndef ARRAY_COUNT
#define ARRAY_COUNT(a) (sizeof(a)/sizeof((a)[0]))
#endif

#ifndef DUMMY_WIN_TEMPLATE
// Some forks use this sentinel macro name; provide a fallback if missing.
#define DUMMY_WIN_TEMPLATE {0xFF, 0, 0, 0, 0, 0, 0}
#endif

#define PREVIEW_SLOTS 6

// Grid positions (two rows of three)
static const u8 sIconPos[PREVIEW_SLOTS][2] = {
    {20, 40}, {90, 40}, {160, 40},
    {20,90}, {90,90}, {160,90},
};

enum {
    ST_INIT = 0,
    ST_DRAW,
    ST_WAIT_INPUT,
    ST_CLEANUP,
    ST_RETURN,
};

struct AiPreviewState {
    u8  state;
    u8  count;
    u8  spriteIds[PREVIEW_SLOTS];
    u16 species[PREVIEW_SLOTS];
    u8  headerWin;                 // <-- add this line back
};

static const u8 sText_OpponentTeam[] = _("Opponent's Team");

static EWRAM_DATA struct AiPreviewState *sPrev = NULL;

// --- helpers ---
static u8 LoadSpeciesFromVars(u16 *out, u8 max)
{
    u8 n = 0;
    for (u8 i = 0; i < max; i++) {
        u16 sp = VarGet(VAR_0x8000 + i);
        if (sp != 0) {
            out[n++] = sp;
        }
    }
    return n;
}


// --- state machine ---
static void CB2_AiPreview(void)
{
    // Per-frame
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();

    switch (sPrev->state) {
    case ST_INIT:
    {
        ResetSpriteData();
        FreeAllSpritePalettes();
        ResetTasks();
        ResetBgsAndClearDma3BusyFlags(0);

        static const struct BgTemplate sBgTemplates[] = {
            { .bg = 0, .charBaseIndex = 0, .mapBaseIndex = 31, .screenSize = 0,
            .paletteMode = 0, .priority = 0, .baseTile = 0 },
        };
        InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));

        // Init windows (needed for the header)
        static const struct WindowTemplate sDummyWinList[] = { DUMMY_WIN_TEMPLATE };
        InitWindows(sDummyWinList);

        // --- Solid purple BG0 (no RGB() macro needed) ---
        // Fill BG0 tilemap with blank tile using palette 15
        FillBgTilemapBufferRect(0, 0, 0, 0, 32, 32, 15);
        // Set palette 15, color 0 to purple literal 0x4D0C
        FillPalette(0x4D0C, 16 * 15, 2);   // start index = 15*16, size = 1 color (2 bytes)
        CopyBgTilemapBufferToVram(0);

        // Fade in
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, 0);

        ShowBg(0); ShowBg(1); ShowBg(2); ShowBg(3);
        sPrev->state = ST_DRAW;
        break;
    }
    case ST_DRAW:
        {
            // --- Header window ---
            // Load window/border GFX so text renders correctly
            LoadMessageBoxAndBorderGfx();

            struct WindowTemplate wt = {
                .bg = 0,
                .tilemapLeft = 6,   // center-ish; tweak to taste
                .tilemapTop  = 1,
                .width = 18,
                .height = 2,
                .paletteNum = 15,
                .baseBlock = 0x100
            };
            sPrev->headerWin = AddWindow(&wt);
            PutWindowTilemap(sPrev->headerWin);
            DrawStdWindowFrame(sPrev->headerWin, FALSE);
            AddTextPrinterParameterized(sPrev->headerWin, FONT_NORMAL, sText_OpponentTeam, 2, 0, 0, NULL);
            CopyWindowToVram(sPrev->headerWin, COPYWIN_FULL);

            // --- Icons (bigger) ---
            LoadMonIconPalettes();
            for (u8 i = 0; i < sPrev->count; i++) {
                u8 x = sIconPos[i][0];
                u8 y = sIconPos[i][1];
                u8 id = CreateMonIcon(sPrev->species[i], SpriteCB_MonIcon, x, y, 1, 0);
                sPrev->spriteIds[i] = id;


                // Scale ~1.5x using affine matrix (works on standard sprite.h)
                struct Sprite *spr = &gSprites[id];
                spr->callback = SpriteCallbackDummy;  // stop the icon's update routine
                spr->animPaused = TRUE;               // lock the current frame
                spr->oam.affineMode = ST_OAM_AFFINE_DOUBLE;
                s8 mat = AllocOamMatrix();
                if (mat != 0xFF) {
                    spr->oam.matrixNum = mat;
                    // 0x100 = 1.0x scale. 0x180 ≈ 1.5x
                    SetOamMatrix(mat, 0x1000, 0, 0, 0x1000);
                }
            }

            sPrev->state = ST_WAIT_INPUT;
            break;
        }


    case ST_WAIT_INPUT:
        if (gMain.newKeys != 0)
            sPrev->state = ST_CLEANUP;
        break;

    case ST_CLEANUP:
        for (u8 i = 0; i < sPrev->count; i++) {
            if (sPrev->spriteIds[i] < MAX_SPRITES)
                FreeAndDestroyMonIconSprite(&gSprites[sPrev->spriteIds[i]]);
        }
        FreeMonIconPalettes();

        // remove header
        ClearWindowTilemap(sPrev->headerWin);
        RemoveWindow(sPrev->headerWin);

        FreeAllWindowBuffers();
        sPrev->state = ST_RETURN;
        break;

    default:
    case ST_RETURN:
        FREE_AND_SET_NULL(sPrev);
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        break;
    }
}


static void StartAiPreviewFromVars(void)
{
    if (sPrev) return;
    sPrev = AllocZeroed(sizeof(*sPrev));
    if (!sPrev) { CB2_ReturnToFieldContinueScriptPlayMapMusic(); return; }
    sPrev->count = LoadSpeciesFromVars(sPrev->species, PREVIEW_SLOTS);
    sPrev->state = ST_INIT;
    SetMainCallback2(CB2_AiPreview);
}


// --- script entry ---
void Vgc_ScriptShowAiPreviewFromVars(void)
{
    StartAiPreviewFromVars();
}
