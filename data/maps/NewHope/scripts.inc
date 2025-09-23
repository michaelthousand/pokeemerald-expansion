# 1 "data/maps/NewHope/scripts.pory"

# 2 "data/maps/NewHope/scripts.pory"
NewHope_MapScripts::
# 3 "data/maps/NewHope/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, NewHope_OnResume
# 4 "data/maps/NewHope/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewHope_OnFrame
# 5 "data/maps/NewHope/scripts.pory"
	.byte 0
# 6 "data/maps/NewHope/scripts.pory"

# 7 "data/maps/NewHope/scripts.pory"
NewHope_OnFrame:
# 8 "data/maps/NewHope/scripts.pory"
	map_script_2 MET_RIVAL, 0, NewHope_EventScript_Intro
# 9 "data/maps/NewHope/scripts.pory"
    map_script_2 VAR_STARTER_MON, 1, NewHope_EventScript_Mentor
# 10 "data/maps/NewHope/scripts.pory"
	.2byte 0

NewHope_OnResume::
# 14 "data/maps/NewHope/scripts.pory"
	goto_if_set FLAG_VGC_PENDING_RESTORE, NewHope_OnResume_2
NewHope_OnResume_1:
	end

NewHope_OnResume_2:
# 15 "data/maps/NewHope/scripts.pory"
	special Vgc_RestorePartyBackup
# 16 "data/maps/NewHope/scripts.pory"
	special HealPlayerParty
# 17 "data/maps/NewHope/scripts.pory"
	callnative UpdateFollowingPokemon
# 18 "data/maps/NewHope/scripts.pory"
	special Vgc_RestorePartyBackup
# 19 "data/maps/NewHope/scripts.pory"
	special WeightedSelector_Off
# 20 "data/maps/NewHope/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	goto NewHope_OnResume_1


NewHope_EventScript_WarpPV::
# 26 "data/maps/NewHope/scripts.pory"
	lockall
# 27 "data/maps/NewHope/scripts.pory"
	faceplayer
# 28 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_WarpPV_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/NewHope/scripts.pory"
	releaseall
	end


NewHope_EventScript_Intro::
# 38 "data/maps/NewHope/scripts.pory"
	setvar MET_RIVAL, 1
# 39 "data/maps/NewHope/scripts.pory"
	setflag FLAG_NEWHOPE_MENTOR
# 40 "data/maps/NewHope/scripts.pory"
	setflag FLAG_GOON1_1ST_CONTACT
# 41 "data/maps/NewHope/scripts.pory"
	setflag FLAG_GOON2_1ST_CONTACT
# 42 "data/maps/NewHope/scripts.pory"
	setflag FLAG_FIRST_RIVAL_BATTLE
# 43 "data/maps/NewHope/scripts.pory"
	lockall
# 44 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_RIVAL, npc_exclaim
# 45 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 46 "data/maps/NewHope/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 47 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_2, MSGBOX_AUTOCLOSE
# 50 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_3, MSGBOX_AUTOCLOSE
# 51 "data/maps/NewHope/scripts.pory"
	closemessage
# 52 "data/maps/NewHope/scripts.pory"
	delay 16
# 54 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_RIVAL, RIVAL_to_LeagueHQ
# 55 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_to_LeagueHQ
# 56 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 57 "data/maps/NewHope/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 58 "data/maps/NewHope/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 60 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_4, MSGBOX_AUTOCLOSE
# 61 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_5, MSGBOX_AUTOCLOSE
# 63 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_RIVAL, RIVAL_to_Cinder
# 64 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_to_Cinder
# 65 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 66 "data/maps/NewHope/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 68 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_6, MSGBOX_AUTOCLOSE
# 69 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_7, MSGBOX_AUTOCLOSE
# 70 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_8, MSGBOX_AUTOCLOSE
# 71 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Intro_Text_9, MSGBOX_AUTOCLOSE
# 73 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_RIVAL, RIVAL_to_Cinder
# 74 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 75 "data/maps/NewHope/scripts.pory"
	setflag FLAG_NEWHOPE_RIVAL
# 77 "data/maps/NewHope/scripts.pory"
	releaseall
	end


NewHope_EventScript_Mentor::
# 83 "data/maps/NewHope/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 84 "data/maps/NewHope/scripts.pory"
	clearflag FLAG_NEWHOPE_MENTOR
