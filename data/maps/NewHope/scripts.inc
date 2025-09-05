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
	clearflag FLAG_VGC_PENDING_RESTORE
	goto NewHope_OnResume_1


NewHope_EventScript_Villager1::
# 18 "data/maps/NewHope/scripts.pory"
	lockall
# 19 "data/maps/NewHope/scripts.pory"
	faceplayer
# 21 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_0, MSGBOX_YESNO
# 22 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_2
NewHope_EventScript_Villager1_1:
# 26 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_1, MSGBOX_YESNO
# 27 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_5
NewHope_EventScript_Villager1_4:
# 32 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_2, MSGBOX_YESNO
# 33 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_8
NewHope_EventScript_Villager1_7:
# 53 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_8, MSGBOX_YESNO
# 54 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_11
NewHope_EventScript_Villager1_10:
# 60 "data/maps/NewHope/scripts.pory"
	releaseall
	end

NewHope_EventScript_Villager1_2:
# 23 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
	goto NewHope_EventScript_Villager1_1

NewHope_EventScript_Villager1_5:
# 28 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 5
# 29 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 5
	goto NewHope_EventScript_Villager1_4

NewHope_EventScript_Villager1_8:
# 34 "data/maps/NewHope/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_EventScript_Villager1_14
# 37 "data/maps/NewHope/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_eq NewHope_EventScript_Villager1_15
# 41 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_5, MSGBOX_AUTOCLOSE
NewHope_EventScript_Villager1_13:
# 44 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq NewHope_EventScript_Villager1_19
# 47 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 29
	goto_if_eq NewHope_EventScript_Villager1_20
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_11:
# 55 "data/maps/NewHope/scripts.pory"
	setvar VAR_BADGES, 0
# 56 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 57 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_9, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_10

NewHope_EventScript_Villager1_14:
# 35 "data/maps/NewHope/scripts.pory"
	setvar VAR_BADGES, 1
# 36 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_3, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_13

NewHope_EventScript_Villager1_15:
# 38 "data/maps/NewHope/scripts.pory"
	setvar VAR_BADGES, 2
# 39 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_4, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_13

NewHope_EventScript_Villager1_19:
# 45 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 46 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_6, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_20:
# 48 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 49 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_7, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7


NewHope_Trigger_BlockPath::
# 65 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_11
NewHope_Trigger_BlockPath_6:
# 72 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_5
NewHope_Trigger_BlockPath_4:
# 79 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_3
	return

NewHope_Trigger_BlockPath_1:
# 66 "data/maps/NewHope/scripts.pory"
	lockall
# 67 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_0
# 68 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 69 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 70 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_2:
# 73 "data/maps/NewHope/scripts.pory"
	lockall
# 74 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_1
# 75 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 76 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 77 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_3:
# 80 "data/maps/NewHope/scripts.pory"
	lockall
# 81 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_2
# 82 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 83 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 84 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_5:
# 72 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_7
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_7:
# 72 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_2
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_10:
# 65 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_1
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_11:
# 65 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_13
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_13:
# 65 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_10
	goto NewHope_Trigger_BlockPath_6


# 88 "data/maps/NewHope/scripts.pory"
StopPlayer_Up:
# 89 "data/maps/NewHope/scripts.pory"
	walk_up
	step_end

NewHope_EventScript_Villager1_Text_0:
# 21 "data/maps/NewHope/scripts.pory"
	.string "Would you like rare candies?$"

NewHope_EventScript_Villager1_Text_1:
# 26 "data/maps/NewHope/scripts.pory"
	.string "Ability items?$"

NewHope_EventScript_Villager1_Text_2:
# 32 "data/maps/NewHope/scripts.pory"
	.string "Would you like a badge?$"

NewHope_EventScript_Villager1_Text_3:
# 36 "data/maps/NewHope/scripts.pory"
	.string "1st badge acquired$"

NewHope_EventScript_Villager1_Text_4:
# 39 "data/maps/NewHope/scripts.pory"
	.string "2nd badge acquired$"

NewHope_EventScript_Villager1_Text_5:
# 41 "data/maps/NewHope/scripts.pory"
	.string "Max badges reached$"

NewHope_EventScript_Villager1_Text_6:
# 46 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 29$"

NewHope_EventScript_Villager1_Text_7:
# 49 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 41$"

NewHope_EventScript_Villager1_Text_8:
# 53 "data/maps/NewHope/scripts.pory"
	.string "Reset badges?$"

NewHope_EventScript_Villager1_Text_9:
# 57 "data/maps/NewHope/scripts.pory"
	.string "Badges and lvl cap reset$"

NewHope_Trigger_BlockPath_Text_0:
# 67 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon and to register with\nthe League office.$"

NewHope_Trigger_BlockPath_Text_1:
# 74 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon first.$"

NewHope_Trigger_BlockPath_Text_2:
# 81 "data/maps/NewHope/scripts.pory"
	.string "You need to register with the league\nfirst.$"
