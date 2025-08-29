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
Exit_Gym:
# 85 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
	step_end

# 91 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_One:
# 92 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 92 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 93 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 93 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 93 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 94 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 97 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Two:
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 100 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 103 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Three:
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 105 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 105 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 105 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 105 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 105 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 106 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 109 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Four:
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 112 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 115 "data/maps/ForestsEdge_Gym/scripts.pory"
Morwen_Enter:
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 119 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
	step_end

# 122 "data/maps/ForestsEdge_Gym/scripts.pory"
Morwen_Exit:
# 123 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 126 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
	step_end

# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
Kaelen_Enter:
# 130 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 130 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 130 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 131 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
	step_end

# 134 "data/maps/ForestsEdge_Gym/scripts.pory"
Kaelen_Exit:
# 135 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 136 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 136 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 136 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
	step_end

ForestsEdgeGym_EventScript_Rules::
# 141 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdgeGym_EventScript_Rules_2
# 168 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
# 169 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 170 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 172 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdgeGym_EventScript_Rules_6
# 174 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_lt ForestsEdgeGym_EventScript_Rules_7
# 176 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_gt ForestsEdgeGym_EventScript_Rules_8
ForestsEdgeGym_EventScript_Rules_5:
# 180 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
ForestsEdgeGym_EventScript_Rules_1:
# 183 "data/maps/ForestsEdge_Gym/scripts.pory"
	releaseall
	end

ForestsEdgeGym_EventScript_Rules_2:
# 142 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 143 "data/maps/ForestsEdge_Gym/scripts.pory"
	faceplayer
# 145 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 147 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 149 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 151 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 152 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 153 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 155 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 156 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_9, MSGBOX_DEFAULT
# 158 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_10, MSGBOX_DEFAULT
# 159 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 160 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 161 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 162 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_14, MSGBOX_DEFAULT
# 165 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
# 166 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_GYM_RULES
	goto ForestsEdgeGym_EventScript_Rules_1

ForestsEdgeGym_EventScript_Rules_6:
# 173 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_17, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5

ForestsEdgeGym_EventScript_Rules_7:
# 175 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_18, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5

ForestsEdgeGym_EventScript_Rules_8:
# 177 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_19, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5


ForestsEdge_Gym_EventScript_Morwen::
# 189 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_EventScript_Morwen_1
	return

ForestsEdge_Gym_EventScript_Morwen_1:
# 191 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_SHROOMISH
# 192 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_GLOOM
# 193 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_EKANS
# 194 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_NOCTOWL
# 195 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_QUAGSIRE
# 196 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_WEEPINBELL
# 197 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_4
# 200 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8006, 29
ForestsEdge_Gym_EventScript_Morwen_3:
# 203 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 204 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 206 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 207 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 208 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 210 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 211 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_8
# 218 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 220 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 221 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 224 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 225 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 228 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Morwen_11
# 237 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 240 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_13
# 243 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_4:
# 198 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8006, 21
	goto ForestsEdge_Gym_EventScript_Morwen_3

ForestsEdge_Gym_EventScript_Morwen_8:
# 212 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 213 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 214 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_11:
# 229 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 230 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 231 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 232 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_13:
# 241 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return


ForestsEdge_Gym_After_Morwen::
# 252 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 253 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 255 "data/maps/ForestsEdge_Gym/scripts.pory"
	giveitem ITEM_TM_REST, 1
# 256 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_1, MSGBOX_AUTOCLOSE
# 257 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_2, MSGBOX_AUTOCLOSE
# 259 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_MORWEN
# 260 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Morwen, MSGBOX_AUTOCLOSE
# 262 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 263 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 265 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 2, Morwen_Exit
# 266 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 267 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_MORWEN
# 268 "data/maps/ForestsEdge_Gym/scripts.pory"
	removeobject 2
# 270 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 150
# 271 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_KAELEN
# 272 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject 1
# 273 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 274 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Enter
# 275 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 277 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Kaelen
	return


ForestsEdge_Gym_EventScript_Kaelen::
# 281 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_1
	return

