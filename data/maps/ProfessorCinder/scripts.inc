ProfessorCinder_MapScripts::
# 2 "data/maps/ProfessorCinder/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProfessorCinder_EventScript_BallDefault
	.byte 0


ProfessorCinder_EventScript_Tech::
# 6 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 7 "data/maps/ProfessorCinder/scripts.pory"
	faceplayer
# 8 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Tech_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Tech_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 11 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end


ProfessorCinder_Triggers::
# 16 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Triggers_1
	return

ProfessorCinder_Triggers_1:
# 17 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 18 "data/maps/ProfessorCinder/scripts.pory"
	faceplayer
# 19 "data/maps/ProfessorCinder/scripts.pory"
	setflag TALKED_TO_CINDER
# 20 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_1, MSGBOX_DEFAULT
# 23 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_2, MSGBOX_DEFAULT
# 24 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ProfessorCinder/scripts.pory"
	delay 60
# 26 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_4, MSGBOX_DEFAULT
# 27 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_5, MSGBOX_DEFAULT
# 28 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 29 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_EventScript_Professor
	return


ProfessorCinder_Intro::
# 34 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 35 "data/maps/ProfessorCinder/scripts.pory"
	faceplayer
# 37 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Intro_2
ProfessorCinder_Intro_1:
# 47 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ProfessorCinder_Intro_5
# 52 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Intro_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
ProfessorCinder_Intro_4:
# 56 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_Intro_2:
# 38 "data/maps/ProfessorCinder/scripts.pory"
	setflag TALKED_TO_CINDER
# 39 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_3, MSGBOX_DEFAULT
# 43 "data/maps/ProfessorCinder/scripts.pory"
	delay 60
	goto ProfessorCinder_Intro_1

ProfessorCinder_Intro_5:
# 48 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Triggers_Text_5, MSGBOX_DEFAULT
# 49 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 50 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_EventScript_Professor
	goto ProfessorCinder_Intro_4


ProfessorCinder_Outro::
# 61 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_0, MSGBOX_DEFAULT
# 64 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_2, MSGBOX_DEFAULT
# 70 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_3, MSGBOX_DEFAULT
# 72 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_4, MSGBOX_DEFAULT
# 75 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_Outro_2
# 77 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_Outro_3
# 79 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq ProfessorCinder_Outro_4
ProfessorCinder_Outro_1:
# 82 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_Outro_2:
# 76 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 1
	goto ProfessorCinder_Outro_1

ProfessorCinder_Outro_3:
# 78 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 2
	goto ProfessorCinder_Outro_1

ProfessorCinder_Outro_4:
# 80 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 3
	goto ProfessorCinder_Outro_1


ProfessorCinder_EventScript_BallDefault::
# 89 "data/maps/ProfessorCinder/scripts.pory"
	setvar STARTER_REGION, 0
	end


StarterFade::
# 94 "data/maps/ProfessorCinder/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/ProfessorCinder/scripts.pory"
	delay 20
# 96 "data/maps/ProfessorCinder/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Common_GiveStarter::
# 102 "data/maps/ProfessorCinder/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_2
# 103 "data/maps/ProfessorCinder/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 105 "data/maps/ProfessorCinder/scripts.pory"
	givemon VAR_TEMP_2, 5, ITEM_NONE
# 107 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Common_GiveStarter_2
# 113 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Common_GiveStarter_3
# 120 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_2
	return

Common_GiveStarter_1:
# 125 "data/maps/ProfessorCinder/scripts.pory"
	waitfanfare
# 126 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
	return

Common_GiveStarter_2:
# 108 "data/maps/ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_0
# 110 "data/maps/ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 111 "data/maps/ProfessorCinder/scripts.pory"
	call NicknamePartyMon
# 112 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_Outro
	goto Common_GiveStarter_1

Common_GiveStarter_3:
# 114 "data/maps/ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_1
# 116 "data/maps/ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 117 "data/maps/ProfessorCinder/scripts.pory"
	call NicknameBoxMon
# 118 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_Outro
	goto Common_GiveStarter_1


ProfessorCinder_EventScript_Professor::
# 134 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ProfessorCinder_EventScript_Professor_2
# 142 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_2, MSGBOX_NPC
ProfessorCinder_EventScript_Professor_1:
	end

ProfessorCinder_EventScript_Professor_2:
# 135 "data/maps/ProfessorCinder/scripts.pory"
	message ProfessorCinder_EventScript_Professor_Text_0
# 136 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 137 "data/maps/ProfessorCinder/scripts.pory"
	multichoice 20, 0, MULTI_STARTER_CHOICE, 0
# 138 "data/maps/ProfessorCinder/scripts.pory"
	call StarterFade
# 139 "data/maps/ProfessorCinder/scripts.pory"
	copyvar STARTER_REGION, VAR_RESULT
