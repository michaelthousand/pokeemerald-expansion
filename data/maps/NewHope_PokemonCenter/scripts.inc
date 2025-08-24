NewHope_PokemonCenter_MapScripts::
# 2 "data/maps/NewHope_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewHope_PokemonCenter_OnTransition
# 3 "data/maps/NewHope_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


NewHope_PokemonCenter_OnTransition::
# 7 "data/maps/NewHope_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_HOPE
	end


NewHope_PokemonCenter_Nurse::
# 13 "data/maps/NewHope_PokemonCenter/scripts.pory"
	lock
# 14 "data/maps/NewHope_PokemonCenter/scripts.pory"
	faceplayer
# 16 "data/maps/NewHope_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/NewHope_PokemonCenter/scripts.pory"
	release
	end