# 85 "data/maps/NewHope/scripts.pory"
	addobject LOCALID_MENTOR
# 86 "data/maps/NewHope/scripts.pory"
	lockall
# 87 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_MENTOR, Mentor_Start
# 88 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 89 "data/maps/NewHope/scripts.pory"
	turnobject LOCALID_MENTOR, DIR_EAST
# 90 "data/maps/NewHope/scripts.pory"
	delay 8
# 91 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_MENTOR, npc_exclaim
# 92 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 93 "data/maps/NewHope/scripts.pory"
	turnobject LOCALID_MENTOR, DIR_EAST
# 94 "data/maps/NewHope/scripts.pory"
	delay 8
# 95 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_MENTOR, Mentor_to_Player
# 96 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 97 "data/maps/NewHope/scripts.pory"
	turnobject LOCALID_MENTOR, DIR_EAST
# 99 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/NewHope/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 101 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_1, MSGBOX_AUTOCLOSE
# 102 "data/maps/NewHope/scripts.pory"
	delay 8
# 103 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_2, MSGBOX_AUTOCLOSE
# 104 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_3, MSGBOX_AUTOCLOSE
# 105 "data/maps/NewHope/scripts.pory"
	delay 60
# 106 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_MENTOR, npc_exclaim
# 107 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 108 "data/maps/NewHope/scripts.pory"
	turnobject LOCALID_MENTOR, DIR_EAST
# 109 "data/maps/NewHope/scripts.pory"
	delay 60
# 110 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_4, MSGBOX_AUTOCLOSE
# 111 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_5, MSGBOX_AUTOCLOSE
# 112 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_6, MSGBOX_AUTOCLOSE
# 113 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_7, MSGBOX_AUTOCLOSE
# 114 "data/maps/NewHope/scripts.pory"
	delay 16
# 115 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Mentor_Text_8, MSGBOX_AUTOCLOSE
# 116 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_MENTOR, Mentor_Leave
# 117 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 118 "data/maps/NewHope/scripts.pory"
	setflag FLAG_NEWHOPE_MENTOR
# 119 "data/maps/NewHope/scripts.pory"
	removeobject LOCALID_MENTOR
# 120 "data/maps/NewHope/scripts.pory"
	releaseall
	end


NewHope_EventScript_Villager1::
# 125 "data/maps/NewHope/scripts.pory"
	lockall
# 126 "data/maps/NewHope/scripts.pory"
	faceplayer
# 127 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_TM45
# 129 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_0, MSGBOX_YESNO
# 130 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_2
NewHope_EventScript_Villager1_1:
# 134 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_1, MSGBOX_YESNO
# 135 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_5
NewHope_EventScript_Villager1_4:
# 140 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_2, MSGBOX_YESNO
# 141 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_8
NewHope_EventScript_Villager1_7:
# 178 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_14, MSGBOX_YESNO
# 179 "data/maps/NewHope/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_EventScript_Villager1_11
NewHope_EventScript_Villager1_10:
# 185 "data/maps/NewHope/scripts.pory"
	releaseall
	end

NewHope_EventScript_Villager1_2:
# 131 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
	goto NewHope_EventScript_Villager1_1

NewHope_EventScript_Villager1_5:
# 136 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 5
# 137 "data/maps/NewHope/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 5
	goto NewHope_EventScript_Villager1_4

NewHope_EventScript_Villager1_8:
# 142 "data/maps/NewHope/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt NewHope_EventScript_Villager1_14
# 146 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_4, MSGBOX_AUTOCLOSE
NewHope_EventScript_Villager1_13:
# 149 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq NewHope_EventScript_Villager1_17
# 152 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 29
	goto_if_eq NewHope_EventScript_Villager1_18
# 155 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 41
	goto_if_eq NewHope_EventScript_Villager1_19
# 158 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 49
	goto_if_eq NewHope_EventScript_Villager1_20
# 161 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 56
	goto_if_eq NewHope_EventScript_Villager1_21
# 164 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 64
	goto_if_eq NewHope_EventScript_Villager1_22
# 167 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 71
	goto_if_eq NewHope_EventScript_Villager1_23
# 170 "data/maps/NewHope/scripts.pory"
	compare VAR_LEVEL_CAP, 78
	goto_if_eq NewHope_EventScript_Villager1_24
