DarkFalls_Gym_MapScripts::
# 2 "data/maps/DarkFalls_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DarkFalls_Gym_OnTransition
	.byte 0


DarkFalls_Gym_OnTransition::
# 6 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_SKYE
# 7 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_SELENE
	end


DarkFalls_Gym_Trigger_Right::
# 12 "data/maps/DarkFalls_Gym/scripts.pory"
	lockall
# 13 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Right
# 14 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
# 15 "data/maps/DarkFalls_Gym/scripts.pory"
	delay 180
# 16 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_SELENE
# 17 "data/maps/DarkFalls_Gym/scripts.pory"
	addobject LOCALID_SELENE
# 18 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement LOCALID_SELENE, Selene_Enter
# 19 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
# 20 "data/maps/DarkFalls_Gym/scripts.pory"
	delay 60
# 21 "data/maps/DarkFalls_Gym/scripts.pory"
	goto DarkFalls_Gym_EventScript_Selene
	return


DarkFalls_Gym_Trigger_Left::
# 25 "data/maps/DarkFalls_Gym/scripts.pory"
	lockall
# 26 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Left
# 27 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
# 28 "data/maps/DarkFalls_Gym/scripts.pory"
	delay 180
# 29 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_SELENE
# 30 "data/maps/DarkFalls_Gym/scripts.pory"
	addobject LOCALID_SELENE
# 31 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement LOCALID_SELENE, Selene_Enter
# 32 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
# 33 "data/maps/DarkFalls_Gym/scripts.pory"
	delay 60
# 34 "data/maps/DarkFalls_Gym/scripts.pory"
	goto DarkFalls_Gym_EventScript_Selene
	return


DarkFalls_Gym_Trigger_One::
# 38 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, DarkFalls_Gym_Trigger_One_1
	return

DarkFalls_Gym_Trigger_One_1:
# 39 "data/maps/DarkFalls_Gym/scripts.pory"
	lockall
# 40 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_One
# 41 "data/maps/DarkFalls_Gym/scripts.pory"
	goto DarkFalls_Gym_EventScript_Rules
	return


DarkFalls_Gym_Trigger_Two::
# 46 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, DarkFalls_Gym_Trigger_Two_1
	return

DarkFalls_Gym_Trigger_Two_1:
# 47 "data/maps/DarkFalls_Gym/scripts.pory"
	lockall
# 48 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Two
# 49 "data/maps/DarkFalls_Gym/scripts.pory"
	goto DarkFalls_Gym_EventScript_Rules
	return


DarkFalls_Gym_Trigger_Three::
# 54 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, DarkFalls_Gym_Trigger_Three_1
	return

DarkFalls_Gym_Trigger_Three_1:
# 55 "data/maps/DarkFalls_Gym/scripts.pory"
	lockall
# 56 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Three
# 57 "data/maps/DarkFalls_Gym/scripts.pory"
	goto DarkFalls_Gym_EventScript_Rules
	return


DarkFalls_Gym_Trigger_Four::
# 62 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, DarkFalls_Gym_Trigger_Four_1
	return

DarkFalls_Gym_Trigger_Four_1:
# 63 "data/maps/DarkFalls_Gym/scripts.pory"
	lockall
# 64 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Four
# 65 "data/maps/DarkFalls_Gym/scripts.pory"
	goto DarkFalls_Gym_EventScript_Rules
	return


# 69 "data/maps/DarkFalls_Gym/scripts.pory"
Selene_Enter:
# 70 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_down
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 71 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 72 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_down
# 72 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_down
# 73 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
	step_end

# 76 "data/maps/DarkFalls_Gym/scripts.pory"
Selene_Exit:
# 77 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 78 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_up
# 78 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_up
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 79 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
# 80 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_up
	step_end

# 83 "data/maps/DarkFalls_Gym/scripts.pory"
Skye_Enter:
# 84 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_down
# 84 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_down
# 84 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_down
# 85 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_right
	step_end

# 88 "data/maps/DarkFalls_Gym/scripts.pory"
Skye_Exit:
# 89 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_left
# 90 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_up
# 90 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_up
# 90 "data/maps/DarkFalls_Gym/scripts.pory"
	walk_up
	step_end

