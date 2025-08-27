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


TestMapA_EventScript_MayTestBattle::
# 25 "data/maps/TestMapA/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, May_Intro, May_Outro, MayBattleOver
# 26 "data/maps/TestMapA/scripts.pory"
	msgbox PostBattle_May, MSGBOX_AUTOCLOSE
# 27 "data/maps/TestMapA/scripts.pory"
	waitmessage
	end


MayBattleOver::
# 32 "data/maps/TestMapA/scripts.pory"
	lockall
# 33 "data/maps/TestMapA/scripts.pory"
	applymovement 1, MayLeave
# 34 "data/maps/TestMapA/scripts.pory"
	waitmovement 0
# 35 "data/maps/TestMapA/scripts.pory"
	removeobject 1
# 36 "data/maps/TestMapA/scripts.pory"
	setflag TALKED_TO_CINDER
# 37 "data/maps/TestMapA/scripts.pory"
	setvar TESTMAPA_STATE, 1
# 38 "data/maps/TestMapA/scripts.pory"
	waitmessage
# 39 "data/maps/TestMapA/scripts.pory"
	releaseall
	return


# 42 "data/maps/TestMapA/scripts.pory"
MayLeave:
# 43 "data/maps/TestMapA/scripts.pory"
	walk_down
# 44 "data/maps/TestMapA/scripts.pory"
	walk_left
# 44 "data/maps/TestMapA/scripts.pory"
	walk_left
# 44 "data/maps/TestMapA/scripts.pory"
	walk_left
# 44 "data/maps/TestMapA/scripts.pory"
	walk_left
# 44 "data/maps/TestMapA/scripts.pory"
	walk_left
# 44 "data/maps/TestMapA/scripts.pory"
	walk_left
# 44 "data/maps/TestMapA/scripts.pory"
	walk_left
	step_end

TestMapA_EventScript_Kyogre::
# 61 "data/maps/TestMapA/scripts.pory"
	lockall
# 62 "data/maps/TestMapA/scripts.pory"
	setflag FLAG_UNUSED_0x04A
# 63 "data/maps/TestMapA/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 64 "data/maps/TestMapA/scripts.pory"
	delay 40
# 65 "data/maps/TestMapA/scripts.pory"
	waitmoncry
# 66 "data/maps/TestMapA/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 15, ITEM_BLUE_ORB
# 67 "data/maps/TestMapA/scripts.pory"
	dowildbattle
# 68 "data/maps/TestMapA/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 69 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq TestMapA_EventScript_Kyogre_2
# 72 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq TestMapA_EventScript_Kyogre_3
# 75 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq TestMapA_EventScript_Kyogre_4
# 78 "data/maps/TestMapA/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq TestMapA_EventScript_Kyogre_5
TestMapA_EventScript_Kyogre_1:
# 81 "data/maps/TestMapA/scripts.pory"
	waitmessage
# 82 "data/maps/TestMapA/scripts.pory"
	releaseall
	return

TestMapA_EventScript_Kyogre_2:
# 70 "data/maps/TestMapA/scripts.pory"
	call Won_or_Caught
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_3:
# 73 "data/maps/TestMapA/scripts.pory"
	call Won_or_Caught
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_4:
# 76 "data/maps/TestMapA/scripts.pory"
	call RanAway
	goto TestMapA_EventScript_Kyogre_1

TestMapA_EventScript_Kyogre_5:
# 79 "data/maps/TestMapA/scripts.pory"
	call RanAway
	goto TestMapA_EventScript_Kyogre_1


Won_or_Caught::
# 86 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data/maps/TestMapA/scripts.pory"
	removeobject 2
# 88 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 89 "data/maps/TestMapA/scripts.pory"
	msgbox Won_or_Caught_Text_0
	return


RanAway::
# 94 "data/maps/TestMapA/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 95 "data/maps/TestMapA/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 96 "data/maps/TestMapA/scripts.pory"
	delay 20
# 97 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/TestMapA/scripts.pory"
	removeobject 2
# 99 "data/maps/TestMapA/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 100 "data/maps/TestMapA/scripts.pory"
	msgbox RanAway_Text_1
	return


TestMapA_Trigger_BlockPath::
# 106 "data/maps/TestMapA/scripts.pory"
	lockall
# 107 "data/maps/TestMapA/scripts.pory"
	msgbox TestMapA_Trigger_BlockPath_Text_0
# 108 "data/maps/TestMapA/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 109 "data/maps/TestMapA/scripts.pory"
	waitmovement 0
# 110 "data/maps/TestMapA/scripts.pory"
	releaseall
	return


# 113 "data/maps/TestMapA/scripts.pory"
StopPlayer:
# 114 "data/maps/TestMapA/scripts.pory"
	walk_down
	step_end

Won_or_Caught_Text_0:
# 89 "data/maps/TestMapA/scripts.pory"
	.string "You are the Pokemon Master$"

RanAway_Text_0:
# 95 "data/maps/TestMapA/scripts.pory"
	.string "Kyuhh...$"

RanAway_Text_1:
# 100 "data/maps/TestMapA/scripts.pory"
	.string "You are not the Pokemon Master$"

TestMapA_Trigger_BlockPath_Text_0:
# 107 "data/maps/TestMapA/scripts.pory"
	.string "You don't have a Pokemon yet$"

May_Intro::
# 47 "data/maps/TestMapA/scripts.pory"
	.string "You'll never win!$"

May_Outro::
# 51 "data/maps/TestMapA/scripts.pory"
	.string "Okay, you won$"

PostBattle_May::
# 55 "data/maps/TestMapA/scripts.pory"
	.string "I'll win next time$"