# 174 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_13, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_11:
# 180 "data/maps/NewHope/scripts.pory"
	setvar VAR_BADGES, 0
# 181 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 182 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_15, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_10

NewHope_EventScript_Villager1_14:
# 143 "data/maps/NewHope/scripts.pory"
	addvar VAR_BADGES, 1
# 144 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_3, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_13

NewHope_EventScript_Villager1_17:
# 150 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 151 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_5, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_18:
# 153 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 154 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_6, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_19:
# 156 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 157 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_7, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_20:
# 159 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 160 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_8, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_21:
# 162 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 64
# 163 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_9, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_22:
# 165 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 166 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_10, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_23:
# 168 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 169 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_11, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7

NewHope_EventScript_Villager1_24:
# 171 "data/maps/NewHope/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 172 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Villager1_Text_12, MSGBOX_AUTOCLOSE
	goto NewHope_EventScript_Villager1_7


NewHope_EventScript_Security::
# 190 "data/maps/NewHope/scripts.pory"
	lockall
# 191 "data/maps/NewHope/scripts.pory"
	faceplayer
# 192 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Security_Text_0, MSGBOX_AUTOCLOSE
# 193 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_Security_Text_1, MSGBOX_AUTOCLOSE
# 194 "data/maps/NewHope/scripts.pory"
	turnobject LOCALID_NH_SECURITY, DIR_SOUTH
# 195 "data/maps/NewHope/scripts.pory"
	releaseall
	end


NewHope_Trigger_BlockPath::
# 203 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_11
NewHope_Trigger_BlockPath_6:
# 210 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_Trigger_BlockPath_5
NewHope_Trigger_BlockPath_4:
# 217 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_3
	return

NewHope_Trigger_BlockPath_1:
# 204 "data/maps/NewHope/scripts.pory"
	lockall
# 205 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_0
# 206 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 207 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 208 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_2:
# 211 "data/maps/NewHope/scripts.pory"
	lockall
# 212 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_1
# 213 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 214 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 215 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_3:
# 218 "data/maps/NewHope/scripts.pory"
	lockall
# 219 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_Trigger_BlockPath_Text_2
# 220 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer_Up
# 221 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 222 "data/maps/NewHope/scripts.pory"
	releaseall
	return

NewHope_Trigger_BlockPath_5:
# 210 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_7
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_7:
# 210 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_2
	goto NewHope_Trigger_BlockPath_4

NewHope_Trigger_BlockPath_10:
# 203 "data/maps/NewHope/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_Trigger_BlockPath_1
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_11:
# 203 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_Trigger_BlockPath_13
	goto NewHope_Trigger_BlockPath_6

NewHope_Trigger_BlockPath_13:
# 203 "data/maps/NewHope/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_Trigger_BlockPath_10
	goto NewHope_Trigger_BlockPath_6


NewHope_EventScript_GymTrigger::
# 227 "data/maps/NewHope/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_EventScript_GymTrigger_2
# 230 "data/maps/NewHope/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_EventScript_GymTrigger_3
# 256 "data/maps/NewHope/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_eq NewHope_EventScript_GymTrigger_4
NewHope_EventScript_GymTrigger_1:
# 261 "data/maps/NewHope/scripts.pory"
	releaseall
	end

NewHope_EventScript_GymTrigger_2:
# 228 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_GymTrigger_Text_0, MSGBOX_AUTOCLOSE
# 229 "data/maps/NewHope/scripts.pory"
	closemessage
	goto NewHope_EventScript_GymTrigger_1

NewHope_EventScript_GymTrigger_3:
# 231 "data/maps/NewHope/scripts.pory"
	lockall
# 232 "data/maps/NewHope/scripts.pory"
	clearflag FLAG_GOON1_1ST_CONTACT
# 233 "data/maps/NewHope/scripts.pory"
	addobject LOCALID_NH_GOON1
# 234 "data/maps/NewHope/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Move_Player_for_Goons
# 235 "data/maps/NewHope/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 236 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 237 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_NH_GOON1, Goon1_Down
# 238 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 239 "data/maps/NewHope/scripts.pory"
	turnobject LOCALID_NH_GOON1, DIR_EAST
# 240 "data/maps/NewHope/scripts.pory"
	clearflag FLAG_GOON2_1ST_CONTACT
# 241 "data/maps/NewHope/scripts.pory"
	addobject LOCALID_NH_GOON2
