# 1 "data/maps/Prometheus_Tech_HQ/scripts.pory"

# 2 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Prometheus_Tech_HQ_MapScripts::
# 3 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Prometheus_Tech_HQ_OnFrame
# 4 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.byte 0
# 5 "data/maps/Prometheus_Tech_HQ/scripts.pory"

# 6 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Prometheus_Tech_HQ_OnFrame:
# 7 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	map_script_2 PT_HQ_STATUS, 0, Prometheus_Tech_HQ_EventScript_Intro
# 8 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.2byte 0

Prometheus_Tech_HQ_EventScript_Intro::
# 12 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	setvar PT_HQ_STATUS, 1
# 13 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	lockall
# 14 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_RECEPTION, npc_exclaim
# 15 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 16 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_RECEPTION, DIR_SOUTH
# 17 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Intro_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_to_PT_Reception
# 19 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 20 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 21 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Intro_Text_1, MSGBOX_YESNO
# 22 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Prometheus_Tech_HQ_EventScript_Intro_2
Prometheus_Tech_HQ_EventScript_Intro_1:
# 25 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Intro_Text_3, MSGBOX_YESNO
# 26 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Prometheus_Tech_HQ_EventScript_Intro_5
# 31 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	clearflag PT_HQ_GUIDE
# 32 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	goto Prometheus_Tech_HQ_EventScript_Tour
Prometheus_Tech_HQ_EventScript_Intro_4:
# 34 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	releaseall
	end

Prometheus_Tech_HQ_EventScript_Intro_2:
# 23 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Intro_Text_2, MSGBOX_AUTOCLOSE
	goto Prometheus_Tech_HQ_EventScript_Intro_1

Prometheus_Tech_HQ_EventScript_Intro_5:
# 27 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	removeobject LOCALID_PT_GUIDE
# 28 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	setflag PT_HQ_GUIDE
# 29 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Intro_Text_4, MSGBOX_AUTOCLOSE
	goto Prometheus_Tech_HQ_EventScript_Intro_4


Prometheus_Tech_HQ_EventScript_Tour::
# 39 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Guide_to_Player
# 41 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 43 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 44 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_1, MSGBOX_AUTOCLOSE
# 45 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_2, MSGBOX_AUTOCLOSE
# 46 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_3, MSGBOX_AUTOCLOSE
# 47 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Guide_Ahead_of_Player
# 48 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 49 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Player_and_Guide_PT_1
# 50 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	delay 16
# 51 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_and_Guide_PT_1
# 52 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 53 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 54 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_GUIDE, DIR_NORTH
# 55 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_4, MSGBOX_AUTOCLOSE
# 56 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_5, MSGBOX_AUTOCLOSE
# 57 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_6, MSGBOX_AUTOCLOSE
# 59 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Guide_PT_2
# 60 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	delay 16
# 61 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_PT_2
# 62 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 63 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 64 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_GUIDE, DIR_NORTH
# 65 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_7, MSGBOX_AUTOCLOSE
# 66 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_8, MSGBOX_AUTOCLOSE
# 67 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_9, MSGBOX_AUTOCLOSE
# 68 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_10, MSGBOX_AUTOCLOSE
# 69 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_11, MSGBOX_AUTOCLOSE
# 71 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Guide_PT_3
# 72 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	delay 16
# 73 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_PT_3
# 74 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 75 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 76 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_GUIDE, DIR_NORTH
# 77 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_12, MSGBOX_AUTOCLOSE
# 78 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_13, MSGBOX_AUTOCLOSE
# 79 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_14, MSGBOX_AUTOCLOSE
# 80 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_15, MSGBOX_AUTOCLOSE
# 82 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Guide_PT_4
# 83 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	delay 16
# 84 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_PT_4
# 85 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 86 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 87 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_GUIDE, DIR_NORTH
# 88 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_16, MSGBOX_AUTOCLOSE
# 89 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_17, MSGBOX_AUTOCLOSE
# 90 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_18, MSGBOX_AUTOCLOSE
# 92 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Player_and_Guide_PT_5
# 93 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	delay 16
# 94 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_and_Guide_PT_5
# 95 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 96 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 97 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_GUIDE, DIR_NORTH
# 98 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_19, MSGBOX_AUTOCLOSE
# 99 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_20, MSGBOX_AUTOCLOSE
# 100 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_21, MSGBOX_AUTOCLOSE
# 102 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Player_and_Guide_PT_5
# 103 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	delay 16
# 104 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_and_Guide_PT_5
# 105 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 106 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 107 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_GUIDE, DIR_NORTH
# 108 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_22, MSGBOX_AUTOCLOSE
# 109 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_23, MSGBOX_AUTOCLOSE
# 111 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Player_and_Guide_PT_6
# 112 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	delay 16
# 113 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_and_Guide_PT_6
# 114 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 115 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 116 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_GUIDE, DIR_NORTH
# 117 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_24, MSGBOX_AUTOCLOSE
# 118 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_25, MSGBOX_AUTOCLOSE
# 120 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Guide_Ahead_of_Player
# 121 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 122 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Player_and_Guide_PT_7
# 123 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	delay 16
# 124 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_and_Guide_PT_7
# 125 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 126 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 127 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	turnobject LOCALID_PT_GUIDE, DIR_EAST
# 128 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_26, MSGBOX_AUTOCLOSE
# 130 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Tour_Text_27, MSGBOX_AUTOCLOSE
# 131 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	applymovement LOCALID_PT_GUIDE, Guide_PT_8
# 132 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	waitmovement 0
# 133 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	setflag PT_HQ_GUIDE
# 134 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	removeobject LOCALID_PT_GUIDE
# 136 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	releaseall
	end


