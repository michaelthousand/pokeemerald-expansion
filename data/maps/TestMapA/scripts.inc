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
# 11 "data/maps/TestMapA/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, TestMapA_EventScript_SetupTestBattle_3
TestMapA_EventScript_SetupTestBattle_2:
# 16 "data/maps/TestMapA/scripts.pory"
	compare TESTMAPA_STATE, 0
	goto_if_eq TestMapA_EventScript_SetupTestBattle_8
	return

TestMapA_EventScript_SetupTestBattle_1:
# 12 "data/maps/TestMapA/scripts.pory"
	setflag TALKED_TO_CINDER
# 13 "data/maps/TestMapA/scripts.pory"
	setvar TESTMAPA_STATE, 0
	return

TestMapA_EventScript_SetupTestBattle_3:
# 11 "data/maps/TestMapA/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, TestMapA_EventScript_SetupTestBattle_5
	goto TestMapA_EventScript_SetupTestBattle_2

TestMapA_EventScript_SetupTestBattle_5:
# 11 "data/maps/TestMapA/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, TestMapA_EventScript_SetupTestBattle_1
	goto TestMapA_EventScript_SetupTestBattle_2

TestMapA_EventScript_SetupTestBattle_8:
# 17 "data/maps/TestMapA/scripts.pory"
	clearflag TALKED_TO_CINDER
	return


MayBattleOver::
# 23 "data/maps/TestMapA/scripts.pory"
	lockall
# 24 "data/maps/TestMapA/scripts.pory"
	applymovement 1, MayLeave
# 25 "data/maps/TestMapA/scripts.pory"
	waitmovement 0
# 26 "data/maps/TestMapA/scripts.pory"
	removeobject 1
# 27 "data/maps/TestMapA/scripts.pory"
	setflag TALKED_TO_CINDER
# 28 "data/maps/TestMapA/scripts.pory"
	setvar TESTMAPA_STATE, 1
# 29 "data/maps/TestMapA/scripts.pory"
	waitmessage
# 30 "data/maps/TestMapA/scripts.pory"
	releaseall
	return


# 33 "data/maps/TestMapA/scripts.pory"
MayLeave:
# 34 "data/maps/TestMapA/scripts.pory"
	walk_down
# 35 "data/maps/TestMapA/scripts.pory"
	walk_left
# 35 "data/maps/TestMapA/scripts.pory"
	walk_left
# 35 "data/maps/TestMapA/scripts.pory"
	walk_left
# 35 "data/maps/TestMapA/scripts.pory"
	walk_left
# 35 "data/maps/TestMapA/scripts.pory"
	walk_left
# 35 "data/maps/TestMapA/scripts.pory"
	walk_left
# 35 "data/maps/TestMapA/scripts.pory"
	walk_left
	step_end

TestMapA_EventScript_Kyogre::
# 52 "data/maps/TestMapA/scripts.pory"
	lockall
# 53 "data/maps/TestMapA/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 54 "data/maps/TestMapA/scripts.pory"
	delay 40
# 55 "data/maps/TestMapA/scripts.pory"
	waitmoncry
# 56 "data/maps/TestMapA/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 15, ITEM_BLUE_ORB
# 57 "data/maps/TestMapA/scripts.pory"
	dowildbattle
# 58 "data/maps/TestMapA/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 59 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq TestMapA_EventScript_Kyogre_2
# 62 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq TestMapA_EventScript_Kyogre_3
# 65 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq TestMapA_EventScript_Kyogre_4
# 68 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq TestMapA_EventScript_Kyogre_5
TestMapA_EventScript_Kyogre_1:
# 71 "data/maps/TestMapA/scripts.pory"
	waitmessage
# 72 "data/maps/TestMapA/scripts.pory"
	releaseall
	return

TestMapA_EventScript_Kyogre_2:
# 60 "data/maps/TestMapA/scripts.pory"
	call Won_or_Caught
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_3:
# 63 "data/maps/TestMapA/scripts.pory"
	call Won_or_Caught
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_4:
# 66 "data/maps/TestMapA/scripts.pory"
	call RanAway
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_5:
# 69 "data/maps/TestMapA/scripts.pory"
	call RanAway
	goto TestMapA_EventScript_Kyogre_1


Won_or_Caught::
# 76 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/TestMapA/scripts.pory"
	removeobject 2
# 78 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 79 "data/maps/TestMapA/scripts.pory"
	msgbox Won_or_Caught_Text_0
	return


RanAway::
# 84 "data/maps/TestMapA/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 85 "data/maps/TestMapA/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 86 "data/maps/TestMapA/scripts.pory"
	delay 20
# 87 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/TestMapA/scripts.pory"
	removeobject 2
# 89 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 90 "data/maps/TestMapA/scripts.pory"
	msgbox RanAway_Text_1
	return


TestMapA_Trigger_BlockPath::
# 96 "data/maps/TestMapA/scripts.pory"
	lockall
# 97 "data/maps/TestMapA/scripts.pory"
	msgbox TestMapA_Trigger_BlockPath_Text_0
# 98 "data/maps/TestMapA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 99 "data/maps/TestMapA/scripts.pory"
	waitmovement 0
# 100 "data/maps/TestMapA/scripts.pory"
	releaseall
	return


# 103 "data/maps/TestMapA/scripts.pory"
StopPlayer:
# 104 "data/maps/TestMapA/scripts.pory"
	walk_down
	step_end

Won_or_Caught_Text_0:
# 79 "data/maps/TestMapA/scripts.pory"
	.string "You are the Pokemon Master$"

RanAway_Text_0:
# 85 "data/maps/TestMapA/scripts.pory"
	.string "Kyuhh...$"

RanAway_Text_1:
# 90 "data/maps/TestMapA/scripts.pory"
	.string "You are not the Pokemon Master$"

TestMapA_Trigger_BlockPath_Text_0:
# 97 "data/maps/TestMapA/scripts.pory"
	.string "You don't have a Pokemon yet$"

May_Intro::
# 38 "data/maps/TestMapA/scripts.pory"
	.string "You'll never win!$"

May_Outro::
# 42 "data/maps/TestMapA/scripts.pory"
	.string "Okay, you won$"

PostBattle_May::
# 46 "data/maps/TestMapA/scripts.pory"
	.string "I'll win next time$"
