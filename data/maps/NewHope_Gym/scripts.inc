NewHope_Gym_MapScripts::
# 2 "data/maps/NewHope_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewHope_Gym_OnTransition
	.byte 0


NewHope_Gym_OnTransition::
# 6 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_RONAN
# 7 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_FREYA
	end


NewHope_Gym_Trigger_Right::
# 12 "data/maps/NewHope_Gym/scripts.pory"
	lockall
# 13 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Right
# 14 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 15 "data/maps/NewHope_Gym/scripts.pory"
	delay 180
# 16 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_FREYA
# 17 "data/maps/NewHope_Gym/scripts.pory"
	addobject LOCALID_FREYA
# 18 "data/maps/NewHope_Gym/scripts.pory"
	applymovement LOCALID_FREYA, Freya_Enter
# 19 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 20 "data/maps/NewHope_Gym/scripts.pory"
	delay 60
# 21 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Freya
	return


NewHope_Gym_Trigger_Left::
# 25 "data/maps/NewHope_Gym/scripts.pory"
	lockall
# 26 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Left
# 27 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 28 "data/maps/NewHope_Gym/scripts.pory"
	delay 180
# 29 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_FREYA
# 30 "data/maps/NewHope_Gym/scripts.pory"
	addobject LOCALID_FREYA
# 31 "data/maps/NewHope_Gym/scripts.pory"
	applymovement LOCALID_FREYA, Freya_Enter
# 32 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 33 "data/maps/NewHope_Gym/scripts.pory"
	delay 60
# 34 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Freya
	return


NewHope_Gym_Trigger_One::
# 38 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, NewHope_Gym_Trigger_One_1
	return

NewHope_Gym_Trigger_One_1:
# 39 "data/maps/NewHope_Gym/scripts.pory"
	lockall
# 40 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_One
# 41 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Rules
	return


NewHope_Gym_Trigger_Two::
# 46 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, NewHope_Gym_Trigger_Two_1
	return

NewHope_Gym_Trigger_Two_1:
# 47 "data/maps/NewHope_Gym/scripts.pory"
	lockall
# 48 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Two
# 49 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Rules
	return


NewHope_Gym_Trigger_Three::
# 54 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, NewHope_Gym_Trigger_Three_1
	return

NewHope_Gym_Trigger_Three_1:
# 55 "data/maps/NewHope_Gym/scripts.pory"
	lockall
# 56 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Three
# 57 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Rules
	return


NewHope_Gym_Trigger_Four::
# 62 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, NewHope_Gym_Trigger_Four_1
	return

NewHope_Gym_Trigger_Four_1:
# 63 "data/maps/NewHope_Gym/scripts.pory"
	lockall
# 64 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Four
# 65 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Rules
	return


# 69 "data/maps/NewHope_Gym/scripts.pory"
Freya_Enter:
# 70 "data/maps/NewHope_Gym/scripts.pory"
	walk_down
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 71 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 72 "data/maps/NewHope_Gym/scripts.pory"
	walk_down
# 72 "data/maps/NewHope_Gym/scripts.pory"
	walk_down
# 73 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
	step_end

# 76 "data/maps/NewHope_Gym/scripts.pory"
Freya_Exit:
# 77 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 78 "data/maps/NewHope_Gym/scripts.pory"
	walk_up
# 78 "data/maps/NewHope_Gym/scripts.pory"
	walk_up
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 79 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
# 80 "data/maps/NewHope_Gym/scripts.pory"
	walk_up
	step_end

# 83 "data/maps/NewHope_Gym/scripts.pory"
Ronan_Enter:
# 84 "data/maps/NewHope_Gym/scripts.pory"
	walk_down
# 84 "data/maps/NewHope_Gym/scripts.pory"
	walk_down
# 84 "data/maps/NewHope_Gym/scripts.pory"
	walk_down
# 85 "data/maps/NewHope_Gym/scripts.pory"
	walk_right
	step_end

# 88 "data/maps/NewHope_Gym/scripts.pory"
Ronan_Exit:
# 89 "data/maps/NewHope_Gym/scripts.pory"
	walk_left
# 90 "data/maps/NewHope_Gym/scripts.pory"
	walk_up
# 90 "data/maps/NewHope_Gym/scripts.pory"
	walk_up
