# 1 "data/maps/TestMapA/scripts.pory"

# 2 "data/maps/TestMapA/scripts.pory"
TestMapA_MapScripts::
# 3 "data/maps/TestMapA/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, TestMapA_OnTransition
# 4 "data/maps/TestMapA/scripts.pory"

# 5 "data/maps/TestMapA/scripts.pory"
TestMapA_OnTransition:
# 6 "data/maps/TestMapA/scripts.pory"
    call_if_unset TALKED_TO_CINDER, TestMapA_EventScript_SetupTestBattle

TestMapA_EventScript_SetupTestBattle::
	return


MayBattleOver::
# 15 "data/maps/TestMapA/scripts.pory"
	lockall
# 16 "data/maps/TestMapA/scripts.pory"
	applymovement 1, MayLeave
# 17 "data/maps/TestMapA/scripts.pory"
	waitmovement 0
# 18 "data/maps/TestMapA/scripts.pory"
	removeobject 1
# 19 "data/maps/TestMapA/scripts.pory"
	setflag TALKED_TO_CINDER
# 20 "data/maps/TestMapA/scripts.pory"
	waitmessage
# 21 "data/maps/TestMapA/scripts.pory"
	releaseall
	return


# 24 "data/maps/TestMapA/scripts.pory"
MayLeave:
# 25 "data/maps/TestMapA/scripts.pory"
	walk_down
# 26 "data/maps/TestMapA/scripts.pory"
	walk_left
# 26 "data/maps/TestMapA/scripts.pory"
	walk_left
# 26 "data/maps/TestMapA/scripts.pory"
	walk_left
# 26 "data/maps/TestMapA/scripts.pory"
	walk_left
# 26 "data/maps/TestMapA/scripts.pory"
	walk_left
# 26 "data/maps/TestMapA/scripts.pory"
	walk_left
# 26 "data/maps/TestMapA/scripts.pory"
	walk_left
	step_end

TestMapA_EventScript_Kyogre::
# 43 "data/maps/TestMapA/scripts.pory"
	lockall
# 44 "data/maps/TestMapA/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 45 "data/maps/TestMapA/scripts.pory"
	delay 40
# 46 "data/maps/TestMapA/scripts.pory"
	waitmoncry
# 47 "data/maps/TestMapA/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 15, ITEM_BLUE_ORB
# 48 "data/maps/TestMapA/scripts.pory"
	dowildbattle
# 49 "data/maps/TestMapA/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq TestMapA_EventScript_Kyogre_2
# 53 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq TestMapA_EventScript_Kyogre_3
# 56 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq TestMapA_EventScript_Kyogre_4
# 59 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq TestMapA_EventScript_Kyogre_5
TestMapA_EventScript_Kyogre_1:
# 62 "data/maps/TestMapA/scripts.pory"
	waitmessage
# 63 "data/maps/TestMapA/scripts.pory"
	releaseall
	return

TestMapA_EventScript_Kyogre_2:
# 51 "data/maps/TestMapA/scripts.pory"
	call Won_or_Caught
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_3:
# 54 "data/maps/TestMapA/scripts.pory"
	call Won_or_Caught
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_4:
# 57 "data/maps/TestMapA/scripts.pory"
	call RanAway
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_5:
# 60 "data/maps/TestMapA/scripts.pory"
	call RanAway
	goto TestMapA_EventScript_Kyogre_1


Won_or_Caught::
# 67 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/TestMapA/scripts.pory"
	removeobject 2
# 69 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data/maps/TestMapA/scripts.pory"
	msgbox Won_or_Caught_Text_0
	return


RanAway::
# 75 "data/maps/TestMapA/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 76 "data/maps/TestMapA/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 77 "data/maps/TestMapA/scripts.pory"
	delay 20
# 78 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/TestMapA/scripts.pory"
	removeobject 2
# 80 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 81 "data/maps/TestMapA/scripts.pory"
	msgbox RanAway_Text_1
	return


TestMapA_Trigger_BlockPath::
# 87 "data/maps/TestMapA/scripts.pory"
	lockall
# 88 "data/maps/TestMapA/scripts.pory"
	msgbox TestMapA_Trigger_BlockPath_Text_0
# 89 "data/maps/TestMapA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 90 "data/maps/TestMapA/scripts.pory"
	waitmovement 0
# 91 "data/maps/TestMapA/scripts.pory"
	releaseall
	return


Won_or_Caught_Text_0:
# 70 "data/maps/TestMapA/scripts.pory"
	.string "You are the Pokemon Master$"

RanAway_Text_0:
# 76 "data/maps/TestMapA/scripts.pory"
	.string "Kyuhh...$"

RanAway_Text_1:
# 81 "data/maps/TestMapA/scripts.pory"
	.string "You are not the Pokemon Master$"

TestMapA_Trigger_BlockPath_Text_0:
# 88 "data/maps/TestMapA/scripts.pory"
	.string "You don't have a Pokemon yet$"

May_Intro::
# 29 "data/maps/TestMapA/scripts.pory"
	.string "You'll never win!$"

May_Outro::
# 33 "data/maps/TestMapA/scripts.pory"
	.string "Okay, you won$"

PostBattle_May::
# 37 "data/maps/TestMapA/scripts.pory"
	.string "I'll win next time$"
