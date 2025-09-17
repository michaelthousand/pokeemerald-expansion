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
	map_script_2 GYM_STATE, 0, Gym_BattleFloor_1st_Gym_Leader_Enter
# 9 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.2byte 0

PortValor_Gym_BattleFloor_OnTransition::
# 14 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_MARIN
# 15 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_SOLARA
	end


Gym_BattleFloor_1st_Gym_Leader_Enter::
# 22 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	lockall
# 23 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk_to_Podium_Middle
# 24 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 25 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	delay 180
# 26 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addobject LOCALID_MARIN
# 27 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_MARIN
# 28 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_MARIN, Leader_to_Podium
# 29 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 30 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	delay 60
# 31 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto PortValor_Gym_BattleFloor_EventScript_Marin
	end


Gym_BattleFloor_2nd_Gym_Leader_Enter::
# 38 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addobject LOCALID_SOLARA
# 39 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_SOLARA
# 40 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_SOLARA, Leader_to_Podium
# 41 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 42 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	delay 60
# 43 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto PortValor_Gym_EventScript_Solara
	return


# 49 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Leader_to_Podium:
# 50 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 50 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 50 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 50 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 50 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_down
# 51 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
Gym_Leader_Exit:
# 55 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_left
# 56 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
# 56 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
# 56 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
# 56 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
# 56 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	walk_up
	step_end

PortValor_Gym_BattleFloor_After_Marin::
# 62 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_Off
# 63 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special HealPlayerParty
# 64 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Marin_Text_0, MSGBOX_AUTOCLOSE
# 66 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PostBattle_Marin, MSGBOX_AUTOCLOSE
# 68 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_RestorePartyBackup
# 69 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 71 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_MARIN, Gym_Leader_Exit
# 72 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 73 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	removeobject LOCALID_MARIN
# 75 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	delay 150
# 76 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto Gym_BattleFloor_2nd_Gym_Leader_Enter
	return


PortValor_Gym_BattleFloor_EventScript_Marin::
# 80 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Marin_1
# 143 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt PortValor_Gym_BattleFloor_EventScript_Marin_8
PortValor_Gym_BattleFloor_EventScript_Marin_6:
# 210 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt PortValor_Gym_BattleFloor_EventScript_Marin_5
PortValor_Gym_BattleFloor_EventScript_Marin_4:
# 279 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_OGERPON_WELLSPRING
# 280 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_BASCULEGION
# 281 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 282 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_PELIPPER
# 283 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_KYOGRE
# 284 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_RHYPERIOR
# 286 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 288 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 289 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 291 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 292 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 293 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 295 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 296 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_29
# 304 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 306 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 307 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 310 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 311 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 314 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Marin_41
# 323 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 326 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 327 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_S
# 328 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_S, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_1:
# 82 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_LAPRAS
# 83 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WINGULL
# 84 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_CUBONE
# 85 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GOLDEEN
# 86 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_BASCULIN
# 87 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_LOMBRE
# 88 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_13
# 91 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
PortValor_Gym_BattleFloor_EventScript_Marin_12:
# 94 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 95 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 97 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 98 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 99 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 102 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_32
# 111 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 113 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 114 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 117 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 118 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 121 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Marin_44
# 130 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 133 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_52
# 138 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 139 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_C2
# 140 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_C2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_2:
# 145 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TOXICROAK
# 146 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_PELIPPER
# 147 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 148 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAROWAK_ALOLA
# 149 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_LUDICOLO
# 150 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_BASCULEGION
# 151 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_17
# 153 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_18
# 156 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
PortValor_Gym_BattleFloor_EventScript_Marin_16:
# 159 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 160 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 163 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 164 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 166 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 167 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_35
# 175 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 177 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 178 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 181 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 182 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 185 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Marin_47
# 194 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 197 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_55
# 201 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_56
# 206 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 207 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B3
# 208 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B3, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_3:
# 212 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_OGERPON_WELLSPRING
# 213 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_BASCULEGION
# 214 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 215 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_PELIPPER
# 216 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ARCHALUDON
# 217 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_RHYPERIOR
# 218 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_23
# 220 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_24
# 223 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
PortValor_Gym_BattleFloor_EventScript_Marin_22:
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
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_38
# 243 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 245 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 246 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 249 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 250 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 253 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Marin_50
# 262 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 265 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_60
# 269 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Marin_61
# 274 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 275 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A3
# 276 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A3, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_5:
# 210 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Marin_3
	goto PortValor_Gym_BattleFloor_EventScript_Marin_4