# 90 "data/maps/NewHope_Gym/scripts.pory"
	walk_up
	step_end

NewHope_Gym_EventScript_Rules::
# 94 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, NewHope_Gym_EventScript_Rules_2
# 122 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_17, MSGBOX_DEFAULT
# 123 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 124 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 126 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt NewHope_Gym_EventScript_Rules_6
# 128 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_lt NewHope_Gym_EventScript_Rules_7
# 130 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_gt NewHope_Gym_EventScript_Rules_8
NewHope_Gym_EventScript_Rules_5:
# 134 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
NewHope_Gym_EventScript_Rules_1:
# 137 "data/maps/NewHope_Gym/scripts.pory"
	releaseall
	end

NewHope_Gym_EventScript_Rules_2:
# 95 "data/maps/NewHope_Gym/scripts.pory"
	lockall
# 96 "data/maps/NewHope_Gym/scripts.pory"
	faceplayer
# 98 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 100 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 102 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 103 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 105 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 106 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 107 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 108 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 109 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_9, MSGBOX_DEFAULT
# 110 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_10, MSGBOX_DEFAULT
# 112 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 113 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 114 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 115 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_14, MSGBOX_DEFAULT
# 116 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
# 119 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
# 120 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_GYM_RULES
	goto NewHope_Gym_EventScript_Rules_1

NewHope_Gym_EventScript_Rules_6:
# 127 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_18, MSGBOX_DEFAULT
	goto NewHope_Gym_EventScript_Rules_5

NewHope_Gym_EventScript_Rules_7:
# 129 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_19, MSGBOX_DEFAULT
	goto NewHope_Gym_EventScript_Rules_5

NewHope_Gym_EventScript_Rules_8:
# 131 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_20, MSGBOX_DEFAULT
	goto NewHope_Gym_EventScript_Rules_5


NewHope_Gym_EventScript_Freya::
# 142 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt NewHope_Gym_EventScript_Freya_1
# 206 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt NewHope_Gym_EventScript_Freya_8
NewHope_Gym_EventScript_Freya_6:
# 273 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt NewHope_Gym_EventScript_Freya_5
NewHope_Gym_EventScript_Freya_4:
# 343 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_KINGAMBIT
# 344 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_THUNDURUS
# 345 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_OGERPON
# 346 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_TORNADUS
# 347 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ZAPDOS_GALAR
# 348 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_ARTICUNO_GALAR
# 350 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 352 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 355 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 356 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 357 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 359 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 360 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Freya_29
# 368 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 370 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 371 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 374 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 375 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 378 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Freya_41
# 387 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 390 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 391 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_S
# 392 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_S, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_1:
# 145 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 146 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_PRINPLUP
# 149 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_TRAPINCH
# 150 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_PAWNIARD
# 151 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GOTHITA
# 152 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_MANKEY
# 153 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_WATTREL
# 154 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Freya_13
# 157 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
NewHope_Gym_EventScript_Freya_12:
# 160 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 161 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 162 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 163 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NewHope_Gym_EventScript_Freya_32
# 165 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 166 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Freya_44
# 174 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 176 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 177 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 180 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 181 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 184 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Freya_53
# 193 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 196 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Freya_65
# 201 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 202 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_C2
# 203 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_C2, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_2:
# 208 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_GOTHITELLE
# 209 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_OGERPON
# 210 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_MILOTIC
# 211 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ANNIHILAPE
# 212 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_PAWNIARD
# 213 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_EMPOLEON
# 214 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_Gym_EventScript_Freya_17
# 216 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq NewHope_Gym_EventScript_Freya_18
# 219 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
NewHope_Gym_EventScript_Freya_16:
# 222 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 223 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 225 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 226 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 227 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 229 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 230 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Freya_35
# 238 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 240 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 241 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 244 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 245 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 248 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Freya_47
# 257 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 260 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_Gym_EventScript_Freya_55
# 264 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq NewHope_Gym_EventScript_Freya_56
# 269 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 270 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_B3
# 271 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_B3, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_3:
# 275 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_ANNIHILAPE
# 276 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_MILOTIC
# 277 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_TORNADUS
# 278 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_KINGAMBIT
# 279 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ZAPDOS_GALAR
# 280 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_OGERPON
# 281 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq NewHope_Gym_EventScript_Freya_23
# 283 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq NewHope_Gym_EventScript_Freya_24
# 286 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
NewHope_Gym_EventScript_Freya_22:
# 290 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 291 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 293 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 294 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 295 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 297 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 298 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Freya_38
# 306 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 308 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 309 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 312 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 313 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 316 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Freya_50
# 325 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 328 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq NewHope_Gym_EventScript_Freya_60
# 332 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq NewHope_Gym_EventScript_Freya_61
# 337 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 338 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_A3
# 339 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_A3, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_5:
# 273 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt NewHope_Gym_EventScript_Freya_3
	goto NewHope_Gym_EventScript_Freya_4

