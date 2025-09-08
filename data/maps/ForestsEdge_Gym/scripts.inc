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
# 251 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_gt ForestsEdge_Gym_EventScript_Morwen_3
	return

ForestsEdge_Gym_EventScript_Morwen_1:
# 191 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SLOWPOKE_GALAR
# 192 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_TOEDSCOOL
# 193 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_EKANS
# 194 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAGNEMITE
# 195 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_SNORLAX
# 196 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_PIKACHU
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
# 246 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 247 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_C2
# 248 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_2:
# 253 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_DONDOZO
# 254 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_URSALUNA
# 255 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_SANDACONDA
# 256 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAGNEZONE
# 257 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_TOEDSCRUEL
# 258 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_RAICHU_ALOLA
# 259 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_12
ForestsEdge_Gym_EventScript_Morwen_11:
# 263 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 264 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 266 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 267 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 268 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 270 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 271 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_18
# 279 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 281 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 282 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 285 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 286 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 289 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Morwen_24
# 298 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 301 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_29
	return

ForestsEdge_Gym_EventScript_Morwen_3:
# 251 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt ForestsEdge_Gym_EventScript_Morwen_2
	return

ForestsEdge_Gym_EventScript_Morwen_8:
# 198 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto ForestsEdge_Gym_EventScript_Morwen_7

ForestsEdge_Gym_EventScript_Morwen_12:
# 260 "data/maps/ForestsEdge_Gym/scripts.pory"
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
# 273 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 274 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 275 "data/maps/ForestsEdge_Gym/scripts.pory"
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
# 291 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 292 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 293 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_26:
# 242 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 243 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_C1
# 244 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_29:
# 302 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 303 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_B1
# 304 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_B1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return


ForestsEdge_Gym_After_Morwen::
# 313 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_Off
# 314 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 315 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 317 "data/maps/ForestsEdge_Gym/scripts.pory"
	giveitem ITEM_TM_REST, 1
# 318 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_1, MSGBOX_AUTOCLOSE
# 319 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_2, MSGBOX_AUTOCLOSE
# 321 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Morwen, MSGBOX_AUTOCLOSE
# 323 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 324 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 326 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement LOCALID_MORWEN, Morwen_Exit
# 327 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 328 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_MORWEN
# 329 "data/maps/ForestsEdge_Gym/scripts.pory"
	removeobject LOCALID_MORWEN
# 331 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 150
# 332 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_KAELEN
# 333 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject 1
# 334 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 335 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Enter
# 336 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 338 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Kaelen
	return


ForestsEdge_Gym_EventScript_Kaelen::
# 342 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_1
# 403 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_gt ForestsEdge_Gym_EventScript_Kaelen_3
	return

ForestsEdge_Gym_EventScript_Kaelen_1:
# 343 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SALANDIT
# 344 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_KOFFING
# 345 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_TREVENANT
# 346 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ARMAROUGE
# 347 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ZUBAT
# 348 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_GRIMER_ALOLA
# 349 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_8
# 352 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
ForestsEdge_Gym_EventScript_Kaelen_7:
# 355 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 356 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 358 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 359 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 360 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 362 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 363 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_15
# 371 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 373 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 374 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 377 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 378 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 381 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Kaelen_21
# 390 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 393 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_26
# 398 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 399 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_C2
# 400 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_2:
# 404 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SALAZZLE
# 405 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WEEZING_GALAR
# 406 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_TREVENANT
# 407 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ARCANINE_HISUI
# 408 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_CROBAT
# 409 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_MUK_ALOLA
# 410 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_12
ForestsEdge_Gym_EventScript_Kaelen_11:
# 414 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 415 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 417 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 418 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 419 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 421 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 422 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_18
# 430 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 432 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 433 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 436 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 437 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 440 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Kaelen_24
# 449 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 452 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_29
	return

ForestsEdge_Gym_EventScript_Kaelen_3:
# 403 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_2
	return

ForestsEdge_Gym_EventScript_Kaelen_8:
# 350 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto ForestsEdge_Gym_EventScript_Kaelen_7

ForestsEdge_Gym_EventScript_Kaelen_12:
# 411 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto ForestsEdge_Gym_EventScript_Kaelen_11

ForestsEdge_Gym_EventScript_Kaelen_15:
# 365 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 366 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 367 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_18:
# 424 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 425 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 426 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_21:
# 383 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 384 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 385 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_24:
# 442 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 443 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 444 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_26:
# 394 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 395 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_C1
# 396 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_29:
# 453 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 454 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_B1
# 455 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_B1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return


