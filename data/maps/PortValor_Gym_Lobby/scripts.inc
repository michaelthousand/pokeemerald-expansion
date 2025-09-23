# 1 "data/maps/PortValor_Gym_Lobby/scripts.pory"

# 2 "data/maps/PortValor_Gym_Lobby/scripts.pory"
PortValor_Gym_Lobby_MapScripts::
# 3 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PortValor_Gym_Lobby_OnFrame
# 4 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.byte 0
# 5 "data/maps/PortValor_Gym_Lobby/scripts.pory"

# 6 "data/maps/PortValor_Gym_Lobby/scripts.pory"
PortValor_Gym_Lobby_OnFrame:
# 7 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	map_script_2 GYM_STATE, 1, PortValor_Gym_Lobby_EventScript_Win
# 8 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.2byte 0

PortValor_Gym_Lobby_EventScript_Win::
# 13 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	setvar GYM_STATE, 0
# 14 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	lockall
# 15 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	delay 30
# 17 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_1, MSGBOX_AUTOCLOSE
# 19 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE, 1
# 22 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_3, MSGBOX_AUTOCLOSE
# 23 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_4, MSGBOX_AUTOCLOSE
# 24 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY, 1
# 25 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_5, MSGBOX_AUTOCLOSE
# 26 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_6, MSGBOX_AUTOCLOSE
# 27 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_7
# 28 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	giveitem ITEM_FIRE_TERA_SHARD, 20
# 29 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	addvar VAR_FIRE_SHARDS, 20
# 30 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	giveitem ITEM_WATER_TERA_SHARD, 20
# 31 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	addvar VAR_WATER_SHARDS, 20
# 32 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_8, MSGBOX_AUTOCLOSE
# 34 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	releaseall
	end


PortValor_Gym_Lobby_TriggerOne::
# 42 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_set FLAG_BEAT_PORT_VALOR, PortValor_Gym_Lobby_TriggerOne_2
# 45 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_PORT_VALOR_CHECKED_IN, PortValor_Gym_Lobby_TriggerOne_3
PortValor_Gym_Lobby_TriggerOne_1:
	end

PortValor_Gym_Lobby_TriggerOne_2:
# 43 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	goto PortValor_Gym_Lobby_TriggerOne_1

PortValor_Gym_Lobby_TriggerOne_3:
# 46 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_1, MSGBOX_AUTOCLOSE
# 47 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	delay 8
# 48 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Movement_One
# 49 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	waitmovement 0
# 50 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto PortValor_Gym_Lobby_EventScript_Rules
	goto PortValor_Gym_Lobby_TriggerOne_1


PortValor_Gym_Lobby_TriggerTwo::
# 56 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_set FLAG_BEAT_PORT_VALOR, PortValor_Gym_Lobby_TriggerTwo_2
# 59 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_PORT_VALOR_CHECKED_IN, PortValor_Gym_Lobby_TriggerTwo_3
PortValor_Gym_Lobby_TriggerTwo_1:
	end

PortValor_Gym_Lobby_TriggerTwo_2:
# 57 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	goto PortValor_Gym_Lobby_TriggerTwo_1

PortValor_Gym_Lobby_TriggerTwo_3:
# 61 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Movement_Two
# 62 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	waitmovement 0
# 63 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto PortValor_Gym_Lobby_EventScript_Rules
	goto PortValor_Gym_Lobby_TriggerTwo_1


PortValor_Gym_Lobby_TriggerThree::
# 69 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_set FLAG_BEAT_PORT_VALOR, PortValor_Gym_Lobby_TriggerThree_2
# 72 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_PORT_VALOR_CHECKED_IN, PortValor_Gym_Lobby_TriggerThree_3
PortValor_Gym_Lobby_TriggerThree_1:
	end

PortValor_Gym_Lobby_TriggerThree_2:
# 70 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 71 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	goto PortValor_Gym_Lobby_TriggerThree_1

PortValor_Gym_Lobby_TriggerThree_3:
# 74 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Movement_Three
# 75 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	waitmovement 0
# 76 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto PortValor_Gym_Lobby_EventScript_Rules
	goto PortValor_Gym_Lobby_TriggerThree_1


