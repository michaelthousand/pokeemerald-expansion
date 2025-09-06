#include "global.h"
#include "pokemon.h"
#include "script.h"
#include "event_data.h"
#include "item.h"
#include "pokedex.h"

// Reads VAR_0x8000..VAR_0x8009 and gives a mon with custom IVs/EVs.
// Call from Poryscript with: callnative(Script_GiveCustomMonEVsIVs)
void Script_GiveCustomMonEVsIVs(void)
{
    u16 species = VarGet(VAR_0x8000);
    u8  level   = (u8)VarGet(VAR_0x8001);
    u16 item    = VarGet(VAR_0x8002);
    u8  ivAll   = (u8)VarGet(VAR_0x8003);

    u16 evHp  = VarGet(VAR_0x8004);
    u16 evAtk = VarGet(VAR_0x8005);
    u16 evDef = VarGet(VAR_0x8006);
    u16 evSpA = VarGet(VAR_0x8007);
    u16 evSpD = VarGet(VAR_0x8008);
    u16 evSpe = VarGet(VAR_0x8009);

    struct Pokemon mon;
    u8 success;

    CreateMon(&mon, species, level, 0, TRUE, 0, OT_ID_PLAYER_ID, 0);
    u32 personality = GetMonData(&mon, MON_DATA_PERSONALITY);
    SetMonData(&mon, MON_DATA_HELD_ITEM, &item);

    SetMonData(&mon, MON_DATA_HP_IV,    &ivAll);
    SetMonData(&mon, MON_DATA_ATK_IV,   &ivAll);
    SetMonData(&mon, MON_DATA_DEF_IV,   &ivAll);
    SetMonData(&mon, MON_DATA_SPATK_IV, &ivAll);
    SetMonData(&mon, MON_DATA_SPDEF_IV, &ivAll);
    SetMonData(&mon, MON_DATA_SPEED_IV, &ivAll);

    SetMonData(&mon, MON_DATA_HP_EV,    &evHp);
    SetMonData(&mon, MON_DATA_ATK_EV,   &evAtk);
    SetMonData(&mon, MON_DATA_DEF_EV,   &evDef);
    SetMonData(&mon, MON_DATA_SPATK_EV, &evSpA);
    SetMonData(&mon, MON_DATA_SPDEF_EV, &evSpD);
    SetMonData(&mon, MON_DATA_SPEED_EV, &evSpe);

    CalculateMonStats(&mon);


    success = GiveMonToPlayer(&mon);
    if (success)
        HandleSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_SET_SEEN, personality);

    VarSet(VAR_RESULT, success ? 1 : 0);
}