# 242 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_NH_GOON2, Goon2_Down
# 243 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 245 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_GymTrigger_Text_1, MSGBOX_AUTOCLOSE
# 246 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_GymTrigger_Text_2, MSGBOX_AUTOCLOSE
# 248 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_NH_GOON1, Goons_Exit_Down
# 249 "data/maps/NewHope/scripts.pory"
	applymovement LOCALID_NH_GOON2, Goons_Exit_Down
# 250 "data/maps/NewHope/scripts.pory"
	waitmovement 0
# 251 "data/maps/NewHope/scripts.pory"
	setflag FLAG_GOON1_1ST_CONTACT
# 252 "data/maps/NewHope/scripts.pory"
	removeobject LOCALID_NH_GOON1
# 253 "data/maps/NewHope/scripts.pory"
	setflag FLAG_GOON2_1ST_CONTACT
# 254 "data/maps/NewHope/scripts.pory"
	removeobject LOCALID_NH_GOON2
	goto NewHope_EventScript_GymTrigger_1

NewHope_EventScript_GymTrigger_4:
# 257 "data/maps/NewHope/scripts.pory"
	msgbox NewHope_EventScript_GymTrigger_Text_3, MSGBOX_AUTOCLOSE
# 258 "data/maps/NewHope/scripts.pory"
	closemessage
	goto NewHope_EventScript_GymTrigger_1


# 269 "data/maps/NewHope/scripts.pory"
npc_exclaim:
# 270 "data/maps/NewHope/scripts.pory"
	emote_exclamation_mark
# 271 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 274 "data/maps/NewHope/scripts.pory"
RIVAL_to_LeagueHQ:
# 275 "data/maps/NewHope/scripts.pory"
	walk_down
# 276 "data/maps/NewHope/scripts.pory"
	walk_down
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 277 "data/maps/NewHope/scripts.pory"
	walk_right
# 278 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 281 "data/maps/NewHope/scripts.pory"
Player_to_LeagueHQ:
# 282 "data/maps/NewHope/scripts.pory"
	walk_down
# 283 "data/maps/NewHope/scripts.pory"
	walk_down
# 284 "data/maps/NewHope/scripts.pory"
	walk_down
# 285 "data/maps/NewHope/scripts.pory"
	walk_down
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 286 "data/maps/NewHope/scripts.pory"
	walk_right
# 287 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 290 "data/maps/NewHope/scripts.pory"
RIVAL_to_Cinder:
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 291 "data/maps/NewHope/scripts.pory"
	walk_down
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 292 "data/maps/NewHope/scripts.pory"
	walk_left
# 293 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 296 "data/maps/NewHope/scripts.pory"
Player_to_Cinder:
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 297 "data/maps/NewHope/scripts.pory"
	walk_down
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 298 "data/maps/NewHope/scripts.pory"
	walk_left
# 299 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 302 "data/maps/NewHope/scripts.pory"
RIVAL_Leave:
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 303 "data/maps/NewHope/scripts.pory"
	walk_right
# 304 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 308 "data/maps/NewHope/scripts.pory"
Mentor_Start:
# 309 "data/maps/NewHope/scripts.pory"
	walk_right
# 310 "data/maps/NewHope/scripts.pory"
	walk_right
# 311 "data/maps/NewHope/scripts.pory"
	walk_right
# 312 "data/maps/NewHope/scripts.pory"
	walk_right
# 313 "data/maps/NewHope/scripts.pory"
	walk_right
# 314 "data/maps/NewHope/scripts.pory"
	face_right
# 315 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 318 "data/maps/NewHope/scripts.pory"
Mentor_to_Player:
# 319 "data/maps/NewHope/scripts.pory"
	walk_right
# 320 "data/maps/NewHope/scripts.pory"
	walk_right
# 321 "data/maps/NewHope/scripts.pory"
	face_right
# 322 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 325 "data/maps/NewHope/scripts.pory"
Mentor_Leave:
# 326 "data/maps/NewHope/scripts.pory"
	walk_down
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 327 "data/maps/NewHope/scripts.pory"
	walk_right
# 328 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 332 "data/maps/NewHope/scripts.pory"
Move_Player_for_Goons:
# 333 "data/maps/NewHope/scripts.pory"
	walk_fast_right
