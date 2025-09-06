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
# 123 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
# 124 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 125 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 127 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_EventScript_Rules_6
# 129 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_lt PortValor_Gym_EventScript_Rules_7
# 131 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_gt PortValor_Gym_EventScript_Rules_8
PortValor_Gym_EventScript_Rules_5:
# 135 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
PortValor_Gym_EventScript_Rules_1:
# 138 "data/maps/PortValor_Gym/scripts.pory"
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
# 106 "data/maps/PortValor_Gym/scripts.pory"
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
# 113 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_10, MSGBOX_DEFAULT
# 114 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 115 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 116 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 117 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_14, MSGBOX_DEFAULT
# 120 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
# 121 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_GYM_RULES
	goto PortValor_Gym_EventScript_Rules_1

PortValor_Gym_EventScript_Rules_6:
# 128 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_17, MSGBOX_DEFAULT
	goto PortValor_Gym_EventScript_Rules_5

PortValor_Gym_EventScript_Rules_7:
# 130 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_18, MSGBOX_DEFAULT
	goto PortValor_Gym_EventScript_Rules_5

PortValor_Gym_EventScript_Rules_8:
# 132 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Rules_Text_19, MSGBOX_DEFAULT
	goto PortValor_Gym_EventScript_Rules_5


PortValor_Gym_EventScript_Marin::
# 144 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_EventScript_Marin_1
# 205 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_gt PortValor_Gym_EventScript_Marin_3
	return

PortValor_Gym_EventScript_Marin_1:
# 146 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_LAPRAS
# 147 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_WINGULL
# 148 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_CUBONE
# 149 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GOLDEEN
# 150 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_BASCULIN
# 151 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_LOMBRE
# 152 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Marin_8
# 155 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
PortValor_Gym_EventScript_Marin_7:
# 158 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 159 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 161 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 162 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 163 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 165 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 166 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Marin_15
# 175 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 177 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 178 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 181 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 182 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 185 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Marin_21
# 194 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 197 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Marin_26
# 201 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 202 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_C2, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_2:
# 207 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_TOXICROAK
# 208 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_PELIPPER
# 209 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_LAPRAS
# 210 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAROWAK_ALOLA
# 211 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_LUDICOLO
# 212 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_BASCULEGION
# 213 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_EventScript_Marin_12
PortValor_Gym_EventScript_Marin_11:
# 217 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 218 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 220 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 221 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 222 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 224 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 225 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Marin_18
# 233 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 235 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 236 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 239 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 240 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 243 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Marin_24
# 252 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 255 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_EventScript_Marin_29
	return

PortValor_Gym_EventScript_Marin_3:
# 205 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt PortValor_Gym_EventScript_Marin_2
	return

PortValor_Gym_EventScript_Marin_8:
# 153 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto PortValor_Gym_EventScript_Marin_7

PortValor_Gym_EventScript_Marin_12:
# 214 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto PortValor_Gym_EventScript_Marin_11

PortValor_Gym_EventScript_Marin_15:
# 167 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 168 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 169 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 170 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_MARIN
# 171 "data/maps/PortValor_Gym/scripts.pory"
	removeobject LOCALID_MARIN
	end

PortValor_Gym_EventScript_Marin_18:
# 227 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 228 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 229 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_21:
# 187 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 188 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 189 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_24:
# 245 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 246 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 247 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Marin_26:
# 198 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 199 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_C1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return

PortValor_Gym_EventScript_Marin_29:
# 256 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 257 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_MARIN_B1, Marin_Intro, Marin_Outro, Not_Enough_Mons, PortValor_Gym_After_Marin, NO_MUSIC
	return


PortValor_Gym_After_Marin::
# 266 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_Off
# 267 "data/maps/PortValor_Gym/scripts.pory"
	special HealPlayerParty
# 268 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Marin_Text_0, MSGBOX_AUTOCLOSE
# 270 "data/maps/PortValor_Gym/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE, 1
# 271 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Marin_Text_1, MSGBOX_AUTOCLOSE
# 272 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Marin_Text_2, MSGBOX_AUTOCLOSE
# 274 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PostBattle_Marin, MSGBOX_AUTOCLOSE
# 276 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 277 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 279 "data/maps/PortValor_Gym/scripts.pory"
	applymovement LOCALID_MARIN, Marin_Exit
