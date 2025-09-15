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
# 12 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 13 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Right
# 14 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 15 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 180
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_MORWEN
# 17 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject LOCALID_MORWEN
# 18 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement LOCALID_MORWEN, Morwen_Enter
# 19 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 21 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Morwen
	return


# 24 "data/maps/ForestsEdge_Gym/scripts.pory"
Enter_Gym_Right:
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 28 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
	step_end

ForestsEdge_Gym_Trigger_Left::
# 32 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 33 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Left
# 34 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 35 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 180
# 36 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_MORWEN
# 37 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject LOCALID_MORWEN
# 38 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement LOCALID_MORWEN, Morwen_Enter
# 39 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 40 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 41 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Morwen
	return


# 44 "data/maps/ForestsEdge_Gym/scripts.pory"
Enter_Gym_Left:
# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
	step_end

ForestsEdge_Gym_Trigger_One::
# 52 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Trigger_One_1
	return

ForestsEdge_Gym_Trigger_One_1:
# 53 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 54 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_One
# 55 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdgeGym_EventScript_Rules
	return


ForestsEdge_Gym_Trigger_Two::
# 60 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Trigger_Two_1
	return

ForestsEdge_Gym_Trigger_Two_1:
# 61 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 62 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Two
# 63 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdgeGym_EventScript_Rules
	return


ForestsEdge_Gym_Trigger_Three::
# 68 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Trigger_Three_1
	return

ForestsEdge_Gym_Trigger_Three_1:
# 69 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 70 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Three
# 71 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdgeGym_EventScript_Rules
	return


ForestsEdge_Gym_Trigger_Four::
# 76 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdge_Gym_Trigger_Four_1
	return

ForestsEdge_Gym_Trigger_Four_1:
# 77 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 78 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Four
# 79 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdgeGym_EventScript_Rules
	return


# 83 "data/maps/ForestsEdge_Gym/scripts.pory"
Exit_Gym:
# 84 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 85 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 85 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 85 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 85 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
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
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
	step_end

# 90 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_One:
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
# 93 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 96 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Two:
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
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 102 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Three:
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
# 105 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 108 "data/maps/ForestsEdge_Gym/scripts.pory"
Gym_Rules_Four:
# 109 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
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
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	face_up
	step_end

# 114 "data/maps/ForestsEdge_Gym/scripts.pory"
Morwen_Enter:
# 115 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 117 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
	step_end

# 121 "data/maps/ForestsEdge_Gym/scripts.pory"
Morwen_Exit:
# 122 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 123 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 123 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
	step_end

# 128 "data/maps/ForestsEdge_Gym/scripts.pory"
Kaelen_Enter:
# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_down
# 130 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_right
	step_end

# 133 "data/maps/ForestsEdge_Gym/scripts.pory"
Kaelen_Exit:
# 134 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_left
# 135 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 135 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
# 135 "data/maps/ForestsEdge_Gym/scripts.pory"
	walk_up
	step_end

ForestsEdgeGym_EventScript_Rules::
# 140 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, ForestsEdgeGym_EventScript_Rules_2
# 168 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_17, MSGBOX_DEFAULT
# 169 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 170 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
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
	msgbox ForestsEdgeGym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
ForestsEdgeGym_EventScript_Rules_1:
# 183 "data/maps/ForestsEdge_Gym/scripts.pory"
	releaseall
	end

ForestsEdgeGym_EventScript_Rules_2:
# 141 "data/maps/ForestsEdge_Gym/scripts.pory"
	lockall
# 142 "data/maps/ForestsEdge_Gym/scripts.pory"
	faceplayer
# 144 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 146 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 147 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 148 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 149 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 151 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 152 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 153 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 155 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_9, MSGBOX_DEFAULT
# 156 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_10, MSGBOX_DEFAULT
# 158 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 159 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 160 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 161 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_14, MSGBOX_DEFAULT
# 162 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
# 165 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
# 166 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_GYM_RULES
	goto ForestsEdgeGym_EventScript_Rules_1

ForestsEdgeGym_EventScript_Rules_6:
# 173 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_18, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5

ForestsEdgeGym_EventScript_Rules_7:
# 175 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_19, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5