PortValor_Gym_Lobby_TriggerFour::
# 82 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_set FLAG_BEAT_PORT_VALOR, PortValor_Gym_Lobby_TriggerFour_2
# 85 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_PORT_VALOR_CHECKED_IN, PortValor_Gym_Lobby_TriggerFour_3
PortValor_Gym_Lobby_TriggerFour_1:
	end

PortValor_Gym_Lobby_TriggerFour_2:
# 83 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 84 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	goto PortValor_Gym_Lobby_TriggerFour_1

PortValor_Gym_Lobby_TriggerFour_3:
# 87 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Movement_Four
# 88 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	waitmovement 0
# 89 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto PortValor_Gym_Lobby_EventScript_Rules
	goto PortValor_Gym_Lobby_TriggerFour_1


# 94 "data/maps/PortValor_Gym_Lobby/scripts.pory"
Gym_Rules_Movement_One:
# 95 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_down
# 96 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 96 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 96 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 97 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	face_up
	step_end

# 100 "data/maps/PortValor_Gym_Lobby/scripts.pory"
Gym_Rules_Movement_Two:
# 101 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_down
# 102 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 102 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 102 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 102 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 103 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	face_up
	step_end

# 106 "data/maps/PortValor_Gym_Lobby/scripts.pory"
Gym_Rules_Movement_Three:
# 107 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_down
# 108 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 108 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 108 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 108 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 108 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 109 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	face_up
	step_end

# 112 "data/maps/PortValor_Gym_Lobby/scripts.pory"
Gym_Rules_Movement_Four:
# 113 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_down
# 114 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 114 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 114 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 114 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 114 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 114 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	walk_left
# 115 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	face_up
	step_end

PortValor_Gym_Lobby_EventScript_Rules::
# 122 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	lockall
# 124 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_0, MSGBOX_AUTOCLOSE
# 125 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_1, MSGBOX_AUTOCLOSE
# 126 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_2, MSGBOX_AUTOCLOSE
# 128 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Lobby_EventScript_Rules_3
PortValor_Gym_Lobby_EventScript_Rules_1:
# 157 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_22, MSGBOX_YESNO
# 158 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_Gym_Lobby_EventScript_Rules_7
PortValor_Gym_Lobby_EventScript_Rules_6:
# 163 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	setflag FLAG_PORT_VALOR_CHECKED_IN
# 164 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_25, MSGBOX_AUTOCLOSE
# 165 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	releaseall
	end

PortValor_Gym_Lobby_EventScript_Rules_2:
# 129 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_3, MSGBOX_YESNO
# 130 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_Gym_Lobby_EventScript_Rules_9
	goto PortValor_Gym_Lobby_EventScript_Rules_1

PortValor_Gym_Lobby_EventScript_Rules_3:
# 128 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_lt PortValor_Gym_Lobby_EventScript_Rules_2
	goto PortValor_Gym_Lobby_EventScript_Rules_1

PortValor_Gym_Lobby_EventScript_Rules_7:
# 159 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_23, MSGBOX_AUTOCLOSE
# 160 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_24, MSGBOX_AUTOCLOSE
	goto PortValor_Gym_Lobby_EventScript_Rules_6

PortValor_Gym_Lobby_EventScript_Rules_9:
# 131 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_4, MSGBOX_AUTOCLOSE
# 132 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_5, MSGBOX_AUTOCLOSE
# 133 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_6, MSGBOX_AUTOCLOSE
# 134 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_7, MSGBOX_AUTOCLOSE
# 135 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_8, MSGBOX_AUTOCLOSE
# 137 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_9, MSGBOX_AUTOCLOSE
# 138 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_10, MSGBOX_AUTOCLOSE
# 139 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_11, MSGBOX_AUTOCLOSE
# 140 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_12, MSGBOX_AUTOCLOSE
# 142 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_13, MSGBOX_AUTOCLOSE
# 143 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_14, MSGBOX_AUTOCLOSE
# 144 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_15, MSGBOX_AUTOCLOSE
# 145 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_16, MSGBOX_AUTOCLOSE
# 147 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_17, MSGBOX_AUTOCLOSE
# 148 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_18, MSGBOX_AUTOCLOSE
# 149 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_19, MSGBOX_AUTOCLOSE
# 150 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_20, MSGBOX_AUTOCLOSE
# 151 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Rules_Text_21, MSGBOX_AUTOCLOSE
# 153 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	setflag FLAG_GYM_RULES
	goto PortValor_Gym_Lobby_EventScript_Rules_1