# 280 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 281 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_MARIN
# 282 "data/maps/PortValor_Gym/scripts.pory"
	removeobject LOCALID_MARIN
# 284 "data/maps/PortValor_Gym/scripts.pory"
	delay 150
# 285 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_SOLARA
# 286 "data/maps/PortValor_Gym/scripts.pory"
	addobject LOCALID_SOLARA
# 287 "data/maps/PortValor_Gym/scripts.pory"
	delay 60
# 288 "data/maps/PortValor_Gym/scripts.pory"
	applymovement LOCALID_SOLARA, Solara_Enter
# 289 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/PortValor_Gym/scripts.pory"
	goto PortValor_Gym_EventScript_Solara
	return


PortValor_Gym_EventScript_Solara::
# 295 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt PortValor_Gym_EventScript_Solara_1
# 354 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_gt PortValor_Gym_EventScript_Solara_3
	return

PortValor_Gym_EventScript_Solara_1:
# 296 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_CHARMELEON
# 297 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_CERULEDGE
# 298 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_IVYSAUR
# 299 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GLOOM
# 300 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_VULPIX
# 301 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_SHELLOS
# 302 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Solara_8
# 305 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
PortValor_Gym_EventScript_Solara_7:
# 308 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 309 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 311 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 312 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 313 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 315 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 316 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Solara_15
# 324 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 326 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 327 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 330 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 331 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 334 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Solara_21
# 343 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 346 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Solara_26
# 350 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 351 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_C2, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_2:
# 355 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_CHARIZARD
# 356 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_CERULEDGE
# 357 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_VENUSAUR
# 358 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_INCINEROAR
# 359 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_NINETALES
# 360 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_GASTRODON
# 361 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq PortValor_Gym_EventScript_Solara_12
PortValor_Gym_EventScript_Solara_11:
# 365 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_0, MSGBOX_DEFAULT
# 366 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/PortValor_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 369 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 370 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 372 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_2, MSGBOX_YESNO
# 373 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PortValor_Gym_EventScript_Solara_18
# 381 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_EventScript_Marin_Text_3, MSGBOX_DEFAULT
# 383 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 384 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 387 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 388 "data/maps/PortValor_Gym/scripts.pory"
	waitstate
# 391 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PortValor_Gym_EventScript_Solara_24
# 400 "data/maps/PortValor_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 403 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_Gym_EventScript_Solara_29
	return

PortValor_Gym_EventScript_Solara_3:
# 354 "data/maps/PortValor_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt PortValor_Gym_EventScript_Solara_2
	return

PortValor_Gym_EventScript_Solara_8:
# 303 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto PortValor_Gym_EventScript_Solara_7

PortValor_Gym_EventScript_Solara_12:
# 362 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto PortValor_Gym_EventScript_Solara_11

PortValor_Gym_EventScript_Solara_15:
# 318 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 319 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 320 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_18:
# 375 "data/maps/PortValor_Gym/scripts.pory"
	closemessage
# 376 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 377 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_21:
# 336 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 337 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 338 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_24:
# 393 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 394 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 395 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
	end

PortValor_Gym_EventScript_Solara_26:
# 347 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 348 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_C1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return

PortValor_Gym_EventScript_Solara_29:
# 404 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_On
# 405 "data/maps/PortValor_Gym/scripts.pory"
	trainerbattle_double TRAINER_SOLARA_B1, Solara_Intro, Solara_Outro, Not_Enough_Mons, PortValor_Gym_After_Solara, NO_MUSIC
	return


PortValor_Gym_After_Solara::
# 414 "data/maps/PortValor_Gym/scripts.pory"
	special WeightedSelector_Off
# 415 "data/maps/PortValor_Gym/scripts.pory"
	special HealPlayerParty
