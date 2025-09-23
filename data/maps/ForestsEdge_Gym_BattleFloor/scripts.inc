# 1 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"

# 2 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
ForestsEdge_Gym_BattleFloor_MapScripts::
# 3 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, ForestsEdge_Gym_BattleFloor_OnTransition
# 4 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ForestsEdge_Gym_BattleFloor_OnFrame
# 5 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.byte 0
# 6 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"

# 7 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
ForestsEdge_Gym_BattleFloor_OnFrame:
# 8 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	map_script_2 GYM_STATE, 0, ForestsEdge_Gym_BattleFloor_1st_Gym_Leader_Enter
# 9 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.2byte 0

ForestsEdge_Gym_BattleFloor_OnTransition::
# 14 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_MORWEN
# 15 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_KAELEN
	end


ForestsEdge_Gym_BattleFloor_1st_Gym_Leader_Enter::
# 22 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	lockall
# 23 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk_to_Podium
# 24 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 26 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Camera_to_Leader_Door
# 28 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 30 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	opendoor 5, 4
# 31 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 33 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addobject LOCALID_MORWEN
# 34 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_MORWEN
# 36 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_MORWEN, Leader_to_Podium
# 37 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Leader_to_Podium
# 38 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 39 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closedoor 5, 4
# 40 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 42 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Back_to_Player
# 43 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 44 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special RemoveCameraObject
# 46 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto ForestsEdge_Gym_BattleFloor_EventScript_Morwen
	end


ForestsEdge_Gym_BattleFloor_2nd_Gym_Leader_Enter::
# 53 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	opendoor 5, 4
# 54 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 56 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addobject LOCALID_KAELEN
# 57 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_KAELEN
# 59 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_KAELEN, Leader_to_Podium
# 60 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Leader_to_Podium
# 61 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 62 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closedoor 5, 4
# 63 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 65 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Back_to_Player
# 66 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 67 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special RemoveCameraObject
# 69 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen
	end


ForestsEdge_Gym_BattleFloor_After_Marin::
# 76 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_Off
# 77 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special HealPlayerParty
# 78 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Marin_Text_0, MSGBOX_AUTOCLOSE
# 80 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox PostBattle_Marin, MSGBOX_AUTOCLOSE
# 82 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_RestorePartyBackup
# 83 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 85 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special SpawnCameraObject
# 86 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Back_to_Leader
# 87 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 89 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_MORWEN, Gym_Leader_Exit_1
# 90 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Gym_Leader_Exit_1
# 91 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 93 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	opendoor 5, 4
# 94 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 96 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Gym_Leader_Exit_2
# 97 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_MORWEN, Gym_Leader_Exit_2
# 98 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 100 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	removeobject LOCALID_MORWEN
# 102 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closedoor 5, 4
# 103 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 105 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	delay 150
# 106 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto ForestsEdge_Gym_BattleFloor_2nd_Gym_Leader_Enter
	return


