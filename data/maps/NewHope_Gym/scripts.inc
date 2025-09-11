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
# 121 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_16, MSGBOX_DEFAULT
# 122 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 123 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 125 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt NewHope_Gym_EventScript_Rules_6
# 127 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 6
	goto_if_lt NewHope_Gym_EventScript_Rules_7
# 129 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_gt NewHope_Gym_EventScript_Rules_8
NewHope_Gym_EventScript_Rules_5:
# 133 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
NewHope_Gym_EventScript_Rules_1:
# 136 "data/maps/NewHope_Gym/scripts.pory"
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
# 104 "data/maps/NewHope_Gym/scripts.pory"
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
# 111 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_10, MSGBOX_DEFAULT
# 112 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_11, MSGBOX_DEFAULT
# 113 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_12, MSGBOX_DEFAULT
# 114 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_13, MSGBOX_DEFAULT
# 115 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_14, MSGBOX_DEFAULT
# 118 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_15, MSGBOX_DEFAULT
# 119 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_GYM_RULES
	goto NewHope_Gym_EventScript_Rules_1

NewHope_Gym_EventScript_Rules_6:
# 126 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_17, MSGBOX_DEFAULT
	goto NewHope_Gym_EventScript_Rules_5

NewHope_Gym_EventScript_Rules_7:
# 128 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_18, MSGBOX_DEFAULT
	goto NewHope_Gym_EventScript_Rules_5

NewHope_Gym_EventScript_Rules_8:
# 130 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Rules_Text_19, MSGBOX_DEFAULT
	goto NewHope_Gym_EventScript_Rules_5


NewHope_Gym_EventScript_Freya::
# 141 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt NewHope_Gym_EventScript_Freya_1
# 205 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_gt NewHope_Gym_EventScript_Freya_3
	return

NewHope_Gym_EventScript_Freya_1:
# 144 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 147 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_PRINPLUP
# 148 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_TRAPINCH
# 149 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_PAWNIARD
# 150 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_GOTHITA
# 151 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_MANKEY
# 152 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_WATTREL
# 153 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Freya_8
# 156 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
NewHope_Gym_EventScript_Freya_7:
# 159 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 160 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 161 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 162 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NewHope_Gym_EventScript_Freya_15
# 164 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 165 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Freya_21
# 173 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 175 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 176 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 179 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 180 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 183 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Freya_27
# 192 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 195 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Freya_31
# 200 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 201 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_C2
# 202 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_C2, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_2:
# 207 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_GOTHITELLE
# 208 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_OGERPON
# 209 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_MILOTIC
# 210 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_ANNIHILAPE
# 211 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_PAWNIARD
# 212 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_EMPOLEON
# 213 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_Gym_EventScript_Freya_12
NewHope_Gym_EventScript_Freya_11:
# 217 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 218 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 220 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 221 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 222 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 224 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 225 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Freya_18
# 233 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 235 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 236 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 239 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 240 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 243 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Freya_24
# 252 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 255 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_Gym_EventScript_Freya_29
	return

NewHope_Gym_EventScript_Freya_3:
# 205 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt NewHope_Gym_EventScript_Freya_2
	return

NewHope_Gym_EventScript_Freya_8:
# 154 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto NewHope_Gym_EventScript_Freya_7

NewHope_Gym_EventScript_Freya_12:
# 214 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto NewHope_Gym_EventScript_Freya_11

NewHope_Gym_EventScript_Freya_15:
	end

NewHope_Gym_EventScript_Freya_18:
# 227 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 228 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 229 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_21:
# 167 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 168 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 169 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_24:
# 245 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 246 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 247 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_27:
# 185 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 186 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 187 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_29:
# 256 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 257 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_B1
# 258 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_B1, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return

NewHope_Gym_EventScript_Freya_31:
# 196 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 197 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_FREYA_C1
# 198 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_C1, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return


NewHope_Gym_After_Freya::
# 266 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_Off
# 267 "data/maps/NewHope_Gym/scripts.pory"
	special HealPlayerParty
