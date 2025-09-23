# 1 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"

# 2 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
PortValor_Gym_BattleFloor_MapScripts::
# 3 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, PortValor_Gym_BattleFloor_OnTransition
# 4 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PortValor_Gym_BattleFloor_OnFrame
# 5 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.byte 0
# 6 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"

# 7 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
PortValor_Gym_BattleFloor_OnFrame:
# 8 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	map_script_2 GYM_STATE, 0, PortValor_Gym_BattleFloor_1st_Gym_Leader_Enter
# 9 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.2byte 0

PortValor_Gym_BattleFloor_OnTransition::
# 14 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_MARIN
# 15 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_SOLARA
	end


PortValor_Gym_BattleFloor_1st_Gym_Leader_Enter::
# 22 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	lockall
# 23 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk_to_Podium
# 24 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 26 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_to_Leader_Door
# 28 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 30 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	opendoor 5, 4
# 31 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 33 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addobject LOCALID_MARIN
# 34 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_MARIN
# 36 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_MARIN, Leader_to_Podium
# 37 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Leader_to_Podium
# 38 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 39 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closedoor 5, 4
# 40 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 42 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Back_to_Player
# 43 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 44 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special RemoveCameraObject
# 46 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto PortValor_Gym_BattleFloor_EventScript_Marin
	end


PortValor_Gym_BattleFloor_2nd_Gym_Leader_Enter::
# 53 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	opendoor 5, 4
# 54 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 56 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addobject LOCALID_SOLARA
# 57 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_SOLARA
# 59 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_SOLARA, Leader_to_Podium
# 60 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Leader_to_Podium
# 61 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 62 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closedoor 5, 4
# 63 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 65 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Back_to_Player
# 66 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 67 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special RemoveCameraObject
# 69 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto PortValor_Gym_BattleFloor_EventScript_Solara
	end


# 76 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Walk_to_Podium:
# 77 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 77 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 77 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 77 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 78 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_left
	step_end

# 81 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Leader_to_Podium:
# 82 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 82 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 82 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 82 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 82 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 83 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_right
	step_end

# 86 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Gym_Leader_Exit_1:
# 87 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_left
# 88 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
# 88 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
# 88 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
# 88 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Gym_Leader_Exit_2:
# 92 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
	step_end

# 95 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Camera_to_Leader_Door:
# 96 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_left
# 96 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_left
# 96 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_left
# 97 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_northwest
# 97 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_northwest
# 97 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_northwest
# 97 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_northwest
# 97 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_northwest
	step_end

# 100 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Back_to_Player:
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_right
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_right
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_right
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_right
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_right
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_right
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_right
	step_end

# 104 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Back_to_Player_From_Door:
# 105 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_right
# 105 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_right
# 105 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_right
# 106 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_southeast
# 106 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_southeast
# 106 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_southeast
# 106 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_southeast
# 106 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_diag_southeast
	step_end

# 109 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Back_to_Leader:
# 110 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_left
# 110 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_left
# 110 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_left
# 110 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_left
# 110 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_left
# 110 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_left
# 110 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_fast_left
	step_end

PortValor_Gym_BattleFloor_After_Marin::
# 116 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_Off
# 117 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special HealPlayerParty
# 118 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Marin_Text_0, MSGBOX_AUTOCLOSE
# 120 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PostBattle_Marin, MSGBOX_AUTOCLOSE
# 122 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_RestorePartyBackup
# 123 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 125 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special SpawnCameraObject
# 126 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Back_to_Leader
# 127 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 129 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_MARIN, Gym_Leader_Exit_1
# 130 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Gym_Leader_Exit_1
# 131 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 133 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	opendoor 5, 4
# 134 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 136 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Gym_Leader_Exit_2
# 137 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_MARIN, Gym_Leader_Exit_2
# 138 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 140 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	removeobject LOCALID_MARIN
# 142 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closedoor 5, 4
# 143 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 145 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	delay 150
# 146 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto PortValor_Gym_BattleFloor_2nd_Gym_Leader_Enter
	return


