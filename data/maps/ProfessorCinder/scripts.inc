ProfessorCinder_MapScripts::
# 2 "data/maps/ProfessorCinder/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProfessorCinder_EventScript_BallDefault
	.byte 0


SetInitialCap::
# 6 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
	end


ProfessorCinder_Intro::
# 13 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Intro_2
ProfessorCinder_Intro_1:
# 27 "data/maps/ProfessorCinder/scripts.pory"
	faceplayer
# 28 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Intro_Text_6, MSGBOX_DEFAULT
# 29 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
	return

ProfessorCinder_Intro_2:
# 14 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 15 "data/maps/ProfessorCinder/scripts.pory"
	faceplayer
# 16 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Intro_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Intro_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Intro_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Intro_Text_3, MSGBOX_DEFAULT
# 21 "data/maps/ProfessorCinder/scripts.pory"
	delay 60
# 22 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Intro_Text_4, MSGBOX_DEFAULT
# 23 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Intro_Text_5, MSGBOX_DEFAULT
# 24 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 25 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_EventScript_Professor
	goto ProfessorCinder_Intro_1


ProfessorCinder_Outro::
# 33 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_3, MSGBOX_DEFAULT
# 44 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_Outro_Text_4, MSGBOX_DEFAULT
# 46 "data/maps/ProfessorCinder/scripts.pory"
	setflag TALKED_TO_CINDER
# 47 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end


ProfessorCinder_EventScript_BallDefault::
# 54 "data/maps/ProfessorCinder/scripts.pory"
	setvar STARTER_REGION, 0
	end


StarterFade::
# 59 "data/maps/ProfessorCinder/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/ProfessorCinder/scripts.pory"
	delay 20
# 61 "data/maps/ProfessorCinder/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Common_GiveStarter::
# 67 "data/maps/ProfessorCinder/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_2
# 68 "data/maps/ProfessorCinder/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 70 "data/maps/ProfessorCinder/scripts.pory"
	givemon VAR_TEMP_2, 5, ITEM_NONE
# 72 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Common_GiveStarter_2
# 78 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Common_GiveStarter_3
# 85 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_2
	return

Common_GiveStarter_1:
# 90 "data/maps/ProfessorCinder/scripts.pory"
	waitfanfare
# 91 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 95 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Common_GiveStarter_8
# 98 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Common_GiveStarter_9
# 101 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Common_GiveStarter_10
Common_GiveStarter_7:
# 107 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_LEVEL_CAP, 0
	goto_if_eq Common_GiveStarter_15
Common_GiveStarter_14:
	return

Common_GiveStarter_2:
# 73 "data/maps/ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_0
# 75 "data/maps/ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 76 "data/maps/ProfessorCinder/scripts.pory"
	call NicknamePartyMon
# 77 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_Outro
	goto Common_GiveStarter_1

Common_GiveStarter_3:
# 79 "data/maps/ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_1
# 81 "data/maps/ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 82 "data/maps/ProfessorCinder/scripts.pory"
	call NicknameBoxMon
# 83 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_Outro
	goto Common_GiveStarter_1

Common_GiveStarter_8:
# 96 "data/maps/ProfessorCinder/scripts.pory"
	setflag STARTER_BALL_ONE
# 97 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 1
	goto Common_GiveStarter_7

Common_GiveStarter_9:
# 99 "data/maps/ProfessorCinder/scripts.pory"
	setflag STARTER_BALL_TWO
# 100 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 2
	goto Common_GiveStarter_7

Common_GiveStarter_10:
# 102 "data/maps/ProfessorCinder/scripts.pory"
	setflag STARTER_BALL_THREE
# 103 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 3
	goto Common_GiveStarter_7

Common_GiveStarter_15:
# 108 "data/maps/ProfessorCinder/scripts.pory"
	call SetInitialCap
	goto Common_GiveStarter_14


ProfessorCinder_EventScript_Professor::
# 115 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_Professor_4
ProfessorCinder_EventScript_Professor_3:
# 128 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_2, MSGBOX_NPC
ProfessorCinder_EventScript_Professor_1:
	end

ProfessorCinder_EventScript_Professor_2:
# 116 "data/maps/ProfessorCinder/scripts.pory"
	lock
# 117 "data/maps/ProfessorCinder/scripts.pory"
	faceplayer
# 118 "data/maps/ProfessorCinder/scripts.pory"
	message ProfessorCinder_EventScript_Professor_Text_0
# 119 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 120 "data/maps/ProfessorCinder/scripts.pory"
	multichoice 20, 0, MULTI_STARTER_CHOICE, 0
# 121 "data/maps/ProfessorCinder/scripts.pory"
	call StarterFade
# 124 "data/maps/ProfessorCinder/scripts.pory"
	copyvar STARTER_REGION, VAR_RESULT