NewHope_Gym_EventScript_Freya_8:
# 206 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt NewHope_Gym_EventScript_Freya_2
	goto NewHope_Gym_EventScript_Freya_6

NewHope_Gym_EventScript_Freya_13:
# 155 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto NewHope_Gym_EventScript_Freya_12

NewHope_Gym_EventScript_Freya_17:
# 215 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto NewHope_Gym_EventScript_Freya_16

NewHope_Gym_EventScript_Freya_18:
# 217 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto NewHope_Gym_EventScript_Freya_16

NewHope_Gym_EventScript_Freya_23:
# 282 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto NewHope_Gym_EventScript_Freya_22

NewHope_Gym_EventScript_Freya_24:
# 284 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto NewHope_Gym_EventScript_Freya_22

NewHope_Gym_EventScript_Freya_29:
# 362 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 363 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 364 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_32:
	end

NewHope_Gym_EventScript_Freya_35:
# 232 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 233 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 234 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_38:
# 300 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 301 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 302 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_41:
# 380 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 381 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 382 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_44:
# 168 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 169 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 170 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_47:
# 250 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 251 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 252 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_50:
# 318 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 319 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 320 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_53:
# 186 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 187 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 188 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_55:
# 261 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 262 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_B1
# 263 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_B1, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_56:
# 265 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 266 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_B2
# 267 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_B2, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_60:
# 329 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 330 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_A1
# 331 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_A1, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_61:
# 333 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 334 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_A2
# 335 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_A2, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_65:
# 197 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 198 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_C1
# 199 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_C1, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return


NewHope_Gym_After_Freya::
# 397 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_Off
# 398 "data/maps/NewHope_Gym/scripts.pory"
	special HealPlayerParty
# 399 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_0, MSGBOX_AUTOCLOSE
# 401 "data/maps/NewHope_Gym/scripts.pory"
	giveitem ITEM_TM_NASTY_PLOT, 1
# 402 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_1, MSGBOX_AUTOCLOSE
# 403 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_2, MSGBOX_AUTOCLOSE
# 405 "data/maps/NewHope_Gym/scripts.pory"
	msgbox PostBattle_Freya, MSGBOX_AUTOCLOSE
# 407 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 408 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 410 "data/maps/NewHope_Gym/scripts.pory"
	applymovement LOCALID_FREYA, Freya_Exit
# 411 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 412 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_FREYA
# 413 "data/maps/NewHope_Gym/scripts.pory"
	removeobject LOCALID_FREYA
# 415 "data/maps/NewHope_Gym/scripts.pory"
	delay 150
# 416 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_RONAN
# 417 "data/maps/NewHope_Gym/scripts.pory"
	addobject 1
# 418 "data/maps/NewHope_Gym/scripts.pory"
	delay 60
# 419 "data/maps/NewHope_Gym/scripts.pory"
	applymovement 1, Ronan_Enter
# 420 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 422 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Ronan
	return


