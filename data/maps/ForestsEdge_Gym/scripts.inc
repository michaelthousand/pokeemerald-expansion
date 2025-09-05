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
	addobject LOCALID_MORWEN
# 19 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement LOCALID_MORWEN, Morwen_Enter
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
	addobject LOCALID_MORWEN
# 39 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement LOCALID_MORWEN, Morwen_Enter
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
# 249 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_gt ForestsEdge_Gym_EventScript_Morwen_3
	return

ForestsEdge_Gym_EventScript_Morwen_1:
# 191 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SHROOMISH
# 192 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_GLOOM
# 193 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_EKANS
# 194 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_NOCTOWL
# 195 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_QUAGSIRE
# 196 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_WEEPINBELL
# 197 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_8
# 200 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
ForestsEdge_Gym_EventScript_Morwen_7:
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
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_15
# 219 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 221 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 222 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 225 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 226 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 229 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Morwen_21
# 238 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 241 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_26
# 245 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 246 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_2:
# 251 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_BRELOOM
# 252 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_VILEPLUME
# 253 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_ARBOK
# 254 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_AMOONGUSS
# 255 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_QUAGSIRE
# 256 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_VICTREEBEL
# 257 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_12
ForestsEdge_Gym_EventScript_Morwen_11:
# 261 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 262 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 264 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 265 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 266 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 268 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 269 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_18
# 277 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 279 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 280 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 283 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 284 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 287 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Morwen_24
# 296 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 299 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_29
	return

ForestsEdge_Gym_EventScript_Morwen_3:
# 249 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt ForestsEdge_Gym_EventScript_Morwen_2
	return

ForestsEdge_Gym_EventScript_Morwen_8:
# 198 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto ForestsEdge_Gym_EventScript_Morwen_7

ForestsEdge_Gym_EventScript_Morwen_12:
# 258 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto ForestsEdge_Gym_EventScript_Morwen_11

ForestsEdge_Gym_EventScript_Morwen_15:
# 213 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 214 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 215 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_18:
# 271 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 272 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 273 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_21:
# 231 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 232 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 233 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_24:
# 289 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 290 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 291 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_26:
# 242 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 243 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_29:
# 300 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 301 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_B1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return


ForestsEdge_Gym_After_Morwen::
# 310 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_Off
# 311 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 312 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 314 "data/maps/ForestsEdge_Gym/scripts.pory"
	giveitem ITEM_TM_REST, 1
# 315 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_1, MSGBOX_AUTOCLOSE
# 316 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_2, MSGBOX_AUTOCLOSE
# 318 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Morwen, MSGBOX_AUTOCLOSE
# 320 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 321 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 323 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement LOCALID_MORWEN, Morwen_Exit
# 324 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 325 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_MORWEN
# 326 "data/maps/ForestsEdge_Gym/scripts.pory"
	removeobject LOCALID_MORWEN
# 328 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 150
# 329 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_KAELEN
# 330 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject 1
# 331 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 332 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Enter
# 333 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 335 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Kaelen
	return


ForestsEdge_Gym_EventScript_Kaelen::
# 339 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_1
# 398 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_gt ForestsEdge_Gym_EventScript_Kaelen_3
	return

ForestsEdge_Gym_EventScript_Kaelen_1:
# 340 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_HOUNDOUR
# 341 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_KOFFING
# 342 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_SLUGMA
# 343 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_NIDORINA
# 344 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ZUBAT
# 345 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_GRIMER_ALOLA
# 346 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_8
# 349 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
ForestsEdge_Gym_EventScript_Kaelen_7:
# 352 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 355 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 356 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 357 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 359 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 360 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_15
# 368 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 370 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 371 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 374 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 375 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 378 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Kaelen_21
# 387 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 390 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_26
# 394 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 395 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_2:
# 399 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_HOUNDOOM
# 400 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WEEZING_GALAR
# 401 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_MAGCARGO
# 402 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_NIDORINA
# 403 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_CROBAT
# 404 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_MUK_ALOLA
# 405 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_12
ForestsEdge_Gym_EventScript_Kaelen_11:
# 409 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 410 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 412 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 413 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 414 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 416 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 417 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_18
# 425 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 427 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 428 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 431 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 432 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 435 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Kaelen_24
# 444 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 447 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_29
	return

ForestsEdge_Gym_EventScript_Kaelen_3:
# 398 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_2
	return

ForestsEdge_Gym_EventScript_Kaelen_8:
# 347 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto ForestsEdge_Gym_EventScript_Kaelen_7

ForestsEdge_Gym_EventScript_Kaelen_12:
# 406 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto ForestsEdge_Gym_EventScript_Kaelen_11

