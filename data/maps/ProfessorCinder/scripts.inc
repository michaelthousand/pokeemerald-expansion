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
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_Outro_2
# 63 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_Outro_3
# 65 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq ProfessorCinder_Outro_4
ProfessorCinder_Outro_1:
# 69 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_0, MSGBOX_DEFAULT
# 72 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_1, MSGBOX_DEFAULT
# 74 "data/maps/ProfessorCinder/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 77 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_2, MSGBOX_DEFAULT
# 79 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_3, MSGBOX_DEFAULT
# 81 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_4, MSGBOX_DEFAULT
# 82 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 85 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_Outro_2:
# 62 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 1
	goto ProfessorCinder_Outro_1

ProfessorCinder_Outro_3:
# 64 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 2
	goto ProfessorCinder_Outro_1

ProfessorCinder_Outro_4:
# 66 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 3
	goto ProfessorCinder_Outro_1


ProfessorCinder_EventScript_BallDefault::
# 92 "data/maps/ProfessorCinder/scripts.pory"
	setvar STARTER_REGION, 0
	end


StarterFade::
# 97 "data/maps/ProfessorCinder/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/ProfessorCinder/scripts.pory"
	delay 20
# 99 "data/maps/ProfessorCinder/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Common_GiveStarter::
# 105 "data/maps/ProfessorCinder/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_2
# 106 "data/maps/ProfessorCinder/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 108 "data/maps/ProfessorCinder/scripts.pory"
	givemon VAR_TEMP_2, 5, ITEM_NONE
# 110 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Common_GiveStarter_2
# 116 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Common_GiveStarter_3
# 123 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_2
	return

Common_GiveStarter_1:
# 128 "data/maps/ProfessorCinder/scripts.pory"
	waitfanfare
# 129 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
	return

Common_GiveStarter_2:
# 111 "data/maps/ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 112 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_0
# 113 "data/maps/ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 114 "data/maps/ProfessorCinder/scripts.pory"
	call NicknamePartyMon
# 115 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_Outro
	goto Common_GiveStarter_1

Common_GiveStarter_3:
# 117 "data/maps/ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 118 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_1
# 119 "data/maps/ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 120 "data/maps/ProfessorCinder/scripts.pory"
	call NicknameBoxMon
# 121 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_Outro
	goto Common_GiveStarter_1


ProfessorCinder_EventScript_Professor::
# 137 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ProfessorCinder_EventScript_Professor_2
# 145 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_2, MSGBOX_NPC
ProfessorCinder_EventScript_Professor_1:
	end

ProfessorCinder_EventScript_Professor_2:
# 138 "data/maps/ProfessorCinder/scripts.pory"
	message ProfessorCinder_EventScript_Professor_Text_0
# 139 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 140 "data/maps/ProfessorCinder/scripts.pory"
	multichoice 20, 0, MULTI_STARTER_CHOICE, 0
# 141 "data/maps/ProfessorCinder/scripts.pory"
	call StarterFade
# 142 "data/maps/ProfessorCinder/scripts.pory"
	copyvar STARTER_REGION, VAR_RESULT
# 143 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_1, MSGBOX_AUTOCLOSE
	goto ProfessorCinder_EventScript_Professor_1


ProfessorCinder_EventScript_PokeballOne::
# 153 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 154 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballOne_4
ProfessorCinder_EventScript_PokeballOne_3:
# 158 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballOne_1:
# 160 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballOne_2:
# 155 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 1
# 156 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballOne_1

ProfessorCinder_EventScript_PokeballOne_4:
# 154 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballOne_6
	goto ProfessorCinder_EventScript_PokeballOne_3

ProfessorCinder_EventScript_PokeballOne_6:
# 154 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballOne_2
	goto ProfessorCinder_EventScript_PokeballOne_3


ProfessorCinder_EventScript_PokeballTwo::
# 165 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 166 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballTwo_4
ProfessorCinder_EventScript_PokeballTwo_3:
# 170 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballTwo_1:
# 172 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballTwo_2:
# 167 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 2
# 168 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballTwo_1