ForestsEdgeGym_EventScript_Rules_8:
# 177 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_20, MSGBOX_DEFAULT
	goto ForestsEdgeGym_EventScript_Rules_5


ForestsEdge_Gym_EventScript_Morwen::
# 189 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_EventScript_Morwen_1
# 251 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt ForestsEdge_Gym_EventScript_Morwen_8
ForestsEdge_Gym_EventScript_Morwen_6:
# 318 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt ForestsEdge_Gym_EventScript_Morwen_5
ForestsEdge_Gym_EventScript_Morwen_4:
# 387 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_BRUTE_BONNET
# 388 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_URSALUNA_BLOODMOON
# 389 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_DONDOZO
# 390 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_DRAGONITE
# 391 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_SANDACONDA
# 392 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_REGIELEKI
# 394 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 396 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 397 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 399 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 400 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 401 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 403 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 404 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_29
# 412 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 414 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 415 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 418 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 419 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 422 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Morwen_41
# 431 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 434 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 435 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_S
# 436 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_S, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
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
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_13
# 200 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
ForestsEdge_Gym_EventScript_Morwen_12:
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
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_32
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
	goto_if_ne ForestsEdge_Gym_EventScript_Morwen_44
# 238 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 241 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_52
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
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_17
# 261 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_18
# 264 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
ForestsEdge_Gym_EventScript_Morwen_16:
# 267 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 268 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 270 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 271 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 272 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 274 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 275 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_35
# 283 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 285 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 286 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 289 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 290 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 293 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Morwen_47
# 302 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 305 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_55
# 309 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_56
# 314 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 315 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_B3
# 316 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_B3, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_3:
# 320 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_AMOONGUSS
# 321 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_URSALUNA
# 322 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_SANDACONDA
# 323 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAGNEZONE
# 324 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_TOEDSCRUEL
# 325 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_DRAGONITE
# 326 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_23
# 328 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_24
# 331 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
ForestsEdge_Gym_EventScript_Morwen_22:
# 335 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 336 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 338 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 339 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 340 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 342 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 343 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_38
# 351 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 353 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 354 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 357 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 358 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 361 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Morwen_50
# 370 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 373 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_60
# 377 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq ForestsEdge_Gym_EventScript_Morwen_61
# 382 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 383 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_A3
# 384 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_A3, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_5:
# 318 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt ForestsEdge_Gym_EventScript_Morwen_3
	goto ForestsEdge_Gym_EventScript_Morwen_4

ForestsEdge_Gym_EventScript_Morwen_8:
# 251 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt ForestsEdge_Gym_EventScript_Morwen_2
	goto ForestsEdge_Gym_EventScript_Morwen_6

ForestsEdge_Gym_EventScript_Morwen_13:
# 198 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto ForestsEdge_Gym_EventScript_Morwen_12

ForestsEdge_Gym_EventScript_Morwen_17:
# 260 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto ForestsEdge_Gym_EventScript_Morwen_16

ForestsEdge_Gym_EventScript_Morwen_18:
# 262 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto ForestsEdge_Gym_EventScript_Morwen_16

ForestsEdge_Gym_EventScript_Morwen_23:
# 327 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto ForestsEdge_Gym_EventScript_Morwen_22

ForestsEdge_Gym_EventScript_Morwen_24:
# 329 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto ForestsEdge_Gym_EventScript_Morwen_22

ForestsEdge_Gym_EventScript_Morwen_29:
# 406 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 407 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 408 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_32:
# 213 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 214 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 215 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_35:
# 277 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 278 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 279 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_38:
# 345 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 346 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 347 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_41:
# 424 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 425 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 426 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_44:
# 231 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 232 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 233 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_47:
# 295 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 296 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 297 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_50:
# 363 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 364 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 365 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Morwen_52:
# 242 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 243 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_C1
# 244 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_55:
# 306 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 307 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_B1
# 308 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_B1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_56:
# 310 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 311 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_B2
# 312 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_B2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_60:
# 374 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 375 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_A1
# 376 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_A1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Morwen_61:
# 378 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 379 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_A2
# 380 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_A2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return


ForestsEdge_Gym_After_Morwen::
# 442 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_Off
# 443 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 444 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 446 "data/maps/ForestsEdge_Gym/scripts.pory"
	giveitem ITEM_TM_TAUNT, 1