ForestsEdge_Gym_EventScript_Kaelen_15:
# 362 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 363 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 364 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_18:
# 419 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 420 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 421 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_21:
# 380 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 381 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 382 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_24:
# 437 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 438 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 439 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_26:
# 391 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 392 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_29:
# 448 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 449 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_B1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return


ForestsEdge_Gym_After_Kaelen::
# 458 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_Off
# 459 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 460 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 461 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 463 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 465 "data/maps/ForestsEdge_Gym/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 466 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_AUTOCLOSE
# 467 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_1, MSGBOX_AUTOCLOSE
# 469 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Kaelen, MSGBOX_AUTOCLOSE
# 471 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ForestsEdge_Gym_After_Kaelen_2
# 477 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ForestsEdge_Gym_After_Kaelen_3
# 483 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ForestsEdge_Gym_After_Kaelen_4
# 489 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, ForestsEdge_Gym_After_Kaelen_5
# 495 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, ForestsEdge_Gym_After_Kaelen_6
# 501 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, ForestsEdge_Gym_After_Kaelen_7
# 507 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ForestsEdge_Gym_After_Kaelen_8
# 513 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, ForestsEdge_Gym_After_Kaelen_9
ForestsEdge_Gym_After_Kaelen_1:
# 521 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Exit
# 522 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 523 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_KAELEN
# 524 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 525 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 526 "data/maps/ForestsEdge_Gym/scripts.pory"
	releaseall
	end

ForestsEdge_Gym_After_Kaelen_2:
# 472 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 473 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 474 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 475 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 476 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_3, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_3:
# 478 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 479 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 480 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 481 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 482 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_4, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_4:
# 484 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 485 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 486 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 487 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 488 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_5, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_5:
# 490 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 491 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 492 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 493 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 494 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_6, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_6:
# 496 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 497 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 498 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 499 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 500 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_7, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_7:
# 502 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 503 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 504 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 505 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 506 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_8, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_8:
# 508 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 509 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 510 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 511 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 512 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_9, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_9:
# 514 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 515 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 516 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 517 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 518 "data/maps/ForestsEdge_Gym/scripts.pory"
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
	.string "Battles are 4v4 double battles. You will\phave a chance to see your opponent's\nPokemon before selecting\pfrom your own party.$"

ForestsEdgeGym_EventScript_Rules_Text_5:
# 152 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

ForestsEdgeGym_EventScript_Rules_Text_6:
# 153 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "There's a computer to your left for thi\nvery purpose.$"

ForestsEdgeGym_EventScript_Rules_Text_7:
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your party Pokemon.$"

ForestsEdgeGym_EventScript_Rules_Text_8:
# 155 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

ForestsEdgeGym_EventScript_Rules_Text_9:
# 156 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "And, as I mentioned, you will\nhave a chance to select different\pPokemon from your party for the second\nbattle.$"

ForestsEdgeGym_EventScript_Rules_Text_10:
# 158 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Earning a badge will also award yo\npoints toward qualifying for the\pRegional Championship.$"

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
# 219 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Choose your pokemon.$"

ForestsEdge_Gym_After_Morwen_Text_0:
# 312 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

ForestsEdge_Gym_After_Morwen_Text_1:
# 315 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That TM contains Rest.$"

ForestsEdge_Gym_After_Morwen_Text_2:
# 316 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Now you can use sleep to your advantage.$"

ForestsEdge_Gym_After_Kaelen_Text_0:
# 466 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That TM contains Toxic.$"

ForestsEdge_Gym_After_Kaelen_Text_1:
# 467 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Have fun poisoning your opponents.$"

ForestsEdge_Gym_After_Kaelen_Text_2:
# 474 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You got the Venom Badge!$"

ForestsEdge_Gym_After_Kaelen_Text_3:
# 476 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

ForestsEdge_Gym_After_Kaelen_Text_4:
# 482 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

ForestsEdge_Gym_After_Kaelen_Text_5:
# 488 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

ForestsEdge_Gym_After_Kaelen_Text_6:
# 494 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

ForestsEdge_Gym_After_Kaelen_Text_7:
# 500 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

ForestsEdge_Gym_After_Kaelen_Text_8:
# 506 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

ForestsEdge_Gym_After_Kaelen_Text_9:
# 512 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

ForestsEdge_Gym_After_Kaelen_Text_10:
# 518 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Morwen_Intro::
# 571 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "How can you win if you can't move?$"

Morwen_Outro::
# 575 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Morwen::
# 579 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck against Kaelen.$"

Kaelen_Intro::
# 583 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Kaelen_Outro::
# 587 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Kaelen::
# 591 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"

Not_Enough_Mons::
# 595 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You need at least four battle-ready Pokémon.$"