PortValor_Gym_BattleFloor_EventScript_Marin_8:
# 143 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Marin_2
	goto PortValor_Gym_BattleFloor_EventScript_Marin_6

PortValor_Gym_BattleFloor_EventScript_Marin_13:
# 89 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto PortValor_Gym_BattleFloor_EventScript_Marin_12

PortValor_Gym_BattleFloor_EventScript_Marin_17:
# 152 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto PortValor_Gym_BattleFloor_EventScript_Marin_16

PortValor_Gym_BattleFloor_EventScript_Marin_18:
# 154 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto PortValor_Gym_BattleFloor_EventScript_Marin_16

PortValor_Gym_BattleFloor_EventScript_Marin_23:
# 219 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto PortValor_Gym_BattleFloor_EventScript_Marin_22

PortValor_Gym_BattleFloor_EventScript_Marin_24:
# 221 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto PortValor_Gym_BattleFloor_EventScript_Marin_22

PortValor_Gym_BattleFloor_EventScript_Marin_29:
# 298 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 299 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 300 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Marin_32:
# 103 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 104 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 105 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 106 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_MARIN
# 107 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	removeobject LOCALID_MARIN
	end

PortValor_Gym_BattleFloor_EventScript_Marin_35:
# 169 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 170 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 171 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Marin_38:
# 237 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 238 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 239 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Marin_41:
# 316 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 317 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 318 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Marin_44:
# 123 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 124 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 125 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Marin_47:
# 187 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 188 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 189 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Marin_50:
# 255 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 256 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 257 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Marin_52:
# 134 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 135 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_C1
# 136 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_C1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_55:
# 198 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 199 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B1
# 200 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_56:
# 202 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 203 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_B2
# 204 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_60:
# 266 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 267 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A1
# 268 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Marin_61:
# 270 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 271 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_MARIN_A2
# 272 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_MARIN_A2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Marin, NO_MUSIC
	return


PortValor_Gym_BattleFloor_EventScript_Solara::
# 333 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Solara_1
# 394 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt PortValor_Gym_BattleFloor_EventScript_Solara_8
PortValor_Gym_BattleFloor_EventScript_Solara_6:
# 460 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt PortValor_Gym_BattleFloor_EventScript_Solara_5
PortValor_Gym_BattleFloor_EventScript_Solara_4:
# 529 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TORKOAL
# 530 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_VOLCARONA
# 531 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_OGERPON_HEARTHFLAME
# 532 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_VENUSAUR
# 533 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_GROUDON
# 534 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_CHI_YU
# 536 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 85
# 538 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 539 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 541 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 542 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 543 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 545 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 546 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_29
# 554 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 556 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 557 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 560 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 561 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 564 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Solara_41
# 573 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 576 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 577 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_S
# 578 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_S, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_1:
# 334 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_CHARMELEON
# 335 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_CERULEDGE
# 336 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_IVYSAUR
# 337 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GLOOM
# 338 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_VULPIX
# 339 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_SHELLOS
# 340 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_13
# 343 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
PortValor_Gym_BattleFloor_EventScript_Solara_12:
# 346 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 347 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 349 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 350 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 351 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 353 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 354 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_32
# 362 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 364 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 365 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 368 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 369 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 372 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Solara_44
# 381 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 384 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_52
# 389 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 390 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_C2
# 391 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_C2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_2:
# 395 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_CHARIZARD
# 396 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_ARCANINE
# 397 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_VENUSAUR
# 398 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_INCINEROAR
# 399 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_NINETALES
# 400 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_TALONFLAME
# 401 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_17
# 403 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_18
# 406 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 56
PortValor_Gym_BattleFloor_EventScript_Solara_16:
# 409 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 410 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 412 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 413 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 414 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 416 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 417 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_35
# 425 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 427 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 428 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 431 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 432 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 435 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Solara_47
# 444 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 447 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_55
# 451 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 3
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_56
# 456 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 457 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B3
# 458 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B3, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_3:
# 462 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_VENUSAUR
# 463 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_INCINEROAR
# 464 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_CHARIZARD
# 465 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_TORKOAL
# 466 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_VOLCARONA
# 467 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_CHI_YU
# 468 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_23
# 470 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_24
# 473 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 78
PortValor_Gym_BattleFloor_EventScript_Solara_22:
# 477 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 478 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 480 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 481 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, TRUE
# 482 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 484 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_2, MSGBOX_YESNO
# 485 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_38
# 493 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 495 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_SavePartyBackup
# 496 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 499 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 500 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitstate
# 503 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_BattleFloor_EventScript_Solara_50
# 512 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 515 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_60
# 519 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_eq PortValor_Gym_BattleFloor_EventScript_Solara_61
# 524 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 525 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A3
# 526 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A3, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_5:
# 460 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 8
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Solara_3
	goto PortValor_Gym_BattleFloor_EventScript_Solara_4

