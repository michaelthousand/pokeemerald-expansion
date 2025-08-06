TestMapA_MapScripts::
	.byte 0


TestMapA_EventScript_SetupTestBattle::
# 5 "data/maps/TestMapA/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04F, TestMapA_EventScript_SetupTestBattle_3
TestMapA_EventScript_SetupTestBattle_2:
# 9 "data/maps/TestMapA/scripts.pory"
	clearflag FLAG_UNUSED_0x04C
	return

TestMapA_EventScript_SetupTestBattle_1:
# 6 "data/maps/TestMapA/scripts.pory"
	setflag FLAG_UNUSED_0x04C
	return

TestMapA_EventScript_SetupTestBattle_3:
# 5 "data/maps/TestMapA/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04E, TestMapA_EventScript_SetupTestBattle_5
	goto TestMapA_EventScript_SetupTestBattle_2

TestMapA_EventScript_SetupTestBattle_5:
# 5 "data/maps/TestMapA/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04D, TestMapA_EventScript_SetupTestBattle_1
	goto TestMapA_EventScript_SetupTestBattle_2


TestMapA_EventScript_MayTestBattle::
# 16 "data/maps/TestMapA/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, May_Intro, May_Outro
# 17 "data/maps/TestMapA/scripts.pory"
	msgbox PostBattle_May, MSGBOX_AUTOCLOSE
# 18 "data/maps/TestMapA/scripts.pory"
	waitmessage
	end


May_Intro::
# 22 "data/maps/TestMapA/scripts.pory"
	.string "You'll never win!$"

May_Outro::
# 26 "data/maps/TestMapA/scripts.pory"
	.string "Okay, you won$"

PostBattle_May::
# 30 "data/maps/TestMapA/scripts.pory"
	.string "I'll win next time$"