ProfessorCinder_EventScript_PokeballTwo_4:
# 166 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballTwo_6
	goto ProfessorCinder_EventScript_PokeballTwo_3

ProfessorCinder_EventScript_PokeballTwo_6:
# 166 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballTwo_2
	goto ProfessorCinder_EventScript_PokeballTwo_3


ProfessorCinder_EventScript_PokeballThree::
# 177 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 178 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballThree_4
ProfessorCinder_EventScript_PokeballThree_3:
# 182 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballThree_1:
# 184 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballThree_2:
# 179 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 3
# 180 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballThree_1

ProfessorCinder_EventScript_PokeballThree_4:
# 178 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballThree_6
	goto ProfessorCinder_EventScript_PokeballThree_3

ProfessorCinder_EventScript_PokeballThree_6:
# 178 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballThree_2
	goto ProfessorCinder_EventScript_PokeballThree_3


ProfessorCinder_PickStarterForSlot::
# 192 "data/maps/ProfessorCinder/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 195 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq ProfessorCinder_PickStarterForSlot_2
# 242 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_5
# 289 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_11
# 336 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq ProfessorCinder_PickStarterForSlot_23
# 383 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq ProfessorCinder_PickStarterForSlot_41
# 430 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq ProfessorCinder_PickStarterForSlot_59
# 477 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq ProfessorCinder_PickStarterForSlot_77
# 524 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq ProfessorCinder_PickStarterForSlot_95
# 571 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq ProfessorCinder_PickStarterForSlot_113
	return

