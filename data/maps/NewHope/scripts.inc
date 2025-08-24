NewHope_MapScripts::
	.byte 0


NewHope_Trigger_BlockPath::
# 4 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_11
NewHope_Trigger_BlockPath_6:
# 11 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_5
NewHope_Trigger_BlockPath_4:
# 18 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_3
	return

NewHope_Trigger_BlockPath_1:
# 5 "data/maps/NewHope/scripts.pory"
	lockall
# 6 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_0
# 7 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 8 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 9 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_2:
# 12 "data/maps/NewHope/scripts.pory"
	lockall
# 13 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_1
# 14 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 15 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 16 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_3:
# 19 "data/maps/NewHope/scripts.pory"
	lockall
# 20 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_2
# 21 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 22 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 23 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_5:
# 11 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_7
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_7:
# 11 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_2
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_10:
# 4 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_1
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_11:
# 4 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_13
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_13:
# 4 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_10
	goto NewHope_Trigger_BlockPath_6


# 27 "data/maps/NewHope/scripts.pory"
StopPlayer_Up:
# 28 "data/maps/NewHope/scripts.pory"
	walk_up
	step_end

NewHope_Trigger_BlockPath_Text_0:
# 6 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon and to register with\nthe League office.$"

NewHope_Trigger_BlockPath_Text_1:
# 13 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon first.$"

NewHope_Trigger_BlockPath_Text_2:
# 20 "data/maps/NewHope/scripts.pory"
	.string "You need to register with the league\nfirst.$"