PortValor_Gym_Lobby_EventScript_Win_Text_0:
# 17 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "RECEPTIONIST: Well done,\n{PLAYER}!$"

PortValor_Gym_Lobby_EventScript_Win_Text_1:
# 18 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You have successfully beaten the Port\nValor Gym!$"

PortValor_Gym_Lobby_EventScript_Win_Text_2:
# 19 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Here are your rewards...$"

PortValor_Gym_Lobby_EventScript_Win_Text_3:
# 22 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "That's from Marin. It contains\nRain Dance.$"

PortValor_Gym_Lobby_EventScript_Win_Text_4:
# 23 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Now you'll be able to rain on your\nopponent's parade.$"

PortValor_Gym_Lobby_EventScript_Win_Text_5:
# 25 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "And that one is from Solara. It\ncontains Sunny Day.$"

PortValor_Gym_Lobby_EventScript_Win_Text_6:
# 26 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You can use it to work on your tan.$"

PortValor_Gym_Lobby_EventScript_Win_Text_7:
# 27 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "And here are some tera shards from\neach leader.$"

PortValor_Gym_Lobby_EventScript_Win_Text_8:
# 32 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Good luck with the rest of the gyms!$"

PortValor_Gym_Lobby_TriggerOne_Text_0:
# 43 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You have already beaten this gym.$"

PortValor_Gym_Lobby_TriggerOne_Text_1:
# 46 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Excuse me! You need to check in!$"

PortValor_Gym_Lobby_EventScript_Rules_Text_0:
# 124 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "RECEPTIONIST: Hello, challenger!$"

PortValor_Gym_Lobby_EventScript_Rules_Text_1:
# 125 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "What is your name?$"

PortValor_Gym_Lobby_EventScript_Rules_Text_2:
# 126 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "{PLAYER}? Ah yes, I see you in the\nsystem here.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_3:
# 129 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Would you like to hear the rules for the\ngym?$"

PortValor_Gym_Lobby_EventScript_Rules_Text_4:
# 131 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Great!$"

PortValor_Gym_Lobby_EventScript_Rules_Text_5:
# 132 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Gyms in Valora are different than other\nregions.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_6:
# 133 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "We use what we call 'split gyms' - two\ngyms leaders with different, often\pcontrasting styles in battle.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_7:
# 134 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You will need to beat both gym leaders\nin order to receive a badge.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_8:
# 135 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "If you fail to beat either, you will\nneed to start over and battle both to\pget your badge.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_9:
# 137 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Additionally, our battles are all 4v4\ndouble battles.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_10:
# 138 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Each trainer can bring up to six POKEMON\nin their party, but they will need to\pchoose four to battle with.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_11:
# 139 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You will get to see your opponent's six\nparty POKEMON before selecting the\pfour you will bring to battle.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_12:
# 140 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You will select a new set of four prior\nto fighting the second leader.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_13:
# 142 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Once you are on the Battle Floor, you\nwill not be able to change your team.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_14:
# 143 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "However, your POKEMON will be healed\nbefore the second battle.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_15:
# 144 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "There's a computer to my left where you\ncan change your party.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_16:
# 145 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "I can give you some advice on what to\nexpect before you choose your team.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_17:
# 147 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Finally, we use a tiered system in\nValora for our gym battles.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_18:
# 148 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You don't have any badges, so you will\nbe in Tier C.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_19:
# 149 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "This means the gym leaders will bring\ntheir weakest teams.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_20:
# 150 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "After receiving two badges, you'll move\nto Tier B.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_21:
# 151 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Five badges will put you in Tier A,\nand then 8 badges will put you in S Tier.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_22:
# 157 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Would you like information about the\ngym leaders?$"

PortValor_Gym_Lobby_EventScript_Rules_Text_23:
# 159 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "This gym is all about controlling the\nweather.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_24:
# 160 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Marin uses rain to his advantage,\nwhile Solara utilizes the sun.$"

PortValor_Gym_Lobby_EventScript_Rules_Text_25:
# 164 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Good luck!$"