# 268 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_0, MSGBOX_AUTOCLOSE
# 270 "data/maps/NewHope_Gym/scripts.pory"
	giveitem ITEM_TM_NASTY_PLOT, 1
# 271 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_1, MSGBOX_AUTOCLOSE
# 272 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_2, MSGBOX_AUTOCLOSE
# 274 "data/maps/NewHope_Gym/scripts.pory"
	msgbox PostBattle_Freya, MSGBOX_AUTOCLOSE
# 276 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 277 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 279 "data/maps/NewHope_Gym/scripts.pory"
	applymovement LOCALID_FREYA, Freya_Exit
# 280 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 281 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_FREYA
# 282 "data/maps/NewHope_Gym/scripts.pory"
	removeobject LOCALID_FREYA
# 284 "data/maps/NewHope_Gym/scripts.pory"
	delay 150
# 285 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_RONAN
# 286 "data/maps/NewHope_Gym/scripts.pory"
	addobject 1
# 287 "data/maps/NewHope_Gym/scripts.pory"
	delay 60
# 288 "data/maps/NewHope_Gym/scripts.pory"
	applymovement 1, Ronan_Enter
# 289 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Ronan
	return


NewHope_Gym_EventScript_Ronan::
# 295 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt NewHope_Gym_EventScript_Ronan_1
# 355 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_gt NewHope_Gym_EventScript_Ronan_3
	return

NewHope_Gym_EventScript_Ronan_1:
# 296 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_GROWLITHE
# 297 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_SANDILE
# 298 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_STARAVIA
# 299 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_SNUBBULL
# 300 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_MIGHTYENA
# 301 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_HOUNDOUR
# 302 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Ronan_8
# 305 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
NewHope_Gym_EventScript_Ronan_7:
# 308 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 309 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 311 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 312 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 313 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 315 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 316 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Ronan_15
# 324 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 326 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 327 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 330 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 331 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 334 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Ronan_21
# 343 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 346 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Ronan_26
# 351 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 352 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_C2
# 353 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_C2, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_2:
# 357 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_PORYGON2
# 358 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_ARCANINE
# 359 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_GYARADOS
# 360 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_MAUSHOLD_FOUR
# 361 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ANNIHILAPE
# 362 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_INCINEROAR
# 363 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_Gym_EventScript_Ronan_12
NewHope_Gym_EventScript_Ronan_11:
# 367 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 368 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 370 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 371 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 372 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 374 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 375 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Ronan_18
# 383 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 385 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 386 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 389 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 390 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 393 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Ronan_24
# 402 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 405 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_eq NewHope_Gym_EventScript_Ronan_29
	return

NewHope_Gym_EventScript_Ronan_3:
# 355 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 5
	goto_if_lt NewHope_Gym_EventScript_Ronan_2
	return

NewHope_Gym_EventScript_Ronan_8:
# 303 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto NewHope_Gym_EventScript_Ronan_7

NewHope_Gym_EventScript_Ronan_12:
# 364 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 41
	goto NewHope_Gym_EventScript_Ronan_11

NewHope_Gym_EventScript_Ronan_15:
# 318 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 319 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 320 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_18:
# 377 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 378 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 379 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_21:
# 336 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 337 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 338 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_24:
# 395 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 396 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 397 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_26:
# 347 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 348 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_C1
# 349 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_C1, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return

NewHope_Gym_EventScript_Ronan_29:
# 406 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 407 "data/maps/NewHope_Gym/scripts.pory"
	cleartrainerflag TRAINER_RONAN_B1
# 408 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_B1, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return


NewHope_Gym_After_Ronan::
# 417 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_Off
# 418 "data/maps/NewHope_Gym/scripts.pory"
	special HealPlayerParty
# 419 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 420 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 422 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_0, MSGBOX_AUTOCLOSE
# 424 "data/maps/NewHope_Gym/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE, 1
# 425 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_0, MSGBOX_AUTOCLOSE
# 426 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_1, MSGBOX_AUTOCLOSE
# 428 "data/maps/NewHope_Gym/scripts.pory"
	msgbox PostBattle_Ronan, MSGBOX_AUTOCLOSE
