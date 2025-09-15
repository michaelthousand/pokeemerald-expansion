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
# 80 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_14, MSGBOX_YESNO
# 81 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_11
NewHope_EventScript_Villager1_10:
# 87 "data/maps/NewHope/scripts.pory"
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
	compare VAR_BADGES, 8
	goto_if_lt NewHope_EventScript_Villager1_14
# 48 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_4, MSGBOX_AUTOCLOSE
NewHope_EventScript_Villager1_13:
# 51 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq NewHope_EventScript_Villager1_17
# 54 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 29
	goto_if_eq NewHope_EventScript_Villager1_18
# 57 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 41
	goto_if_eq NewHope_EventScript_Villager1_19
# 60 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 49
	goto_if_eq NewHope_EventScript_Villager1_20
# 63 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 56
	goto_if_eq NewHope_EventScript_Villager1_21
# 66 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 64
	goto_if_eq NewHope_EventScript_Villager1_22
# 69 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 71
	goto_if_eq NewHope_EventScript_Villager1_23
# 72 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 78
	goto_if_eq NewHope_EventScript_Villager1_24
# 76 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_13, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_11:
# 82 "data/maps/NewHope/scripts.pory"
	setvar VAR_BADGES, 0
# 83 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 84 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_15, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_10

NewHope_EventScript_Villager1_14:
# 45 "data/maps/NewHope/scripts.pory"
	addvar VAR_BADGES, 1
# 46 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_3, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_13

NewHope_EventScript_Villager1_17:
# 52 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 53 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_5, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_18:
# 55 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 56 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_6, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_19:
# 58 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 59 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_7, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_20:
# 61 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 62 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_8, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_21:
# 64 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 64
# 65 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_9, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_22:
# 67 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 68 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_10, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_23:
# 70 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 71 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_11, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_24:
# 73 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 74 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_12, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7


NewHope_Trigger_BlockPath::
# 92 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_11
NewHope_Trigger_BlockPath_6:
# 99 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_5
NewHope_Trigger_BlockPath_4:
# 106 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_3
	return

NewHope_Trigger_BlockPath_1:
# 93 "data/maps/NewHope/scripts.pory"
	lockall
# 94 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_0
# 95 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 96 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 97 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_2:
# 100 "data/maps/NewHope/scripts.pory"
	lockall
# 101 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_1
# 102 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 103 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 104 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_3:
# 107 "data/maps/NewHope/scripts.pory"
	lockall
# 108 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_2
# 109 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 110 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 111 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_5:
# 99 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_7
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_7:
# 99 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_2
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_10:
# 92 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_1
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_11:
# 92 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_13
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_13:
# 92 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_10
	goto NewHope_Trigger_BlockPath_6


# 115 "data/maps/NewHope/scripts.pory"
StopPlayer_Up:
# 116 "data/maps/NewHope/scripts.pory"
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
	.string "Badge acquired$"

NewHope_EventScript_Villager1_Text_4:
# 48 "data/maps/NewHope/scripts.pory"
	.string "Max badges reached$"

NewHope_EventScript_Villager1_Text_5:
# 53 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 29$"

NewHope_EventScript_Villager1_Text_6:
# 56 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 41$"

NewHope_EventScript_Villager1_Text_7:
# 59 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 49$"

NewHope_EventScript_Villager1_Text_8:
# 62 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 56$"

NewHope_EventScript_Villager1_Text_9:
# 65 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 64$"

NewHope_EventScript_Villager1_Text_10:
# 68 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 71$"

NewHope_EventScript_Villager1_Text_11:
# 71 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 78$"

NewHope_EventScript_Villager1_Text_12:
# 74 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 85$"

NewHope_EventScript_Villager1_Text_13:
# 76 "data/maps/NewHope/scripts.pory"
	.string "Max level cap reached.$"

NewHope_EventScript_Villager1_Text_14:
# 80 "data/maps/NewHope/scripts.pory"
	.string "Reset badges?$"

NewHope_EventScript_Villager1_Text_15:
# 84 "data/maps/NewHope/scripts.pory"
	.string "Badges and lvl cap reset$"

NewHope_Trigger_BlockPath_Text_0:
# 94 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon and to register with\nthe League office.$"

NewHope_Trigger_BlockPath_Text_1:
# 101 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon first.$"

NewHope_Trigger_BlockPath_Text_2:
# 108 "data/maps/NewHope/scripts.pory"
	.string "You need to register with the league\nfirst.$"
