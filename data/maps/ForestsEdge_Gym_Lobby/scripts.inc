# 1 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"

# 2 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
ForestsEdge_Gym_Lobby_MapScripts::
# 3 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ForestsEdge_Gym_Lobby_OnFrame
# 4 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.byte 0
# 5 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"

# 6 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
ForestsEdge_Gym_Lobby_OnFrame:
# 7 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	map_script_2 GYM_STATE, 1, ForestsEdge_Gym_Lobby_EventScript_Win
# 8 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.2byte 0

ForestsEdge_Gym_Lobby_EventScript_Win::
# 13 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	setvar GYM_STATE, 0
# 14 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	lockall
# 15 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	delay 30
# 17 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_1, MSGBOX_AUTOCLOSE
# 19 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	giveitem ITEM_TM_TAUNT, 1
# 22 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_3, MSGBOX_AUTOCLOSE
# 23 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_4, MSGBOX_AUTOCLOSE
# 24 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP, 1
# 25 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_5, MSGBOX_AUTOCLOSE
# 26 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_6, MSGBOX_AUTOCLOSE
# 27 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_7
# 28 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	giveitem ITEM_FIRE_TERA_SHARD, 20
# 29 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	addvar VAR_FIRE_SHARDS, 20
# 30 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	giveitem ITEM_GRASS_TERA_SHARD, 20
# 31 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	addvar VAR_GRASS_SHARDS, 20
# 32 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Win_Text_8, MSGBOX_AUTOCLOSE
# 34 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	releaseall
	end


ForestsEdge_Gym_Lobby_TriggerOne::
# 42 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_set FLAG_BEAT_FORESTS_EDGE, ForestsEdge_Gym_Lobby_TriggerOne_2
# 45 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_FORESTS_EDGE_CHECKED_IN, ForestsEdge_Gym_Lobby_TriggerOne_3
ForestsEdge_Gym_Lobby_TriggerOne_1:
	end

ForestsEdge_Gym_Lobby_TriggerOne_2:
# 43 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	goto ForestsEdge_Gym_Lobby_TriggerOne_1

ForestsEdge_Gym_Lobby_TriggerOne_3:
# 47 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Movement_One
# 48 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	waitmovement 0
# 49 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto ForestsEdge_Gym_Lobby_EventScript_Rules
	goto ForestsEdge_Gym_Lobby_TriggerOne_1


ForestsEdge_Gym_Lobby_TriggerTwo::
# 55 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_set FLAG_BEAT_FORESTS_EDGE, ForestsEdge_Gym_Lobby_TriggerTwo_2
# 58 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_FORESTS_EDGE_CHECKED_IN, ForestsEdge_Gym_Lobby_TriggerTwo_3
ForestsEdge_Gym_Lobby_TriggerTwo_1:
	end

ForestsEdge_Gym_Lobby_TriggerTwo_2:
# 56 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	goto ForestsEdge_Gym_Lobby_TriggerTwo_1

ForestsEdge_Gym_Lobby_TriggerTwo_3:
# 60 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Movement_Two
# 61 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	waitmovement 0
# 62 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto ForestsEdge_Gym_Lobby_EventScript_Rules
	goto ForestsEdge_Gym_Lobby_TriggerTwo_1


ForestsEdge_Gym_Lobby_TriggerThree::
# 68 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_set FLAG_BEAT_FORESTS_EDGE, ForestsEdge_Gym_Lobby_TriggerThree_2
# 71 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_FORESTS_EDGE_CHECKED_IN, ForestsEdge_Gym_Lobby_TriggerThree_3
ForestsEdge_Gym_Lobby_TriggerThree_1:
	end

ForestsEdge_Gym_Lobby_TriggerThree_2:
# 69 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 70 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	goto ForestsEdge_Gym_Lobby_TriggerThree_1