DarkFalls_Gym_EventScript_Rules::
# 94 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, DarkFalls_Gym_EventScript_Rules_2
# 122 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_17, MSGBOX_DEFAULT
# 123 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 124 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 126 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt DarkFalls_Gym_EventScript_Rules_6
# 128 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_lt DarkFalls_Gym_EventScript_Rules_7
# 130 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_gt DarkFalls_Gym_EventScript_Rules_8
DarkFalls_Gym_EventScript_Rules_5:
# 134 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
DarkFalls_Gym_EventScript_Rules_1:
# 137 "data/maps/DarkFalls_Gym/scripts.pory"
	releaseall
	end

DarkFalls_Gym_EventScript_Rules_2:
# 95 "data/maps/DarkFalls_Gym/scripts.pory"
	lockall
# 96 "data/maps/DarkFalls_Gym/scripts.pory"
	faceplayer
# 98 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 100 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 102 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 103 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 105 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 106 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 107 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 108 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 109 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_9, MSGBOX_DEFAULT
# 110 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_10, MSGBOX_DEFAULT
# 112 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 113 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 114 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 115 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_14, MSGBOX_DEFAULT
# 116 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
# 119 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
# 120 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_GYM_RULES
	goto DarkFalls_Gym_EventScript_Rules_1

DarkFalls_Gym_EventScript_Rules_6:
# 127 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_18, MSGBOX_DEFAULT
	goto DarkFalls_Gym_EventScript_Rules_5

DarkFalls_Gym_EventScript_Rules_7:
# 129 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_19, MSGBOX_DEFAULT
	goto DarkFalls_Gym_EventScript_Rules_5

DarkFalls_Gym_EventScript_Rules_8:
# 131 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Rules_Text_20, MSGBOX_DEFAULT
	goto DarkFalls_Gym_EventScript_Rules_5


DarkFalls_Gym_EventScript_Selene::
# 142 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt DarkFalls_Gym_EventScript_Selene_1
# 206 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt DarkFalls_Gym_EventScript_Selene_8
DarkFalls_Gym_EventScript_Selene_6:
# 273 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt DarkFalls_Gym_EventScript_Selene_5
DarkFalls_Gym_EventScript_Selene_4:
# 343 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_URSALUNA
# 344 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_FARIGIRAF
# 345 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_TORKOAL
# 346 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_HATTERENE
# 347 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_INDEEDEE_F
# 348 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_CALYREX_ICE
# 350 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 352 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_1, MSGBOX_DEFAULT
# 355 "data/maps/DarkFalls_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 356 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 357 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 359 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_2, MSGBOX_YESNO
# 360 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkFalls_Gym_EventScript_Selene_29
# 368 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_3, MSGBOX_DEFAULT
# 370 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 371 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 374 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 375 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 378 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DarkFalls_Gym_EventScript_Selene_41
# 387 "data/maps/DarkFalls_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 390 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 391 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_S
# 392 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_S, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Selene_1:
# 145 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_0, MSGBOX_DEFAULT
# 146 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SLOWPOKE_GALAR
# 149 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_GIMMIGHOUL
# 150 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_MUNCHLAX
# 151 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_BRONZOR
# 152 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_HATENNA
# 153 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_DEINO
# 154 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq DarkFalls_Gym_EventScript_Selene_13
# 157 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
DarkFalls_Gym_EventScript_Selene_12:
# 160 "data/maps/DarkFalls_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 161 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 162 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 163 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DarkFalls_Gym_EventScript_Selene_32
# 165 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_2, MSGBOX_YESNO
# 166 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkFalls_Gym_EventScript_Selene_44
# 174 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_3, MSGBOX_DEFAULT
# 176 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 177 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 180 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 181 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 184 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DarkFalls_Gym_EventScript_Selene_53
# 193 "data/maps/DarkFalls_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 196 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq DarkFalls_Gym_EventScript_Selene_65
# 201 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 202 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_C2
# 203 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_C2, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Selene_2:
# 208 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_INDEEDEE_F
# 209 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_HATTREM
# 210 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_PORYGON2
# 211 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_TORKOAL
# 212 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_FARIGIRAF
# 213 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_URSALUNA
# 214 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq DarkFalls_Gym_EventScript_Selene_17
# 216 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq DarkFalls_Gym_EventScript_Selene_18
# 219 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
DarkFalls_Gym_EventScript_Selene_16:
# 222 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_0, MSGBOX_DEFAULT
# 223 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_1, MSGBOX_DEFAULT
# 225 "data/maps/DarkFalls_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 226 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 227 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 229 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_2, MSGBOX_YESNO
# 230 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkFalls_Gym_EventScript_Selene_35
# 238 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_3, MSGBOX_DEFAULT
# 240 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 241 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 244 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 245 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 248 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DarkFalls_Gym_EventScript_Selene_47
# 257 "data/maps/DarkFalls_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 260 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq DarkFalls_Gym_EventScript_Selene_55
# 264 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq DarkFalls_Gym_EventScript_Selene_56
# 269 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 270 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_B3
# 271 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_B3, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Selene_3:
# 275 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_INDEEDEE_F
# 276 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_HATTERENE
# 277 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_PORYGON2
# 278 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_TORKOAL
# 279 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_FARIGIRAF
# 280 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_URSALUNA
# 281 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq DarkFalls_Gym_EventScript_Selene_23
# 283 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq DarkFalls_Gym_EventScript_Selene_24
# 286 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
DarkFalls_Gym_EventScript_Selene_22:
# 290 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_0, MSGBOX_DEFAULT
# 291 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_1, MSGBOX_DEFAULT
# 293 "data/maps/DarkFalls_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 294 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 295 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 297 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_2, MSGBOX_YESNO
# 298 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkFalls_Gym_EventScript_Selene_38
# 306 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_3, MSGBOX_DEFAULT
# 308 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 309 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 312 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 313 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 316 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DarkFalls_Gym_EventScript_Selene_50
# 325 "data/maps/DarkFalls_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 328 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq DarkFalls_Gym_EventScript_Selene_60
# 332 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq DarkFalls_Gym_EventScript_Selene_61
# 337 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 338 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_A3
# 339 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_A3, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Selene_5:
# 273 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt DarkFalls_Gym_EventScript_Selene_3
	goto DarkFalls_Gym_EventScript_Selene_4