# 447 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_1, MSGBOX_AUTOCLOSE
# 448 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_2, MSGBOX_AUTOCLOSE
# 450 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Morwen, MSGBOX_AUTOCLOSE
# 452 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 453 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 455 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement LOCALID_MORWEN, Morwen_Exit
# 456 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 457 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_MORWEN
# 458 "data/maps/ForestsEdge_Gym/scripts.pory"
	removeobject LOCALID_MORWEN
# 460 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 150
# 461 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_KAELEN
# 462 "data/maps/ForestsEdge_Gym/scripts.pory"
	addobject 1
# 463 "data/maps/ForestsEdge_Gym/scripts.pory"
	delay 60
# 464 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Enter
# 465 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 467 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto ForestsEdge_Gym_EventScript_Kaelen
	return


ForestsEdge_Gym_EventScript_Kaelen::
# 471 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_1
# 532 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt ForestsEdge_Gym_EventScript_Kaelen_8
ForestsEdge_Gym_EventScript_Kaelen_6:
# 599 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt ForestsEdge_Gym_EventScript_Kaelen_5
ForestsEdge_Gym_EventScript_Kaelen_4:
# 668 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_HEATRAN
# 669 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_OKIDOGI
# 670 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_HO_OH
# 671 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GOUGING_FIRE
# 672 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_IRON_MOTH
# 673 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_MUNKIDORI
# 675 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 677 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 678 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 680 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 681 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 682 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 684 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 685 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_31
# 693 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 695 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 696 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 699 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 700 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 703 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Kaelen_43
# 712 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 715 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 716 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_S
# 717 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_S, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_1:
# 472 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SALANDIT
# 473 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_KOFFING
# 474 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_TREVENANT
# 475 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ARMAROUGE
# 476 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ZUBAT
# 477 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_GRIMER_ALOLA
# 478 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_13
# 481 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
ForestsEdge_Gym_EventScript_Kaelen_12:
# 484 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 485 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 487 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 488 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 489 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 491 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 492 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_34
# 500 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 502 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 503 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 506 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 507 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 510 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Kaelen_46
# 519 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 522 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_54
# 527 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 528 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_C2
# 529 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_2:
# 533 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SALAZZLE
# 534 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WEEZING_GALAR
# 535 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_TREVENANT
# 536 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ARCANINE_HISUI
# 537 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_CROBAT
# 538 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_MUK_ALOLA
# 539 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_17
# 541 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_18
# 543 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_19
ForestsEdge_Gym_EventScript_Kaelen_16:
# 547 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 548 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 550 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 551 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 552 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 554 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 555 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_37
# 563 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 565 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 566 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 569 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 570 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 573 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Kaelen_49
# 582 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 585 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_57
# 589 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_58
# 593 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_59
	return

ForestsEdge_Gym_EventScript_Kaelen_3:
# 600 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TALONFLAME
# 601 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WEEZING_GALAR
# 602 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_OVERQWIL
# 603 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GLIMMORA
# 604 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ARCANINE_HISUI
# 605 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_DRAGAPULT
# 606 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_24
# 608 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_25
# 610 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 7
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_26
ForestsEdge_Gym_EventScript_Kaelen_23:
# 614 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 615 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 617 "data/maps/ForestsEdge_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 618 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 619 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 621 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 622 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_40
# 630 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 632 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 633 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 636 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 637 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 640 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_EventScript_Kaelen_52
# 649 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 652 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_63
# 656 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_64
# 660 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 7
	goto_if_eq ForestsEdge_Gym_EventScript_Kaelen_65
	return

ForestsEdge_Gym_EventScript_Kaelen_5:
# 599 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_3
	goto ForestsEdge_Gym_EventScript_Kaelen_4

ForestsEdge_Gym_EventScript_Kaelen_8:
# 532 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt ForestsEdge_Gym_EventScript_Kaelen_2
	goto ForestsEdge_Gym_EventScript_Kaelen_6

ForestsEdge_Gym_EventScript_Kaelen_13:
# 479 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto ForestsEdge_Gym_EventScript_Kaelen_12

ForestsEdge_Gym_EventScript_Kaelen_17:
# 540 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto ForestsEdge_Gym_EventScript_Kaelen_16