# 334 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 337 "data/maps/NewHope/scripts.pory"
Goon1_Down:
# 338 "data/maps/NewHope/scripts.pory"
	walk_down
# 339 "data/maps/NewHope/scripts.pory"
	walk_left
# 340 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 343 "data/maps/NewHope/scripts.pory"
Goon2_Down:
# 344 "data/maps/NewHope/scripts.pory"
	walk_down
# 345 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 348 "data/maps/NewHope/scripts.pory"
Goons_Exit_Down:
# 349 "data/maps/NewHope/scripts.pory"
	walk_down
# 349 "data/maps/NewHope/scripts.pory"
	walk_down
# 349 "data/maps/NewHope/scripts.pory"
	walk_down
# 349 "data/maps/NewHope/scripts.pory"
	walk_down
# 349 "data/maps/NewHope/scripts.pory"
	walk_down
# 350 "data/maps/NewHope/scripts.pory"
	walk_right
# 350 "data/maps/NewHope/scripts.pory"
	walk_right
# 350 "data/maps/NewHope/scripts.pory"
	walk_right
# 350 "data/maps/NewHope/scripts.pory"
	walk_right
# 350 "data/maps/NewHope/scripts.pory"
	walk_right
# 351 "data/maps/NewHope/scripts.pory"
	walk_down
# 351 "data/maps/NewHope/scripts.pory"
	walk_down
# 351 "data/maps/NewHope/scripts.pory"
	walk_down
# 351 "data/maps/NewHope/scripts.pory"
	walk_down
# 351 "data/maps/NewHope/scripts.pory"
	walk_down
# 352 "data/maps/NewHope/scripts.pory"
	end
	step_end

# 356 "data/maps/NewHope/scripts.pory"
StopPlayer_Up:
# 357 "data/maps/NewHope/scripts.pory"
	walk_up
	step_end

NewHope_EventScript_WarpPV_Text_0:
# 28 "data/maps/NewHope/scripts.pory"
	.string "This is the warp to Port Valor$"

NewHope_EventScript_Intro_Text_0:
# 47 "data/maps/NewHope/scripts.pory"
	.string "RIVAL: Oh! Hey, {PLAYER}!$"

NewHope_EventScript_Intro_Text_1:
# 48 "data/maps/NewHope/scripts.pory"
	.string "I was just coming to see you.$"

NewHope_EventScript_Intro_Text_2:
# 49 "data/maps/NewHope/scripts.pory"
	.string "You're going to see Professor Cinder?$"

NewHope_EventScript_Intro_Text_3:
# 50 "data/maps/NewHope/scripts.pory"
	.string "Come on, I'll walk with you.$"

NewHope_EventScript_Intro_Text_4:
# 60 "data/maps/NewHope/scripts.pory"
	.string "RIVAL: Is your dad at the League\nHeadquarters today?$"

NewHope_EventScript_Intro_Text_5:
# 61 "data/maps/NewHope/scripts.pory"
	.string "No? Well, I'm sure you'll see him soon\nenough.$"

NewHope_EventScript_Intro_Text_6:
# 68 "data/maps/NewHope/scripts.pory"
	.string "RIVAL: Here we are.$"

NewHope_EventScript_Intro_Text_7:
# 69 "data/maps/NewHope/scripts.pory"
	.string "I got my POKEMON from Cinder the other\nday. I already have three now.$"

NewHope_EventScript_Intro_Text_8:
# 70 "data/maps/NewHope/scripts.pory"
	.string "Maybe we'll battle once you have a few\nmore.$"

NewHope_EventScript_Intro_Text_9:
# 71 "data/maps/NewHope/scripts.pory"
	.string "I'm going to go train so I'm ready in\ncase those Galarians ever want\pmore trouble.$"

NewHope_EventScript_Mentor_Text_0:
# 99 "data/maps/NewHope/scripts.pory"
	.string "MENTOR: Oh! Hey, {PLAYER}!$"

NewHope_EventScript_Mentor_Text_1:
# 101 "data/maps/NewHope/scripts.pory"
	.string "Did you just get your first POKEMON from\nthe professor?$"

NewHope_EventScript_Mentor_Text_2:
# 103 "data/maps/NewHope/scripts.pory"
	.string "Aww! It's so cute!$"

NewHope_EventScript_Mentor_Text_3:
# 104 "data/maps/NewHope/scripts.pory"
	.string "My dad gave me a Pikachu for my birthday.$"

