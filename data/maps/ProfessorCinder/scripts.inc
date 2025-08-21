ProfessorCinder_MapScripts::
# 2 "data/maps/ProfessorCinder/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProfessorCinder_EventScript_BallDefault
	.byte 0


SetInitialCap::
# 6 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
	end


ProfessorCinder_EventScript_BallDefault::
# 13 "data/maps/ProfessorCinder/scripts.pory"
	setvar STARTER_REGION, 0
	end


StarterFade::
# 18 "data/maps/ProfessorCinder/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/ProfessorCinder/scripts.pory"
	delay 20
# 20 "data/maps/ProfessorCinder/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Common_GiveStarter::
# 26 "data/maps/ProfessorCinder/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_2
# 27 "data/maps/ProfessorCinder/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 29 "data/maps/ProfessorCinder/scripts.pory"
	givemon VAR_TEMP_2, 5, ITEM_NONE
# 31 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Common_GiveStarter_2
# 36 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Common_GiveStarter_3
# 42 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_2
	return

Common_GiveStarter_1:
# 47 "data/maps/ProfessorCinder/scripts.pory"
	waitfanfare
# 48 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 52 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Common_GiveStarter_8
# 55 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Common_GiveStarter_9
# 58 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Common_GiveStarter_10
Common_GiveStarter_7:
# 64 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_LEVEL_CAP, 0
	goto_if_eq Common_GiveStarter_15
Common_GiveStarter_14:
	return

Common_GiveStarter_2:
# 32 "data/maps/ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_0
# 34 "data/maps/ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/ProfessorCinder/scripts.pory"
	call NicknamePartyMon
	goto Common_GiveStarter_1

Common_GiveStarter_3:
# 37 "data/maps/ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_1
# 39 "data/maps/ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 40 "data/maps/ProfessorCinder/scripts.pory"
	call NicknameBoxMon
	goto Common_GiveStarter_1

Common_GiveStarter_8:
# 53 "data/maps/ProfessorCinder/scripts.pory"
	setflag STARTER_BALL_ONE
# 54 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 1
	goto Common_GiveStarter_7

Common_GiveStarter_9:
# 56 "data/maps/ProfessorCinder/scripts.pory"
	setflag STARTER_BALL_TWO
# 57 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 2
	goto Common_GiveStarter_7

Common_GiveStarter_10:
# 59 "data/maps/ProfessorCinder/scripts.pory"
	setflag STARTER_BALL_THREE
# 60 "data/maps/ProfessorCinder/scripts.pory"
	removeobject 3
	goto Common_GiveStarter_7

Common_GiveStarter_15:
# 65 "data/maps/ProfessorCinder/scripts.pory"
	call SetInitialCap
	goto Common_GiveStarter_14


ProfessorCinder_EventScript_Professor::
# 72 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_Professor_4
ProfessorCinder_EventScript_Professor_3:
# 86 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_2, MSGBOX_NPC
ProfessorCinder_EventScript_Professor_1:
	end

ProfessorCinder_EventScript_Professor_2:
# 73 "data/maps/ProfessorCinder/scripts.pory"
	lock
# 74 "data/maps/ProfessorCinder/scripts.pory"
	faceplayer
# 75 "data/maps/ProfessorCinder/scripts.pory"
	message ProfessorCinder_EventScript_Professor_Text_0
# 76 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 77 "data/maps/ProfessorCinder/scripts.pory"
	multichoice 20, 0, MULTI_STARTER_CHOICE, 0
# 78 "data/maps/ProfessorCinder/scripts.pory"
	call StarterFade
# 81 "data/maps/ProfessorCinder/scripts.pory"
	copyvar STARTER_REGION, VAR_RESULT
# 83 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_1
# 84 "data/maps/ProfessorCinder/scripts.pory"
	release
	goto ProfessorCinder_EventScript_Professor_1

ProfessorCinder_EventScript_Professor_4:
# 72 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_Professor_6
	goto ProfessorCinder_EventScript_Professor_3

ProfessorCinder_EventScript_Professor_6:
# 72 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_Professor_2
	goto ProfessorCinder_EventScript_Professor_3


ProfessorCinder_EventScript_PokeballOne::
# 93 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 94 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballOne_4
ProfessorCinder_EventScript_PokeballOne_3:
# 98 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballOne_1:
# 100 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballOne_2:
# 95 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 1
# 96 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballOne_1

ProfessorCinder_EventScript_PokeballOne_4:
# 94 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballOne_6
	goto ProfessorCinder_EventScript_PokeballOne_3

ProfessorCinder_EventScript_PokeballOne_6:
# 94 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballOne_2
	goto ProfessorCinder_EventScript_PokeballOne_3


ProfessorCinder_EventScript_PokeballTwo::
# 105 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 106 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballTwo_4
ProfessorCinder_EventScript_PokeballTwo_3:
# 110 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballTwo_1:
# 112 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballTwo_2:
# 107 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 2
# 108 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballTwo_1

ProfessorCinder_EventScript_PokeballTwo_4:
# 106 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballTwo_6
	goto ProfessorCinder_EventScript_PokeballTwo_3