# 416 "data/maps/PortValor_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 417 "data/maps/PortValor_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 419 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Marin_Text_0, MSGBOX_AUTOCLOSE
# 421 "data/maps/PortValor_Gym/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY, 1
# 422 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_0, MSGBOX_AUTOCLOSE
# 423 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_1, MSGBOX_AUTOCLOSE
# 425 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PostBattle_Solara, MSGBOX_AUTOCLOSE
# 427 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PortValor_Gym_After_Solara_2
# 433 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PortValor_Gym_After_Solara_3
# 439 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, PortValor_Gym_After_Solara_4
# 445 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PortValor_Gym_After_Solara_5
# 451 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PortValor_Gym_After_Solara_6
# 457 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, PortValor_Gym_After_Solara_7
# 463 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, PortValor_Gym_After_Solara_8
# 469 "data/maps/PortValor_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, PortValor_Gym_After_Solara_9
PortValor_Gym_After_Solara_1:
# 477 "data/maps/PortValor_Gym/scripts.pory"
	applymovement LOCALID_SOLARA, Solara_Exit
# 478 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 479 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_SOLARA
# 480 "data/maps/PortValor_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 481 "data/maps/PortValor_Gym/scripts.pory"
	waitmovement 0
# 482 "data/maps/PortValor_Gym/scripts.pory"
	releaseall
	end

PortValor_Gym_After_Solara_2:
# 428 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 429 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 430 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 431 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 432 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_3, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_3:
# 434 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 435 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 436 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 437 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 438 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_4, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_4:
# 440 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 441 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 442 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 443 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 444 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_5, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_5:
# 446 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 447 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 448 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 449 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 450 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_6, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_6:
# 452 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 453 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 454 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 455 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 456 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_7, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_7:
# 458 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 459 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 460 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 461 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 462 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_8, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_8:
# 464 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 465 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 466 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 467 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 468 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_9, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1

PortValor_Gym_After_Solara_9:
# 470 "data/maps/PortValor_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 471 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_2, MSGBOX_DEFAULT
# 472 "data/maps/PortValor_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 473 "data/maps/PortValor_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 474 "data/maps/PortValor_Gym/scripts.pory"
	msgbox PortValor_Gym_After_Solara_Text_10, MSGBOX_DEFAULT
	goto PortValor_Gym_After_Solara_1


PortValor_Gym_EventScript_Rules_Text_0:
# 100 "data/maps/PortValor_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explain\nhow Gyms work here in Valora.$"

PortValor_Gym_EventScript_Rules_Text_1:
# 102 "data/maps/PortValor_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in a different styles.$"

PortValor_Gym_EventScript_Rules_Text_2:
# 103 "data/maps/PortValor_Gym/scripts.pory"
	.string "There are no junior trainers in our gyms.$"

PortValor_Gym_EventScript_Rules_Text_3:
# 104 "data/maps/PortValor_Gym/scripts.pory"
	.string "You must defeat both Leaders to earn\na badge.$"

PortValor_Gym_EventScript_Rules_Text_4:
# 106 "data/maps/PortValor_Gym/scripts.pory"
	.string "Battles are 4v4 double battles. You will\nhave a chance to see your opponent's\pPokemon before selecting from your\nown party.$"

PortValor_Gym_EventScript_Rules_Text_5:
# 107 "data/maps/PortValor_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

PortValor_Gym_EventScript_Rules_Text_6:
# 108 "data/maps/PortValor_Gym/scripts.pory"
	.string "There's a computer to your left for this\nvery purpose.$"

PortValor_Gym_EventScript_Rules_Text_7:
# 109 "data/maps/PortValor_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your party Pokemon.$"

PortValor_Gym_EventScript_Rules_Text_8:
# 110 "data/maps/PortValor_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

PortValor_Gym_EventScript_Rules_Text_9:
# 111 "data/maps/PortValor_Gym/scripts.pory"
	.string "And, as I mentioned, you will have a\nchance to select different\pPokemon from your party for the second\nbattle.$"

PortValor_Gym_EventScript_Rules_Text_10:
# 113 "data/maps/PortValor_Gym/scripts.pory"
	.string "Earning a badge will also award you\npoints toward qualifying for the\pRegional Championship.$"

PortValor_Gym_EventScript_Rules_Text_11:
# 114 "data/maps/PortValor_Gym/scripts.pory"
	.string "Your first opponent is Marin.\pBetter bring your swim trunks for him.$"

PortValor_Gym_EventScript_Rules_Text_12:
# 115 "data/maps/PortValor_Gym/scripts.pory"
	.string "Your second opponent is Solara.\pYou'll want sunscreen for her.$"