PortValor_Gym_BattleFloor_EventScript_Solara_8:
# 394 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt PortValor_Gym_BattleFloor_EventScript_Solara_2
	goto PortValor_Gym_BattleFloor_EventScript_Solara_6

PortValor_Gym_BattleFloor_EventScript_Solara_13:
# 341 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto PortValor_Gym_BattleFloor_EventScript_Solara_12

PortValor_Gym_BattleFloor_EventScript_Solara_17:
# 402 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto PortValor_Gym_BattleFloor_EventScript_Solara_16

PortValor_Gym_BattleFloor_EventScript_Solara_18:
# 404 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 49
	goto PortValor_Gym_BattleFloor_EventScript_Solara_16

PortValor_Gym_BattleFloor_EventScript_Solara_23:
# 469 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 64
	goto PortValor_Gym_BattleFloor_EventScript_Solara_22

PortValor_Gym_BattleFloor_EventScript_Solara_24:
# 471 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 71
	goto PortValor_Gym_BattleFloor_EventScript_Solara_22

PortValor_Gym_BattleFloor_EventScript_Solara_29:
# 548 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 549 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 550 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Solara_32:
# 356 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 357 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 358 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Solara_35:
# 419 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 420 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 421 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Solara_38:
# 487 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	closemessage
# 488 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 489 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Solara_41:
# 566 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 567 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 568 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Solara_44:
# 374 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 375 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 376 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Solara_47:
# 437 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 438 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 439 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Solara_50:
# 505 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 506 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 507 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_BattleFloor_EventScript_Solara_52:
# 385 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 386 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_C1
# 387 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_C1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_55:
# 448 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 449 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B1
# 450 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_56:
# 452 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 453 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_B2
# 454 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_60:
# 516 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 517 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A1
# 518 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return

PortValor_Gym_BattleFloor_EventScript_Solara_61:
# 520 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_On
# 521 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	cleartrainerflag TRAINER_SOLARA_A2
# 522 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_A2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_BattleFloor_After_Solara, NO_MUSIC
	return