ForestsEdge_Gym_BattleFloor_EventScript_Morwen::
# 110 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_BattleFloor_EventScript_Morwen_1
# 172 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt ForestsEdge_Gym_BattleFloor_EventScript_Morwen_8
ForestsEdge_Gym_BattleFloor_EventScript_Morwen_6:
# 239 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt ForestsEdge_Gym_BattleFloor_EventScript_Morwen_5
ForestsEdge_Gym_BattleFloor_EventScript_Morwen_4:
# 308 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_BRUTE_BONNET
# 309 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_URSALUNA_BLOODMOON
# 310 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_DONDOZO
# 311 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_DRAGONITE
# 312 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_SANDACONDA
# 313 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_REGIELEKI
# 315 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 317 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 318 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 320 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 321 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 322 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 324 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 325 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_29
# 333 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 335 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 336 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 339 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 340 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 343 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_BattleFloor_EventScript_Morwen_41
# 352 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 355 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 356 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_S
# 357 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_S, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_1:
# 112 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SLOWPOKE_GALAR
# 113 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_TOEDSCOOL
# 114 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_EKANS
# 115 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAGNEMITE
# 116 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_SNORLAX
# 117 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_PIKACHU
# 118 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_13
# 121 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
ForestsEdge_Gym_BattleFloor_EventScript_Morwen_12:
# 124 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 125 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 127 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 128 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 129 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 131 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 132 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_32
# 140 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 142 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 143 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 146 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 147 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 150 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_BattleFloor_EventScript_Morwen_44
# 159 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 162 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_52
# 167 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 168 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_C2
# 169 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_2:
# 174 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_DONDOZO
# 175 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_URSALUNA
# 176 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_SANDACONDA
# 177 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAGNEZONE
# 178 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_TOEDSCRUEL
# 179 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_RAICHU_ALOLA
# 180 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_17
# 182 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_18
# 185 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
ForestsEdge_Gym_BattleFloor_EventScript_Morwen_16:
# 188 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 191 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 192 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 193 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 195 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 196 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_35
# 204 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 206 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 207 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 210 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 211 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 214 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_BattleFloor_EventScript_Morwen_47
# 223 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 226 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_55
# 230 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_56
# 235 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 236 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_B3
# 237 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_B3, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_3:
# 241 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_AMOONGUSS
# 242 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_URSALUNA
# 243 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_SANDACONDA
# 244 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAGNEZONE
# 245 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_TOEDSCRUEL
# 246 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_DRAGONITE
# 247 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_23
# 249 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_24
# 252 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
ForestsEdge_Gym_BattleFloor_EventScript_Morwen_22:
# 256 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 257 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 259 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 260 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 261 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 263 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 264 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_38
# 272 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 274 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 275 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 278 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 279 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 282 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_BattleFloor_EventScript_Morwen_50
# 291 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 294 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_60
# 298 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Morwen_61
# 303 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 304 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_A3
# 305 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_A3, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_5:
# 239 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt ForestsEdge_Gym_BattleFloor_EventScript_Morwen_3
	goto ForestsEdge_Gym_BattleFloor_EventScript_Morwen_4

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_8:
# 172 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt ForestsEdge_Gym_BattleFloor_EventScript_Morwen_2
	goto ForestsEdge_Gym_BattleFloor_EventScript_Morwen_6

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_13:
# 119 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto ForestsEdge_Gym_BattleFloor_EventScript_Morwen_12

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_17:
# 181 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto ForestsEdge_Gym_BattleFloor_EventScript_Morwen_16

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_18:
# 183 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto ForestsEdge_Gym_BattleFloor_EventScript_Morwen_16

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_23:
# 248 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto ForestsEdge_Gym_BattleFloor_EventScript_Morwen_22

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_24:
# 250 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto ForestsEdge_Gym_BattleFloor_EventScript_Morwen_22

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_29:
# 327 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closemessage
# 328 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 329 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_32:
# 134 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closemessage
# 135 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 136 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_35:
# 198 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closemessage
# 199 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 200 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_38:
# 266 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closemessage
# 267 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 268 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_41:
# 345 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 346 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 347 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_44:
# 152 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 153 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 154 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_47:
# 216 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 217 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 218 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_50:
# 284 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 285 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 286 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_52:
# 163 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 164 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_C1
# 165 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_C1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_55:
# 227 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 228 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_B1
# 229 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_B1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_56:
# 231 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 232 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_B2
# 233 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_B2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_60:
# 295 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 296 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_A1
# 297 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_A1, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_61:
# 299 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 300 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MORWEN_A2
# 301 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MORWEN_A2, Morwen_Intro, Morwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Morwen, NO_MUSIC
	return