ProfessorCinder_EventScript_PokeballTwo_6:
# 106 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballTwo_2
	goto ProfessorCinder_EventScript_PokeballTwo_3


ProfessorCinder_EventScript_PokeballThree::
# 117 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 118 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballThree_4
ProfessorCinder_EventScript_PokeballThree_3:
# 122 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballThree_1:
# 124 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballThree_2:
# 119 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 3
# 120 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballThree_1

ProfessorCinder_EventScript_PokeballThree_4:
# 118 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballThree_6
	goto ProfessorCinder_EventScript_PokeballThree_3

ProfessorCinder_EventScript_PokeballThree_6:
# 118 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballThree_2
	goto ProfessorCinder_EventScript_PokeballThree_3


ProfessorCinder_PickStarterForSlot::
# 132 "data/maps/ProfessorCinder/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 135 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq ProfessorCinder_PickStarterForSlot_2
# 182 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_5
# 229 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_11
# 276 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq ProfessorCinder_PickStarterForSlot_23
# 323 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq ProfessorCinder_PickStarterForSlot_41
# 370 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq ProfessorCinder_PickStarterForSlot_59
# 417 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq ProfessorCinder_PickStarterForSlot_77
# 464 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq ProfessorCinder_PickStarterForSlot_95
# 511 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq ProfessorCinder_PickStarterForSlot_113
	return

ProfessorCinder_PickStarterForSlot_2:
# 137 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_8
# 152 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_17
# 167 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 168 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_3, MSGBOX_YESNO
# 169 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_34
# 175 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 176 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_5:
# 184 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_14
# 199 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_29
# 214 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 215 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_6, MSGBOX_YESNO
# 216 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_52
# 222 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 223 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_8:
# 138 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 139 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_0, MSGBOX_YESNO
# 140 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_19
# 146 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 147 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_11:
# 231 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_26
# 246 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_47
# 261 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 262 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_9, MSGBOX_YESNO
# 263 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_70
# 269 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 270 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_14:
# 185 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 186 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_4, MSGBOX_YESNO
# 187 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_31
# 193 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 194 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_17:
# 153 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 154 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_2, MSGBOX_YESNO
# 155 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_37
# 161 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 162 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_19:
# 141 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 142 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 143 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_23:
# 278 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_44
# 293 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_65
# 308 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 309 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_12, MSGBOX_YESNO
# 310 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_88
# 316 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 317 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_26:
# 232 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 233 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_7, MSGBOX_YESNO
# 234 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_49
# 240 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 241 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_29:
# 200 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 201 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_5, MSGBOX_YESNO
# 202 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_55
# 208 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 209 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_31:
# 188 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIKORITA
# 189 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 190 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_34:
# 170 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 171 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 172 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_37:
# 156 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 157 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 158 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_41:
# 325 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_62
# 340 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_83
# 355 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 356 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_15, MSGBOX_YESNO
# 357 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_106
# 363 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 364 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_44:
# 279 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 280 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_10, MSGBOX_YESNO
# 281 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_67
# 287 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 288 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_47:
# 247 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 248 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_8, MSGBOX_YESNO
# 249 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_73
# 255 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 256 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_49:
# 235 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TREECKO
# 236 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 237 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_52:
# 217 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TOTODILE
# 218 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 219 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_55:
# 203 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CYNDAQUIL
# 204 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 205 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_59:
# 372 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_80
# 387 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_101
# 402 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 403 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_18, MSGBOX_YESNO
# 404 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_124
# 410 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 411 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_62:
# 326 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 327 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_13, MSGBOX_YESNO
# 328 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_85
# 334 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 335 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_65:
# 294 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 295 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_11, MSGBOX_YESNO
# 296 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_91
# 302 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 303 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_67:
# 282 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TURTWIG
# 283 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 284 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_70:
# 264 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_MUDKIP
# 265 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 266 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_73:
# 250 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TORCHIC
# 251 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 252 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_77:
# 419 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_98
# 434 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_119
# 449 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 450 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 451 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_139
# 457 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 458 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_80:
# 373 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 374 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_16, MSGBOX_YESNO
# 375 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_103
# 381 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 382 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_83:
# 341 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 342 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_14, MSGBOX_YESNO
# 343 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_109
# 349 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 350 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_85:
# 329 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SNIVY
# 330 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 331 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_88:
# 311 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_PIPLUP
# 312 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 313 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_91:
# 297 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIMCHAR
# 298 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 299 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_95:
# 466 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_116
# 481 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_134
# 496 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 497 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 498 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_151
# 504 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 505 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_98:
# 420 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 421 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_19, MSGBOX_YESNO
# 422 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_121
# 428 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 429 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_101:
# 388 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 389 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_17, MSGBOX_YESNO
# 390 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_127
# 396 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 397 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_103:
# 376 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHESPIN
# 377 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 378 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_106:
# 358 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_OSHAWOTT
# 359 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 360 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_109:
# 344 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TEPIG
# 345 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 346 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_113:
# 513 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_131
# 528 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_146
# 543 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 544 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_26, MSGBOX_YESNO
# 545 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_157
# 551 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 552 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_116:
# 467 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 468 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_22, MSGBOX_YESNO
# 469 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_136
# 475 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 476 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_119:
# 435 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 436 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_20, MSGBOX_YESNO
# 437 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_142
# 443 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 444 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_121:
# 423 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_ROWLET
# 424 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 425 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_124:
# 405 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FROAKIE
# 406 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 407 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_127:
# 391 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FENNEKIN
# 392 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 393 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_131:
# 514 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 515 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_24, MSGBOX_YESNO
# 516 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_148
# 522 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 523 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_134:
# 482 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 483 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_23, MSGBOX_YESNO
# 484 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_154
# 490 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 491 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_136:
# 470 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_GROOKEY
# 471 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 472 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_139:
# 452 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 453 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 454 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_142:
# 438 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_LITTEN
# 439 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 440 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_146:
# 529 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 530 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_25, MSGBOX_YESNO
# 531 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_160
# 537 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 538 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_148:
# 517 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SPRIGATITO
# 518 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 519 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_151:
# 499 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 500 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 501 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_154:
# 485 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SCORBUNNY
# 486 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 487 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_157:
# 546 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_QUAXLY
# 547 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 548 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_160:
# 532 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FUECOCO
# 533 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 534 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return


