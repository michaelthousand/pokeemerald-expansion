#define DEFAULT_POKEMON_CENTER_COORDS .x = 7, .y = 4

static const struct HealLocation sHealLocationsPokemonCenter[NUM_HEAL_LOCATIONS - 1] =
{
    [HEAL_LOCATION_NEW_HOPE - 1] =
    {
        .mapGroup = MAP_GROUP(MAP_NEW_HOPE),
        .mapNum = MAP_NUM(MAP_NEW_HOPE),
        .x = 39,
        .y = 32,
    },
};

#undef DEFAULT_POKEMON_CENTER_COORDS

// localIds can be found in the generated events.inc file for the specific heal location map
// e.g. for OldaleTown_PokemonCenter1F/events.inc the following entry gets generated:
// object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, OldaleTown_PokemonCenter_1F_EventScript_Nurse, 0
// In this case the localId is 1.
static const u8 sHealNpcLocalId[NUM_HEAL_LOCATIONS - 1] =
{
    [HEAL_LOCATION_NEW_HOPE - 1] = 1,
};