NewHope_Gym_EventScript_Ronan::
# 426 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt NewHope_Gym_EventScript_Ronan_1
# 486 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt NewHope_Gym_EventScript_Ronan_8
NewHope_Gym_EventScript_Ronan_6:
# 553 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt NewHope_Gym_EventScript_Ronan_5
NewHope_Gym_EventScript_Ronan_4:
# 622 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_LANDORUS_THERIAN
# 623 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_INCINEROAR
# 624 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_ANNIHILAPE
# 625 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAUSHOLD_FOUR
# 626 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_SALAMENCE
# 627 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_GYARADOS
# 629 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 631 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 632 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 634 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 635 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 636 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 638 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 639 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Ronan_29
# 647 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 649 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 650 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 653 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 654 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 657 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Ronan_41
# 666 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 669 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 670 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_S
# 671 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_S, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_1:
# 427 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_GROWLITHE
# 428 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_SANDILE
# 429 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_STARAVIA
# 430 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_SNUBBULL
# 431 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_MIGHTYENA
# 432 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_HOUNDOUR
# 433 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Ronan_13
# 436 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
NewHope_Gym_EventScript_Ronan_12:
# 439 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 440 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 442 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 443 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 444 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 446 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 447 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Ronan_32
# 455 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 457 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 458 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 461 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 462 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 465 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Ronan_44
# 474 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 477 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Ronan_52
# 482 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 483 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_C2
# 484 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_C2, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_2:
# 488 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_PORYGON2
# 489 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_ARCANINE
# 490 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_GYARADOS
# 491 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAUSHOLD_FOUR
# 492 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ANNIHILAPE
# 493 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_INCINEROAR
# 494 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_Gym_EventScript_Ronan_17
# 496 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq NewHope_Gym_EventScript_Ronan_18
# 499 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
NewHope_Gym_EventScript_Ronan_16:
# 502 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 503 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 505 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 506 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 507 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 509 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 510 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Ronan_35
# 518 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 520 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 521 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 524 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 525 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 528 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Ronan_47
# 537 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 540 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_Gym_EventScript_Ronan_55
# 544 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq NewHope_Gym_EventScript_Ronan_56
# 549 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 550 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_B3
# 551 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_B3, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_3:
# 555 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_LANDORUS_THERIAN
# 556 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_INCINEROAR
# 557 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_ANNIHILAPE
# 558 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAUSHOLD_FOUR
# 559 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_SALAMENCE
# 560 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_GYARADOS
# 561 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq NewHope_Gym_EventScript_Ronan_23
# 563 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq NewHope_Gym_EventScript_Ronan_24
# 566 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
NewHope_Gym_EventScript_Ronan_22:
# 570 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 571 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 573 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 574 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 575 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 577 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 578 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Ronan_38
# 586 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 588 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 589 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 592 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 593 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 596 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Ronan_50
# 605 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 608 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq NewHope_Gym_EventScript_Ronan_60
# 612 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq NewHope_Gym_EventScript_Ronan_61
# 617 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 618 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_A3
# 619 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_A3, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_5:
# 553 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt NewHope_Gym_EventScript_Ronan_3
	goto NewHope_Gym_EventScript_Ronan_4

NewHope_Gym_EventScript_Ronan_8:
# 486 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt NewHope_Gym_EventScript_Ronan_2
	goto NewHope_Gym_EventScript_Ronan_6

NewHope_Gym_EventScript_Ronan_13:
# 434 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto NewHope_Gym_EventScript_Ronan_12

NewHope_Gym_EventScript_Ronan_17:
# 495 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto NewHope_Gym_EventScript_Ronan_16

NewHope_Gym_EventScript_Ronan_18:
# 497 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto NewHope_Gym_EventScript_Ronan_16

NewHope_Gym_EventScript_Ronan_23:
# 562 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto NewHope_Gym_EventScript_Ronan_22

NewHope_Gym_EventScript_Ronan_24:
# 564 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto NewHope_Gym_EventScript_Ronan_22

NewHope_Gym_EventScript_Ronan_29:
# 641 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 642 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 643 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_32:
# 449 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 450 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 451 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_35:
# 512 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 513 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 514 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_38:
# 580 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 581 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 582 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_41:
# 659 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 660 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 661 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_44:
# 467 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 468 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 469 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_47:
# 530 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 531 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 532 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_50:
# 598 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 599 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 600 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_52:
# 478 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 479 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_C1
# 480 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_C1, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_55:
# 541 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 542 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_B1
# 543 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_B1, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_56:
# 545 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 546 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_B2
# 547 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_B2, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_60:
# 609 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 610 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_A1
# 611 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_A1, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_61:
# 613 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 614 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_A2
# 615 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_A2, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return


NewHope_Gym_After_Ronan::
# 677 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_Off
# 678 "data/maps/NewHope_Gym/scripts.pory"
	special HealPlayerParty
