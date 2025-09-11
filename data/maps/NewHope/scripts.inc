NewHope_MapScripts::
# 2 "data/maps/NewHope/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewHope_OnResume
	.byte 0


NewHope_OnResume::
# 7 "data/maps/NewHope/scripts.pory"
	goto_if_set FLAG_VGC_PENDING_RESTORE, NewHope_OnResume_2
NewHope_OnResume_1:
	end

NewHope_OnResume_2:
# 8 "data/maps/NewHope/scripts.pory"
	special Vgc_RestorePartyBackup
# 9 "data/maps/NewHope/scripts.pory"
	special HealPlayerParty
# 10 "data/maps/NewHope/scripts.pory"
	callnative UpdateFollowingPokemon
# 11 "data/maps/NewHope/scripts.pory"
	special Vgc_RestorePartyBackup
# 12 "data/maps/NewHope/scripts.pory"
	special WeightedSelector_Off
# 13 "data/maps/NewHope/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	goto NewHope_OnResume_1


NewHope_EventScript_WarpPV::
# 19 "data/maps/NewHope/scripts.pory"
	lockall
# 20 "data/maps/NewHope/scripts.pory"
	faceplayer
# 21 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_WarpPV_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/NewHope/scripts.pory"
	releaseall
	end


NewHope_EventScript_Villager1::
# 27 "data/maps/NewHope/scripts.pory"
	lockall
# 28 "data/maps/NewHope/scripts.pory"
	faceplayer
# 29 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_TM45
# 31 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_0, MSGBOX_YESNO
# 32 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_2
NewHope_EventScript_Villager1_1:
# 36 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_1, MSGBOX_YESNO
# 37 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_5
NewHope_EventScript_Villager1_4:
# 42 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_2, MSGBOX_YESNO
# 43 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_8
NewHope_EventScript_Villager1_7:
# 63 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_8, MSGBOX_YESNO
# 64 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_11
NewHope_EventScript_Villager1_10:
# 70 "data/maps/NewHope/scripts.pory"
	releaseall
	end

NewHope_EventScript_Villager1_2:
# 33 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
	goto NewHope_EventScript_Villager1_1

NewHope_EventScript_Villager1_5:
# 38 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 5
# 39 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 5
	goto NewHope_EventScript_Villager1_4

NewHope_EventScript_Villager1_8:
# 44 "data/maps/NewHope/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_EventScript_Villager1_14
# 47 "data/maps/NewHope/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_eq NewHope_EventScript_Villager1_15
# 51 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_5, MSGBOX_AUTOCLOSE
NewHope_EventScript_Villager1_13:
# 54 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq NewHope_EventScript_Villager1_19
# 57 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 29
	goto_if_eq NewHope_EventScript_Villager1_20
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_11:
# 65 "data/maps/NewHope/scripts.pory"
	setvar VAR_BADGES, 0
# 66 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 67 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_9, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_10

NewHope_EventScript_Villager1_14:
# 45 "data/maps/NewHope/scripts.pory"
	setvar VAR_BADGES, 1
# 46 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_3, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_13

NewHope_EventScript_Villager1_15:
# 48 "data/maps/NewHope/scripts.pory"
	setvar VAR_BADGES, 2
# 49 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_4, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_13

NewHope_EventScript_Villager1_19:
# 55 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 56 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_6, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_20:
# 58 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 59 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_7, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7


NewHope_Trigger_BlockPath::
# 75 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_11
NewHope_Trigger_BlockPath_6:
# 82 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_5
NewHope_Trigger_BlockPath_4:
# 89 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_3
	return

NewHope_Trigger_BlockPath_1:
# 76 "data/maps/NewHope/scripts.pory"
	lockall
# 77 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_0
# 78 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 79 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 80 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_2:
# 83 "data/maps/NewHope/scripts.pory"
	lockall
# 84 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_1
# 85 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 86 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 87 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_3:
# 90 "data/maps/NewHope/scripts.pory"
	lockall
# 91 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_2
# 92 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 93 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 94 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_5:
# 82 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_7
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_7:
# 82 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_2
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_10:
# 75 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_1
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_11:
# 75 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_13
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_13:
# 75 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_10
	goto NewHope_Trigger_BlockPath_6


# 98 "data/maps/NewHope/scripts.pory"
StopPlayer_Up:
# 99 "data/maps/NewHope/scripts.pory"
	walk_up
	step_end

NewHope_EventScript_WarpPV_Text_0:
# 21 "data/maps/NewHope/scripts.pory"
	.string "This is the warp to Port Valor$"

NewHope_EventScript_Villager1_Text_0:
# 31 "data/maps/NewHope/scripts.pory"
	.string "Would you like rare candies?$"

NewHope_EventScript_Villager1_Text_1:
# 36 "data/maps/NewHope/scripts.pory"
	.string "Ability items?$"

NewHope_EventScript_Villager1_Text_2:
# 42 "data/maps/NewHope/scripts.pory"
	.string "Would you like a badge?$"

NewHope_EventScript_Villager1_Text_3:
# 46 "data/maps/NewHope/scripts.pory"
	.string "1st badge acquired$"

NewHope_EventScript_Villager1_Text_4:
# 49 "data/maps/NewHope/scripts.pory"
	.string "2nd badge acquired$"

NewHope_EventScript_Villager1_Text_5:
# 51 "data/maps/NewHope/scripts.pory"
	.string "Max badges reached$"

NewHope_EventScript_Villager1_Text_6:
# 56 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 29$"

NewHope_EventScript_Villager1_Text_7:
# 59 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 41$"

NewHope_EventScript_Villager1_Text_8:
# 63 "data/maps/NewHope/scripts.pory"
	.string "Reset badges?$"

NewHope_EventScript_Villager1_Text_9:
# 67 "data/maps/NewHope/scripts.pory"
	.string "Badges and lvl cap reset$"

NewHope_Trigger_BlockPath_Text_0:
# 77 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon and to register with\nthe League office.$"

NewHope_Trigger_BlockPath_Text_1:
# 84 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon first.$"

NewHope_Trigger_BlockPath_Text_2:
# 91 "data/maps/NewHope/scripts.pory"
	.string "You need to register with the league\nfirst.$"