Prometheus_Tech_HQ_Reception::
# 141 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	lockall
# 142 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Intro_Text_0, MSGBOX_AUTOCLOSE
# 143 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Intro_Text_3, MSGBOX_YESNO
# 144 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Prometheus_Tech_HQ_Reception_2
# 147 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	clearflag PT_HQ_GUIDE
# 148 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	addobject LOCALID_PT_GUIDE
# 149 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	goto Prometheus_Tech_HQ_EventScript_Tour
Prometheus_Tech_HQ_Reception_1:
# 151 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	releaseall
	end

Prometheus_Tech_HQ_Reception_2:
# 145 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Intro_Text_4, MSGBOX_AUTOCLOSE
	goto Prometheus_Tech_HQ_Reception_1


Prometheus_Tech_HQ_EventScript_Security1::
# 156 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	lockall
# 157 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Security1_Text_0, MSGBOX_AUTOCLOSE
# 158 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Security1_Text_1, MSGBOX_AUTOCLOSE
# 159 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	releaseall
	end


Prometheus_Tech_HQ_EventScript_Security2::
# 164 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	lockall
# 165 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	msgbox Prometheus_Tech_HQ_EventScript_Security2_Text_0, MSGBOX_AUTOCLOSE
# 166 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	releaseall
	end


# 171 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Player_to_PT_Reception:
# 172 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 173 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 174 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 175 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 176 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	face_up
# 177 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 180 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Guide_to_Player:
# 181 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 181 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 181 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 181 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 181 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 181 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 182 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 182 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 182 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 182 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 183 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 186 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Guide_Ahead_of_Player:
# 187 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 188 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 188 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 189 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 190 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 193 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Player_and_Guide_PT_1:
# 194 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 194 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 195 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 195 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 195 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 196 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 196 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 197 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 200 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Guide_PT_2:
# 201 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 202 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 202 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 202 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 202 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 203 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 203 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 204 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 207 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Player_PT_2:
# 208 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 208 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 209 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 209 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 209 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 209 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 210 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 211 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 214 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Guide_PT_3:
# 215 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 215 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 215 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 215 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 215 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 215 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 215 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 215 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 216 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 216 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 216 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 216 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 216 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 216 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 216 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 216 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 217 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 218 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 218 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 219 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 222 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Player_PT_3:
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 223 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 224 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 224 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 224 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 224 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 224 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 224 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 224 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 224 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 225 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 225 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 225 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 225 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 225 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 225 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 225 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 225 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 226 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 226 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 227 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 230 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Guide_PT_4:
# 231 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 232 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 232 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 232 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 232 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 232 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 233 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 234 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 237 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Player_PT_4:
# 238 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 238 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 239 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 239 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 239 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 239 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 239 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 240 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 243 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Player_and_Guide_PT_5:
# 244 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 244 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 244 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 245 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 248 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Player_and_Guide_PT_6:
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 249 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 250 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 253 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Player_and_Guide_PT_7:
# 254 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 254 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 254 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 254 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_left
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 255 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_down
# 256 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

# 259 "data/maps/Prometheus_Tech_HQ/scripts.pory"
Guide_PT_8:
# 260 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 260 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 260 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 260 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 261 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_right
# 262 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 262 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 262 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 262 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 262 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 262 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	walk_up
# 263 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	end
	step_end

