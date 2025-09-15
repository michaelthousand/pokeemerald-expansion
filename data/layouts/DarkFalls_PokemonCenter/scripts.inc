DarkFalls_PokemonCenter_MapScripts::
# 2 "data/layouts/DarkFalls_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DarkFalls_PokemonCenter_OnTransition
# 3 "data/layouts/DarkFalls_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


DarkFalls_PokemonCenter_OnTransition::
# 7 "data/layouts/DarkFalls_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_DARK_FALLS
	end


DarkFalls_PokemonCenter_Nurse1::
# 13 "data/layouts/DarkFalls_PokemonCenter/scripts.pory"
	lock
# 14 "data/layouts/DarkFalls_PokemonCenter/scripts.pory"
	faceplayer
# 16 "data/layouts/DarkFalls_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/layouts/DarkFalls_PokemonCenter/scripts.pory"
	release
	end