NewHope_EventScript_Mentor_Text_4:
# 110 "data/maps/NewHope/scripts.pory"
	.string "What?! No! You know I don't want to\nbattle with her!$"

NewHope_EventScript_Mentor_Text_5:
# 111 "data/maps/NewHope/scripts.pory"
	.string "Why is everyone in this region so\nobsessed with competition?$"

NewHope_EventScript_Mentor_Text_6:
# 112 "data/maps/NewHope/scripts.pory"
	.string "We weren't even alive for the war!$"

NewHope_EventScript_Mentor_Text_7:
# 113 "data/maps/NewHope/scripts.pory"
	.string "I hope you wise up one day and realize\nthere's more to POKEMON than battling.$"

NewHope_EventScript_Mentor_Text_8:
# 115 "data/maps/NewHope/scripts.pory"
	.string "Whatever. I'll see you later.$"

NewHope_EventScript_Villager1_Text_0:
# 129 "data/maps/NewHope/scripts.pory"
	.string "Would you like rare candies?$"

NewHope_EventScript_Villager1_Text_1:
# 134 "data/maps/NewHope/scripts.pory"
	.string "Ability items?$"

NewHope_EventScript_Villager1_Text_2:
# 140 "data/maps/NewHope/scripts.pory"
	.string "Would you like a badge?$"

NewHope_EventScript_Villager1_Text_3:
# 144 "data/maps/NewHope/scripts.pory"
	.string "Badge acquired$"

NewHope_EventScript_Villager1_Text_4:
# 146 "data/maps/NewHope/scripts.pory"
	.string "Max badges reached$"

NewHope_EventScript_Villager1_Text_5:
# 151 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 29$"

NewHope_EventScript_Villager1_Text_6:
# 154 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 41$"

NewHope_EventScript_Villager1_Text_7:
# 157 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 49$"

NewHope_EventScript_Villager1_Text_8:
# 160 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 56$"

NewHope_EventScript_Villager1_Text_9:
# 163 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 64$"

NewHope_EventScript_Villager1_Text_10:
# 166 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 71$"

NewHope_EventScript_Villager1_Text_11:
# 169 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 78$"

NewHope_EventScript_Villager1_Text_12:
# 172 "data/maps/NewHope/scripts.pory"
	.string "Level cap increased to 85$"

NewHope_EventScript_Villager1_Text_13:
# 174 "data/maps/NewHope/scripts.pory"
	.string "Max level cap reached.$"

NewHope_EventScript_Villager1_Text_14:
# 178 "data/maps/NewHope/scripts.pory"
	.string "Reset badges?$"

NewHope_EventScript_Villager1_Text_15:
# 182 "data/maps/NewHope/scripts.pory"
	.string "Badges and lvl cap reset$"

NewHope_EventScript_Security_Text_0:
# 192 "data/maps/NewHope/scripts.pory"
	.string "GUARD: I'm the security guard for the\nLeague Headquarters.$"

NewHope_EventScript_Security_Text_1:
# 193 "data/maps/NewHope/scripts.pory"
	.string "If you don't have League business, you\nbetter move along.$"

NewHope_Trigger_BlockPath_Text_0:
# 205 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon and to register with\nthe League office.$"

NewHope_Trigger_BlockPath_Text_1:
# 212 "data/maps/NewHope/scripts.pory"
	.string "You need a pokemon first.$"

NewHope_Trigger_BlockPath_Text_2:
# 219 "data/maps/NewHope/scripts.pory"
	.string "You need to register with the league\nfirst.$"

NewHope_EventScript_GymTrigger_Text_0:
# 228 "data/maps/NewHope/scripts.pory"
	.string "This is where the rival battle will go.$"

NewHope_EventScript_GymTrigger_Text_1:
# 245 "data/maps/NewHope/scripts.pory"
	.string "GOON 1: I can't believe they wouldn't\nlisten.$"

NewHope_EventScript_GymTrigger_Text_2:
# 246 "data/maps/NewHope/scripts.pory"
	.string "GOON 2: The Champion must have gotten\nto them first.\pLet's try the next gym.$"

NewHope_EventScript_GymTrigger_Text_3:
# 257 "data/maps/NewHope/scripts.pory"
	.string "This is where the second PT encounter will go.$"