# 126 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_1, MSGBOX_AUTOCLOSE
	goto ProfessorCinder_EventScript_Professor_1

ProfessorCinder_EventScript_Professor_4:
# 115 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_Professor_6
	goto ProfessorCinder_EventScript_Professor_3

ProfessorCinder_EventScript_Professor_6:
# 115 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_Professor_2
	goto ProfessorCinder_EventScript_Professor_3


ProfessorCinder_EventScript_PokeballOne::
# 135 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 136 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballOne_4
ProfessorCinder_EventScript_PokeballOne_3:
# 140 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballOne_1:
# 142 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballOne_2:
# 137 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 1
# 138 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballOne_1

ProfessorCinder_EventScript_PokeballOne_4:
# 136 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballOne_6
	goto ProfessorCinder_EventScript_PokeballOne_3

ProfessorCinder_EventScript_PokeballOne_6:
# 136 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballOne_2
	goto ProfessorCinder_EventScript_PokeballOne_3


ProfessorCinder_EventScript_PokeballTwo::
# 147 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 148 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballTwo_4
ProfessorCinder_EventScript_PokeballTwo_3:
# 152 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballTwo_1:
# 154 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballTwo_2:
# 149 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 2
# 150 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballTwo_1

ProfessorCinder_EventScript_PokeballTwo_4:
# 148 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballTwo_6
	goto ProfessorCinder_EventScript_PokeballTwo_3

ProfessorCinder_EventScript_PokeballTwo_6:
# 148 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballTwo_2
	goto ProfessorCinder_EventScript_PokeballTwo_3


ProfessorCinder_EventScript_PokeballThree::
# 159 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 160 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballThree_4
ProfessorCinder_EventScript_PokeballThree_3:
# 164 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballThree_1:
# 166 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballThree_2:
# 161 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 3
# 162 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballThree_1

ProfessorCinder_EventScript_PokeballThree_4:
# 160 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballThree_6
	goto ProfessorCinder_EventScript_PokeballThree_3

ProfessorCinder_EventScript_PokeballThree_6:
# 160 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballThree_2
	goto ProfessorCinder_EventScript_PokeballThree_3


ProfessorCinder_PickStarterForSlot::
# 174 "data/maps/ProfessorCinder/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 177 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq ProfessorCinder_PickStarterForSlot_2
# 224 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_5
# 271 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_11
# 318 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq ProfessorCinder_PickStarterForSlot_23
# 365 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq ProfessorCinder_PickStarterForSlot_41
# 412 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq ProfessorCinder_PickStarterForSlot_59
# 459 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq ProfessorCinder_PickStarterForSlot_77
# 506 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq ProfessorCinder_PickStarterForSlot_95
# 553 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq ProfessorCinder_PickStarterForSlot_113
	return