Common_GiveStarter_Text_0:
# 33 "data/maps/ProfessorCinder/scripts.pory"
	.string "Received your Pokemon!$"

Common_GiveStarter_Text_1:
# 38 "data/maps/ProfessorCinder/scripts.pory"
	.string "Your Pokemon was sent to your PC.$"

Common_GiveStarter_Text_2:
# 42 "data/maps/ProfessorCinder/scripts.pory"
	.string "No more room for Pokemon.$"

ProfessorCinder_EventScript_Professor_Text_0:
# 75 "data/maps/ProfessorCinder/scripts.pory"
	.string "What region would you like to see?$"

ProfessorCinder_EventScript_Professor_Text_1:
# 83 "data/maps/ProfessorCinder/scripts.pory"
	.string "Choose your Pokemon wisely.$"

ProfessorCinder_EventScript_Professor_Text_2:
# 86 "data/maps/ProfessorCinder/scripts.pory"
	.string "Take care of your Pokemon.$"

ProfessorCinder_EventScript_PokeballOne_Text_0:
# 98 "data/maps/ProfessorCinder/scripts.pory"
	.string "Don't take another.$"

ProfessorCinder_PickStarterForSlot_Text_0:
# 139 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

ProfessorCinder_PickStarterForSlot_Text_1:
# 147 "data/maps/ProfessorCinder/scripts.pory"
	.string "Maybe another choice then.$"

ProfessorCinder_PickStarterForSlot_Text_2:
# 154 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Charmander?$"

ProfessorCinder_PickStarterForSlot_Text_3:
# 168 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Squirtle?$"

ProfessorCinder_PickStarterForSlot_Text_4:
# 186 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chikorita?$"

ProfessorCinder_PickStarterForSlot_Text_5:
# 201 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

ProfessorCinder_PickStarterForSlot_Text_6:
# 215 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Totodile?$"

ProfessorCinder_PickStarterForSlot_Text_7:
# 233 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Treecko?$"

ProfessorCinder_PickStarterForSlot_Text_8:
# 248 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Torchic?$"

ProfessorCinder_PickStarterForSlot_Text_9:
# 262 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Mudkip?$"

ProfessorCinder_PickStarterForSlot_Text_10:
# 280 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Turtwig?$"

ProfessorCinder_PickStarterForSlot_Text_11:
# 295 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chimchar?$"

ProfessorCinder_PickStarterForSlot_Text_12:
# 309 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Piplup?$"

ProfessorCinder_PickStarterForSlot_Text_13:
# 327 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Snivy?$"

ProfessorCinder_PickStarterForSlot_Text_14:
# 342 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Tepig?$"

ProfessorCinder_PickStarterForSlot_Text_15:
# 356 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Oshawott?$"

ProfessorCinder_PickStarterForSlot_Text_16:
# 374 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chespin?$"

ProfessorCinder_PickStarterForSlot_Text_17:
# 389 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fennekin?$"

ProfessorCinder_PickStarterForSlot_Text_18:
# 403 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Froakie?$"

ProfessorCinder_PickStarterForSlot_Text_19:
# 421 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Rowlet?$"

ProfessorCinder_PickStarterForSlot_Text_20:
# 436 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Litten?$"

ProfessorCinder_PickStarterForSlot_Text_21:
# 450 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Popplio?$"

ProfessorCinder_PickStarterForSlot_Text_22:
# 468 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Grookey?$"

ProfessorCinder_PickStarterForSlot_Text_23:
# 483 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

ProfessorCinder_PickStarterForSlot_Text_24:
# 515 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

ProfessorCinder_PickStarterForSlot_Text_25:
# 530 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

ProfessorCinder_PickStarterForSlot_Text_26:
# 544 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Quaxly?$"