ForestsEdge_Gym_EventScript_Kaelen_18:
# 542 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto ForestsEdge_Gym_EventScript_Kaelen_16

ForestsEdge_Gym_EventScript_Kaelen_19:
# 544 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
	goto ForestsEdge_Gym_EventScript_Kaelen_16

ForestsEdge_Gym_EventScript_Kaelen_24:
# 607 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 61
	goto ForestsEdge_Gym_EventScript_Kaelen_23

ForestsEdge_Gym_EventScript_Kaelen_25:
# 609 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto ForestsEdge_Gym_EventScript_Kaelen_23

ForestsEdge_Gym_EventScript_Kaelen_26:
# 611 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
	goto ForestsEdge_Gym_EventScript_Kaelen_23

ForestsEdge_Gym_EventScript_Kaelen_31:
# 687 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 688 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 689 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_34:
# 494 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 495 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 496 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_37:
# 557 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 558 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 559 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_40:
# 624 "data/maps/ForestsEdge_Gym/scripts.pory"
	closemessage
# 625 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 626 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_43:
# 705 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 706 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 707 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_46:
# 512 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 513 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 514 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_49:
# 575 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 576 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 577 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_52:
# 642 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 643 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 644 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_EventScript_Kaelen_54:
# 523 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 524 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_C1
# 525 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_57:
# 586 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 587 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_B1
# 588 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_B1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_58:
# 590 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 591 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_B2
# 592 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_B2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_59:
# 594 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 595 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_B3
# 596 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_B3, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_63:
# 653 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 654 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_A1
# 655 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_A1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_64:
# 657 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 658 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_A2
# 659 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_A2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_EventScript_Kaelen_65:
# 661 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_On
# 662 "data/maps/ForestsEdge_Gym/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_A3
# 663 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_A3, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return


ForestsEdge_Gym_After_Kaelen::
# 723 "data/maps/ForestsEdge_Gym/scripts.pory"
	special WeightedSelector_Off
# 724 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 725 "data/maps/ForestsEdge_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 726 "data/maps/ForestsEdge_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 728 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Morwen_Text_0, MSGBOX_AUTOCLOSE
# 730 "data/maps/ForestsEdge_Gym/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 731 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_0, MSGBOX_AUTOCLOSE
# 732 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_1, MSGBOX_AUTOCLOSE
# 734 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Kaelen, MSGBOX_AUTOCLOSE
# 736 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ForestsEdge_Gym_After_Kaelen_2
# 742 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ForestsEdge_Gym_After_Kaelen_3
# 748 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ForestsEdge_Gym_After_Kaelen_4
# 754 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, ForestsEdge_Gym_After_Kaelen_5
# 760 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, ForestsEdge_Gym_After_Kaelen_6
# 766 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, ForestsEdge_Gym_After_Kaelen_7
# 772 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ForestsEdge_Gym_After_Kaelen_8
# 778 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, ForestsEdge_Gym_After_Kaelen_9
ForestsEdge_Gym_After_Kaelen_1:
# 786 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement 1, Kaelen_Exit
# 787 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 788 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_KAELEN
# 789 "data/maps/ForestsEdge_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 790 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmovement 0
# 791 "data/maps/ForestsEdge_Gym/scripts.pory"
	releaseall
	end

ForestsEdge_Gym_After_Kaelen_2:
# 737 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 738 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 739 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 740 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 741 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_3, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_3:
# 743 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 744 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 745 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 746 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 747 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_4, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_4:
# 749 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 750 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 751 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 752 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 753 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_5, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_5:
# 755 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 756 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 757 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 758 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 759 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_6, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_6:
# 761 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 762 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 763 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 764 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 765 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_7, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_7:
# 767 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 768 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 769 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 770 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 771 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_8, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_8:
# 773 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 774 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 775 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 776 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 777 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_9, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1

ForestsEdge_Gym_After_Kaelen_9:
# 779 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 780 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_2, MSGBOX_DEFAULT
# 781 "data/maps/ForestsEdge_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 782 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 783 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdge_Gym_After_Kaelen_Text_10, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_After_Kaelen_1


ForestsEdgeGym_EventScript_Rules_Text_0:
# 144 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explain\nhow Gyms work here in Valora.$"