DarkFalls_Gym_EventScript_Selene_8:
# 206 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt DarkFalls_Gym_EventScript_Selene_2
	goto DarkFalls_Gym_EventScript_Selene_6

DarkFalls_Gym_EventScript_Selene_13:
# 155 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto DarkFalls_Gym_EventScript_Selene_12

DarkFalls_Gym_EventScript_Selene_17:
# 215 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto DarkFalls_Gym_EventScript_Selene_16

DarkFalls_Gym_EventScript_Selene_18:
# 217 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto DarkFalls_Gym_EventScript_Selene_16

DarkFalls_Gym_EventScript_Selene_23:
# 282 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto DarkFalls_Gym_EventScript_Selene_22

DarkFalls_Gym_EventScript_Selene_24:
# 284 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto DarkFalls_Gym_EventScript_Selene_22

DarkFalls_Gym_EventScript_Selene_29:
# 362 "data/maps/DarkFalls_Gym/scripts.pory"
	closemessage
# 363 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 364 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Selene_32:
	end

DarkFalls_Gym_EventScript_Selene_35:
# 232 "data/maps/DarkFalls_Gym/scripts.pory"
	closemessage
# 233 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 234 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Selene_38:
# 300 "data/maps/DarkFalls_Gym/scripts.pory"
	closemessage
# 301 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 302 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Selene_41:
# 380 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 381 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 382 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Selene_44:
# 168 "data/maps/DarkFalls_Gym/scripts.pory"
	closemessage
# 169 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 170 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Selene_47:
# 250 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 251 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 252 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Selene_50:
# 318 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 319 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 320 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Selene_53:
# 186 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 187 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 188 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Selene_55:
# 261 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 262 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_B1
# 263 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_B1, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Selene_56:
# 265 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 266 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_B2
# 267 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_B2, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Selene_60:
# 329 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 330 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_A1
# 331 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_A1, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Selene_61:
# 333 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 334 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_A2
# 335 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_A2, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Selene_65:
# 197 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 198 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SELENE_C1
# 199 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SELENE_C1, Selene_Intro, Selene_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Selene, NO_MUSIC
	return


DarkFalls_Gym_After_Selene::
# 397 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_Off
# 398 "data/maps/DarkFalls_Gym/scripts.pory"
	special HealPlayerParty