PortValor_Gym_BattleFloor_EventScript_Marin::
# 150 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Marin_1
# 211 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt PortValor_Gym_BattleFloor_EventScript_Marin_8
PortValor_Gym_BattleFloor_EventScript_Marin_6:
# 276 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt PortValor_Gym_BattleFloor_EventScript_Marin_5
PortValor_Gym_BattleFloor_EventScript_Marin_4:
# 343 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_OGERPON_WELLSPRING
# 344 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_BASCULEGION
# 345 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 346 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_PELIPPER
# 347 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_KYOGRE
# 348 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_RHYPERIOR
# 350 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 352 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 355 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 356 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 357 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 359 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 360 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_29
# 367 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 369 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 370 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 373 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 374 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 377 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Marin_41
# 385 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 388 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 389 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_S
# 390 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_S, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_1:
# 152 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_LAPRAS
# 153 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WINGULL
# 154 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_CUBONE
# 155 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GOLDEEN
# 156 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_BASCULIN
# 157 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_LOMBRE
# 158 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_13
# 161 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
PortValor_Gym_BattleFloor_EventScript_Marin_12:
# 164 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 165 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 167 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 168 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 169 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 171 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 172 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_32
# 180 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 182 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 183 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 186 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 187 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 190 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Marin_44
# 198 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 201 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_52
# 206 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 207 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_C2
# 208 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_C2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_2:
# 213 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TOXICROAK
# 214 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_PELIPPER
# 215 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 216 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAROWAK_ALOLA
# 217 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_LUDICOLO
# 218 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_BASCULEGION
# 219 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_17
# 221 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_18
# 224 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
PortValor_Gym_BattleFloor_EventScript_Marin_16:
# 227 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 228 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 230 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 231 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 232 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 234 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 235 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_35
# 242 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 244 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 245 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 248 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 249 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 252 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Marin_47
# 260 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 263 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_55
# 267 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_56
# 272 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 273 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B3
# 274 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B3, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_3:
# 278 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_OGERPON_WELLSPRING
# 279 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_BASCULEGION
# 280 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 281 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_PELIPPER
# 282 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ARCHALUDON
# 283 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_RHYPERIOR
# 284 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_23
# 286 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_24
# 289 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
PortValor_Gym_BattleFloor_EventScript_Marin_22:
# 293 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 294 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 296 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 297 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 298 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 300 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 301 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_38
# 308 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 310 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 311 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 314 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 315 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 318 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Marin_50
# 326 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 329 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_60
# 333 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_61
# 338 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 339 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A3
# 340 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A3, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_5:
# 276 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Marin_3
	goto PortValor_Gym_BattleFloor_EventScript_Marin_4

PortValor_Gym_BattleFloor_EventScript_Marin_8:
# 211 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Marin_2
	goto PortValor_Gym_BattleFloor_EventScript_Marin_6

PortValor_Gym_BattleFloor_EventScript_Marin_13:
# 159 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto PortValor_Gym_BattleFloor_EventScript_Marin_12

PortValor_Gym_BattleFloor_EventScript_Marin_17:
# 220 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto PortValor_Gym_BattleFloor_EventScript_Marin_16

PortValor_Gym_BattleFloor_EventScript_Marin_18:
# 222 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto PortValor_Gym_BattleFloor_EventScript_Marin_16

PortValor_Gym_BattleFloor_EventScript_Marin_23:
# 285 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto PortValor_Gym_BattleFloor_EventScript_Marin_22

PortValor_Gym_BattleFloor_EventScript_Marin_24:
# 287 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto PortValor_Gym_BattleFloor_EventScript_Marin_22

PortValor_Gym_BattleFloor_EventScript_Marin_29:
# 362 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 363 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Marin_32:
# 173 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 174 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_MARIN
# 175 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	removeobject LOCALID_MARIN
# 176 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Marin_35:
# 237 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 238 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Marin_38:
# 303 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 304 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Marin_41:
# 379 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 380 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Marin_44:
# 192 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 193 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Marin_47:
# 254 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 255 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Marin_50:
# 320 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 321 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Marin_52:
# 202 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 203 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_C1
# 204 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_C1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_55:
# 264 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 265 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B1
# 266 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_56:
# 268 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 269 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B2
# 270 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_60:
# 330 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 331 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A1
# 332 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_61:
# 334 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 335 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A2
# 336 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return