ForestsEdgeGym_EventScript_Rules_Text_1:
# 146 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in different styles.$"

ForestsEdgeGym_EventScript_Rules_Text_2:
# 147 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "There are no junior trainers in our gyms.$"

ForestsEdgeGym_EventScript_Rules_Text_3:
# 148 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You must defeat both Leaders to earn\na badge.$"

ForestsEdgeGym_EventScript_Rules_Text_4:
# 149 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "If you lose to either leader, you will\nneed to rebattle both.$"

ForestsEdgeGym_EventScript_Rules_Text_5:
# 151 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Battles are 4v4 double battles. You will\nhave a chance to see your opponent's\pPokemon before selecting from your\nown party.$"

ForestsEdgeGym_EventScript_Rules_Text_6:
# 152 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

ForestsEdgeGym_EventScript_Rules_Text_7:
# 153 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "There's a computer to your left for this\nvery purpose.$"

ForestsEdgeGym_EventScript_Rules_Text_8:
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Between the battles, you won’t be\nallowed to change your party Pokemon.$"

ForestsEdgeGym_EventScript_Rules_Text_9:
# 155 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

ForestsEdgeGym_EventScript_Rules_Text_10:
# 156 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "And you will be able to select \nnew group of four for the second battle.$"

ForestsEdgeGym_EventScript_Rules_Text_11:
# 158 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Earning a badge will also award you\npoints toward qualifying for the\pRegional Championship.$"

ForestsEdgeGym_EventScript_Rules_Text_12:
# 159 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your first opponent is Morwen.\pShe specializes in sleep and paralysis.$"

ForestsEdgeGym_EventScript_Rules_Text_13:
# 160 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your second opponent is Kaelen.\pHe specializes in poison and burns.$"

ForestsEdgeGym_EventScript_Rules_Text_14:
# 161 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You have 0 badges so you are in Tier C.\pYour opponent's will not bring their best\nteams.$"

ForestsEdgeGym_EventScript_Rules_Text_15:
# 162 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

ForestsEdgeGym_EventScript_Rules_Text_16:
# 165 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck!$"

ForestsEdgeGym_EventScript_Rules_Text_17:
# 168 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Welcome, challenger, to the Forest's Edge\nGym!$"

ForestsEdgeGym_EventScript_Rules_Text_18:
# 173 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are in Tier C.\pYour opponent's will not bring their best\nteams.$"

ForestsEdgeGym_EventScript_Rules_Text_19:
# 175 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are in Tier B.\pYour opponent's will not bring their best\nteams...\pbut they will step up their game.$"

ForestsEdgeGym_EventScript_Rules_Text_20:
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
# 444 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

ForestsEdge_Gym_After_Morwen_Text_1:
# 447 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That TM contains Taunt.$"

ForestsEdge_Gym_After_Morwen_Text_2:
# 448 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That will help you avoid getting\nput to sleep in the future.$"

ForestsEdge_Gym_After_Kaelen_Text_0:
# 731 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "That TM contains Toxic.$"

ForestsEdge_Gym_After_Kaelen_Text_1:
# 732 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Have fun poisoning your opponents.$"

ForestsEdge_Gym_After_Kaelen_Text_2:
# 739 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You got the Venom Badge!$"

ForestsEdge_Gym_After_Kaelen_Text_3:
# 741 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

ForestsEdge_Gym_After_Kaelen_Text_4:
# 747 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

ForestsEdge_Gym_After_Kaelen_Text_5:
# 753 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

ForestsEdge_Gym_After_Kaelen_Text_6:
# 759 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

ForestsEdge_Gym_After_Kaelen_Text_7:
# 765 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

ForestsEdge_Gym_After_Kaelen_Text_8:
# 771 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

ForestsEdge_Gym_After_Kaelen_Text_9:
# 777 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

ForestsEdge_Gym_After_Kaelen_Text_10:
# 783 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Morwen_Intro::
# 836 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "How can you win if you can't move?$"

Morwen_Outro::
# 840 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Morwen::
# 844 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck against Kaelen.$"

Kaelen_Intro::
# 848 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Kaelen_Outro::
# 852 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Kaelen::
# 856 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"

Not_Enough_Mons::
# 860 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You need at least four battle-ready Pokémon.$"
