# 1 "data/maps/TestMapA_PC/scripts.pory"

# 2 "data/maps/TestMapA_PC/scripts.pory"
TestMapA_PC_MapScripts::
# 3 "data/maps/TestMapA_PC/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, TestMapA_PokemonCenter_OnTransition
# 4 "data/maps/TestMapA_PC/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume

TestMapA_PokemonCenter_OnTransition::
# 9 "data/maps/TestMapA_PC/scripts.pory"
	setrespawn HEAL_LOCATION_TESTMAPA
	end


TestMapA_PC_Nurse::
# 15 "data/maps/TestMapA_PC/scripts.pory"
	lock
# 16 "data/maps/TestMapA_PC/scripts.pory"
	faceplayer
# 18 "data/maps/TestMapA_PC/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 19 "data/maps/TestMapA_PC/scripts.pory"
	release
	end


TestMapA_PC_NPC_Heal::
# 25 "data/maps/TestMapA_PC/scripts.pory"
	lock
# 26 "data/maps/TestMapA_PC/scripts.pory"
	faceplayer
# 27 "data/maps/TestMapA_PC/scripts.pory"
	msgbox TestMapA_PC_NPC_Heal_Text_0, MSGBOX_YESNO
# 28 "data/maps/TestMapA_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestMapA_PC_NPC_Heal_2
# 33 "data/maps/TestMapA_PC/scripts.pory"
	msgbox TestMapA_PC_NPC_Heal_Text_2, MSGBOX_NPC
TestMapA_PC_NPC_Heal_1:
# 35 "data/maps/TestMapA_PC/scripts.pory"
	release
	end

TestMapA_PC_NPC_Heal_2:
# 29 "data/maps/TestMapA_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 30 "data/maps/TestMapA_PC/scripts.pory"
	special HealPlayerParty
# 31 "data/maps/TestMapA_PC/scripts.pory"
	msgbox TestMapA_PC_NPC_Heal_Text_1, MSGBOX_NPC
	goto TestMapA_PC_NPC_Heal_1


TestMapA_PC_NPC_Heal_Text_0:
# 27 "data/maps/TestMapA_PC/scripts.pory"
	.string "Would you like to heal your party?$"

TestMapA_PC_NPC_Heal_Text_1:
# 31 "data/maps/TestMapA_PC/scripts.pory"
	.string "Please come again.$"

TestMapA_PC_NPC_Heal_Text_2:
# 33 "data/maps/TestMapA_PC/scripts.pory"
	.string "Have a nice day.$"
