StarlightGrove_PokemonCenter_MapScripts::
# 2 "data/maps/StarlightGrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StarlightGrove_PokemonCenter_OnTransition
# 3 "data/maps/StarlightGrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


StarlightGrove_PokemonCenter_OnTransition::
# 7 "data/maps/StarlightGrove_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_STARLIGHT_GROVE
	end


StarlightGrove_PokemonCenter_Nurse::
# 13 "data/maps/StarlightGrove_PokemonCenter/scripts.pory"
	lock
# 14 "data/maps/StarlightGrove_PokemonCenter/scripts.pory"
	faceplayer
# 16 "data/maps/StarlightGrove_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/StarlightGrove_PokemonCenter/scripts.pory"
	release
	end