ForestsEdge_Gym_After_Kaelen::
# 464 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_Off
# 465 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 466 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 467 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 469 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 471 "data/maps/ForestsEdge_Gym/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 472 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_AUTOCLOSE
# 473 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_1, MSGBOX_AUTOCLOSE
# 475 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Kaelen, MSGBOX_AUTOCLOSE
# 477 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ForestsEdge_Gym_After_Kaelen_2
# 483 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ForestsEdge_Gym_After_Kaelen_3
# 489 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ForestsEdge_Gym_After_Kaelen_4
# 495 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, ForestsEdge_Gym_After_Kaelen_5
# 501 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, ForestsEdge_Gym_After_Kaelen_6
# 507 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, ForestsEdge_Gym_After_Kaelen_7
# 513 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ForestsEdge_Gym_After_Kaelen_8
# 519 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, ForestsEdge_Gym_After_Kaelen_9
ForestsEdge_Gym_After_Kaelen_1:
# 527 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Exit
# 528 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 529 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_KAELEN
# 530 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 531 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 532 "data/maps/ForestsEdge_Gym/scripts.pory"
	releaseall
	end

ForestsEdge_Gym_After_Kaelen_2:
# 478 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 479 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 480 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 481 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 482 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_3, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_3:
# 484 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 485 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 486 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 487 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 488 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_4, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_4:
# 490 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 491 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 492 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 493 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 494 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_5, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_5:
# 496 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 497 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 498 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 499 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 500 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_6, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_6:
# 502 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 503 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 504 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 505 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 506 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_7, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_7:
# 508 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 509 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 510 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 511 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 512 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_8, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_8:
# 514 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 515 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 516 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 517 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 518 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_9, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_9:
# 520 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 521 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 522 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 523 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 524 "data/maps/ForestsEdge_Gym/scripts.pory"
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
	.string "Battles are 4v4 double battles. You will\nhave a chance to see your opponent's\pPokemon before selecting from your\nown party.$"

ForestsEdgeGym_EventScript_Rules_Text_5:
# 152 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

ForestsEdgeGym_EventScript_Rules_Text_6:
# 153 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "There's a computer to your left for this\nvery purpose.$"

ForestsEdgeGym_EventScript_Rules_Text_7:
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your party Pokemon.$"

ForestsEdgeGym_EventScript_Rules_Text_8:
# 155 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

ForestsEdgeGym_EventScript_Rules_Text_9:
# 156 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "And, as I mentioned, you will have a\nchance to select different\pPokemon from your party for the second\nbattle.$"

ForestsEdgeGym_EventScript_Rules_Text_10:
# 158 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Earning a badge will also award you\npoints toward qualifying for the\pRegional Championship.$"

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
# 315 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

ForestsEdge_Gym_After_Morwen_Text_1:
# 318 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That TM contains Rest.$"

ForestsEdge_Gym_After_Morwen_Text_2:
# 319 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Now you can use sleep to your advantage.$"

ForestsEdge_Gym_After_Kaelen_Text_0:
# 472 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That TM contains Toxic.$"

ForestsEdge_Gym_After_Kaelen_Text_1:
# 473 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Have fun poisoning your opponents.$"

ForestsEdge_Gym_After_Kaelen_Text_2:
# 480 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You got the Venom Badge!$"

ForestsEdge_Gym_After_Kaelen_Text_3:
# 482 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

ForestsEdge_Gym_After_Kaelen_Text_4:
# 488 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

ForestsEdge_Gym_After_Kaelen_Text_5:
# 494 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

ForestsEdge_Gym_After_Kaelen_Text_6:
# 500 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

ForestsEdge_Gym_After_Kaelen_Text_7:
# 506 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

ForestsEdge_Gym_After_Kaelen_Text_8:
# 512 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

ForestsEdge_Gym_After_Kaelen_Text_9:
# 518 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

ForestsEdge_Gym_After_Kaelen_Text_10:
# 524 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Morwen_Intro::
# 577 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "How can you win if you can't move?$"

Morwen_Outro::
# 581 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Morwen::
# 585 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck against Kaelen.$"

Kaelen_Intro::
# 589 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Kaelen_Outro::
# 593 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Kaelen::
# 597 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"

Not_Enough_Mons::
# 601 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You need at least four battle-ready Pokémon.$"