ForestsEdge_Gym_EventScript_Kaelen_1:
# 282 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_HOUNDOUR
# 283 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_KOFFING
# 284 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_SLUGMA
# 285 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_NIDORINA
# 286 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZUBAT
# 287 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_GRIMER_ALOLA
# 288 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_4
# 291 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8006, 29
ForestsEdge_Gym_EventScript_Kaelen_3:
# 294 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 295 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 297 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 298 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 299 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 301 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 302 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_8
# 311 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 315 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 316 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 317 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, FRONTIER_LVL_OPEN
# 318 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, 4
# 319 "data/maps/ForestsEdge_Gym/scripts.pory"
	special ChoosePartyForBattleFrontier
# 320 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 323 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_11
# 330 "data/maps/ForestsEdge_Gym/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 331 "data/maps/ForestsEdge_Gym/scripts.pory"
	frontier_setpartyorder 4
# 333 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_13
# 336 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_4:
# 289 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8006, 21
	goto ForestsEdge_Gym_EventScript_Kaelen_3

ForestsEdge_Gym_EventScript_Kaelen_8:
# 303 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 304 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 305 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 306 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 307 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_11:
# 324 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 325 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_13:
# 334 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return


ForestsEdge_Gym_After_Kaelen::
# 345 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 346 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 347 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 350 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 352 "data/maps/ForestsEdge_Gym/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 353 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_AUTOCLOSE
# 354 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_1, MSGBOX_AUTOCLOSE
# 356 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_KAELEN
# 357 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Kaelen, MSGBOX_AUTOCLOSE
# 359 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ForestsEdge_Gym_After_Kaelen_2
# 365 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ForestsEdge_Gym_After_Kaelen_3
# 371 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ForestsEdge_Gym_After_Kaelen_4
# 377 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, ForestsEdge_Gym_After_Kaelen_5
# 383 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, ForestsEdge_Gym_After_Kaelen_6
# 389 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, ForestsEdge_Gym_After_Kaelen_7
# 395 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ForestsEdge_Gym_After_Kaelen_8
# 401 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, ForestsEdge_Gym_After_Kaelen_9
ForestsEdge_Gym_After_Kaelen_1:
# 409 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Exit
# 410 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 411 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_KAELEN
# 412 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 413 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 414 "data/maps/ForestsEdge_Gym/scripts.pory"
	releaseall
	end

ForestsEdge_Gym_After_Kaelen_2:
# 360 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 361 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 362 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 363 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 364 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_3, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_3:
# 366 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 367 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 368 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 369 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 370 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_4, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_4:
# 372 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 373 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 374 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 375 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 376 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_5, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_5:
# 378 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 379 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 380 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 381 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 382 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_6, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_6:
# 384 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 385 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 386 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 387 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 388 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_7, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_7:
# 390 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 391 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 392 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 393 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 394 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_8, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_8:
# 396 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 397 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 398 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 399 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 400 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_9, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_9:
# 402 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 403 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 404 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 405 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 406 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_10, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1


ForestsEdgeGym_EventScript_Rules_Text_0:
# 145 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explain\nhow Gyms work here in Valora.$"

ForestsEdgeGym_EventScript_Rules_Text_1:
# 147 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in a different styles.$"

ForestsEdgeGym_EventScript_Rules_Text_2:
# 148 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "There are no junior trainers in our gyms.$"

ForestsEdgeGym_EventScript_Rules_Text_3:
# 149 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You must defeat both Leaders to earn\na badge.$"

ForestsEdgeGym_EventScript_Rules_Text_4:
# 151 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Battles are 4v4 double battles./pYou will have a chance to see your opponent's\nPokemon before selecting from your\pown party.$"

ForestsEdgeGym_EventScript_Rules_Text_5:
# 152 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You can cancel the battle only before the\nfirst gym leader to return to the\plobby and change your team.$"

ForestsEdgeGym_EventScript_Rules_Text_6:
# 153 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "There's a computer to your left for this very purpose.$"

