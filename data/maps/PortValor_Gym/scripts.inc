PortValor_Gym_MapScripts::
# 2 "data/maps/PortValor_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PortValor_Gym_OnTransition
	.byte 0


PortValor_Gym_OnTransition::
# 6 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_MARIN
# 7 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_SOLARA
	end


PortValor_Gym_Trigger_Right::
# 13 "data/maps/PortValor_Gym/scripts.pory"
	lockall
# 14 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Right
# 15 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 16 "data/maps/PortValor_Gym/scripts.pory"
	delay 180
# 17 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_MARIN
# 18 "data/maps/PortValor_Gym/scripts.pory"
	addobject LOCALID_MARIN
# 19 "data/maps/PortValor_Gym/scripts.pory"
	applymovement LOCALID_MARIN, Marin_Enter
# 20 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 21 "data/maps/PortValor_Gym/scripts.pory"
	delay 60
# 22 "data/maps/PortValor_Gym/scripts.pory"
	goto PortValor_Gym_EventScript_Marin
	return


PortValor_Gym_Trigger_Left::
# 26 "data/maps/PortValor_Gym/scripts.pory"
	lockall
# 27 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Enter_Gym_Left
# 28 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 29 "data/maps/PortValor_Gym/scripts.pory"
	delay 180
# 30 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_MARIN
# 31 "data/maps/PortValor_Gym/scripts.pory"
	addobject LOCALID_MARIN
# 32 "data/maps/PortValor_Gym/scripts.pory"
	applymovement LOCALID_MARIN, Marin_Enter
# 33 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 34 "data/maps/PortValor_Gym/scripts.pory"
	delay 60
# 35 "data/maps/PortValor_Gym/scripts.pory"
	goto PortValor_Gym_EventScript_Marin
	return


PortValor_Gym_Trigger_One::
# 39 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Trigger_One_1
	return

PortValor_Gym_Trigger_One_1:
# 40 "data/maps/PortValor_Gym/scripts.pory"
	lockall
# 41 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_One
# 42 "data/maps/PortValor_Gym/scripts.pory"
	goto PortValor_Gym_EventScript_Rules
	return


PortValor_Gym_Trigger_Two::
# 47 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Trigger_Two_1
	return

PortValor_Gym_Trigger_Two_1:
# 48 "data/maps/PortValor_Gym/scripts.pory"
	lockall
# 49 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Two
# 50 "data/maps/PortValor_Gym/scripts.pory"
	goto PortValor_Gym_EventScript_Rules
	return


PortValor_Gym_Trigger_Three::
# 55 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Trigger_Three_1
	return

PortValor_Gym_Trigger_Three_1:
# 56 "data/maps/PortValor_Gym/scripts.pory"
	lockall
# 57 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Three
# 58 "data/maps/PortValor_Gym/scripts.pory"
	goto PortValor_Gym_EventScript_Rules
	return


PortValor_Gym_Trigger_Four::
# 63 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_Trigger_Four_1
	return

PortValor_Gym_Trigger_Four_1:
# 64 "data/maps/PortValor_Gym/scripts.pory"
	lockall
# 65 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Gym_Rules_Four
# 66 "data/maps/PortValor_Gym/scripts.pory"
	goto PortValor_Gym_EventScript_Rules
	return


# 70 "data/maps/PortValor_Gym/scripts.pory"
Marin_Enter:
# 71 "data/maps/PortValor_Gym/scripts.pory"
	walk_down
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 72 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 73 "data/maps/PortValor_Gym/scripts.pory"
	walk_down
# 73 "data/maps/PortValor_Gym/scripts.pory"
	walk_down
# 74 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/PortValor_Gym/scripts.pory"
Marin_Exit:
# 78 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 79 "data/maps/PortValor_Gym/scripts.pory"
	walk_up
# 79 "data/maps/PortValor_Gym/scripts.pory"
	walk_up
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 80 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
# 81 "data/maps/PortValor_Gym/scripts.pory"
	walk_up
	step_end

# 84 "data/maps/PortValor_Gym/scripts.pory"
Solara_Enter:
# 85 "data/maps/PortValor_Gym/scripts.pory"
	walk_down
# 85 "data/maps/PortValor_Gym/scripts.pory"
	walk_down