# 399 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Selene_Text_0, MSGBOX_AUTOCLOSE
# 401 "data/maps/DarkFalls_Gym/scripts.pory"
	giveitem ITEM_TM_TRICK_ROOM, 1
# 402 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Selene_Text_1, MSGBOX_AUTOCLOSE
# 403 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Selene_Text_2, MSGBOX_AUTOCLOSE
# 405 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox PostBattle_Selene, MSGBOX_AUTOCLOSE
# 407 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 408 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 410 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement LOCALID_SELENE, Selene_Exit
# 411 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
# 412 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_SELENE
# 413 "data/maps/DarkFalls_Gym/scripts.pory"
	removeobject LOCALID_SELENE
# 415 "data/maps/DarkFalls_Gym/scripts.pory"
	delay 150
# 416 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_SKYE
# 417 "data/maps/DarkFalls_Gym/scripts.pory"
	addobject 1
# 418 "data/maps/DarkFalls_Gym/scripts.pory"
	delay 60
# 419 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement 1, Skye_Enter
# 420 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
# 422 "data/maps/DarkFalls_Gym/scripts.pory"
	goto DarkFalls_Gym_EventScript_Skye
	return


DarkFalls_Gym_EventScript_Skye::
# 426 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt DarkFalls_Gym_EventScript_Skye_1
# 486 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt DarkFalls_Gym_EventScript_Skye_8
DarkFalls_Gym_EventScript_Skye_6:
# 553 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt DarkFalls_Gym_EventScript_Skye_5
DarkFalls_Gym_EventScript_Skye_4:
# 622 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_ZACIAN_CROWNED
# 623 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_FLUTTER_MANE
# 624 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_CHIEN_PAO
# 625 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_CLEFAIRY
# 626 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ROARING_MOON
# 627 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_HYDREIGON
# 629 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 631 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_0, MSGBOX_DEFAULT
# 632 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_1, MSGBOX_DEFAULT
# 634 "data/maps/DarkFalls_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 635 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 636 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 638 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_2, MSGBOX_YESNO
# 639 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkFalls_Gym_EventScript_Skye_29
# 647 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_3, MSGBOX_DEFAULT
# 649 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 650 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 653 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 654 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 657 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DarkFalls_Gym_EventScript_Skye_41
# 666 "data/maps/DarkFalls_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 669 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 670 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_S
# 671 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_S, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Skye_1:
# 427 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_GLISCOR
# 428 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WHIMSICOTT
# 429 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_RUFFLET
# 430 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ELECTRODE_HISUI
# 431 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_HAWLUCHA
# 432 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_JOLTEON
# 433 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq DarkFalls_Gym_EventScript_Skye_13
# 436 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
DarkFalls_Gym_EventScript_Skye_12:
# 439 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_0, MSGBOX_DEFAULT
# 440 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_1, MSGBOX_DEFAULT
# 442 "data/maps/DarkFalls_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 443 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 444 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 446 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_2, MSGBOX_YESNO
# 447 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkFalls_Gym_EventScript_Skye_32
# 455 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_3, MSGBOX_DEFAULT
# 457 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 458 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 461 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 462 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 465 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DarkFalls_Gym_EventScript_Skye_44
# 474 "data/maps/DarkFalls_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 477 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq DarkFalls_Gym_EventScript_Skye_52
# 482 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 483 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_C2
# 484 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_C2, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Skye_2:
# 488 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_GARCHOMP
# 489 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WHIMSICOTT
# 490 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_GRENINJA
# 491 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GARGANACL
# 492 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_GLISCOR
# 493 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_MEOWSCARADA
# 494 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq DarkFalls_Gym_EventScript_Skye_17
# 496 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq DarkFalls_Gym_EventScript_Skye_18
# 499 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
DarkFalls_Gym_EventScript_Skye_16:
# 502 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_0, MSGBOX_DEFAULT
# 503 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_1, MSGBOX_DEFAULT
# 505 "data/maps/DarkFalls_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 506 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 507 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 509 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_2, MSGBOX_YESNO
# 510 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkFalls_Gym_EventScript_Skye_35
# 518 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_3, MSGBOX_DEFAULT
# 520 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 521 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 524 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 525 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 528 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DarkFalls_Gym_EventScript_Skye_47
# 537 "data/maps/DarkFalls_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 540 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq DarkFalls_Gym_EventScript_Skye_55
# 544 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq DarkFalls_Gym_EventScript_Skye_56
# 549 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 550 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_B3
# 551 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_B3, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Skye_3:
# 555 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_DRAGAPULT
# 556 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_NOIVERN
# 557 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_SPECTRIER
# 558 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_BRAVIARY_HISUI
# 559 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_IRON_BUNDLE
# 560 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_HYDREIGON
# 561 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq DarkFalls_Gym_EventScript_Skye_23
# 563 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq DarkFalls_Gym_EventScript_Skye_24
# 566 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
DarkFalls_Gym_EventScript_Skye_22:
# 570 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_0, MSGBOX_DEFAULT
# 571 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_1, MSGBOX_DEFAULT
# 573 "data/maps/DarkFalls_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 574 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 575 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 577 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_2, MSGBOX_YESNO
# 578 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkFalls_Gym_EventScript_Skye_38
# 586 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_EventScript_Selene_Text_3, MSGBOX_DEFAULT
# 588 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 589 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 592 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 593 "data/maps/DarkFalls_Gym/scripts.pory"
	waitstate