ForestsEdge_Gym_BattleFloor_EventScript_Kaelen::
# 362 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_1
# 423 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_8
ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_6:
# 490 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_5
ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_4:
# 559 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_HEATRAN
# 560 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_OKIDOGI
# 561 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_HO_OH
# 562 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GOUGING_FIRE
# 563 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_IRON_MOTH
# 564 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_MUNKIDORI
# 566 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 568 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 569 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 571 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 572 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 573 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 575 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 576 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_31
# 584 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 586 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 587 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 590 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 591 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 594 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_43
# 603 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 606 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 607 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_S
# 608 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_S, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_1:
# 363 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SALANDIT
# 364 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_KOFFING
# 365 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_TREVENANT
# 366 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ARMAROUGE
# 367 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ZUBAT
# 368 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_GRIMER_ALOLA
# 369 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_13
# 372 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_12:
# 375 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 376 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 378 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 379 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 380 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 382 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 383 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_34
# 391 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 393 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 394 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 397 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 398 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 401 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_46
# 410 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 413 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_54
# 418 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 419 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_C2
# 420 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_2:
# 424 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_SALAZZLE
# 425 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WEEZING_GALAR
# 426 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_TREVENANT
# 427 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ARCANINE_HISUI
# 428 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_CROBAT
# 429 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_MUK_ALOLA
# 430 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_17
# 432 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_18
# 434 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_19
ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_16:
# 438 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 439 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 441 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 442 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 443 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 445 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 446 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_37
# 454 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 456 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 457 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 460 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 461 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 464 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_49
# 473 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 476 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_57
# 480 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_58
# 484 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_59
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_3:
# 491 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TALONFLAME
# 492 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WEEZING_GALAR
# 493 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_OVERQWIL
# 494 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GLIMMORA
# 495 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ARCANINE_HISUI
# 496 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_DRAGAPULT
# 497 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_24
# 499 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_25
# 501 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 7
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_26
ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_23:
# 505 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0, MSGBOX_DEFAULT
# 506 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1, MSGBOX_DEFAULT
# 508 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 509 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 510 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 512 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2, MSGBOX_YESNO
# 513 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_40
# 521 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3, MSGBOX_DEFAULT
# 523 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 524 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 527 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 528 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitstate
# 531 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_52
# 540 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 543 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_63
# 547 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_64
# 551 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 7
	goto_if_eq ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_65
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_5:
# 490 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_3
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_4

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_8:
# 423 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_2
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_6

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_13:
# 370 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_12

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_17:
# 431 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_16

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_18:
# 433 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_16

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_19:
# 435 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_16

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_24:
# 498 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 61
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_23

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_25:
# 500 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_23

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_26:
# 502 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
	goto ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_23

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_31:
# 578 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closemessage
# 579 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 580 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_34:
# 385 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closemessage
# 386 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 387 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_37:
# 448 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closemessage
# 449 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 450 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_40:
# 515 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closemessage
# 516 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 517 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_43:
# 596 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 597 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 598 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_46:
# 403 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 404 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 405 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_49:
# 466 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 467 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 468 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_52:
# 533 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 534 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 535 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_54:
# 414 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 415 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_C1
# 416 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_C1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_57:
# 477 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 478 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_B1
# 479 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_B1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_58:
# 481 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 482 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_B2
# 483 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_B2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_59:
# 485 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 486 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_B3
# 487 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_B3, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_63:
# 544 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 545 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_A1
# 546 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_A1, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_64:
# 548 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 549 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_A2
# 550 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_A2, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return

ForestsEdge_Gym_BattleFloor_EventScript_Kaelen_65:
# 552 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 553 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_KAELEN_A3
# 554 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_KAELEN_A3, Kaelen_Intro, Kaelen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Kaelen, NO_MUSIC
	return


