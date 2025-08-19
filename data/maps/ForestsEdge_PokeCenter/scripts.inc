# 1 "data/maps/ForestsEdge_PokeCenter/scripts.pory"

# 2 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
ForestsEdge_PokeCenter_MapScripts::
# 3 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, ForestsEdge_PokeCenter_OnTransition
# 4 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume

ForestsEdge_PokeCenter_OnTransition::
# 9 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_FORESTS_EDGE
	end


ForestsEdge_PokeCenter_Heal::
# 15 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	lock
# 16 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	faceplayer
# 17 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	msgbox ForestsEdge_PokeCenter_Heal_Text_0, MSGBOX_YESNO
# 18 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ForestsEdge_PokeCenter_Heal_2
# 23 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	msgbox ForestsEdge_PokeCenter_Heal_Text_2, MSGBOX_NPC
ForestsEdge_PokeCenter_Heal_1:
# 25 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	release
	end

ForestsEdge_PokeCenter_Heal_2:
# 19 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 20 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	special HealPlayerParty
# 21 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	msgbox ForestsEdge_PokeCenter_Heal_Text_1, MSGBOX_NPC
	goto ForestsEdge_PokeCenter_Heal_1


ForestsEdge_PokeCenter_Heal_Text_0:
# 17 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	.string "Would you like to heal your party?$"

ForestsEdge_PokeCenter_Heal_Text_1:
# 21 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	.string "Please come again.$"

ForestsEdge_PokeCenter_Heal_Text_2:
# 23 "data/maps/ForestsEdge_PokeCenter/scripts.pory"
	.string "Have a nice day.$"