# 679 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 680 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 682 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_0, MSGBOX_AUTOCLOSE
# 684 "data/maps/NewHope_Gym/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE, 1
# 685 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_0, MSGBOX_AUTOCLOSE
# 686 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_1, MSGBOX_AUTOCLOSE
# 688 "data/maps/NewHope_Gym/scripts.pory"
	msgbox PostBattle_Ronan, MSGBOX_AUTOCLOSE
# 690 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, NewHope_Gym_After_Ronan_2
# 696 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, NewHope_Gym_After_Ronan_3
# 702 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, NewHope_Gym_After_Ronan_4
# 708 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, NewHope_Gym_After_Ronan_5
# 714 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, NewHope_Gym_After_Ronan_6
# 720 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, NewHope_Gym_After_Ronan_7
# 726 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, NewHope_Gym_After_Ronan_8
# 732 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, NewHope_Gym_After_Ronan_9
NewHope_Gym_After_Ronan_1:
# 740 "data/maps/NewHope_Gym/scripts.pory"
	applymovement 1, Ronan_Exit
# 741 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 742 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_RONAN
# 743 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 744 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 745 "data/maps/NewHope_Gym/scripts.pory"
	releaseall
	end

NewHope_Gym_After_Ronan_2:
# 691 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 692 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 693 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 694 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 695 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_3, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_3:
# 697 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 698 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 699 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 700 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 701 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_4, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_4:
# 703 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 704 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 705 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 706 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 707 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_5, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_5:
# 709 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 710 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 711 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 712 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 713 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_6, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_6:
# 715 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 716 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 717 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 718 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 719 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_7, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_7:
# 721 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 722 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 723 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 724 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 725 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_8, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_8:
# 727 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 728 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 729 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 730 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 731 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_9, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_9:
# 733 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 734 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 735 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 736 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 737 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_10, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1


NewHope_Gym_EventScript_Rules_Text_0:
# 98 "data/maps/NewHope_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explain\nhow Gyms work here in Valora.$"

NewHope_Gym_EventScript_Rules_Text_1:
# 100 "data/maps/NewHope_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in different styles.$"

NewHope_Gym_EventScript_Rules_Text_2:
# 101 "data/maps/NewHope_Gym/scripts.pory"
	.string "There are no junior trainers in our gyms.$"

NewHope_Gym_EventScript_Rules_Text_3:
# 102 "data/maps/NewHope_Gym/scripts.pory"
	.string "You must defeat both Leaders to earn\na badge.$"

NewHope_Gym_EventScript_Rules_Text_4:
# 103 "data/maps/NewHope_Gym/scripts.pory"
	.string "If you lose to either leader, you will\nneed to rebattle both.$"

NewHope_Gym_EventScript_Rules_Text_5:
# 105 "data/maps/NewHope_Gym/scripts.pory"
	.string "Battles are 4v4 double battles. You will\nhave a chance to see your opponent's\pPokemon before selecting from your\nown party.$"

NewHope_Gym_EventScript_Rules_Text_6:
# 106 "data/maps/NewHope_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

NewHope_Gym_EventScript_Rules_Text_7:
# 107 "data/maps/NewHope_Gym/scripts.pory"
	.string "There's a computer to your left for this\nvery purpose.$"

NewHope_Gym_EventScript_Rules_Text_8:
# 108 "data/maps/NewHope_Gym/scripts.pory"
	.string "Between the battles, you won’t be\nallowed to change your party Pokemon.$"

NewHope_Gym_EventScript_Rules_Text_9:
# 109 "data/maps/NewHope_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

NewHope_Gym_EventScript_Rules_Text_10:
# 110 "data/maps/NewHope_Gym/scripts.pory"
	.string "And you will be able to select \nnew group of four for the second battle.$"

NewHope_Gym_EventScript_Rules_Text_11:
# 112 "data/maps/NewHope_Gym/scripts.pory"
	.string "Earning a badge will also award you\npoints toward qualifying for the\pRegional Championship.$"

NewHope_Gym_EventScript_Rules_Text_12:
# 113 "data/maps/NewHope_Gym/scripts.pory"
	.string "Your first opponent is Freya.\pHer team is ultra competitive.$"