# 596 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne DarkFalls_Gym_EventScript_Skye_50
# 605 "data/maps/DarkFalls_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 608 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq DarkFalls_Gym_EventScript_Skye_60
# 612 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq DarkFalls_Gym_EventScript_Skye_61
# 617 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 618 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_A3
# 619 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_A3, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Skye_5:
# 553 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt DarkFalls_Gym_EventScript_Skye_3
	goto DarkFalls_Gym_EventScript_Skye_4

DarkFalls_Gym_EventScript_Skye_8:
# 486 "data/maps/DarkFalls_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt DarkFalls_Gym_EventScript_Skye_2
	goto DarkFalls_Gym_EventScript_Skye_6

DarkFalls_Gym_EventScript_Skye_13:
# 434 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto DarkFalls_Gym_EventScript_Skye_12

DarkFalls_Gym_EventScript_Skye_17:
# 495 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto DarkFalls_Gym_EventScript_Skye_16

DarkFalls_Gym_EventScript_Skye_18:
# 497 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto DarkFalls_Gym_EventScript_Skye_16

DarkFalls_Gym_EventScript_Skye_23:
# 562 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto DarkFalls_Gym_EventScript_Skye_22

DarkFalls_Gym_EventScript_Skye_24:
# 564 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto DarkFalls_Gym_EventScript_Skye_22

DarkFalls_Gym_EventScript_Skye_29:
# 641 "data/maps/DarkFalls_Gym/scripts.pory"
	closemessage
# 642 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 643 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Skye_32:
# 449 "data/maps/DarkFalls_Gym/scripts.pory"
	closemessage
# 450 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 451 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Skye_35:
# 512 "data/maps/DarkFalls_Gym/scripts.pory"
	closemessage
# 513 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 514 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Skye_38:
# 580 "data/maps/DarkFalls_Gym/scripts.pory"
	closemessage
# 581 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 582 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Skye_41:
# 659 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 660 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 661 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Skye_44:
# 467 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 468 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 469 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Skye_47:
# 530 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 531 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 532 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Skye_50:
# 598 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 599 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 600 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
	end

DarkFalls_Gym_EventScript_Skye_52:
# 478 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 479 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_C1
# 480 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_C1, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Skye_55:
# 541 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 542 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_B1
# 543 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_B1, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Skye_56:
# 545 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 546 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_B2
# 547 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_B2, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Skye_60:
# 609 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 610 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_A1
# 611 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_A1, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return

DarkFalls_Gym_EventScript_Skye_61:
# 613 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_On
# 614 "data/maps/DarkFalls_Gym/scripts.pory"
	cleartrainerflag TRAINER_SKYE_A2
# 615 "data/maps/DarkFalls_Gym/scripts.pory"
	trainerbattle_double TRAINER_SKYE_A2, Skye_Intro, Skye_Outro, Not_Enough_Mons, DarkFalls_Gym_After_Skye, NO_MUSIC
	return


DarkFalls_Gym_After_Skye::
# 677 "data/maps/DarkFalls_Gym/scripts.pory"
	special WeightedSelector_Off
# 678 "data/maps/DarkFalls_Gym/scripts.pory"
	special HealPlayerParty