ProfessorCinder_PickStarterForSlot_2:
# 179 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_8
# 194 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_17
# 209 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 210 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_3, MSGBOX_YESNO
# 211 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_34
# 217 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 218 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_5:
# 226 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_14
# 241 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_29
# 256 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 257 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_6, MSGBOX_YESNO
# 258 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_52
# 264 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 265 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_8:
# 180 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 181 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_0, MSGBOX_YESNO
# 182 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_19
# 188 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 189 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_11:
# 273 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_26
# 288 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_47
# 303 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 304 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_9, MSGBOX_YESNO
# 305 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_70
# 311 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 312 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_14:
# 227 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 228 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_4, MSGBOX_YESNO
# 229 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_31
# 235 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 236 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_17:
# 195 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 196 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_2, MSGBOX_YESNO
# 197 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_37
# 203 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 204 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_19:
# 183 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 184 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 185 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_23:
# 320 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_44
# 335 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_65
# 350 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 351 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_12, MSGBOX_YESNO
# 352 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_88
# 358 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 359 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_26:
# 274 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 275 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_7, MSGBOX_YESNO
# 276 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_49
# 282 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 283 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_29:
# 242 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 243 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_5, MSGBOX_YESNO
# 244 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_55
# 250 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 251 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_31:
# 230 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIKORITA
# 231 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 232 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_34:
# 212 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 213 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 214 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_37:
# 198 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 199 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 200 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_41:
# 367 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_62
# 382 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_83
# 397 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 398 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_15, MSGBOX_YESNO
# 399 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_106
# 405 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 406 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_44:
# 321 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 322 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_10, MSGBOX_YESNO
# 323 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_67
# 329 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 330 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_47:
# 289 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 290 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_8, MSGBOX_YESNO
# 291 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_73
# 297 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 298 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_49:
# 277 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TREECKO
# 278 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 279 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_52:
# 259 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TOTODILE
# 260 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 261 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_55:
# 245 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CYNDAQUIL
# 246 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 247 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_59:
# 414 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_80
# 429 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_101
# 444 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 445 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_18, MSGBOX_YESNO
# 446 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_124
# 452 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 453 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_62:
# 368 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 369 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_13, MSGBOX_YESNO
# 370 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_85
# 376 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 377 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_65:
# 336 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 337 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_11, MSGBOX_YESNO
# 338 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_91
# 344 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 345 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_67:
# 324 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TURTWIG
# 325 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 326 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_70:
# 306 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_MUDKIP
# 307 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 308 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_73:
# 292 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TORCHIC
# 293 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 294 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_77:
# 461 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_98
# 476 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_119
# 491 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 492 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 493 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_139
# 499 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 500 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_80:
# 415 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 416 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_16, MSGBOX_YESNO
# 417 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_103
# 423 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 424 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_83:
# 383 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 384 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_14, MSGBOX_YESNO
# 385 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_109
# 391 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 392 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_85:
# 371 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SNIVY
# 372 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 373 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_88:
# 353 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_PIPLUP
# 354 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 355 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_91:
# 339 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIMCHAR
# 340 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 341 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_95:
# 508 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_116
# 523 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_134
# 538 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 539 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 540 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_151
# 546 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 547 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_98:
# 462 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 463 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_19, MSGBOX_YESNO
# 464 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_121
# 470 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 471 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_101:
# 430 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 431 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_17, MSGBOX_YESNO
# 432 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_127
# 438 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 439 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_103:
# 418 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHESPIN
# 419 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 420 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_106:
# 400 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_OSHAWOTT
# 401 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 402 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_109:
# 386 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TEPIG
# 387 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 388 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_113:
# 555 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_131
# 570 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_146
# 585 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 586 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_26, MSGBOX_YESNO
# 587 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_157
# 593 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 594 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_116:
# 509 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 510 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_22, MSGBOX_YESNO
# 511 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_136
# 517 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 518 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_119:
# 477 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 478 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_20, MSGBOX_YESNO
# 479 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_142
# 485 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 486 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_121:
# 465 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_ROWLET
# 466 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 467 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_124:
# 447 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FROAKIE
# 448 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 449 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_127:
# 433 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FENNEKIN
# 434 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 435 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_131:
# 556 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 557 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_24, MSGBOX_YESNO
# 558 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_148
# 564 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 565 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_134:
# 524 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 525 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_23, MSGBOX_YESNO
# 526 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_154
# 532 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 533 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_136:
# 512 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_GROOKEY
# 513 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 514 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_139:
# 494 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 495 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 496 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_142:
# 480 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_LITTEN
# 481 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 482 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_146:
# 571 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 572 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_25, MSGBOX_YESNO
# 573 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_160
# 579 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 580 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_148:
# 559 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SPRIGATITO
# 560 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 561 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_151:
# 541 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 542 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 543 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_154:
# 527 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SCORBUNNY
# 528 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 529 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_157:
# 588 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_QUAXLY
# 589 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 590 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_160:
# 574 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FUECOCO
# 575 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 576 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return


ProfessorCinder_Intro_Text_0:
# 16 "data/maps/ProfessorCinder/scripts.pory"
	.string "Ah! There you are!\pYour mother said you'd be stopping\nby!$"

ProfessorCinder_Intro_Text_1:
# 18 "data/maps/ProfessorCinder/scripts.pory"
	.string "How long has it been since I've seen you?\n10 years perhaps?$"

ProfessorCinder_Intro_Text_2:
# 19 "data/maps/ProfessorCinder/scripts.pory"
	.string "My investigations of mythical Pokemon\nhave had me travelling for years.$"

ProfessorCinder_Intro_Text_3:
# 20 "data/maps/ProfessorCinder/scripts.pory"
	.string "You look just like your father, you know.\nYes, the Champion himself! We were close\pfriends once, back before…\pwell, before our duties pulled us both\naway.$"

ProfessorCinder_Intro_Text_4:
# 22 "data/maps/ProfessorCinder/scripts.pory"
	.string "Oh! Right, right, that’s why you’re here.\nI promised your father I’d help get you\pstarted on your journey.$"

ProfessorCinder_Intro_Text_5:
# 23 "data/maps/ProfessorCinder/scripts.pory"
	.string "Which region would you like your Pokemon\nto be from?$"

ProfessorCinder_Intro_Text_6:
# 28 "data/maps/ProfessorCinder/scripts.pory"
	.string "Good luck on your journey!$"

ProfessorCinder_Outro_Text_0:
# 33 "data/maps/ProfessorCinder/scripts.pory"
	.string "Excellent choice! That Pokémon will serve\nyou well. But remember, strength\pcomes from more than just battling.\nTake the time to know your partner.$"