PortValor_Gym_BattleFloor_EventScript_Solara::
# 395 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Solara_1
# 454 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt PortValor_Gym_BattleFloor_EventScript_Solara_8
PortValor_Gym_BattleFloor_EventScript_Solara_6:
# 518 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt PortValor_Gym_BattleFloor_EventScript_Solara_5
PortValor_Gym_BattleFloor_EventScript_Solara_4:
# 585 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TORKOAL
# 586 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_VOLCARONA
# 587 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_OGERPON_HEARTHFLAME
# 588 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_VENUSAUR
# 589 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_GROUDON
# 590 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_CHI_YU
# 592 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 594 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 595 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 597 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 598 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 599 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 601 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 602 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_29
# 609 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 611 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 612 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 615 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 616 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 619 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Solara_41
# 627 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 630 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 631 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_S
# 632 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_S, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_1:
# 396 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_CHARMELEON
# 397 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_CERULEDGE
# 398 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_IVYSAUR
# 399 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GLOOM
# 400 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_VULPIX
# 401 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_SHELLOS
# 402 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_13
# 405 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
PortValor_Gym_BattleFloor_EventScript_Solara_12:
# 408 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 409 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 411 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 412 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 413 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 415 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 416 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_32
# 423 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 425 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 426 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 429 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 430 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 433 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Solara_44
# 441 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 444 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_52
# 449 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 450 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_C2
# 451 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_C2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_2:
# 455 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_CHARIZARD
# 456 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_ARCANINE
# 457 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_VENUSAUR
# 458 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_INCINEROAR
# 459 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_NINETALES
# 460 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_TALONFLAME
# 461 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_17
# 463 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_18
# 466 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
PortValor_Gym_BattleFloor_EventScript_Solara_16:
# 469 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 470 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 472 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 473 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 474 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 476 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 477 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_35
# 484 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 486 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 487 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 490 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 491 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 494 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Solara_47
# 502 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 505 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_55
# 509 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_56
# 514 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 515 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B3
# 516 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B3, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_3:
# 520 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_VENUSAUR
# 521 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_INCINEROAR
# 522 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_CHARIZARD
# 523 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_TORKOAL
# 524 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_VOLCARONA
# 525 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_CHI_YU
# 526 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_23
# 528 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_24
# 531 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
PortValor_Gym_BattleFloor_EventScript_Solara_22:
# 535 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 536 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 538 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 539 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 540 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 542 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 543 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_38
# 550 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 552 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 553 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 556 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 557 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 560 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Solara_50
# 568 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 571 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_60
# 575 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_61
# 580 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 581 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A3
# 582 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A3, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_5:
# 518 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Solara_3
	goto PortValor_Gym_BattleFloor_EventScript_Solara_4

PortValor_Gym_BattleFloor_EventScript_Solara_8:
# 454 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Solara_2
	goto PortValor_Gym_BattleFloor_EventScript_Solara_6

PortValor_Gym_BattleFloor_EventScript_Solara_13:
# 403 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto PortValor_Gym_BattleFloor_EventScript_Solara_12

PortValor_Gym_BattleFloor_EventScript_Solara_17:
# 462 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto PortValor_Gym_BattleFloor_EventScript_Solara_16

PortValor_Gym_BattleFloor_EventScript_Solara_18:
# 464 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto PortValor_Gym_BattleFloor_EventScript_Solara_16

PortValor_Gym_BattleFloor_EventScript_Solara_23:
# 527 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto PortValor_Gym_BattleFloor_EventScript_Solara_22

PortValor_Gym_BattleFloor_EventScript_Solara_24:
# 529 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto PortValor_Gym_BattleFloor_EventScript_Solara_22

PortValor_Gym_BattleFloor_EventScript_Solara_29:
# 604 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 605 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Solara_32:
# 418 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 419 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Solara_35:
# 479 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 480 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Solara_38:
# 545 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 546 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Solara_41:
# 621 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 622 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Solara_44:
# 435 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 436 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Solara_47:
# 496 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 497 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Solara_50:
# 562 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 563 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_EventScript_Solara_52:
# 445 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 446 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_C1
# 447 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_C1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_55:
# 506 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 507 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B1
# 508 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_56:
# 510 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 511 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B2
# 512 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_60:
# 572 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 573 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A1
# 574 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_61:
# 576 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 577 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A2
# 578 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return