# 679 "data/maps/DarkFalls_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 680 "data/maps/DarkFalls_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 682 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Selene_Text_0, MSGBOX_AUTOCLOSE
# 684 "data/maps/DarkFalls_Gym/scripts.pory"
	giveitem ITEM_TM_TAILWIND, 1
# 685 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_0, MSGBOX_AUTOCLOSE
# 686 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_1, MSGBOX_AUTOCLOSE
# 688 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox PostBattle_Skye, MSGBOX_AUTOCLOSE
# 690 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, DarkFalls_Gym_After_Skye_2
# 696 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DarkFalls_Gym_After_Skye_3
# 702 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, DarkFalls_Gym_After_Skye_4
# 708 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, DarkFalls_Gym_After_Skye_5
# 714 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, DarkFalls_Gym_After_Skye_6
# 720 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, DarkFalls_Gym_After_Skye_7
# 726 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, DarkFalls_Gym_After_Skye_8
# 732 "data/maps/DarkFalls_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, DarkFalls_Gym_After_Skye_9
DarkFalls_Gym_After_Skye_1:
# 740 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement 1, Skye_Exit
# 741 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
# 742 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_SKYE
# 743 "data/maps/DarkFalls_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 744 "data/maps/DarkFalls_Gym/scripts.pory"
	waitmovement 0
# 745 "data/maps/DarkFalls_Gym/scripts.pory"
	releaseall
	end

DarkFalls_Gym_After_Skye_2:
# 691 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 692 "data/maps/DarkFalls_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 693 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_2, MSGBOX_DEFAULT
# 694 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 695 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_3, MSGBOX_DEFAULT
	goto DarkFalls_Gym_After_Skye_1

DarkFalls_Gym_After_Skye_3:
# 697 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 698 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_2, MSGBOX_DEFAULT
# 699 "data/maps/DarkFalls_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 700 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 701 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_4, MSGBOX_DEFAULT
	goto DarkFalls_Gym_After_Skye_1

DarkFalls_Gym_After_Skye_4:
# 703 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 704 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_2, MSGBOX_DEFAULT
# 705 "data/maps/DarkFalls_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 706 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 707 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_5, MSGBOX_DEFAULT
	goto DarkFalls_Gym_After_Skye_1

DarkFalls_Gym_After_Skye_5:
# 709 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 710 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_2, MSGBOX_DEFAULT
# 711 "data/maps/DarkFalls_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 712 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 713 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_6, MSGBOX_DEFAULT
	goto DarkFalls_Gym_After_Skye_1

DarkFalls_Gym_After_Skye_6:
# 715 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 716 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_2, MSGBOX_DEFAULT
# 717 "data/maps/DarkFalls_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 718 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 64
# 719 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_7, MSGBOX_DEFAULT
	goto DarkFalls_Gym_After_Skye_1

DarkFalls_Gym_After_Skye_7:
# 721 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 722 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_2, MSGBOX_DEFAULT
# 723 "data/maps/DarkFalls_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 724 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 725 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_8, MSGBOX_DEFAULT
	goto DarkFalls_Gym_After_Skye_1

DarkFalls_Gym_After_Skye_8:
# 727 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 728 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_2, MSGBOX_DEFAULT
# 729 "data/maps/DarkFalls_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 730 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 731 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_9, MSGBOX_DEFAULT
	goto DarkFalls_Gym_After_Skye_1

DarkFalls_Gym_After_Skye_9:
# 733 "data/maps/DarkFalls_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 734 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_2, MSGBOX_DEFAULT
# 735 "data/maps/DarkFalls_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 736 "data/maps/DarkFalls_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 737 "data/maps/DarkFalls_Gym/scripts.pory"
	msgbox DarkFalls_Gym_After_Skye_Text_10, MSGBOX_DEFAULT
	goto DarkFalls_Gym_After_Skye_1


DarkFalls_Gym_EventScript_Rules_Text_0:
# 98 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explain\nhow Gyms work here in Valora.$"

DarkFalls_Gym_EventScript_Rules_Text_1:
# 100 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in different styles.$"

DarkFalls_Gym_EventScript_Rules_Text_2:
# 101 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "There are no junior trainers in our gyms.$"

DarkFalls_Gym_EventScript_Rules_Text_3:
# 102 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "You must defeat both Leaders to earn\na badge.$"

