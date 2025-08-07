# 1 "data/maps/TestMapA/scripts.pory"

# 2 "data/maps/TestMapA/scripts.pory"
TestMapA_MapScripts::
# 3 "data/maps/TestMapA/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, TestMapA_OnTransition
# 4 "data/maps/TestMapA/scripts.pory"

# 5 "data/maps/TestMapA/scripts.pory"
TestMapA_OnTransition:
# 6 "data/maps/TestMapA/scripts.pory"
    call_if_unset FLAG_UNUSED_0x04C, TestMapA_EventScript_SetupTestBattle

TestMapA_EventScript_SetupTestBattle::
# 11 "data/maps/TestMapA/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04F, TestMapA_EventScript_SetupTestBattle_3
TestMapA_EventScript_SetupTestBattle_2:
# 16 "data/maps/TestMapA/scripts.pory"
	compare TESTMAPA_STATE, 0
	goto_if_eq TestMapA_EventScript_SetupTestBattle_8
	return

TestMapA_EventScript_SetupTestBattle_1:
# 12 "data/maps/TestMapA/scripts.pory"
	setflag FLAG_UNUSED_0x04C
# 13 "data/maps/TestMapA/scripts.pory"
	setvar TESTMAPA_STATE, 0
	return

TestMapA_EventScript_SetupTestBattle_3:
# 11 "data/maps/TestMapA/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04E, TestMapA_EventScript_SetupTestBattle_5
	goto TestMapA_EventScript_SetupTestBattle_2

TestMapA_EventScript_SetupTestBattle_5:
# 11 "data/maps/TestMapA/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04D, TestMapA_EventScript_SetupTestBattle_1
	goto TestMapA_EventScript_SetupTestBattle_2

TestMapA_EventScript_SetupTestBattle_8:
# 17 "data/maps/TestMapA/scripts.pory"
	clearflag FLAG_UNUSED_0x04C
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
	setflag FLAG_UNUSED_0x04C
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

May_Intro::
# 47 "data/maps/TestMapA/scripts.pory"
	.string "You'll never win!$"

May_Outro::
# 51 "data/maps/TestMapA/scripts.pory"
	.string "Okay, you won$"

PostBattle_May::
# 55 "data/maps/TestMapA/scripts.pory"
	.string "I'll win next time$"