# 430 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, NewHope_Gym_After_Ronan_2
# 436 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, NewHope_Gym_After_Ronan_3
# 442 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, NewHope_Gym_After_Ronan_4
# 448 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, NewHope_Gym_After_Ronan_5
# 454 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, NewHope_Gym_After_Ronan_6
# 460 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, NewHope_Gym_After_Ronan_7
# 466 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, NewHope_Gym_After_Ronan_8
# 472 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, NewHope_Gym_After_Ronan_9
NewHope_Gym_After_Ronan_1:
# 480 "data/maps/NewHope_Gym/scripts.pory"
	applymovement 1, Ronan_Exit
# 481 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 482 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_RONAN
# 483 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 484 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 485 "data/maps/NewHope_Gym/scripts.pory"
	releaseall
	end

NewHope_Gym_After_Ronan_2:
# 431 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 432 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 433 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 434 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 435 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_3, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_3:
# 437 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 438 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 439 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 440 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 441 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_4, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_4:
# 443 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 444 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 445 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 446 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 447 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_5, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_5:
# 449 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 450 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 451 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 452 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 453 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_6, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_6:
# 455 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 456 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 457 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 458 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 459 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_7, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_7:
# 461 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 462 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 463 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 464 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 465 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_8, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_8:
# 467 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 468 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 469 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 470 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 471 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_9, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_9:
# 473 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 474 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 475 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 476 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 477 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_10, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1


NewHope_Gym_EventScript_Rules_Text_0:
# 98 "data/maps/NewHope_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explain\nhow Gyms work here in Valora.$"

NewHope_Gym_EventScript_Rules_Text_1:
# 100 "data/maps/NewHope_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in a different styles.$"

NewHope_Gym_EventScript_Rules_Text_2:
# 101 "data/maps/NewHope_Gym/scripts.pory"
	.string "There are no junior trainers in our gyms.$"

NewHope_Gym_EventScript_Rules_Text_3:
# 102 "data/maps/NewHope_Gym/scripts.pory"
	.string "You must defeat both Leaders to earn\na badge.$"

NewHope_Gym_EventScript_Rules_Text_4:
# 104 "data/maps/NewHope_Gym/scripts.pory"
	.string "Battles are 4v4 double battles. You will\nhave a chance to see your opponent's\pPokemon before selecting from your\nown party.$"

NewHope_Gym_EventScript_Rules_Text_5:
# 105 "data/maps/NewHope_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

NewHope_Gym_EventScript_Rules_Text_6:
# 106 "data/maps/NewHope_Gym/scripts.pory"
	.string "There's a computer to your left for this\nvery purpose.$"

NewHope_Gym_EventScript_Rules_Text_7:
# 107 "data/maps/NewHope_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your party Pokemon.$"

NewHope_Gym_EventScript_Rules_Text_8:
# 108 "data/maps/NewHope_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

NewHope_Gym_EventScript_Rules_Text_9:
# 109 "data/maps/NewHope_Gym/scripts.pory"
	.string "And, as I mentioned, you will have a\nchance to select different\pPokemon from your party for the second\nbattle.$"

NewHope_Gym_EventScript_Rules_Text_10:
# 111 "data/maps/NewHope_Gym/scripts.pory"
	.string "Earning a badge will also award you\npoints toward qualifying for the\pRegional Championship.$"

NewHope_Gym_EventScript_Rules_Text_11:
# 112 "data/maps/NewHope_Gym/scripts.pory"
	.string "Your first opponent is Freya.\pHer team is ultra competitive.$"

NewHope_Gym_EventScript_Rules_Text_12:
# 113 "data/maps/NewHope_Gym/scripts.pory"
	.string "Your second opponent is Ronan.\pHis team intimidates everyone.$"