DarkFalls_Gym_EventScript_Rules_Text_4:
# 103 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "If you lose to either leader, you will\nneed to rebattle both.$"

DarkFalls_Gym_EventScript_Rules_Text_5:
# 105 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Battles are 4v4 double battles. You will\nhave a chance to see your opponent's\pPokemon before selecting from your\nown party.$"

DarkFalls_Gym_EventScript_Rules_Text_6:
# 106 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

DarkFalls_Gym_EventScript_Rules_Text_7:
# 107 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "There's a computer to your left for this\nvery purpose.$"

DarkFalls_Gym_EventScript_Rules_Text_8:
# 108 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Between the battles, you won’t be\nallowed to change your party Pokemon.$"

DarkFalls_Gym_EventScript_Rules_Text_9:
# 109 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

DarkFalls_Gym_EventScript_Rules_Text_10:
# 110 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "And you will be able to select \nnew group of four for the second battle.$"

DarkFalls_Gym_EventScript_Rules_Text_11:
# 112 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Earning a badge will also award you\npoints toward qualifying for the\pRegional Championship.$"

DarkFalls_Gym_EventScript_Rules_Text_12:
# 113 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Your first opponent is Selene.\pHer team slows things down.$"

DarkFalls_Gym_EventScript_Rules_Text_13:
# 114 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Your second opponent is Skye.\pHer team speeds things up.$"

DarkFalls_Gym_EventScript_Rules_Text_14:
# 115 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "You have 0 badges so you are in Tier C.\pYour opponent's will not bring their best\nteams.$"

DarkFalls_Gym_EventScript_Rules_Text_15:
# 116 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

DarkFalls_Gym_EventScript_Rules_Text_16:
# 119 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Good luck!$"

DarkFalls_Gym_EventScript_Rules_Text_17:
# 122 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Welcome, challenger, to the New Hope\nGym!$"

DarkFalls_Gym_EventScript_Rules_Text_18:
# 127 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "You are in Tier C.\pYour opponent's will not bring their best\nteams.$"

DarkFalls_Gym_EventScript_Rules_Text_19:
# 129 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "You are in Tier B.\pYour opponent's will not bring their best\nteams...\pbut they will step up their game.$"

DarkFalls_Gym_EventScript_Rules_Text_20:
# 131 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "You are in Tier A.\pYour opponent's will not pull any punches.$"

DarkFalls_Gym_EventScript_Selene_Text_0:
# 145 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Previewing opponent's team...$"

DarkFalls_Gym_EventScript_Selene_Text_1:
# 146 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Press B when ready to battle.$"

DarkFalls_Gym_EventScript_Selene_Text_2:
# 165 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Are you ready to battle?$"

DarkFalls_Gym_EventScript_Selene_Text_3:
# 174 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Choose your pokemon.$"

DarkFalls_Gym_After_Selene_Text_0:
# 399 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

DarkFalls_Gym_After_Selene_Text_1:
# 402 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "That TM contains Trick Room.$"

DarkFalls_Gym_After_Selene_Text_2:
# 403 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Use it to flip the script on\nfaster opponents.$"

DarkFalls_Gym_After_Skye_Text_0:
# 685 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "That TM contains Tailwind.$"

DarkFalls_Gym_After_Skye_Text_1:
# 686 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "It will give you a speed boost.$"

DarkFalls_Gym_After_Skye_Text_2:
# 693 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "You got the Tempo Badge!$"

DarkFalls_Gym_After_Skye_Text_3:
# 695 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

DarkFalls_Gym_After_Skye_Text_4:
# 701 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

DarkFalls_Gym_After_Skye_Text_5:
# 707 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

DarkFalls_Gym_After_Skye_Text_6:
# 713 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

DarkFalls_Gym_After_Skye_Text_7:
# 719 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Level cap increased to 64.$"

DarkFalls_Gym_After_Skye_Text_8:
# 725 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

DarkFalls_Gym_After_Skye_Text_9:
# 731 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

DarkFalls_Gym_After_Skye_Text_10:
# 737 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

Selene_Intro::
# 749 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "My Pokemon will outcompete yours!$"

Selene_Outro::
# 753 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Selene::
# 757 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Good luck against Skye.$"

Skye_Intro::
# 761 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Skye_Outro::
# 765 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Skye::
# 769 "data/maps/DarkFalls_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"
