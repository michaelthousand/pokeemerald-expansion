ForestsEdge_PokeCenter_MapScripts::
# 2 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ForestsEdge_PokemonCenter_OnTransition
# 3 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ForestsEdge_PokemonCenter_OnTransition::
# 9 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_FORESTS_EDGE
	end


ForestsEdge_PokeCenter_Heal::
# 15 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	lock
# 16 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	faceplayer
# 18 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 19 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	release
	end