# 140 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_1, MSGBOX_AUTOCLOSE
	goto ProfessorCinder_EventScript_Professor_1


ProfessorCinder_EventScript_PokeballOne::
# 150 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 151 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballOne_4
ProfessorCinder_EventScript_PokeballOne_3:
# 155 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballOne_1:
# 157 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballOne_2:
# 152 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 1
# 153 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballOne_1

ProfessorCinder_EventScript_PokeballOne_4:
# 151 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballOne_6
	goto ProfessorCinder_EventScript_PokeballOne_3

ProfessorCinder_EventScript_PokeballOne_6:
# 151 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballOne_2
	goto ProfessorCinder_EventScript_PokeballOne_3


ProfessorCinder_EventScript_PokeballTwo::
# 162 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 163 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballTwo_4
ProfessorCinder_EventScript_PokeballTwo_3:
# 167 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballTwo_1:
# 169 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballTwo_2:
# 164 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 2
# 165 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballTwo_1

ProfessorCinder_EventScript_PokeballTwo_4:
# 163 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballTwo_6
	goto ProfessorCinder_EventScript_PokeballTwo_3

ProfessorCinder_EventScript_PokeballTwo_6:
# 163 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballTwo_2
	goto ProfessorCinder_EventScript_PokeballTwo_3


ProfessorCinder_EventScript_PokeballThree::
# 174 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 175 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballThree_4
ProfessorCinder_EventScript_PokeballThree_3:
# 179 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballThree_1:
# 181 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballThree_2:
# 176 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 3
# 177 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballThree_1

ProfessorCinder_EventScript_PokeballThree_4:
# 175 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballThree_6
	goto ProfessorCinder_EventScript_PokeballThree_3

ProfessorCinder_EventScript_PokeballThree_6:
# 175 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballThree_2
	goto ProfessorCinder_EventScript_PokeballThree_3


ProfessorCinder_PickStarterForSlot::
# 189 "data/maps/ProfessorCinder/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 192 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq ProfessorCinder_PickStarterForSlot_2
# 239 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_5
# 286 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_11
# 333 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq ProfessorCinder_PickStarterForSlot_23
# 380 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq ProfessorCinder_PickStarterForSlot_41
# 427 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq ProfessorCinder_PickStarterForSlot_59
# 474 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq ProfessorCinder_PickStarterForSlot_77
# 521 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq ProfessorCinder_PickStarterForSlot_95
# 568 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq ProfessorCinder_PickStarterForSlot_113
	return