PortValor_Gym_BattleFloor_After_Solara::
# 585 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special WeightedSelector_Off
# 586 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special HealPlayerParty
# 587 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	special Vgc_RestorePartyBackup
# 588 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 590 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PostBattle_Solara, MSGBOX_AUTOCLOSE
# 592 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PortValor_Gym_BattleFloor_After_Solara_2
# 598 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PortValor_Gym_BattleFloor_After_Solara_3
# 604 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PortValor_Gym_BattleFloor_After_Solara_4
# 610 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PortValor_Gym_BattleFloor_After_Solara_5
# 616 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PortValor_Gym_BattleFloor_After_Solara_6
# 622 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PortValor_Gym_BattleFloor_After_Solara_7
# 628 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, PortValor_Gym_BattleFloor_After_Solara_8
# 634 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, PortValor_Gym_BattleFloor_After_Solara_9
PortValor_Gym_BattleFloor_After_Solara_1:
# 642 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	applymovement LOCALID_SOLARA, Gym_Leader_Exit
# 643 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	waitmovement 0
# 644 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_SOLARA
# 646 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	releaseall
# 647 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BEAT_PORT_VALOR
# 648 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar GYM_STATE, 1
# 649 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	warpsilent MAP_PORT_VALOR_GYM_LOBBY, 4
	end

PortValor_Gym_BattleFloor_After_Solara_2:
# 593 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE01_GET
# 594 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 595 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 596 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 597 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_1, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_3:
# 599 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE02_GET
# 600 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 601 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 602 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 603 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_2, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_4:
# 605 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE03_GET
# 606 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 607 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 608 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 609 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_3, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_5:
# 611 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE04_GET
# 612 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 613 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 614 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 615 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_4, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_6:
# 617 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE05_GET
# 618 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 619 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 620 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 64
# 621 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_5, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_7:
# 623 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE06_GET
# 624 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 625 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 626 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 627 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_6, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_8:
# 629 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE07_GET
# 630 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 631 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 632 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 633 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_7, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1

PortValor_Gym_BattleFloor_After_Solara_9:
# 635 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setflag FLAG_BADGE08_GET
# 636 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_0, MSGBOX_DEFAULT
# 637 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	addvar VAR_BADGES, 1
# 638 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 639 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	msgbox PortValor_Gym_BattleFloor_After_Solara_Text_8, MSGBOX_DEFAULT
	goto PortValor_Gym_BattleFloor_After_Solara_1


PortValor_Gym_BattleFloor_After_Marin_Text_0:
# 64 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Your Pokemon have been healed.$"

PortValor_Gym_BattleFloor_EventScript_Marin_Text_0:
# 94 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Previewing opponent's team...$"

PortValor_Gym_BattleFloor_EventScript_Marin_Text_1:
# 95 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Press B when ready to battle.$"

PortValor_Gym_BattleFloor_EventScript_Marin_Text_2:
# 101 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Are you ready to battle?$"

PortValor_Gym_BattleFloor_EventScript_Marin_Text_3:
# 111 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Choose your pokemon.$"

PortValor_Gym_BattleFloor_After_Solara_Text_0:
# 595 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "You got the Climate Badge!$"

PortValor_Gym_BattleFloor_After_Solara_Text_1:
# 597 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 29.$"

PortValor_Gym_BattleFloor_After_Solara_Text_2:
# 603 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 41.$"

PortValor_Gym_BattleFloor_After_Solara_Text_3:
# 609 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 49.$"

PortValor_Gym_BattleFloor_After_Solara_Text_4:
# 615 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 56.$"

PortValor_Gym_BattleFloor_After_Solara_Text_5:
# 621 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 64.$"

PortValor_Gym_BattleFloor_After_Solara_Text_6:
# 627 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 71.$"

PortValor_Gym_BattleFloor_After_Solara_Text_7:
# 633 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 78.$"

PortValor_Gym_BattleFloor_After_Solara_Text_8:
# 639 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Level cap increased to 85.$"

Marin_Intro::
# 655 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Prepare for the hurricane!$"

Marin_Outro::
# 659 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "I'm all washed up.$"

PostBattle_Marin::
# 663 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Good luck aginst Solara.$"

Solara_Intro::
# 667 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Enjoy the heat.$"

Solara_Outro::
# 671 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Oh no! I'm cooked!$"

PostBattle_Solara::
# 675 "data/maps/PortValor_Gym_BattleFloor/scripts.pory"
	.string "Good luck with the rest of the gyms.$"