ForestsEdge_Gym_Lobby_TriggerThree_3:
# 73 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Movement_Three
# 74 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	waitmovement 0
# 75 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto ForestsEdge_Gym_Lobby_EventScript_Rules
	goto ForestsEdge_Gym_Lobby_TriggerThree_1


ForestsEdge_Gym_Lobby_TriggerFour::
# 81 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_set FLAG_BEAT_FORESTS_EDGE, ForestsEdge_Gym_Lobby_TriggerFour_2
# 84 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_FORESTS_EDGE_CHECKED_IN, ForestsEdge_Gym_Lobby_TriggerFour_3
ForestsEdge_Gym_Lobby_TriggerFour_1:
	end

ForestsEdge_Gym_Lobby_TriggerFour_2:
# 82 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	goto ForestsEdge_Gym_Lobby_TriggerFour_1

ForestsEdge_Gym_Lobby_TriggerFour_3:
# 86 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Movement_Four
# 87 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	waitmovement 0
# 88 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto ForestsEdge_Gym_Lobby_EventScript_Rules
	goto ForestsEdge_Gym_Lobby_TriggerFour_1


ForestsEdge_Gym_Lobby_EventScript_Rules::
# 97 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	lockall
# 99 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_1, MSGBOX_AUTOCLOSE
# 101 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_2, MSGBOX_AUTOCLOSE
# 103 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Lobby_EventScript_Rules_3
ForestsEdge_Gym_Lobby_EventScript_Rules_1:
# 132 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_22, MSGBOX_YESNO
# 133 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ForestsEdge_Gym_Lobby_EventScript_Rules_7
ForestsEdge_Gym_Lobby_EventScript_Rules_6:
# 139 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	setflag FLAG_FORESTS_EDGE_CHECKED_IN
# 140 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_26, MSGBOX_AUTOCLOSE
# 141 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	releaseall
	end

ForestsEdge_Gym_Lobby_EventScript_Rules_2:
# 104 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_3, MSGBOX_YESNO
# 105 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ForestsEdge_Gym_Lobby_EventScript_Rules_9
	goto ForestsEdge_Gym_Lobby_EventScript_Rules_1

ForestsEdge_Gym_Lobby_EventScript_Rules_3:
# 103 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_lt ForestsEdge_Gym_Lobby_EventScript_Rules_2
	goto ForestsEdge_Gym_Lobby_EventScript_Rules_1

ForestsEdge_Gym_Lobby_EventScript_Rules_7:
# 134 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_23, MSGBOX_AUTOCLOSE
# 135 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_24, MSGBOX_AUTOCLOSE
# 136 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_25, MSGBOX_AUTOCLOSE
	goto ForestsEdge_Gym_Lobby_EventScript_Rules_6

ForestsEdge_Gym_Lobby_EventScript_Rules_9:
# 106 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_4, MSGBOX_AUTOCLOSE
# 107 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_5, MSGBOX_AUTOCLOSE
# 108 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_6, MSGBOX_AUTOCLOSE
# 109 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_7, MSGBOX_AUTOCLOSE
# 110 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_8, MSGBOX_AUTOCLOSE
# 112 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_9, MSGBOX_AUTOCLOSE
# 113 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_10, MSGBOX_AUTOCLOSE
# 114 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_11, MSGBOX_AUTOCLOSE
# 115 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_12, MSGBOX_AUTOCLOSE
# 117 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_13, MSGBOX_AUTOCLOSE
# 118 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_14, MSGBOX_AUTOCLOSE
# 119 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_15, MSGBOX_AUTOCLOSE
# 120 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_16, MSGBOX_AUTOCLOSE
# 122 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_17, MSGBOX_AUTOCLOSE
# 123 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_18, MSGBOX_AUTOCLOSE
# 124 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_19, MSGBOX_AUTOCLOSE
# 125 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_20, MSGBOX_AUTOCLOSE
# 126 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	msgbox ForestsEdge_Gym_Lobby_EventScript_Rules_Text_21, MSGBOX_AUTOCLOSE
# 128 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	setflag FLAG_GYM_RULES
	goto ForestsEdge_Gym_Lobby_EventScript_Rules_1