ProfessorCinder_PickStarterForSlot_2:
# 194 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_8
# 209 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_17
# 224 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 225 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_3, MSGBOX_YESNO
# 226 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_34
# 232 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 233 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_5:
# 241 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_14
# 256 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_29
# 271 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 272 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_6, MSGBOX_YESNO
# 273 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_52
# 279 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 280 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_8:
# 195 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 196 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_0, MSGBOX_YESNO
# 197 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_19
# 203 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 204 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_11:
# 288 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_26
# 303 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_47
# 318 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 319 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_9, MSGBOX_YESNO
# 320 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_70
# 326 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 327 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_14:
# 242 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 243 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_4, MSGBOX_YESNO
# 244 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_31
# 250 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 251 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_17:
# 210 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 211 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_2, MSGBOX_YESNO
# 212 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_37
# 218 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 219 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_19:
# 198 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 199 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 200 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_23:
# 335 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_44
# 350 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_65
# 365 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 366 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_12, MSGBOX_YESNO
# 367 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_88
# 373 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 374 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_26:
# 289 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 290 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_7, MSGBOX_YESNO
# 291 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_49
# 297 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 298 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_29:
# 257 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 258 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_5, MSGBOX_YESNO
# 259 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_55
# 265 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 266 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_31:
# 245 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIKORITA
# 246 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 247 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_34:
# 227 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 228 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 229 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_37:
# 213 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 214 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 215 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_41:
# 382 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_62
# 397 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_83
# 412 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 413 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_15, MSGBOX_YESNO
# 414 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_106
# 420 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 421 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_44:
# 336 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 337 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_10, MSGBOX_YESNO
# 338 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_67
# 344 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 345 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_47:
# 304 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 305 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_8, MSGBOX_YESNO
# 306 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_73
# 312 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 313 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_49:
# 292 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TREECKO
# 293 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 294 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_52:
# 274 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TOTODILE
# 275 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 276 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_55:
# 260 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CYNDAQUIL
# 261 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 262 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_59:
# 429 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_80
# 444 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_101
# 459 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 460 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_18, MSGBOX_YESNO
# 461 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_124
# 467 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 468 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_62:
# 383 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 384 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_13, MSGBOX_YESNO
# 385 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_85
# 391 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 392 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_65:
# 351 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 352 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_11, MSGBOX_YESNO
# 353 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_91
# 359 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 360 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_67:
# 339 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TURTWIG
# 340 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 341 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_70:
# 321 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_MUDKIP
# 322 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 323 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_73:
# 307 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TORCHIC
# 308 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 309 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_77:
# 476 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_98
# 491 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_119
# 506 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 507 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 508 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_139
# 514 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 515 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_80:
# 430 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 431 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_16, MSGBOX_YESNO
# 432 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_103
# 438 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 439 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_83:
# 398 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 399 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_14, MSGBOX_YESNO
# 400 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_109
# 406 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 407 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_85:
# 386 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SNIVY
# 387 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 388 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_88:
# 368 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_PIPLUP
# 369 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 370 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_91:
# 354 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIMCHAR
# 355 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 356 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_95:
# 523 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_116
# 538 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_134
# 553 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 554 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 555 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_151
# 561 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 562 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_98:
# 477 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 478 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_19, MSGBOX_YESNO
# 479 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_121
# 485 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 486 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_101:
# 445 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 446 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_17, MSGBOX_YESNO
# 447 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_127
# 453 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 454 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_103:
# 433 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHESPIN
# 434 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 435 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_106:
# 415 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_OSHAWOTT
# 416 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 417 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_109:
# 401 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TEPIG
# 402 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 403 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_113:
# 570 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_131
# 585 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_146
# 600 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 601 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_26, MSGBOX_YESNO
# 602 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_157
# 608 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 609 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_116:
# 524 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 525 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_22, MSGBOX_YESNO
# 526 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_136
# 532 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 533 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_119:
# 492 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 493 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_20, MSGBOX_YESNO
# 494 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_142
# 500 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 501 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_121:
# 480 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_ROWLET
# 481 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 482 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_124:
# 462 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FROAKIE
# 463 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 464 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_127:
# 448 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FENNEKIN
# 449 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 450 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_131:
# 571 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 572 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_24, MSGBOX_YESNO
# 573 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_148
# 579 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 580 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_134:
# 539 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 540 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_23, MSGBOX_YESNO
# 541 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_154
# 547 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 548 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_136:
# 527 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_GROOKEY
# 528 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 529 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_139:
# 509 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 510 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 511 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_142:
# 495 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_LITTEN
# 496 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 497 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_146:
# 586 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 587 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_25, MSGBOX_YESNO
# 588 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_160
# 594 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 595 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_148:
# 574 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SPRIGATITO
# 575 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 576 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_151:
# 556 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 557 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 558 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_154:
# 542 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SCORBUNNY
# 543 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 544 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_157:
# 603 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_QUAXLY
# 604 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 605 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_160:
# 589 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FUECOCO
# 590 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 591 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return


ProfessorCinder_EventScript_Tech_Text_0:
# 8 "data/maps/ProfessorCinder/scripts.pory"
	.string "This simply cannot be.$"

ProfessorCinder_EventScript_Tech_Text_1:
# 9 "data/maps/ProfessorCinder/scripts.pory"
	.string "How could there be so much power\nemanating from a place like that?$"

ProfessorCinder_Triggers_Text_0:
# 20 "data/maps/ProfessorCinder/scripts.pory"
	.string "Ah! There you are!\pYour mother said you'd be stopping by!$"

ProfessorCinder_Triggers_Text_1:
# 22 "data/maps/ProfessorCinder/scripts.pory"
	.string "How long has it been since I've seen you?\n10 years perhaps?$"

ProfessorCinder_Triggers_Text_2:
# 23 "data/maps/ProfessorCinder/scripts.pory"
	.string "My investigations of mythical Pokemon\nhave had me travelling for years.$"

ProfessorCinder_Triggers_Text_3:
# 24 "data/maps/ProfessorCinder/scripts.pory"
	.string "You look just like your father, you know.\nYes, the Champion himself! We were close\pfriends once, back before…\pWell, before our duties pulled us both\naway.$"

ProfessorCinder_Triggers_Text_4:
# 26 "data/maps/ProfessorCinder/scripts.pory"
	.string "Oh! Right, right, that’s why you’re here.\nI promised your father I’d help get you\pstarted on your journey.$"

ProfessorCinder_Triggers_Text_5:
# 27 "data/maps/ProfessorCinder/scripts.pory"
	.string "Which region would you like your Pokemon\nto be from?$"

ProfessorCinder_Intro_Text_0:
# 52 "data/maps/ProfessorCinder/scripts.pory"
	.string "Good luck on your journey!$"

ProfessorCinder_Outro_Text_0:
# 61 "data/maps/ProfessorCinder/scripts.pory"
	.string "Excellent choice! That Pokémon will serve\nyou well. But remember, strength\pcomes from more than just battling.\nTake the time to know your partner.$"

