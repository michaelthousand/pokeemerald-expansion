# 1 "data/maps/NewHope_PokemonCenter/scripts.pory"

# 2 "data/maps/NewHope_PokemonCenter/scripts.pory"
NewHope_PokemonCenter_MapScripts::
# 3 "data/maps/NewHope_PokemonCenter/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, NewHope_PokemonCenter_OnTransition
# 4 "data/maps/NewHope_PokemonCenter/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume

NewHope_PokemonCenter_OnTransition::
# 9 "data/maps/NewHope_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_HOPE
	end


NewHope_PokemonCenter_Nurse::
# 15 "data/maps/NewHope_PokemonCenter/scripts.pory"
	lock
# 16 "data/maps/NewHope_PokemonCenter/scripts.pory"
	faceplayer
# 18 "data/maps/NewHope_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 19 "data/maps/NewHope_PokemonCenter/scripts.pory"
	release
	end