ForestsEdge_Gym_BattleFloor_After_Solara::
# 615 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_Off
# 616 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special HealPlayerParty
# 617 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special Vgc_RestorePartyBackup
# 618 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 620 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox PostBattle_Solara, MSGBOX_AUTOCLOSE
# 622 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ForestsEdge_Gym_BattleFloor_After_Solara_2
# 628 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ForestsEdge_Gym_BattleFloor_After_Solara_3
# 634 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ForestsEdge_Gym_BattleFloor_After_Solara_4
# 640 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, ForestsEdge_Gym_BattleFloor_After_Solara_5
# 646 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, ForestsEdge_Gym_BattleFloor_After_Solara_6
# 652 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, ForestsEdge_Gym_BattleFloor_After_Solara_7
# 658 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, ForestsEdge_Gym_BattleFloor_After_Solara_8
# 664 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, ForestsEdge_Gym_BattleFloor_After_Solara_9
ForestsEdge_Gym_BattleFloor_After_Solara_1:
# 672 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special SpawnCameraObject
# 673 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_KAELEN, Gym_Leader_Exit_1
# 674 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Gym_Leader_Exit_1
# 675 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 677 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	opendoor 5, 4
# 678 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 680 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Gym_Leader_Exit_2
# 681 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_KAELEN, Gym_Leader_Exit_2
# 682 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 684 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	removeobject LOCALID_KAELEN
# 686 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	closedoor 5, 4
# 687 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitdooranim
# 689 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Back_to_Player_From_Door
# 690 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 691 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	special RemoveCameraObject
# 693 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	releaseall
# 694 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BEAT_FORESTS_EDGE
# 695 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar GYM_STATE, 1
# 696 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_FORESTS_EDGE_GYM_LOBBY, 4
	end

ForestsEdge_Gym_BattleFloor_After_Solara_2:
# 623 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE01_GET
# 624 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 625 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 626 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 627 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_1, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_BattleFloor_After_Solara_1

ForestsEdge_Gym_BattleFloor_After_Solara_3:
# 629 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE02_GET
# 630 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 631 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 632 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 633 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_2, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_BattleFloor_After_Solara_1

ForestsEdge_Gym_BattleFloor_After_Solara_4:
# 635 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE03_GET
# 636 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 637 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 638 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 639 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_3, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_BattleFloor_After_Solara_1

ForestsEdge_Gym_BattleFloor_After_Solara_5:
# 641 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE04_GET
# 642 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 643 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 644 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 645 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_4, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_BattleFloor_After_Solara_1

ForestsEdge_Gym_BattleFloor_After_Solara_6:
# 647 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE05_GET
# 648 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 649 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 650 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 64
# 651 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_5, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_BattleFloor_After_Solara_1

ForestsEdge_Gym_BattleFloor_After_Solara_7:
# 653 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE06_GET
# 654 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 655 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 656 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 657 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_6, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_BattleFloor_After_Solara_1

ForestsEdge_Gym_BattleFloor_After_Solara_8:
# 659 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE07_GET
# 660 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 661 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 662 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 663 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_7, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_BattleFloor_After_Solara_1

ForestsEdge_Gym_BattleFloor_After_Solara_9:
# 665 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE08_GET
# 666 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 667 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 668 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 669 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	msgbox ForestsEdge_Gym_BattleFloor_After_Solara_Text_8, MSGBOX_DEFAULT
	goto ForestsEdge_Gym_BattleFloor_After_Solara_1


ForestsEdge_Gym_BattleFloor_After_Marin_Text_0:
# 78 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Your Pokemon have been healed.$"

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_0:
# 124 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Previewing opponent's team...$"

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_1:
# 125 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Press B when ready to battle.$"

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_2:
# 131 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Are you ready to battle?$"

ForestsEdge_Gym_BattleFloor_EventScript_Morwen_Text_3:
# 140 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Choose your pokemon.$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_0:
# 625 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "You got the Climate Badge!$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_1:
# 627 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 29.$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_2:
# 633 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 41.$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_3:
# 639 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 49.$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_4:
# 645 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 56.$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_5:
# 651 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 64.$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_6:
# 657 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 71.$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_7:
# 663 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 78.$"

ForestsEdge_Gym_BattleFloor_After_Solara_Text_8:
# 669 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 85.$"

Morwen_Intro::
# 702 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "How can you win if you can't move?$"

Morwen_Outro::
# 706 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Morwen::
# 710 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Good luck against Kaelen.$"

Kaelen_Intro::
# 714 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Hope you brought some antidote.$"

Kaelen_Outro::
# 718 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Kaelen::
# 722 "data/maps/ForestsEdge_Gym_BattleFloor/scripts.pory"
	.string "Good luck with the rest of the gyms.$"