# 85 "data/maps/PortValor_Gym/scripts.pory"
	walk_down
# 86 "data/maps/PortValor_Gym/scripts.pory"
	walk_right
	step_end

# 89 "data/maps/PortValor_Gym/scripts.pory"
Solara_Exit:
# 90 "data/maps/PortValor_Gym/scripts.pory"
	walk_left
# 91 "data/maps/PortValor_Gym/scripts.pory"
	walk_up
# 91 "data/maps/PortValor_Gym/scripts.pory"
	walk_up
# 91 "data/maps/PortValor_Gym/scripts.pory"
	walk_up
	step_end

PortValor_Gym_EventScript_Rules::
# 96 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_GYM_RULES, PortValor_Gym_EventScript_Rules_2
# 124 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_17, MSGBOX_DEFAULT
# 125 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 126 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 128 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_EventScript_Rules_6
# 130 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_lt PortValor_Gym_EventScript_Rules_7
# 132 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_gt PortValor_Gym_EventScript_Rules_8
PortValor_Gym_EventScript_Rules_5:
# 136 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
PortValor_Gym_EventScript_Rules_1:
# 139 "data/maps/PortValor_Gym/scripts.pory"
	releaseall
	end

PortValor_Gym_EventScript_Rules_2:
# 97 "data/maps/PortValor_Gym/scripts.pory"
	lockall
# 98 "data/maps/PortValor_Gym/scripts.pory"
	faceplayer
# 100 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 102 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 103 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 104 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 105 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 107 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 108 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 109 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 110 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 111 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_9, MSGBOX_DEFAULT
# 112 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_10, MSGBOX_DEFAULT
# 114 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 115 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 116 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 117 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_14, MSGBOX_DEFAULT
# 118 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
# 121 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
# 122 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_GYM_RULES
	goto PortValor_Gym_EventScript_Rules_1

PortValor_Gym_EventScript_Rules_6:
# 129 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_18, MSGBOX_DEFAULT
	goto PortValor_Gym_EventScript_Rules_5

PortValor_Gym_EventScript_Rules_7:
# 131 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_19, MSGBOX_DEFAULT
	goto PortValor_Gym_EventScript_Rules_5

PortValor_Gym_EventScript_Rules_8:
# 133 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_20, MSGBOX_DEFAULT
	goto PortValor_Gym_EventScript_Rules_5


PortValor_Gym_EventScript_Marin::
# 145 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_EventScript_Marin_1
# 208 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt PortValor_Gym_EventScript_Marin_8
PortValor_Gym_EventScript_Marin_6:
# 275 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt PortValor_Gym_EventScript_Marin_5
PortValor_Gym_EventScript_Marin_4:
# 344 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_OGERPON_WELLSPRING
# 345 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_BASCULEGION
# 346 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 347 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_PELIPPER
# 348 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_KYOGRE
# 349 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_RHYPERIOR
# 351 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 353 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 354 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 356 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 357 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 358 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 360 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 361 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Marin_29
# 369 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 371 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 372 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 375 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 376 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 379 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Marin_41
# 388 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 391 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 392 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_S
# 393 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_S, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_1:
# 147 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_LAPRAS
# 148 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WINGULL
# 149 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_CUBONE
# 150 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GOLDEEN
# 151 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_BASCULIN
# 152 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_LOMBRE
# 153 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Marin_13
# 156 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
PortValor_Gym_EventScript_Marin_12:
# 159 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 160 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 163 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 164 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 166 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 167 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Marin_32
# 176 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 178 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 179 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 182 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 183 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 186 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Marin_44
# 195 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 198 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Marin_52
# 203 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 204 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_C2
# 205 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_C2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_2:
# 210 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TOXICROAK
# 211 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_PELIPPER
# 212 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 213 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAROWAK_ALOLA
# 214 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_LUDICOLO
# 215 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_BASCULEGION
# 216 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_EventScript_Marin_17
# 218 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_EventScript_Marin_18
# 221 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
PortValor_Gym_EventScript_Marin_16:
# 224 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 225 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 227 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 228 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 229 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 231 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 232 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Marin_35
# 240 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 242 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 243 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 246 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 247 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 250 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Marin_47
# 259 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 262 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_EventScript_Marin_55
# 266 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_EventScript_Marin_56
# 271 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 272 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B3
# 273 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B3, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_3:
# 277 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_OGERPON_WELLSPRING
# 278 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_BASCULEGION
# 279 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 280 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_PELIPPER
# 281 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ARCHALUDON
# 282 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_RHYPERIOR
# 283 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_EventScript_Marin_23
# 285 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_EventScript_Marin_24
# 288 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
PortValor_Gym_EventScript_Marin_22:
# 292 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 293 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 295 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 296 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 297 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 299 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 300 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Marin_38
# 308 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 310 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 311 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 314 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 315 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 318 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Marin_50
# 327 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 330 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_EventScript_Marin_60
# 334 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_EventScript_Marin_61
# 339 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 340 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A3
# 341 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A3, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_5:
# 275 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt PortValor_Gym_EventScript_Marin_3
	goto PortValor_Gym_EventScript_Marin_4

