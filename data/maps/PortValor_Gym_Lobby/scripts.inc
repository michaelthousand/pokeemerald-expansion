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
# 12 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	setvar GYM_STATE, 0
# 13 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	lockall
# 14 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	delay 30
# 16 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_1, MSGBOX_AUTOCLOSE
# 18 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_2, MSGBOX_AUTOCLOSE
# 20 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE, 1
# 21 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_3, MSGBOX_AUTOCLOSE
# 22 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_4, MSGBOX_AUTOCLOSE
# 23 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY, 1
# 24 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_5, MSGBOX_AUTOCLOSE
# 25 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_6, MSGBOX_AUTOCLOSE
# 26 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_7
# 27 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	giveitem ITEM_FIRE_TERA_SHARD, 20
# 28 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	addvar VAR_FIRE_SHARDS, 20
# 29 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	giveitem ITEM_WATER_TERA_SHARD, 20
# 30 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	addvar VAR_WATER_SHARDS, 20
# 31 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_EventScript_Win_Text_8, MSGBOX_AUTOCLOSE
# 33 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	releaseall
	end


PortValor_Gym_Lobby_TriggerOne::
# 40 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_BEAT_PORT_VALOR, PortValor_Gym_Lobby_TriggerOne_1
# 47 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	return

PortValor_Gym_Lobby_TriggerOne_1:
# 41 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Lobby_TriggerOne_4
	return

PortValor_Gym_Lobby_TriggerOne_4:
# 42 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	lockall
# 43 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_One
# 44 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto PortValor_Gym_EventScript_Rules
	return


PortValor_Gym_Lobby_TriggerTwo::
# 53 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_BEAT_PORT_VALOR, PortValor_Gym_Lobby_TriggerTwo_1
# 60 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	return

PortValor_Gym_Lobby_TriggerTwo_1:
# 54 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Lobby_TriggerTwo_4
	return

PortValor_Gym_Lobby_TriggerTwo_4:
# 55 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	lockall
# 56 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Two
# 57 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto PortValor_Gym_EventScript_Rules
	return


PortValor_Gym_Lobby_TriggerThree::
# 66 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_BEAT_PORT_VALOR, PortValor_Gym_Lobby_TriggerThree_1
# 73 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 74 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	return

PortValor_Gym_Lobby_TriggerThree_1:
# 67 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Lobby_TriggerThree_4
	return

PortValor_Gym_Lobby_TriggerThree_4:
# 68 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	lockall
# 69 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Three
# 70 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto PortValor_Gym_EventScript_Rules
	return


PortValor_Gym_Lobby_TriggerFour::
# 79 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_BEAT_PORT_VALOR, PortValor_Gym_Lobby_TriggerFour_1
# 86 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	msgbox PortValor_Gym_Lobby_TriggerOne_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
	return

PortValor_Gym_Lobby_TriggerFour_1:
# 80 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Lobby_TriggerFour_4
	return

PortValor_Gym_Lobby_TriggerFour_4:
# 81 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	lockall
# 82 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Four
# 83 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	goto PortValor_Gym_EventScript_Rules
	return


PortValor_Gym_Lobby_EventScript_Win_Text_0:
# 16 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "SECRETARY: Well done, {PLAYER}!$"

PortValor_Gym_Lobby_EventScript_Win_Text_1:
# 17 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You have successfully beaten the Port\nValor Gym!$"

PortValor_Gym_Lobby_EventScript_Win_Text_2:
# 18 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Here are your rewards...$"

PortValor_Gym_Lobby_EventScript_Win_Text_3:
# 21 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "That's from Marin. It contains\nRain Danc.$"

PortValor_Gym_Lobby_EventScript_Win_Text_4:
# 22 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Now you'll be able to rain on your\nopponent's parade.$"

PortValor_Gym_Lobby_EventScript_Win_Text_5:
# 24 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "And that one is from Solara. It\ncontains Sunny Day.$"

PortValor_Gym_Lobby_EventScript_Win_Text_6:
# 25 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You can use it to work on your tan.$"

PortValor_Gym_Lobby_EventScript_Win_Text_7:
# 26 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "And here are some tera shards from\neach leader.$"

PortValor_Gym_Lobby_EventScript_Win_Text_8:
# 31 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "Good luck with the rest of the gyms!$"

PortValor_Gym_Lobby_TriggerOne_Text_0:
# 47 "data/maps/PortValor_Gym_Lobby/scripts.pory"
	.string "You have already beaten this gym.$"