PortValor_Gym_BattleFloor_After_Solara::
# 639 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_Off
# 640 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special HealPlayerParty
# 641 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_RestorePartyBackup
# 642 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 644 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PostBattle_Solara, MSGBOX_AUTOCLOSE
# 646 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PortValor_Gym_BattleFloor_After_Solara_2
# 652 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PortValor_Gym_BattleFloor_After_Solara_3
# 658 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PortValor_Gym_BattleFloor_After_Solara_4
# 664 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PortValor_Gym_BattleFloor_After_Solara_5
# 670 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PortValor_Gym_BattleFloor_After_Solara_6
# 676 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PortValor_Gym_BattleFloor_After_Solara_7
# 682 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, PortValor_Gym_BattleFloor_After_Solara_8
# 688 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, PortValor_Gym_BattleFloor_After_Solara_9
PortValor_Gym_BattleFloor_After_Solara_1:
# 696 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special SpawnCameraObject
# 697 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_SOLARA, Gym_Leader_Exit_1
# 698 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Gym_Leader_Exit_1
# 699 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 701 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	opendoor 5, 4
# 702 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 704 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Gym_Leader_Exit_2
# 705 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_SOLARA, Gym_Leader_Exit_2
# 706 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 708 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	removeobject LOCALID_SOLARA
# 710 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closedoor 5, 4
# 711 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 713 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Back_to_Player_From_Door
# 714 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 715 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special RemoveCameraObject
# 717 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	releaseall
# 718 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BEAT_PORT_VALOR
# 719 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar GYM_STATE, 1
# 720 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_After_Solara_2:
# 647 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE01_GET
# 648 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 649 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 650 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 651 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_1, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_3:
# 653 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE02_GET
# 654 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 655 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 656 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 657 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_2, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_4:
# 659 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE03_GET
# 660 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 661 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 662 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 663 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_3, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_5:
# 665 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE04_GET
# 666 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 667 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 668 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 669 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_4, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_6:
# 671 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE05_GET
# 672 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 673 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 674 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 64
# 675 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_5, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_7:
# 677 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE06_GET
# 678 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 679 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 680 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 681 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_6, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_8:
# 683 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE07_GET
# 684 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 685 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 686 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 687 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_7, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_9:
# 689 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE08_GET
# 690 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 691 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 692 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 693 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_8, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1


PortValor_Gym_BattleFloor_After_Marin_Text_0:
# 118 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Your Pokemon have been healed.$"

PortValor_Gym_BattleFloor_EventScript_Marin_Text_0:
# 164 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Previewing opponent's team...$"

PortValor_Gym_BattleFloor_EventScript_Marin_Text_1:
# 165 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Press B when ready to battle.$"

PortValor_Gym_BattleFloor_EventScript_Marin_Text_2:
# 171 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Are you ready to battle?$"

PortValor_Gym_BattleFloor_EventScript_Marin_Text_3:
# 180 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Choose your pokemon.$"

PortValor_Gym_BattleFloor_After_Solara_Text_0:
# 649 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "You got the Climate Badge!$"

PortValor_Gym_BattleFloor_After_Solara_Text_1:
# 651 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 29.$"

PortValor_Gym_BattleFloor_After_Solara_Text_2:
# 657 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 41.$"

PortValor_Gym_BattleFloor_After_Solara_Text_3:
# 663 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 49.$"

PortValor_Gym_BattleFloor_After_Solara_Text_4:
# 669 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 56.$"

PortValor_Gym_BattleFloor_After_Solara_Text_5:
# 675 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 64.$"

PortValor_Gym_BattleFloor_After_Solara_Text_6:
# 681 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 71.$"

PortValor_Gym_BattleFloor_After_Solara_Text_7:
# 687 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 78.$"

PortValor_Gym_BattleFloor_After_Solara_Text_8:
# 693 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 85.$"

Marin_Intro::
# 726 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Prepare for the hurricane!$"

Marin_Outro::
# 730 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "I'm all washed up.$"

PostBattle_Marin::
# 734 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Good luck aginst Solara.$"

Solara_Intro::
# 738 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Enjoy the heat.$"

Solara_Outro::
# 742 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Oh no! I'm cooked!$"

PostBattle_Solara::
# 746 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Good luck with the rest of the gyms.$"

Not_Enough_Mons::
# 751 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "You need at least four battle-ready Pokémon.$"
