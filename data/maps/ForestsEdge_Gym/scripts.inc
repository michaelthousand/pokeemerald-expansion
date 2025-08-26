ForestsEdge_Gym_MapScripts::
# 2 "data/maps/ForestsEdge_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ForestsEdge_Gym_OnTransition
	.byte 0


ForestsEdge_Gym_OnTransition::
# 6 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_MORWEN
# 7 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_KAELEN
	end


ForestsEdge_Gym_Trigger_Right::
# 13 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 14 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Right
# 15 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 180
# 17 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_MORWEN
# 18 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject 2
# 19 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 2, Morwen_Enter
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 21 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 22 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Morwen
	return


# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
Enter_Gym_Right:
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 28 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 28 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 28 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 28 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 28 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 28 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 29 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
	step_end

ForestsEdge_Gym_Trigger_Left::
# 33 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 34 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Left
# 35 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 36 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 180
# 37 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_MORWEN
# 38 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject 2
# 39 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 2, Morwen_Enter
# 40 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 41 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 42 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Morwen
	return


# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
Enter_Gym_Left:
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 49 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
	step_end

ForestsEdge_Gym_Trigger_One::
# 53 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Trigger_One_1
	return

ForestsEdge_Gym_Trigger_One_1:
# 54 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 55 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_One
# 56 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdgeGym_EventScript_Rules
	return


ForestsEdge_Gym_Trigger_Two::
# 61 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Trigger_Two_1
	return

ForestsEdge_Gym_Trigger_Two_1:
# 62 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 63 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Two
# 64 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdgeGym_EventScript_Rules
	return


ForestsEdge_Gym_Trigger_Three::
# 69 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Trigger_Three_1
	return

ForestsEdge_Gym_Trigger_Three_1:
# 70 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 71 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Three
# 72 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdgeGym_EventScript_Rules
	return


ForestsEdge_Gym_Trigger_Four::
# 77 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Trigger_Four_1
	return

ForestsEdge_Gym_Trigger_Four_1:
# 78 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 79 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Four
# 80 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdgeGym_EventScript_Rules
	return


# 84 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_One:
# 85 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 85 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 90 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Two:
# 91 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 91 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 92 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 92 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 92 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 92 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 93 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 96 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Three:
# 97 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 97 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 102 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Four:
# 103 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 103 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 105 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 108 "data/maps/ForestsEdge_Gym/scripts.pory"
Morwen_Enter:
# 109 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 112 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
	step_end

# 115 "data/maps/ForestsEdge_Gym/scripts.pory"
Morwen_Exit:
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 119 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
	step_end

# 122 "data/maps/ForestsEdge_Gym/scripts.pory"
Kaelen_Enter:
# 123 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 123 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 123 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
	step_end

# 127 "data/maps/ForestsEdge_Gym/scripts.pory"
Kaelen_Exit:
# 128 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
	step_end

ForestsEdgeGym_EventScript_Rules::
# 134 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdgeGym_EventScript_Rules_2
# 157 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 158 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 159 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 161 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdgeGym_EventScript_Rules_6
# 163 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_lt ForestsEdgeGym_EventScript_Rules_7
# 165 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_gt ForestsEdgeGym_EventScript_Rules_8
ForestsEdgeGym_EventScript_Rules_5:
# 169 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
ForestsEdgeGym_EventScript_Rules_1:
# 172 "data/maps/ForestsEdge_Gym/scripts.pory"
	releaseall
	end

ForestsEdgeGym_EventScript_Rules_2:
# 135 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 136 "data/maps/ForestsEdge_Gym/scripts.pory"
	faceplayer
# 138 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 140 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 143 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 144 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 145 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 147 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 148 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 149 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 150 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_9, MSGBOX_DEFAULT
# 151 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_10, MSGBOX_DEFAULT
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 155 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_GYM_RULES
	goto ForestsEdgeGym_EventScript_Rules_1

ForestsEdgeGym_EventScript_Rules_6:
# 162 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5

ForestsEdgeGym_EventScript_Rules_7:
# 164 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_14, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5

ForestsEdgeGym_EventScript_Rules_8:
# 166 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5


ForestsEdge_Gym_EventScript_Morwen::
# 178 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_EventScript_Morwen_1
	return

ForestsEdge_Gym_EventScript_Morwen_1:
# 180 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_SHROOMISH
# 181 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_GLOOM
# 182 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_EKANS
# 183 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_NOCTOWL
# 184 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_QUAGSIRE
# 185 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_WEEPINBELL
# 186 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 187 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 189 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 190 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 191 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 196 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 197 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 198 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, FRONTIER_LVL_OPEN
# 199 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, 4
# 200 "data/maps/ForestsEdge_Gym/scripts.pory"
	special ChoosePartyForBattleFrontier
# 201 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 204 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_4
# 209 "data/maps/ForestsEdge_Gym/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 210 "data/maps/ForestsEdge_Gym/scripts.pory"
	frontier_setpartyorder 4
# 212 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_6
# 216 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_4:
	end

ForestsEdge_Gym_EventScript_Morwen_6:
# 213 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 214 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return


ForestsEdge_Gym_After_Morwen::
# 225 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 226 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_MORWEN
# 227 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Morwen, MSGBOX_DEFAULT
# 228 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 231 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 2, Morwen_Exit
# 232 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 233 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_MORWEN
# 234 "data/maps/ForestsEdge_Gym/scripts.pory"
	removeobject 2
# 235 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 150
# 236 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_KAELEN
# 237 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject 1
# 238 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 239 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Enter
# 240 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 241 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Kaelen
	return


ForestsEdge_Gym_EventScript_Kaelen::
# 245 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_1
	return

