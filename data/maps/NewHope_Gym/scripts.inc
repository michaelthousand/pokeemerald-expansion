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
	return

NewHope_Gym_EventScript_Freya_1:
# 144 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 147 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_PRINPLUP
# 148 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_SCRAGGY
# 149 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_PAWNIARD
# 150 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_KIRLIA
# 151 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_ESPEON
# 152 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_WATTREL
# 153 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Freya_4
# 156 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
NewHope_Gym_EventScript_Freya_3:
# 159 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 160 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 161 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 162 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NewHope_Gym_EventScript_Freya_8
# 164 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 165 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Freya_11
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
	goto_if_ne NewHope_Gym_EventScript_Freya_14
# 192 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 195 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Freya_16
	return

NewHope_Gym_EventScript_Freya_4:
# 154 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto NewHope_Gym_EventScript_Freya_3

NewHope_Gym_EventScript_Freya_8:
	end

NewHope_Gym_EventScript_Freya_11:
# 167 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 168 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 169 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_14:
# 185 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 186 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 187 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Freya_16:
# 196 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 197 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_FREYA_C1, Freya_Intro, Freya_Outro, Not_Enough_Mons, NewHope_Gym_After_Freya, NO_MUSIC
	return


NewHope_Gym_After_Freya::
# 205 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_Off
# 206 "data/maps/NewHope_Gym/scripts.pory"
	special HealPlayerParty
# 207 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_0, MSGBOX_AUTOCLOSE
# 209 "data/maps/NewHope_Gym/scripts.pory"
	giveitem ITEM_WEAKNESS_POLICY, 1
# 210 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_1, MSGBOX_AUTOCLOSE
# 212 "data/maps/NewHope_Gym/scripts.pory"
	msgbox PostBattle_Freya, MSGBOX_AUTOCLOSE
# 214 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 215 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 217 "data/maps/NewHope_Gym/scripts.pory"
	applymovement LOCALID_FREYA, Freya_Exit
# 218 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 219 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_FREYA
# 220 "data/maps/NewHope_Gym/scripts.pory"
	removeobject LOCALID_FREYA
# 222 "data/maps/NewHope_Gym/scripts.pory"
	delay 150
# 223 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_RONAN
# 224 "data/maps/NewHope_Gym/scripts.pory"
	addobject 1
# 225 "data/maps/NewHope_Gym/scripts.pory"
	delay 60
# 226 "data/maps/NewHope_Gym/scripts.pory"
	applymovement 1, Ronan_Enter
# 227 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 229 "data/maps/NewHope_Gym/scripts.pory"
	goto NewHope_Gym_EventScript_Ronan
	return


NewHope_Gym_EventScript_Ronan::
# 233 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt NewHope_Gym_EventScript_Ronan_1
	return

NewHope_Gym_EventScript_Ronan_1:
# 234 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_0, SPECIES_GROWLITHE
# 235 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_1, SPECIES_SANDILE
# 236 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_2, SPECIES_STARAVIA
# 237 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_3, SPECIES_SNUBBULL
# 238 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_4, SPECIES_MIGHTYENA
# 239 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_5, SPECIES_HOUNDOUR
# 240 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Ronan_4
# 243 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 29
NewHope_Gym_EventScript_Ronan_3:
# 246 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_0, MSGBOX_DEFAULT
# 247 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_1, MSGBOX_DEFAULT
# 249 "data/maps/NewHope_Gym/scripts.pory"
	special StartVgcSummaryPreviewFromVars
# 250 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 251 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 253 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_2, MSGBOX_YESNO
# 254 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewHope_Gym_EventScript_Ronan_8
# 262 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_EventScript_Freya_Text_3, MSGBOX_DEFAULT
# 264 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_SavePartyBackup
# 265 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 268 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 269 "data/maps/NewHope_Gym/scripts.pory"
	waitstate
# 272 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_Gym_EventScript_Ronan_11
# 281 "data/maps/NewHope_Gym/scripts.pory"
	callnative Vgc_BuildPartyFrom4Indices
# 284 "data/maps/NewHope_Gym/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq NewHope_Gym_EventScript_Ronan_13
	return

NewHope_Gym_EventScript_Ronan_4:
# 241 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_VGC_PREVIEW_LV, 21
	goto NewHope_Gym_EventScript_Ronan_3

NewHope_Gym_EventScript_Ronan_8:
# 256 "data/maps/NewHope_Gym/scripts.pory"
	closemessage
# 257 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 258 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_11:
# 274 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 275 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 276 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
	end

NewHope_Gym_EventScript_Ronan_13:
# 285 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_On
# 286 "data/maps/NewHope_Gym/scripts.pory"
	trainerbattle_double TRAINER_RONAN_C1, Ronan_Intro, Ronan_Outro, Not_Enough_Mons, NewHope_Gym_After_Ronan, NO_MUSIC
	return


NewHope_Gym_After_Ronan::
# 295 "data/maps/NewHope_Gym/scripts.pory"
	special WeightedSelector_Off
# 296 "data/maps/NewHope_Gym/scripts.pory"
	special HealPlayerParty
# 297 "data/maps/NewHope_Gym/scripts.pory"
	special Vgc_RestorePartyBackup
# 298 "data/maps/NewHope_Gym/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
# 300 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Freya_Text_0, MSGBOX_AUTOCLOSE
# 302 "data/maps/NewHope_Gym/scripts.pory"
	giveitem ITEM_TM_TORMENT, 1
# 303 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_0, MSGBOX_AUTOCLOSE
# 304 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_1, MSGBOX_AUTOCLOSE
# 306 "data/maps/NewHope_Gym/scripts.pory"
	msgbox PostBattle_Ronan, MSGBOX_AUTOCLOSE