PortValor_Gym_EventScript_Rules_Text_13:
# 116 "data/maps/PortValor_Gym/scripts.pory"
	.string "You have 0 badges so you are in Tier C.\pYour opponent's will not bring their best\nteams.$"

PortValor_Gym_EventScript_Rules_Text_14:
# 117 "data/maps/PortValor_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

PortValor_Gym_EventScript_Rules_Text_15:
# 120 "data/maps/PortValor_Gym/scripts.pory"
	.string "Good luck!$"

PortValor_Gym_EventScript_Rules_Text_16:
# 123 "data/maps/PortValor_Gym/scripts.pory"
	.string "Welcome, challenger, to the Forest's Edge\nGym!$"

PortValor_Gym_EventScript_Rules_Text_17:
# 128 "data/maps/PortValor_Gym/scripts.pory"
	.string "You are in Tier C.\pYour opponent's will not bring their best\nteams.$"

PortValor_Gym_EventScript_Rules_Text_18:
# 130 "data/maps/PortValor_Gym/scripts.pory"
	.string "You are in Tier B.\pYour opponent's will not bring their best\nteams...\pbut they will step up their game.$"

PortValor_Gym_EventScript_Rules_Text_19:
# 132 "data/maps/PortValor_Gym/scripts.pory"
	.string "You are in Tier A.\pYour opponent's will not pull any punches.$"

PortValor_Gym_EventScript_Marin_Text_0:
# 158 "data/maps/PortValor_Gym/scripts.pory"
	.string "Previewing opponent's team...$"

PortValor_Gym_EventScript_Marin_Text_1:
# 159 "data/maps/PortValor_Gym/scripts.pory"
	.string "Press B when ready to battle.$"

PortValor_Gym_EventScript_Marin_Text_2:
# 165 "data/maps/PortValor_Gym/scripts.pory"
	.string "Are you ready to battle?$"

PortValor_Gym_EventScript_Marin_Text_3:
# 175 "data/maps/PortValor_Gym/scripts.pory"
	.string "Choose your pokemon.$"

PortValor_Gym_After_Marin_Text_0:
# 268 "data/maps/PortValor_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

PortValor_Gym_After_Marin_Text_1:
# 271 "data/maps/PortValor_Gym/scripts.pory"
	.string "That TM contains Rain Dance.$"

PortValor_Gym_After_Marin_Text_2:
# 272 "data/maps/PortValor_Gym/scripts.pory"
	.string "Now you can use rain to your advantage.$"

PortValor_Gym_After_Solara_Text_0:
# 422 "data/maps/PortValor_Gym/scripts.pory"
	.string "That TM contains Sunny Day.$"

PortValor_Gym_After_Solara_Text_1:
# 423 "data/maps/PortValor_Gym/scripts.pory"
	.string "You'll be able to scorch your \nenemies now.$"

PortValor_Gym_After_Solara_Text_2:
# 430 "data/maps/PortValor_Gym/scripts.pory"
	.string "You got the Climate Badge!$"

PortValor_Gym_After_Solara_Text_3:
# 432 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

PortValor_Gym_After_Solara_Text_4:
# 438 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

PortValor_Gym_After_Solara_Text_5:
# 444 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

PortValor_Gym_After_Solara_Text_6:
# 450 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

PortValor_Gym_After_Solara_Text_7:
# 456 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

PortValor_Gym_After_Solara_Text_8:
# 462 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

PortValor_Gym_After_Solara_Text_9:
# 468 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

PortValor_Gym_After_Solara_Text_10:
# 474 "data/maps/PortValor_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Marin_Intro::
# 527 "data/maps/PortValor_Gym/scripts.pory"
	.string "Prepare for the hurricane!$"

Marin_Outro::
# 531 "data/maps/PortValor_Gym/scripts.pory"
	.string "I'm all washed up.$"

PostBattle_Marin::
# 535 "data/maps/PortValor_Gym/scripts.pory"
	.string "Good luck aginst Solara.$"

Solara_Intro::
# 539 "data/maps/PortValor_Gym/scripts.pory"
	.string "Enjoy the heat.$"

Solara_Outro::
# 543 "data/maps/PortValor_Gym/scripts.pory"
	.string "Oh no! I'm cooked!$"

PostBattle_Solara::
# 547 "data/maps/PortValor_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"