ForestsEdge_Gym_EventScript_Kaelen_1:
# 246 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_HOUNDOUR
# 247 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_KOFFING
# 248 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_SLUGMA
# 249 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_NIDORINA
# 250 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZUBAT
# 251 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_GRIMER_ALOLA
# 252 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 253 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 257 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 258 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 259 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, FRONTIER_LVL_OPEN
# 260 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, 4
# 261 "data/maps/ForestsEdge_Gym/scripts.pory"
	special ChoosePartyForBattleFrontier
# 262 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 265 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_4
# 270 "data/maps/ForestsEdge_Gym/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 271 "data/maps/ForestsEdge_Gym/scripts.pory"
	frontier_setpartyorder 4
# 273 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_6
# 276 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_4:
	end

ForestsEdge_Gym_EventScript_Kaelen_6:
# 274 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return


ForestsEdge_Gym_After_Kaelen::
# 285 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 286 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_KAELEN
# 287 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Kaelen, MSGBOX_DEFAULT
# 288 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 292 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ForestsEdge_Gym_After_Kaelen_2
# 295 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ForestsEdge_Gym_After_Kaelen_3
# 301 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ForestsEdge_Gym_After_Kaelen_4
# 307 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, ForestsEdge_Gym_After_Kaelen_5
# 313 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, ForestsEdge_Gym_After_Kaelen_6
# 319 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, ForestsEdge_Gym_After_Kaelen_7
# 325 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ForestsEdge_Gym_After_Kaelen_8
# 331 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, ForestsEdge_Gym_After_Kaelen_9
ForestsEdge_Gym_After_Kaelen_1:
# 339 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Exit
# 340 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 341 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_KAELEN
# 342 "data/maps/ForestsEdge_Gym/scripts.pory"
	releaseall
	end

ForestsEdge_Gym_After_Kaelen_2:
# 293 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_3:
# 296 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 297 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_DEFAULT
# 298 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 299 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 300 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_1, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_4:
# 302 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 303 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_DEFAULT
# 304 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 305 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 306 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_5:
# 308 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 309 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_DEFAULT
# 310 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 311 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 312 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_3, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_6:
# 314 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 315 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_DEFAULT
# 316 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 317 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 28
# 318 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_4, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_7:
# 320 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 321 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_DEFAULT
# 322 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 323 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 324 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_5, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_8:
# 326 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 327 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_DEFAULT
# 328 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 329 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 330 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_6, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_9:
# 332 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 333 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_DEFAULT
# 334 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 335 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 336 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_7, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1


ForestsEdgeGym_EventScript_Rules_Text_0:
# 138 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explain\nhow Gyms work here in the REGION.$"

ForestsEdgeGym_EventScript_Rules_Text_1:
# 140 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in a different styles.$"

ForestsEdgeGym_EventScript_Rules_Text_2:
# 141 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "There are no junior trainers in our gyms.$"

ForestsEdgeGym_EventScript_Rules_Text_3:
# 143 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Remember: you must defeat both Leaders\nto earn the badge.$"

ForestsEdgeGym_EventScript_Rules_Text_4:
# 144 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your team.$"

ForestsEdgeGym_EventScript_Rules_Text_5:
# 145 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

ForestsEdgeGym_EventScript_Rules_Text_6:
# 147 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Earning a badge will also award you points\ntoward qualifying for the Regional Championship.$"

ForestsEdgeGym_EventScript_Rules_Text_7:
# 148 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your first opponent is Morwen.\pShe specializes in sleep and paralysis.$"

ForestsEdgeGym_EventScript_Rules_Text_8:
# 149 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your second opponent is Kaelen.\pHe specializes in poison and burns.$"

ForestsEdgeGym_EventScript_Rules_Text_9:
# 150 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You have 0 badges so you are in Tier C.\pYour opponent's will not bring their best\nteams.$"

ForestsEdgeGym_EventScript_Rules_Text_10:
# 151 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

ForestsEdgeGym_EventScript_Rules_Text_11:
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck!$"

ForestsEdgeGym_EventScript_Rules_Text_12:
# 157 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Welcome, challenger, to the Forest's Edge\nGym!$"

ForestsEdgeGym_EventScript_Rules_Text_13:
# 162 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are in Tier C.\pYour opponent's will not bring their best\nteams.$"

ForestsEdgeGym_EventScript_Rules_Text_14:
# 164 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are in Tier B.\pYour opponent's will not bring their best\nteams...\pbut they will step up their game.$"

ForestsEdgeGym_EventScript_Rules_Text_15:
# 166 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are in Tier A.\pYour opponent's will not pull any punches.$"

ForestsEdge_Gym_After_Morwen_Text_0:
# 228 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

ForestsEdge_Gym_After_Kaelen_Text_0:
# 297 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You got the XXX Badge!$"

ForestsEdge_Gym_After_Kaelen_Text_1:
# 300 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

ForestsEdge_Gym_After_Kaelen_Text_2:
# 306 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

ForestsEdge_Gym_After_Kaelen_Text_3:
# 312 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

ForestsEdge_Gym_After_Kaelen_Text_4:
# 318 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 58.$"

ForestsEdge_Gym_After_Kaelen_Text_5:
# 324 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

ForestsEdge_Gym_After_Kaelen_Text_6:
# 330 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

ForestsEdge_Gym_After_Kaelen_Text_7:
# 336 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

Morwen_Intro::
# 387 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "How can you win if you can't move?$"

Morwen_Outro::
# 391 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Morwen::
# 395 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck against Kaelen.$"

Kaelen_Intro::
# 399 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Kaelen_Outro::
# 403 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Kaelen::
# 407 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Impressive control of your team.$"

Not_Enough_Mons::
# 411 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You need at least four battle-ready Pokémon.$"

GotBadge01::
# 415 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats! You got the Blight badge!$"

LevelCap29Msg::
# 419 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 29.$"