ProfessorCinder_PickStarterForSlot_2:
# 197 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_8
# 212 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_17
# 227 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 228 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_3, MSGBOX_YESNO
# 229 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_34
# 235 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 236 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_5:
# 244 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_14
# 259 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_29
# 274 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 275 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_6, MSGBOX_YESNO
# 276 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_52
# 282 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 283 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_8:
# 198 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 199 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_0, MSGBOX_YESNO
# 200 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_19
# 206 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 207 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_11:
# 291 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_26
# 306 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_47
# 321 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 322 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_9, MSGBOX_YESNO
# 323 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_70
# 329 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 330 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_14:
# 245 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 246 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_4, MSGBOX_YESNO
# 247 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_31
# 253 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 254 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_17:
# 213 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 214 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_2, MSGBOX_YESNO
# 215 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_37
# 221 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 222 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_19:
# 201 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 202 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 203 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_23:
# 338 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_44
# 353 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_65
# 368 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 369 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_12, MSGBOX_YESNO
# 370 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_88
# 376 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 377 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_26:
# 292 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 293 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_7, MSGBOX_YESNO
# 294 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_49
# 300 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 301 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_29:
# 260 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 261 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_5, MSGBOX_YESNO
# 262 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_55
# 268 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 269 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_31:
# 248 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIKORITA
# 249 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 250 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_34:
# 230 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 231 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 232 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_37:
# 216 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 217 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 218 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_41:
# 385 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_62
# 400 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_83
# 415 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 416 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_15, MSGBOX_YESNO
# 417 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_106
# 423 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 424 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_44:
# 339 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 340 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_10, MSGBOX_YESNO
# 341 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_67
# 347 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 348 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_47:
# 307 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 308 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_8, MSGBOX_YESNO
# 309 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_73
# 315 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 316 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_49:
# 295 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TREECKO
# 296 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 297 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_52:
# 277 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TOTODILE
# 278 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 279 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_55:
# 263 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CYNDAQUIL
# 264 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 265 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_59:
# 432 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_80
# 447 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_101
# 462 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 463 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_18, MSGBOX_YESNO
# 464 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_124
# 470 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 471 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_62:
# 386 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 387 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_13, MSGBOX_YESNO
# 388 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_85
# 394 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 395 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_65:
# 354 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 355 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_11, MSGBOX_YESNO
# 356 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_91
# 362 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 363 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_67:
# 342 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TURTWIG
# 343 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 344 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_70:
# 324 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_MUDKIP
# 325 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 326 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_73:
# 310 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TORCHIC
# 311 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 312 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_77:
# 479 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_98
# 494 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_119
# 509 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 510 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 511 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_139
# 517 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 518 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_80:
# 433 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 434 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_16, MSGBOX_YESNO
# 435 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_103
# 441 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 442 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_83:
# 401 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 402 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_14, MSGBOX_YESNO
# 403 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_109
# 409 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 410 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_85:
# 389 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SNIVY
# 390 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 391 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_88:
# 371 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_PIPLUP
# 372 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 373 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_91:
# 357 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIMCHAR
# 358 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 359 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_95:
# 526 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_116
# 541 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_134
# 556 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 557 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 558 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_151
# 564 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 565 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_98:
# 480 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 481 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_19, MSGBOX_YESNO
# 482 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_121
# 488 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 489 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_101:
# 448 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 449 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_17, MSGBOX_YESNO
# 450 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_127
# 456 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 457 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_103:
# 436 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHESPIN
# 437 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 438 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_106:
# 418 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_OSHAWOTT
# 419 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 420 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_109:
# 404 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TEPIG
# 405 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 406 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_113:
# 573 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_131
# 588 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_146
# 603 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 604 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_26, MSGBOX_YESNO
# 605 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_157
# 611 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 612 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_116:
# 527 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 528 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_22, MSGBOX_YESNO
# 529 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_136
# 535 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 536 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_119:
# 495 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 496 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_20, MSGBOX_YESNO
# 497 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_142
# 503 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 504 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_121:
# 483 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_ROWLET
# 484 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 485 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_124:
# 465 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FROAKIE
# 466 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 467 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_127:
# 451 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FENNEKIN
# 452 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 453 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_131:
# 574 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 575 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_24, MSGBOX_YESNO
# 576 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_148
# 582 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 583 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_134:
# 542 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 543 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_23, MSGBOX_YESNO
# 544 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_154
# 550 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 551 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_136:
# 530 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_GROOKEY
# 531 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 532 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_139:
# 512 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 513 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 514 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_142:
# 498 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_LITTEN
# 499 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 500 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_146:
# 589 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 590 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_25, MSGBOX_YESNO
# 591 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_160
# 597 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 598 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_148:
# 577 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SPRIGATITO
# 578 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 579 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_151:
# 559 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 560 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 561 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_154:
# 545 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SCORBUNNY
# 546 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 547 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_157:
# 606 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_QUAXLY
# 607 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 608 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_160:
# 592 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FUECOCO
# 593 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 594 "data/maps/ProfessorCinder/scripts.pory"
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
# 69 "data/maps/ProfessorCinder/scripts.pory"
	.string "Excellent choice! That Pokémon will serve\nyou well. But remember, strength\pcomes from more than just battling.\nTake the time to know your partner.$"

ProfessorCinder_Outro_Text_1:
# 72 "data/maps/ProfessorCinder/scripts.pory"
	.string "Now then, I have something else for you.\nThis is a Pokédex.\nIt will record data on every Pokémon you encounter.$"

ProfessorCinder_Outro_Text_2:
# 77 "data/maps/ProfessorCinder/scripts.pory"
	.string "The war left deep scars on Valora’s land.\nMany Pokémon habitats were changed or\pshattered entirely. By filling this\nPokédex, you’ll be helping me understand\phow they’ve adapted.$"

ProfessorCinder_Outro_Text_3:
# 79 "data/maps/ProfessorCinder/scripts.pory"
	.string "One last thing: be sure to vist the \nPrometheus Tech campus south of town.\pThey fund my lab, though truthfully, they\nhardly pay me any attention. They have\pall sorts of tools and technology to\nhelp trainers!$"