PortValor_Gym_EventScript_Marin_8:
# 208 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt PortValor_Gym_EventScript_Marin_2
	goto PortValor_Gym_EventScript_Marin_6

PortValor_Gym_EventScript_Marin_13:
# 154 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto PortValor_Gym_EventScript_Marin_12

PortValor_Gym_EventScript_Marin_17:
# 217 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto PortValor_Gym_EventScript_Marin_16

PortValor_Gym_EventScript_Marin_18:
# 219 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto PortValor_Gym_EventScript_Marin_16

PortValor_Gym_EventScript_Marin_23:
# 284 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto PortValor_Gym_EventScript_Marin_22

PortValor_Gym_EventScript_Marin_24:
# 286 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto PortValor_Gym_EventScript_Marin_22

PortValor_Gym_EventScript_Marin_29:
# 363 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 364 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 365 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_32:
# 168 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 169 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 170 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 171 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_MARIN
# 172 "data/maps/PortValor_Gym/scripts.pory"
	removeobject LOCALID_MARIN
	end

PortValor_Gym_EventScript_Marin_35:
# 234 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 235 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 236 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_38:
# 302 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 303 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 304 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_41:
# 381 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 382 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 383 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_44:
# 188 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 189 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 190 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_47:
# 252 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 253 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 254 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_50:
# 320 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 321 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 322 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_52:
# 199 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 200 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_C1
# 201 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_C1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_55:
# 263 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 264 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B1
# 265 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_56:
# 267 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 268 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B2
# 269 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_60:
# 331 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 332 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A1
# 333 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_61:
# 335 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 336 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A2
# 337 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return


PortValor_Gym_After_Marin::
# 399 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_Off
# 400 "data/maps/PortValor_Gym/scripts.pory"
	special HealPlayerParty
# 401 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Marin_Text_0, MSGBOX_AUTOCLOSE
# 403 "data/maps/PortValor_Gym/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE, 1
# 404 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Marin_Text_1, MSGBOX_AUTOCLOSE
# 405 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Marin_Text_2, MSGBOX_AUTOCLOSE
# 407 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PostBattle_Marin, MSGBOX_AUTOCLOSE
# 409 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 410 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 412 "data/maps/PortValor_Gym/scripts.pory"
	applymovement LOCALID_MARIN, Marin_Exit
# 413 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 414 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_MARIN
# 415 "data/maps/PortValor_Gym/scripts.pory"
	removeobject LOCALID_MARIN
# 417 "data/maps/PortValor_Gym/scripts.pory"
	delay 150
# 418 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_SOLARA
# 419 "data/maps/PortValor_Gym/scripts.pory"
	addobject LOCALID_SOLARA
# 420 "data/maps/PortValor_Gym/scripts.pory"
	delay 60
# 421 "data/maps/PortValor_Gym/scripts.pory"
	applymovement LOCALID_SOLARA, Solara_Enter
# 422 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 424 "data/maps/PortValor_Gym/scripts.pory"
	goto PortValor_Gym_EventScript_Solara
	return