ProfessorCinder_Outro_Text_1:
# 36 "data/maps/ProfessorCinder/scripts.pory"
	.string "Now then, I have something else for you.\nThis is a Pokédex.\nIt will record data on every Pokémon you encounter.$"

ProfessorCinder_Outro_Text_2:
# 40 "data/maps/ProfessorCinder/scripts.pory"
	.string "The war left deep scars on Valora’s land.\nMany Pokémon habitats were changed or\pshattered entirely. By filling this Pokédex,\nyou’ll be helping me understand how they’ve adapted.$"

ProfessorCinder_Outro_Text_3:
# 42 "data/maps/ProfessorCinder/scripts.pory"
	.string "One last thing: be sure to vist the \nPrometheus Tech campus south of town.\pThey fund my lab, though truthfully, they\nhardly pay me any attention. They have all sorts\pof tools and technology to help\ntrainers!$"

ProfessorCinder_Outro_Text_4:
# 44 "data/maps/ProfessorCinder/scripts.pory"
	.string "Now then, off you go!\pAdventure, discovery, and maybe even a\nlittle trouble await you out there.\pI’ll be here when you need me.$"

Common_GiveStarter_Text_0:
# 74 "data/maps/ProfessorCinder/scripts.pory"
	.string "Received your Pokemon!$"

Common_GiveStarter_Text_1:
# 80 "data/maps/ProfessorCinder/scripts.pory"
	.string "Your Pokemon was sent to your PC.$"

Common_GiveStarter_Text_2:
# 85 "data/maps/ProfessorCinder/scripts.pory"
	.string "No more room for Pokemon.$"

ProfessorCinder_EventScript_Professor_Text_0:
# 118 "data/maps/ProfessorCinder/scripts.pory"
	.string "What region would you like to see?$"

ProfessorCinder_EventScript_Professor_Text_1:
# 126 "data/maps/ProfessorCinder/scripts.pory"
	.string "Choose your Pokemon wisely.$"

ProfessorCinder_EventScript_Professor_Text_2:
# 128 "data/maps/ProfessorCinder/scripts.pory"
	.string "Take care of your Pokemon.$"

ProfessorCinder_EventScript_PokeballOne_Text_0:
# 140 "data/maps/ProfessorCinder/scripts.pory"
	.string "Don't take another.$"

ProfessorCinder_PickStarterForSlot_Text_0:
# 181 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

ProfessorCinder_PickStarterForSlot_Text_1:
# 189 "data/maps/ProfessorCinder/scripts.pory"
	.string "Maybe another choice then.$"

ProfessorCinder_PickStarterForSlot_Text_2:
# 196 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Charmander?$"

ProfessorCinder_PickStarterForSlot_Text_3:
# 210 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Squirtle?$"

ProfessorCinder_PickStarterForSlot_Text_4:
# 228 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chikorita?$"

ProfessorCinder_PickStarterForSlot_Text_5:
# 243 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

ProfessorCinder_PickStarterForSlot_Text_6:
# 257 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Totodile?$"

ProfessorCinder_PickStarterForSlot_Text_7:
# 275 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Treecko?$"

ProfessorCinder_PickStarterForSlot_Text_8:
# 290 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Torchic?$"

ProfessorCinder_PickStarterForSlot_Text_9:
# 304 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Mudkip?$"

ProfessorCinder_PickStarterForSlot_Text_10:
# 322 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Turtwig?$"

ProfessorCinder_PickStarterForSlot_Text_11:
# 337 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chimchar?$"

ProfessorCinder_PickStarterForSlot_Text_12:
# 351 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Piplup?$"

ProfessorCinder_PickStarterForSlot_Text_13:
# 369 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Snivy?$"

ProfessorCinder_PickStarterForSlot_Text_14:
# 384 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Tepig?$"

ProfessorCinder_PickStarterForSlot_Text_15:
# 398 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Oshawott?$"

ProfessorCinder_PickStarterForSlot_Text_16:
# 416 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chespin?$"

ProfessorCinder_PickStarterForSlot_Text_17:
# 431 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fennekin?$"

ProfessorCinder_PickStarterForSlot_Text_18:
# 445 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Froakie?$"

ProfessorCinder_PickStarterForSlot_Text_19:
# 463 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Rowlet?$"

ProfessorCinder_PickStarterForSlot_Text_20:
# 478 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Litten?$"

ProfessorCinder_PickStarterForSlot_Text_21:
# 492 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Popplio?$"

ProfessorCinder_PickStarterForSlot_Text_22:
# 510 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Grookey?$"

ProfessorCinder_PickStarterForSlot_Text_23:
# 525 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

ProfessorCinder_PickStarterForSlot_Text_24:
# 557 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

ProfessorCinder_PickStarterForSlot_Text_25:
# 572 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

ProfessorCinder_PickStarterForSlot_Text_26:
# 586 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Quaxly?$"
