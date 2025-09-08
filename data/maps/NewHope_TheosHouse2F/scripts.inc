NewHope_TheosHouse2F_MapScripts::
# 2 "data/maps/NewHope_TheosHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheosHouse_OnTransition
	.byte 0


TheosHouse_OnTransition::
# 6 "data/maps/NewHope_TheosHouse2F/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_HOPE
	return

