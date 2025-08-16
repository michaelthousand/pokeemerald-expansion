// src/ev_editor.c
#include "global.h"
#include "pokemon.h"
#include "event_data.h"            // VarGet / VarSet
#include "constants/vars.h"        // VAR_0x8004, VAR_RESULT, etc.
#include "constants/pokemon.h"     // PARTY_SIZE

static inline u16 GetEvByIndex(struct Pokemon *mon, u8 idx)
{
    switch (idx) {
    case 0: return GetMonData(mon, MON_DATA_HP_EV,    NULL);
    case 1: return GetMonData(mon, MON_DATA_ATK_EV,   NULL);
    case 2: return GetMonData(mon, MON_DATA_DEF_EV,   NULL);
    case 3: return GetMonData(mon, MON_DATA_SPATK_EV, NULL);
    case 4: return GetMonData(mon, MON_DATA_SPDEF_EV, NULL);
    case 5: return GetMonData(mon, MON_DATA_SPEED_EV, NULL);
    default: return 0;
    }
}

static inline void SetEvByIndex(struct Pokemon *mon, u8 idx, u16 val)
{
    if (val > 252) val = 252; // safety
    switch (idx) {
    case 0: SetMonData(mon, MON_DATA_HP_EV,    &val); break;
    case 1: SetMonData(mon, MON_DATA_ATK_EV,   &val); break;
    case 2: SetMonData(mon, MON_DATA_DEF_EV,   &val); break;
    case 3: SetMonData(mon, MON_DATA_SPATK_EV, &val); break;
    case 4: SetMonData(mon, MON_DATA_SPDEF_EV, &val); break;
    case 5: SetMonData(mon, MON_DATA_SPEED_EV, &val); break;
    }
}

static u16 GetTotalEVs(struct Pokemon *mon)
{
    return  GetMonData(mon, MON_DATA_HP_EV,    NULL)
          + GetMonData(mon, MON_DATA_ATK_EV,   NULL)
          + GetMonData(mon, MON_DATA_DEF_EV,   NULL)
          + GetMonData(mon, MON_DATA_SPATK_EV, NULL)
          + GetMonData(mon, MON_DATA_SPDEF_EV, NULL)
          + GetMonData(mon, MON_DATA_SPEED_EV, NULL);
}

// Native callable from scripts: uses VAR_0x8004(slot), VAR_0x8005(stat 0..5), VAR_0x8006(mode) and writes VAR_RESULT
bool8 EVEditor_Adjust(void)
{
    u16 slot = VarGet(VAR_0x8004);
    u16 stat = VarGet(VAR_0x8005);
    u16 mode = VarGet(VAR_0x8006);

    if (slot >= PARTY_SIZE || stat > 5) {
        VarSet(VAR_RESULT, 3); // invalid
        return FALSE;
    }

    struct Pokemon *mon = &gPlayerParty[slot];
    u16 cur   = GetEvByIndex(mon, (u8)stat);
    u16 total = GetTotalEVs(mon);
    u16 newVal = cur;

    switch (mode) {
    case 0: { // +10
        if (cur >= 252) { VarSet(VAR_RESULT, 1); return FALSE; }
        if (total >= 510) { VarSet(VAR_RESULT, 2); return FALSE; }
        u16 add = 10;
        if (cur + add > 252) add = 252 - cur;
        if (total + add > 510) add = 510 - total;
        newVal = cur + add;
        break;
    }
    case 1: // -10
        newVal = (cur >= 10) ? (cur - 10) : 0;
        break;
    case 2: // +1
        if (cur >= 252) { VarSet(VAR_RESULT, 1); return FALSE; }
        if (total >= 510) { VarSet(VAR_RESULT, 2); return FALSE; }
        newVal = cur + 1;
        break;
    case 3: // -1
        newVal = (cur > 0) ? (cur - 1) : 0;
        break;
    case 4: // set 0
        newVal = 0;
        break;
    case 5: { // set 252
        if (cur >= 252) { VarSet(VAR_RESULT, 1); return FALSE; }
        u16 need = 252 - cur;
        if (total + need > 510) { VarSet(VAR_RESULT, 2); return FALSE; }
        newVal = 252;
        break;
    }
    default:
        VarSet(VAR_RESULT, 3);
        return FALSE;
    }

    if (newVal != cur) {
        SetEvByIndex(mon, (u8)stat, newVal);
        CalculateMonStats(mon);
    }

    VarSet(VAR_RESULT, 0);
    return FALSE; // scripts expect FALSE-returning natives
}