NewHope_Gym_EventScript_Rules_Text_13:
# 114 "data/maps/NewHope_Gym/scripts.pory"
	.string "You have 0 badges so you are in Tier C.\pYour opponent's will not bring their best\nteams.$"

NewHope_Gym_EventScript_Rules_Text_14:
# 115 "data/maps/NewHope_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

NewHope_Gym_EventScript_Rules_Text_15:
# 118 "data/maps/NewHope_Gym/scripts.pory"
	.string "Good luck!$"

NewHope_Gym_EventScript_Rules_Text_16:
# 121 "data/maps/NewHope_Gym/scripts.pory"
	.string "Welcome, challenger, to the New Hope\nGym!$"

NewHope_Gym_EventScript_Rules_Text_17:
# 126 "data/maps/NewHope_Gym/scripts.pory"
	.string "You are in Tier C.\pYour opponent's will not bring their best\nteams.$"

NewHope_Gym_EventScript_Rules_Text_18:
# 128 "data/maps/NewHope_Gym/scripts.pory"
	.string "You are in Tier B.\pYour opponent's will not bring their best\nteams...\pbut they will step up their game.$"

NewHope_Gym_EventScript_Rules_Text_19:
# 130 "data/maps/NewHope_Gym/scripts.pory"
	.string "You are in Tier A.\pYour opponent's will not pull any punches.$"

NewHope_Gym_EventScript_Freya_Text_0:
# 144 "data/maps/NewHope_Gym/scripts.pory"
	.string "Previewing opponent's team...$"

NewHope_Gym_EventScript_Freya_Text_1:
# 145 "data/maps/NewHope_Gym/scripts.pory"
	.string "Press B when ready to battle.$"

NewHope_Gym_EventScript_Freya_Text_2:
# 164 "data/maps/NewHope_Gym/scripts.pory"
	.string "Are you ready to battle?$"

NewHope_Gym_EventScript_Freya_Text_3:
# 173 "data/maps/NewHope_Gym/scripts.pory"
	.string "Choose your pokemon.$"

NewHope_Gym_After_Freya_Text_0:
# 268 "data/maps/NewHope_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

NewHope_Gym_After_Freya_Text_1:
# 271 "data/maps/NewHope_Gym/scripts.pory"
	.string "That TM contains Nasty Plot.$"

NewHope_Gym_After_Freya_Text_2:
# 272 "data/maps/NewHope_Gym/scripts.pory"
	.string "Use it to boost your own offense.$"

NewHope_Gym_After_Ronan_Text_0:
# 425 "data/maps/NewHope_Gym/scripts.pory"
	.string "That TM contains Swords Dance.$"

NewHope_Gym_After_Ronan_Text_1:
# 426 "data/maps/NewHope_Gym/scripts.pory"
	.string "It will help you recover from Intimidate$"

NewHope_Gym_After_Ronan_Text_2:
# 433 "data/maps/NewHope_Gym/scripts.pory"
	.string "You got the Momentum Badge!$"

NewHope_Gym_After_Ronan_Text_3:
# 435 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

NewHope_Gym_After_Ronan_Text_4:
# 441 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

NewHope_Gym_After_Ronan_Text_5:
# 447 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

NewHope_Gym_After_Ronan_Text_6:
# 453 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

NewHope_Gym_After_Ronan_Text_7:
# 459 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

NewHope_Gym_After_Ronan_Text_8:
# 465 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

NewHope_Gym_After_Ronan_Text_9:
# 471 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

NewHope_Gym_After_Ronan_Text_10:
# 477 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Freya_Intro::
# 489 "data/maps/NewHope_Gym/scripts.pory"
	.string "My Pokemon will outcompete yours!$"

Freya_Outro::
# 493 "data/maps/NewHope_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Freya::
# 497 "data/maps/NewHope_Gym/scripts.pory"
	.string "Good luck against Ronan.$"

Ronan_Intro::
# 501 "data/maps/NewHope_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Ronan_Outro::
# 505 "data/maps/NewHope_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Ronan::
# 509 "data/maps/NewHope_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"