ForestsEdgeGym_EventScript_Rules_Text_7:
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your party Pokemon.$"

ForestsEdgeGym_EventScript_Rules_Text_8:
# 155 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

ForestsEdgeGym_EventScript_Rules_Text_9:
# 156 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "And, as I mentioned, you will\nhave a chance to select differnt Pokemon\pfrom your party for the second battle.$"

ForestsEdgeGym_EventScript_Rules_Text_10:
# 158 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Earning a badge will also award you points\ntoward qualifying for the Regional Championship.$"

ForestsEdgeGym_EventScript_Rules_Text_11:
# 159 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your first opponent is Morwen.\pShe specializes in sleep and paralysis.$"

ForestsEdgeGym_EventScript_Rules_Text_12:
# 160 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your second opponent is Kaelen.\pHe specializes in poison and burns.$"

ForestsEdgeGym_EventScript_Rules_Text_13:
# 161 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You have 0 badges so you are in Tier C.\pYour opponent's will not bring their best\nteams.$"

ForestsEdgeGym_EventScript_Rules_Text_14:
# 162 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

ForestsEdgeGym_EventScript_Rules_Text_15:
# 165 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck!$"

ForestsEdgeGym_EventScript_Rules_Text_16:
# 168 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Welcome, challenger, to the Forest's Edge\nGym!$"

ForestsEdgeGym_EventScript_Rules_Text_17:
# 173 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are in Tier C.\pYour opponent's will not bring their best\nteams.$"

ForestsEdgeGym_EventScript_Rules_Text_18:
# 175 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are in Tier B.\pYour opponent's will not bring their best\nteams...\pbut they will step up their game.$"

ForestsEdgeGym_EventScript_Rules_Text_19:
# 177 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are in Tier A.\pYour opponent's will not pull any punches.$"

ForestsEdge_Gym_EventScript_Morwen_Text_0:
# 203 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Previewing opponent's team...$"

ForestsEdge_Gym_EventScript_Morwen_Text_1:
# 204 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Press B when ready to battle.$"

ForestsEdge_Gym_EventScript_Morwen_Text_2:
# 210 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Are you ready to battle?$"

ForestsEdge_Gym_EventScript_Morwen_Text_3:
# 218 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Choose your pokemon.$"

ForestsEdge_Gym_After_Morwen_Text_0:
# 253 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

ForestsEdge_Gym_After_Morwen_Text_1:
# 256 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That TM contains Rest.$"

ForestsEdge_Gym_After_Morwen_Text_2:
# 257 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Now you can use sleep to your advantage.$"

ForestsEdge_Gym_After_Kaelen_Text_0:
# 353 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That TM contains Toxic.$"

ForestsEdge_Gym_After_Kaelen_Text_1:
# 354 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Have fun poisoning your opponents.$"

ForestsEdge_Gym_After_Kaelen_Text_2:
# 362 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You got the Venom Badge!$"

ForestsEdge_Gym_After_Kaelen_Text_3:
# 364 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

ForestsEdge_Gym_After_Kaelen_Text_4:
# 370 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

ForestsEdge_Gym_After_Kaelen_Text_5:
# 376 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

ForestsEdge_Gym_After_Kaelen_Text_6:
# 382 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

ForestsEdge_Gym_After_Kaelen_Text_7:
# 388 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

ForestsEdge_Gym_After_Kaelen_Text_8:
# 394 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

ForestsEdge_Gym_After_Kaelen_Text_9:
# 400 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

ForestsEdge_Gym_After_Kaelen_Text_10:
# 406 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Morwen_Intro::
# 459 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "How can you win if you can't move?$"

Morwen_Outro::
# 463 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Morwen::
# 467 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck against Kaelen.$"

Kaelen_Intro::
# 471 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Kaelen_Outro::
# 475 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Kaelen::
# 479 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"

Not_Enough_Mons::
# 483 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You need at least four battle-ready Pokémon.$"

GotBadge01::
# 487 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats! You got the Blight badge!$"

LevelCap29Msg::
# 491 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 29.$"