ProfessorCinder_Outro_Text_1:
# 64 "data/maps/ProfessorCinder/scripts.pory"
	.string "Now then, I have something else for you.\nThis is a Pokédex.\nIt will record data on every Pokémon you encounter.$"

ProfessorCinder_Outro_Text_2:
# 68 "data/maps/ProfessorCinder/scripts.pory"
	.string "The war left deep scars on Valora’s land.\nMany Pokémon habitats were changed or\pshattered entirely. By filling this\nPokédex, you’ll be helping me understand\phow they’ve adapted.$"

ProfessorCinder_Outro_Text_3:
# 70 "data/maps/ProfessorCinder/scripts.pory"
	.string "One last thing: be sure to vist the \nPrometheus Tech campus south of town.\pThey fund my lab, though truthfully, they\nhardly pay me any attention. They have\pall sorts of tools and technology to\nhelp trainers!$"

ProfessorCinder_Outro_Text_4:
# 72 "data/maps/ProfessorCinder/scripts.pory"
	.string "Now then, off you go!\pAdventure, discovery, and maybe even a\nlittle danger await you out there.\pI’ll be here when you need me.$"

Common_GiveStarter_Text_0:
# 109 "data/maps/ProfessorCinder/scripts.pory"
	.string "Received your Pokemon!$"

Common_GiveStarter_Text_1:
# 115 "data/maps/ProfessorCinder/scripts.pory"
	.string "Your Pokemon was sent to your PC.$"

Common_GiveStarter_Text_2:
# 120 "data/maps/ProfessorCinder/scripts.pory"
	.string "No more room for Pokemon.$"

ProfessorCinder_EventScript_Professor_Text_0:
# 135 "data/maps/ProfessorCinder/scripts.pory"
	.string "What region would you like to see?$"

ProfessorCinder_EventScript_Professor_Text_1:
# 140 "data/maps/ProfessorCinder/scripts.pory"
	.string "Choose your Pokemon wisely.$"

ProfessorCinder_EventScript_Professor_Text_2:
# 142 "data/maps/ProfessorCinder/scripts.pory"
	.string "Take care of your Pokemon.$"

ProfessorCinder_EventScript_PokeballOne_Text_0:
# 155 "data/maps/ProfessorCinder/scripts.pory"
	.string "Don't take another.$"

ProfessorCinder_PickStarterForSlot_Text_0:
# 196 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

ProfessorCinder_PickStarterForSlot_Text_1:
# 204 "data/maps/ProfessorCinder/scripts.pory"
	.string "Maybe another choice then.$"

ProfessorCinder_PickStarterForSlot_Text_2:
# 211 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Charmander?$"

ProfessorCinder_PickStarterForSlot_Text_3:
# 225 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Squirtle?$"

ProfessorCinder_PickStarterForSlot_Text_4:
# 243 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chikorita?$"

ProfessorCinder_PickStarterForSlot_Text_5:
# 258 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

ProfessorCinder_PickStarterForSlot_Text_6:
# 272 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Totodile?$"

ProfessorCinder_PickStarterForSlot_Text_7:
# 290 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Treecko?$"

ProfessorCinder_PickStarterForSlot_Text_8:
# 305 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Torchic?$"

ProfessorCinder_PickStarterForSlot_Text_9:
# 319 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Mudkip?$"

ProfessorCinder_PickStarterForSlot_Text_10:
# 337 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Turtwig?$"

ProfessorCinder_PickStarterForSlot_Text_11:
# 352 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chimchar?$"

ProfessorCinder_PickStarterForSlot_Text_12:
# 366 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Piplup?$"

ProfessorCinder_PickStarterForSlot_Text_13:
# 384 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Snivy?$"

ProfessorCinder_PickStarterForSlot_Text_14:
# 399 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Tepig?$"

ProfessorCinder_PickStarterForSlot_Text_15:
# 413 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Oshawott?$"

ProfessorCinder_PickStarterForSlot_Text_16:
# 431 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chespin?$"

ProfessorCinder_PickStarterForSlot_Text_17:
# 446 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fennekin?$"

ProfessorCinder_PickStarterForSlot_Text_18:
# 460 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Froakie?$"

ProfessorCinder_PickStarterForSlot_Text_19:
# 478 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Rowlet?$"

ProfessorCinder_PickStarterForSlot_Text_20:
# 493 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Litten?$"

ProfessorCinder_PickStarterForSlot_Text_21:
# 507 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Popplio?$"

ProfessorCinder_PickStarterForSlot_Text_22:
# 525 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Grookey?$"

ProfessorCinder_PickStarterForSlot_Text_23:
# 540 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

ProfessorCinder_PickStarterForSlot_Text_24:
# 572 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

ProfessorCinder_PickStarterForSlot_Text_25:
# 587 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

ProfessorCinder_PickStarterForSlot_Text_26:
# 601 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Quaxly?$"