NewHope_Gym_EventScript_Rules_Text_13:
# 114 "data/maps/NewHope_Gym/scripts.pory"
	.string "Your second opponent is Ronan.\pHis team intimidates everyone.$"

NewHope_Gym_EventScript_Rules_Text_14:
# 115 "data/maps/NewHope_Gym/scripts.pory"
	.string "You have 0 badges so you are in Tier C.\pYour opponent's will not bring their best\nteams.$"

NewHope_Gym_EventScript_Rules_Text_15:
# 116 "data/maps/NewHope_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

NewHope_Gym_EventScript_Rules_Text_16:
# 119 "data/maps/NewHope_Gym/scripts.pory"
	.string "Good luck!$"

NewHope_Gym_EventScript_Rules_Text_17:
# 122 "data/maps/NewHope_Gym/scripts.pory"
	.string "Welcome, challenger, to the New Hope\nGym!$"

NewHope_Gym_EventScript_Rules_Text_18:
# 127 "data/maps/NewHope_Gym/scripts.pory"
	.string "You are in Tier C.\pYour opponent's will not bring their best\nteams.$"

NewHope_Gym_EventScript_Rules_Text_19:
# 129 "data/maps/NewHope_Gym/scripts.pory"
	.string "You are in Tier B.\pYour opponent's will not bring their best\nteams...\pbut they will step up their game.$"

NewHope_Gym_EventScript_Rules_Text_20:
# 131 "data/maps/NewHope_Gym/scripts.pory"
	.string "You are in Tier A.\pYour opponent's will not pull any punches.$"

NewHope_Gym_EventScript_Freya_Text_0:
# 145 "data/maps/NewHope_Gym/scripts.pory"
	.string "Previewing opponent's team...$"

NewHope_Gym_EventScript_Freya_Text_1:
# 146 "data/maps/NewHope_Gym/scripts.pory"
	.string "Press B when ready to battle.$"

NewHope_Gym_EventScript_Freya_Text_2:
# 165 "data/maps/NewHope_Gym/scripts.pory"
	.string "Are you ready to battle?$"

NewHope_Gym_EventScript_Freya_Text_3:
# 174 "data/maps/NewHope_Gym/scripts.pory"
	.string "Choose your pokemon.$"

NewHope_Gym_After_Freya_Text_0:
# 399 "data/maps/NewHope_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

NewHope_Gym_After_Freya_Text_1:
# 402 "data/maps/NewHope_Gym/scripts.pory"
	.string "That TM contains Nasty Plot.$"

NewHope_Gym_After_Freya_Text_2:
# 403 "data/maps/NewHope_Gym/scripts.pory"
	.string "Use it to boost your own offense.$"

NewHope_Gym_After_Ronan_Text_0:
# 685 "data/maps/NewHope_Gym/scripts.pory"
	.string "That TM contains Swords Dance.$"

NewHope_Gym_After_Ronan_Text_1:
# 686 "data/maps/NewHope_Gym/scripts.pory"
	.string "It will help you recover from Intimidate$"

NewHope_Gym_After_Ronan_Text_2:
# 693 "data/maps/NewHope_Gym/scripts.pory"
	.string "You got the Momentum Badge!$"

NewHope_Gym_After_Ronan_Text_3:
# 695 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

NewHope_Gym_After_Ronan_Text_4:
# 701 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

NewHope_Gym_After_Ronan_Text_5:
# 707 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

NewHope_Gym_After_Ronan_Text_6:
# 713 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

NewHope_Gym_After_Ronan_Text_7:
# 719 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

NewHope_Gym_After_Ronan_Text_8:
# 725 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

NewHope_Gym_After_Ronan_Text_9:
# 731 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

NewHope_Gym_After_Ronan_Text_10:
# 737 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Freya_Intro::
# 749 "data/maps/NewHope_Gym/scripts.pory"
	.string "My Pokemon will outcompete yours!$"

Freya_Outro::
# 753 "data/maps/NewHope_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Freya::
# 757 "data/maps/NewHope_Gym/scripts.pory"
	.string "Good luck against Ronan.$"

Ronan_Intro::
# 761 "data/maps/NewHope_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Ronan_Outro::
# 765 "data/maps/NewHope_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Ronan::
# 769 "data/maps/NewHope_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"