ForestsEdge_Gym_Lobby_EventScript_Win_Text_0:
# 17 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "RECEPTIONIST: Well done,\n{PLAYER}!$"

ForestsEdge_Gym_Lobby_EventScript_Win_Text_1:
# 18 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "You have successfully beaten the Forest's\nEdge Gym!$"

ForestsEdge_Gym_Lobby_EventScript_Win_Text_2:
# 19 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Here are your rewards...$"

ForestsEdge_Gym_Lobby_EventScript_Win_Text_3:
# 22 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "That's from Morwen. It contains Taunt.$"

ForestsEdge_Gym_Lobby_EventScript_Win_Text_4:
# 23 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "You can use it to avoid being put to\nsleep in the future.$"

ForestsEdge_Gym_Lobby_EventScript_Win_Text_5:
# 25 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "And that one is from Kaelen. It contains\nWill-o-Wisp.$"

ForestsEdge_Gym_Lobby_EventScript_Win_Text_6:
# 26 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Burning your opponent drops their attack too.$"

ForestsEdge_Gym_Lobby_EventScript_Win_Text_7:
# 27 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "And here are some tera shards from\neach leader.$"

ForestsEdge_Gym_Lobby_EventScript_Win_Text_8:
# 32 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Good luck with the rest of the gyms!$"

ForestsEdge_Gym_Lobby_TriggerOne_Text_0:
# 43 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "You have already beaten this gym.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_0:
# 99 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "RECEPTIONIST: Hello, challenger!$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_1:
# 100 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "What is your name?$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_2:
# 101 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "{PLAYER}? Ah yes, I see you in the\nsystem here.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_3:
# 104 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Would you like to hear the rules for the\ngym?$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_4:
# 106 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Great!$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_5:
# 107 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Gyms in Valora are different than other\nregions.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_6:
# 108 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "We use what we call 'split gyms' - two\ngyms leaders with different, often\pcontrasting styles in battle.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_7:
# 109 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "You will need to beat both gym leaders\nin order to receive a badge.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_8:
# 110 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "If you fail to beat either, you will\nneed to start over and battle both to\pget your badge.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_9:
# 112 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Additionally, our battles are all 4v4\ndouble battles.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_10:
# 113 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Each trainer can bring up to six POKEMON\nin their party, but they will need to\pchoose four to battle with.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_11:
# 114 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "You will get to see your opponent's six\nparty POKEMON before selecting the\pfour you will bring to battle.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_12:
# 115 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "You will select a new set of four prior\nto fighting the second leader.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_13:
# 117 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Once you are on the Battle Floor, you\nwill not be able to change your team.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_14:
# 118 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "However, your POKEMON will be healed\nbefore the second battle.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_15:
# 119 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "There's a computer to my left where you\ncan change your party.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_16:
# 120 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "I can give you some advice on what to\nexpect before you choose your team.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_17:
# 122 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Finally, we use a tiered system in\nValora for our gym battles.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_18:
# 123 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "You don't have any badges, so you will\nbe in Tier C.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_19:
# 124 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "This means the gym leaders will bring\ntheir weakest teams.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_20:
# 125 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "After receiving two badges, you'll move\nto Tier B.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_21:
# 126 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Five badges will put you in Tier A,\nand then 8 badges will put you in S Tier.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_22:
# 132 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Would you like information about the\ngym leaders?$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_23:
# 134 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "This gym is all about status conditions.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_24:
# 135 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Morwen will try to stop your team\nin their tracks.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_25:
# 136 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Kaelen, on the other hand, uses\nstatuses that harm your team.$"

ForestsEdge_Gym_Lobby_EventScript_Rules_Text_26:
# 140 "data/maps/ForestsEdge_Gym_Lobby/scripts.pory"
	.string "Good luck!$"