# 308 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, NewHope_Gym_After_Ronan_2
# 314 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, NewHope_Gym_After_Ronan_3
# 320 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, NewHope_Gym_After_Ronan_4
# 326 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, NewHope_Gym_After_Ronan_5
# 332 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, NewHope_Gym_After_Ronan_6
# 338 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, NewHope_Gym_After_Ronan_7
# 344 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, NewHope_Gym_After_Ronan_8
# 350 "data/maps/NewHope_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, NewHope_Gym_After_Ronan_9
NewHope_Gym_After_Ronan_1:
# 358 "data/maps/NewHope_Gym/scripts.pory"
	applymovement 1, Ronan_Exit
# 359 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 360 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_RONAN
# 361 "data/maps/NewHope_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exit_Gym
# 362 "data/maps/NewHope_Gym/scripts.pory"
	waitmovement 0
# 363 "data/maps/NewHope_Gym/scripts.pory"
	releaseall
	end

NewHope_Gym_After_Ronan_2:
# 309 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 310 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 311 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 312 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 313 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_3, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_3:
# 315 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 316 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 317 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 318 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 319 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_4, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_4:
# 321 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 322 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 323 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 324 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
# 325 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_5, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_5:
# 327 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 328 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 329 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 330 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 331 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_6, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_6:
# 333 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 334 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 335 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 336 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 71
# 337 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_7, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_7:
# 339 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 340 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 341 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 342 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 78
# 343 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_8, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_8:
# 345 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 346 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 347 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 348 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 349 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_9, MSGBOX_DEFAULT
	goto NewHope_Gym_After_Ronan_1

NewHope_Gym_After_Ronan_9:
# 351 "data/maps/NewHope_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 352 "data/maps/NewHope_Gym/scripts.pory"
	msgbox NewHope_Gym_After_Ronan_Text_2, MSGBOX_DEFAULT
# 353 "data/maps/NewHope_Gym/scripts.pory"
	addvar VAR_BADGES, 1
# 354 "data/maps/NewHope_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 90
# 355 "data/maps/NewHope_Gym/scripts.pory"
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
	.string "Battles are 4v4 double battles. You will\phave a chance to see your opponent's\nPokemon before selecting\pfrom your own party.$"

NewHope_Gym_EventScript_Rules_Text_5:
# 105 "data/maps/NewHope_Gym/scripts.pory"
	.string "You can cancel the battle only before\nthe first gym leader to return to the\plobby and change your team.$"

NewHope_Gym_EventScript_Rules_Text_6:
# 106 "data/maps/NewHope_Gym/scripts.pory"
	.string "There's a computer to your left for thi\nvery purpose.$"

NewHope_Gym_EventScript_Rules_Text_7:
# 107 "data/maps/NewHope_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your party Pokemon.$"

NewHope_Gym_EventScript_Rules_Text_8:
# 108 "data/maps/NewHope_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

NewHope_Gym_EventScript_Rules_Text_9:
# 109 "data/maps/NewHope_Gym/scripts.pory"
	.string "And, as I mentioned, you will\nhave a chance to select different\pPokemon from your party for the second\nbattle.$"

NewHope_Gym_EventScript_Rules_Text_10:
# 111 "data/maps/NewHope_Gym/scripts.pory"
	.string "Earning a badge will also award yo\npoints toward qualifying for the\pRegional Championship.$"

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
# 207 "data/maps/NewHope_Gym/scripts.pory"
	.string "Your Pokemon have been healed.$"

NewHope_Gym_After_Freya_Text_1:
# 210 "data/maps/NewHope_Gym/scripts.pory"
	.string "That item will make sure you\nstay in the fight.$"

NewHope_Gym_After_Ronan_Text_0:
# 303 "data/maps/NewHope_Gym/scripts.pory"
	.string "That TM contains Torment.$"

NewHope_Gym_After_Ronan_Text_1:
# 304 "data/maps/NewHope_Gym/scripts.pory"
	.string "It will really throw your opponents\noff balance.$"

NewHope_Gym_After_Ronan_Text_2:
# 311 "data/maps/NewHope_Gym/scripts.pory"
	.string "You got the Momentum Badge!$"

NewHope_Gym_After_Ronan_Text_3:
# 313 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

NewHope_Gym_After_Ronan_Text_4:
# 319 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 41.$"

NewHope_Gym_After_Ronan_Text_5:
# 325 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 49.$"

NewHope_Gym_After_Ronan_Text_6:
# 331 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 56.$"

NewHope_Gym_After_Ronan_Text_7:
# 337 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 71.$"

NewHope_Gym_After_Ronan_Text_8:
# 343 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 78.$"

NewHope_Gym_After_Ronan_Text_9:
# 349 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 85.$"

NewHope_Gym_After_Ronan_Text_10:
# 355 "data/maps/NewHope_Gym/scripts.pory"
	.string "Level cap increased to 90.$"

Freya_Intro::
# 367 "data/maps/NewHope_Gym/scripts.pory"
	.string "My Pokemon will outcompete yours!$"

Freya_Outro::
# 371 "data/maps/NewHope_Gym/scripts.pory"
	.string "Now I'm the one paralyzed.$"

PostBattle_Freya::
# 375 "data/maps/NewHope_Gym/scripts.pory"
	.string "Good luck against Ronan.$"

Ronan_Intro::
# 379 "data/maps/NewHope_Gym/scripts.pory"
	.string "Hope you brought some antidote.$"

Ronan_Outro::
# 383 "data/maps/NewHope_Gym/scripts.pory"
	.string "Ouch! I'm burned!$"

PostBattle_Ronan::
# 387 "data/maps/NewHope_Gym/scripts.pory"
	.string "Good luck with the rest of the gyms.$"