PortValor_Gym_EventScript_Solara::
# 428 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_EventScript_Solara_1
# 489 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt PortValor_Gym_EventScript_Solara_8
PortValor_Gym_EventScript_Solara_6:
# 555 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt PortValor_Gym_EventScript_Solara_5
PortValor_Gym_EventScript_Solara_4:
# 624 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TORKOAL
# 625 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_VOLCARONA
# 626 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_OGERPON_HEARTHFLAME
# 627 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_VENUSAUR
# 628 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_GROUDON
# 629 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_CHI_YU
# 631 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 633 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 634 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 636 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 637 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 638 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 640 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 641 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Solara_29
# 649 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 651 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 652 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 655 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 656 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 659 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Solara_41
# 668 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 671 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 672 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_S
# 673 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_S, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_1:
# 429 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_CHARMELEON
# 430 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_CERULEDGE
# 431 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_IVYSAUR
# 432 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GLOOM
# 433 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_VULPIX
# 434 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_SHELLOS
# 435 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Solara_13
# 438 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
PortValor_Gym_EventScript_Solara_12:
# 441 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 442 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 444 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 445 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 446 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 448 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 449 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Solara_32
# 457 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 459 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 460 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 463 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 464 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 467 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Solara_44
# 476 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 479 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Solara_52
# 484 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 485 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_C2
# 486 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_C2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_2:
# 490 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_CHARIZARD
# 491 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_ARCANINE
# 492 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_VENUSAUR
# 493 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_INCINEROAR
# 494 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_NINETALES
# 495 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_TALONFLAME
# 496 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_EventScript_Solara_17
# 498 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_EventScript_Solara_18
# 501 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
PortValor_Gym_EventScript_Solara_16:
# 504 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 505 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 507 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 508 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 509 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 511 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 512 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Solara_35
# 520 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 522 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 523 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 526 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 527 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 530 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Solara_47
# 539 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 542 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_EventScript_Solara_55
# 546 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_EventScript_Solara_56
# 551 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 552 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B3
# 553 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B3, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_3:
# 557 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_VENUSAUR
# 558 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_INCINEROAR
# 559 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_CHARIZARD
# 560 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_TORKOAL
# 561 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_VOLCARONA
# 562 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_CHI_YU
# 563 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_EventScript_Solara_23
# 565 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_EventScript_Solara_24
# 568 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
PortValor_Gym_EventScript_Solara_22:
# 572 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 573 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 575 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 576 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 577 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 579 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 580 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Solara_38
# 588 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 590 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 591 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 594 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 595 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 598 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Solara_50
# 607 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 610 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_EventScript_Solara_60
# 614 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_EventScript_Solara_61
# 619 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 620 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A3
# 621 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A3, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_5:
# 555 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt PortValor_Gym_EventScript_Solara_3
	goto PortValor_Gym_EventScript_Solara_4

PortValor_Gym_EventScript_Solara_8:
# 489 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt PortValor_Gym_EventScript_Solara_2
	goto PortValor_Gym_EventScript_Solara_6

PortValor_Gym_EventScript_Solara_13:
# 436 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto PortValor_Gym_EventScript_Solara_12

PortValor_Gym_EventScript_Solara_17:
# 497 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto PortValor_Gym_EventScript_Solara_16

PortValor_Gym_EventScript_Solara_18:
# 499 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto PortValor_Gym_EventScript_Solara_16

PortValor_Gym_EventScript_Solara_23:
# 564 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto PortValor_Gym_EventScript_Solara_22

PortValor_Gym_EventScript_Solara_24:
# 566 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto PortValor_Gym_EventScript_Solara_22

PortValor_Gym_EventScript_Solara_29:
# 643 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 644 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 645 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_32:
# 451 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 452 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 453 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_35:
# 514 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 515 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 516 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_38:
# 582 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 583 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 584 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_41:
# 661 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 662 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 663 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_44:
# 469 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 470 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 471 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_47:
# 532 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 533 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 534 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_50:
# 600 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 601 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 602 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_52:
# 480 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 481 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_C1
# 482 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_C1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_55:
# 543 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 544 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B1
# 545 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_56:
# 547 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 548 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B2
# 549 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_60:
# 611 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 612 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A1
# 613 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_61:
# 615 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 616 "data/maps/PortValor_Gym/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A2
# 617 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return


PortValor_Gym_After_Solara::
# 678 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_Off
# 679 "data/maps/PortValor_Gym/scripts.pory"
	special HealPlayerParty