ProfessorCinder_Outro_Text_4:
# 81 "data/maps/ProfessorCinder/scripts.pory"
	.string "Now then, off you go!\pAdventure, discovery, and maybe even a\nlittle danger await you out there.\pI’ll be here when you need me.$"

Common_GiveStarter_Text_0:
# 112 "data/maps/ProfessorCinder/scripts.pory"
	.string "Received your Pokemon!$"

Common_GiveStarter_Text_1:
# 118 "data/maps/ProfessorCinder/scripts.pory"
	.string "Your Pokemon was sent to your PC.$"

Common_GiveStarter_Text_2:
# 123 "data/maps/ProfessorCinder/scripts.pory"
	.string "No more room for Pokemon.$"

ProfessorCinder_EventScript_Professor_Text_0:
# 138 "data/maps/ProfessorCinder/scripts.pory"
	.string "What region would you like to see?$"

ProfessorCinder_EventScript_Professor_Text_1:
# 143 "data/maps/ProfessorCinder/scripts.pory"
	.string "Choose your Pokemon wisely.$"

ProfessorCinder_EventScript_Professor_Text_2:
# 145 "data/maps/ProfessorCinder/scripts.pory"
	.string "Take care of your Pokemon.$"

ProfessorCinder_EventScript_PokeballOne_Text_0:
# 158 "data/maps/ProfessorCinder/scripts.pory"
	.string "Don't take another.$"

ProfessorCinder_PickStarterForSlot_Text_0:
# 199 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

ProfessorCinder_PickStarterForSlot_Text_1:
# 207 "data/maps/ProfessorCinder/scripts.pory"
	.string "Maybe another choice then.$"

ProfessorCinder_PickStarterForSlot_Text_2:
# 214 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Charmander?$"

ProfessorCinder_PickStarterForSlot_Text_3:
# 228 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Squirtle?$"

ProfessorCinder_PickStarterForSlot_Text_4:
# 246 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chikorita?$"

ProfessorCinder_PickStarterForSlot_Text_5:
# 261 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

ProfessorCinder_PickStarterForSlot_Text_6:
# 275 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Totodile?$"

ProfessorCinder_PickStarterForSlot_Text_7:
# 293 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Treecko?$"

ProfessorCinder_PickStarterForSlot_Text_8:
# 308 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Torchic?$"

ProfessorCinder_PickStarterForSlot_Text_9:
# 322 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Mudkip?$"

ProfessorCinder_PickStarterForSlot_Text_10:
# 340 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Turtwig?$"

ProfessorCinder_PickStarterForSlot_Text_11:
# 355 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chimchar?$"

ProfessorCinder_PickStarterForSlot_Text_12:
# 369 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Piplup?$"

ProfessorCinder_PickStarterForSlot_Text_13:
# 387 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Snivy?$"

ProfessorCinder_PickStarterForSlot_Text_14:
# 402 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Tepig?$"

ProfessorCinder_PickStarterForSlot_Text_15:
# 416 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Oshawott?$"

ProfessorCinder_PickStarterForSlot_Text_16:
# 434 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chespin?$"

ProfessorCinder_PickStarterForSlot_Text_17:
# 449 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fennekin?$"

ProfessorCinder_PickStarterForSlot_Text_18:
# 463 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Froakie?$"

ProfessorCinder_PickStarterForSlot_Text_19:
# 481 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Rowlet?$"

ProfessorCinder_PickStarterForSlot_Text_20:
# 496 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Litten?$"

ProfessorCinder_PickStarterForSlot_Text_21:
# 510 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Popplio?$"

ProfessorCinder_PickStarterForSlot_Text_22:
# 528 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Grookey?$"

ProfessorCinder_PickStarterForSlot_Text_23:
# 543 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

ProfessorCinder_PickStarterForSlot_Text_24:
# 575 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

ProfessorCinder_PickStarterForSlot_Text_25:
# 590 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

ProfessorCinder_PickStarterForSlot_Text_26:
# 604 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Quaxly?$"