Prometheus_Tech_HQ_EventScript_Intro_Text_0:
# 17 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "RECPTIONIST: Welcome!$"

Prometheus_Tech_HQ_EventScript_Intro_Text_1:
# 21 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Is this your first time at the Prometheus\nTech Headquarters?$"

Prometheus_Tech_HQ_EventScript_Intro_Text_2:
# 23 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Liar.$"

Prometheus_Tech_HQ_EventScript_Intro_Text_3:
# 25 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Would you like a tour of the facility to\nlearn about Prometheus Tech's history?$"

Prometheus_Tech_HQ_EventScript_Intro_Text_4:
# 29 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "That's too bad.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_0:
# 39 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Great! I'll call over our tour guide.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_1:
# 44 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "GUIDE: Hello there!$"

Prometheus_Tech_HQ_EventScript_Tour_Text_2:
# 45 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "I hear you want to learn about our\ncompany's history.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_3:
# 46 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Let's get the tour started!$"

Prometheus_Tech_HQ_EventScript_Tour_Text_4:
# 55 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Prometheus Tech was founded during\nValora's independence war with the Galar\pregion.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_5:
# 56 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "The main aim of our company was to\nharness the power of POKEMON and infuse it\pinto weapons for our military.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_6:
# 57 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Not to pat ourselves on the back to\nmuch, but it really was our weapons that\pturned the tide against the colonial\nforces from Galar.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_7:
# 65 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "This here is a model of the Harbinger, the\ncrown jewel of our navy.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_8:
# 66 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Or at least it was for a time.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_9:
# 67 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "The Harbinger was part of the initial\nbattle of the war when it sunk troop boats\pbound for Port Valor.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_10:
# 68 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "During our final stand, the Harbinger was\nsunk but provided our forces with ample\ptime to prepare a defensive strategy.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_11:
# 69 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Of course, it was fitted with our weapons\nincluding one that used the power of\pHyper Beam to punch holes in enemy\nships and fry their planes in midair.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_12:
# 77 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "This here is a model of the Trident.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_13:
# 78 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "The Trident was also part of that final\nstand but managed to make it through.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_14:
# 79 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "This submarine could create whirpools\nthat swallowed up enemy ships.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_15:
# 80 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "It also had a weapon that utilized Ice\nBeam to freeze the hulls of enemy ships.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_16:
# 88 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Of course, not all of our advancements\nwere for naval vessels.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_17:
# 89 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "We designed all kinds of guns and bombs\nthat harnessed the various elemental\ppowers that POKEMON possess.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_18:
# 90 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "This here is a flamethrower that is\ninfused with the power of a Charizard.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_19:
# 98 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "That was the important part: finding the\nmost powerful POKEMON we could.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_20:
# 99 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "While a basic form POKEMON may be able to\nlearn a powerful move, Prometheus Tech\psought to harness the literal power o\nthe POKEMON, not just a particular move.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_21:
# 100 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "We sent teams out across our region and\nbeyond looking for rare and legendary\pspecies such as Groudon, Kyogre,\nLunala, and Ho-Oh.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_22:
# 108 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Eventually, we were able to capture a\nMiraidon, a futuristic species that's\pelectric attacks helped us build impossibly\nstrong electric weapons.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_23:
# 109 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "While most of the Northwest was lost in\nthe war, our region remains free thanks to\pthe technology developed by\nPrometheus Tech.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_24:
# 117 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Now, however, Prometheus Tech has a far\ndifferent goal.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_25:
# 118 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "In an effort to rebuild the strength of\nValora, our company helps new trainers\pwith items and techonology that will help them\ngrow quicker.$"

Prometheus_Tech_HQ_EventScript_Tour_Text_26:
# 128 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Be sure to visit the various buildings on\nour campus to see more of what\pPrometheus Tech can do for you!$"

Prometheus_Tech_HQ_EventScript_Tour_Text_27:
# 130 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Have a great day!$"

Prometheus_Tech_HQ_EventScript_Security1_Text_0:
# 157 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Welcome to Prometheus Tech!$"

Prometheus_Tech_HQ_EventScript_Security1_Text_1:
# 158 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Be careful not to touch the exhibits\nand enjoy your visit!$"

Prometheus_Tech_HQ_EventScript_Security2_Text_0:
# 165 "data/maps/Prometheus_Tech_HQ/scripts.pory"
	.string "Sorry, the rest of the building is off\nlimits to visitors.$"