# 680 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 681 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 683 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Marin_Text_0, MSGBOX_AUTOCLOSE
# 685 "data/maps/PortValor_Gym/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY, 1
# 686 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_0, MSGBOX_AUTOCLOSE
# 687 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_1, MSGBOX_AUTOCLOSE
# 689 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PostBattle_Solara, MSGBOX_AUTOCLOSE
# 691 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PortValor_Gym_After_Solara_2
# 697 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PortValor_Gym_After_Solara_3
# 703 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PortValor_Gym_After_Solara_4
# 709 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PortValor_Gym_After_Solara_5
# 715 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PortValor_Gym_After_Solara_6
# 721 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PortValor_Gym_After_Solara_7
# 727 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, PortValor_Gym_After_Solara_8
# 733 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, PortValor_Gym_After_Solara_9
PortValor_Gym_After_Solara_1:
# 741 "data/maps/PortValor_Gym/scripts.pory"
	applymovement LOCALID_SOLARA, Solara_Exit
# 742 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 743 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_SOLARA
# 744 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 745 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 746 "data/maps/PortValor_Gym/scripts.pory"
	releaseall
	end

PortValor_Gym_After_Solara_2:
# 692 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 693 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 694 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 695 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 696 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_3, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_3:
# 698 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 699 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 700 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 701 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 702 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_4, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_4:
# 704 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 705 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 706 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 707 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 708 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_5, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_5:
# 710 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 711 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 712 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 713 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 714 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_6, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_6:
# 716 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 717 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 718 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 719 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 720 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_7, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_7:
# 722 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 723 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 724 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 725 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 726 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_8, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_8:
# 728 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 729 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 730 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 731 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 732 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_9, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_9:
# 734 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 735 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 736 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 737 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 738 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_10, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1


PortValor_Gym_EventScript_Rules_Text_0:
# 100 "data/maps/PortValor_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explain\nhow Gyms work here in Valora.$"

PortValor_Gym_EventScript_Rules_Text_1:
# 102 "data/maps/PortValor_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in different styles.$"

PortValor_Gym_EventScript_Rules_Text_2:
# 103 "data/maps/PortValor_Gym/scripts.pory"
	.string "There are no junior trainers in our gyms.$"

PortValor_Gym_EventScript_Rules_Text_3:
# 104 "data/maps/PortValor_Gym/scripts.pory"
	.string "You must defeat both Leaders to earn\na badge.$"

PortValor_Gym_EventScript_Rules_Text_4:
# 105 "data/maps/PortValor_Gym/scripts.pory"
	.string "If you lose to either leader, you will\nneed to rebattle both.$"

PortValor_Gym_EventScript_Rules_Text_5:
# 107 "data/maps/PortValor_Gym/scripts.pory"
	.string "Battles are 4v4 double battles. You will\nhave a chance to see your opponent's\pPokemon before selecting from your\nown party.$"

PortValor_Gym_EventScript_Rules_Text_6:
# 108 "data/maps/PortValor_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

PortValor_Gym_EventScript_Rules_Text_7:
# 109 "data/maps/PortValor_Gym/scripts.pory"
	.string "There's a computer to your left for this\nvery purpose.$"

PortValor_Gym_EventScript_Rules_Text_8:
# 110 "data/maps/PortValor_Gym/scripts.pory"
	.string "Between the battles, you won’t be\nallowed to change your party Pokemon.$"

PortValor_Gym_EventScript_Rules_Text_9:
# 111 "data/maps/PortValor_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

PortValor_Gym_EventScript_Rules_Text_10:
# 112 "data/maps/PortValor_Gym/scripts.pory"
	.string "And you will be able to select \nnew group of four for the second battle.$"

PortValor_Gym_EventScript_Rules_Text_11:
# 114 "data/maps/PortValor_Gym/scripts.pory"
	.string "Earning a badge will also award you\npoints toward qualifying for the\pRegional Championship.$"

PortValor_Gym_EventScript_Rules_Text_12:
# 115 "data/maps/PortValor_Gym/scripts.pory"
	.string "Your first opponent is Marin.\pBetter bring your swim trunks for him.$"

PortValor_Gym_EventScript_Rules_Text_13:
# 116 "data/maps/PortValor_Gym/scripts.pory"
	.string "Your second opponent is Solara.\pYou'll want sunscreen for her.$"

PortValor_Gym_EventScript_Rules_Text_14:
# 117 "data/maps/PortValor_Gym/scripts.pory"
	.string "You have 0 badges so you are in Tier C.\pYour opponent's will not bring their best\nteams.$"

PortValor_Gym_EventScript_Rules_Text_15:
# 118 "data/maps/PortValor_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

PortValor_Gym_EventScript_Rules_Text_16:
# 121 "data/maps/PortValor_Gym/scripts.pory"
	.string "Good luck!$"

PortValor_Gym_EventScript_Rules_Text_17:
# 124 "data/maps/PortValor_Gym/scripts.pory"
	.string "Welcome, challenger, to the Forest's Edge\nGym!$"

PortValor_Gym_EventScript_Rules_Text_18:
# 129 "data/maps/PortValor_Gym/scripts.pory"
	.string "You are in Tier C.\pYour opponent's will not bring their best\nteams.$"

PortValor_Gym_EventScript_Rules_Text_19:
# 131 "data/maps/PortValor_Gym/scripts.pory"
	.string "You are in Tier B.\pYour opponent's will not bring their best\nteams...\pbut they will step up their game.$"

PortValor_Gym_EventScript_Rules_Text_20:
# 133 "data/maps/PortValor_Gym/scripts.pory"
	.string "You are in Tier A.\pYour opponent's will not pull any punches.$"

PortValor_Gym_EventScript_Marin_Text_0:
# 159 "data/maps/PortValor_Gym/scripts.pory"
	.string "Previewing opponent's team...$"

PortValor_Gym_EventScript_Marin_Text_1:
# 160 "data/maps/PortValor_Gym/scripts.pory"
	.string "Press B when ready to battle.$"

PortValor_Gym_EventScript_Marin_Text_2:
# 166 "data/maps/PortValor_Gym/scripts.pory"
	.string "Are you ready to battle?$"

PortValor_Gym_EventScript_Marin_Text_3:
# 176 "data/maps/PortValor_Gym/scripts.pory"
	.string "Choose your pokemon.$"

PortValor_Gym_After_Marin_Text_0:
# 401 "data/maps/PortValor_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

PortValor_Gym_After_Marin_Text_1:
# 404 "data/maps/PortValor_Gym/scripts.pory"
	.string "That TM contains Rain Dance.$"

PortValor_Gym_After_Marin_Text_2:
# 405 "data/maps/PortValor_Gym/scripts.pory"
	.string "Now you can use rain to your advantage.$"

PortValor_Gym_After_Solara_Text_0:
# 686 "data/maps/PortValor_Gym/scripts.pory"
	.string "That TM contains Sunny Day.$"

PortValor_Gym_After_Solara_Text_1:
# 687 "data/maps/PortValor_Gym/scripts.pory"
	.string "You'll be able to scorch your \nenemies now.$"

PortValor_Gym_After_Solara_Text_2:
# 694 "data/maps/PortValor_Gym/scripts.pory"
	.string "You got the Climate Badge!$"

PortValor_Gym_After_Solara_Text_3:
# 696 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

PortValor_Gym_After_Solara_Text_4:
# 702 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

PortValor_Gym_After_Solara_Text_5:
# 708 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

PortValor_Gym_After_Solara_Text_6:
# 714 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

PortValor_Gym_After_Solara_Text_7:
# 720 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

PortValor_Gym_After_Solara_Text_8:
# 726 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

PortValor_Gym_After_Solara_Text_9:
# 732 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

PortValor_Gym_After_Solara_Text_10:
# 738 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Marin_Intro::
# 791 "data/maps/PortValor_Gym/scripts.pory"
	.string "Prepare for the hurricane!$"

Marin_Outro::
# 795 "data/maps/PortValor_Gym/scripts.pory"
	.string "I'm all washed up.$"

PostBattle_Marin::
# 799 "data/maps/PortValor_Gym/scripts.pory"
	.string "Good luck aginst Solara.$"

Solara_Intro::
# 803 "data/maps/PortValor_Gym/scripts.pory"
	.string "Enjoy the heat.$"

Solara_Outro::
# 807 "data/maps/PortValor_Gym/scripts.pory"
	.string "Oh no! I'm cooked!$"

PostBattle_Solara::
# 811 "data/maps/PortValor_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"
