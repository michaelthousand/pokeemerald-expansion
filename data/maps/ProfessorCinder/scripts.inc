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


ProfessorCinder_EventScript_Professor::
# 102 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ProfessorCinder_EventScript_Professor_2
# 110 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_2, MSGBOX_NPC
ProfessorCinder_EventScript_Professor_1:
	end

ProfessorCinder_EventScript_Professor_2:
# 103 "data/maps/ProfessorCinder/scripts.pory"
	message ProfessorCinder_EventScript_Professor_Text_0
# 104 "data/maps/ProfessorCinder/scripts.pory"
	closemessage
# 105 "data/maps/ProfessorCinder/scripts.pory"
	multichoice 20, 0, MULTI_STARTER_CHOICE, 0
# 106 "data/maps/ProfessorCinder/scripts.pory"
	call StarterFade
# 107 "data/maps/ProfessorCinder/scripts.pory"
	copyvar STARTER_REGION, VAR_RESULT
# 108 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_Professor_Text_1, MSGBOX_AUTOCLOSE
	goto ProfessorCinder_EventScript_Professor_1


ProfessorCinder_EventScript_PokeballOne::
# 118 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 119 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballOne_4
ProfessorCinder_EventScript_PokeballOne_3:
# 123 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballOne_1:
# 125 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballOne_2:
# 120 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 1
# 121 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballOne_1

ProfessorCinder_EventScript_PokeballOne_4:
# 119 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballOne_6
	goto ProfessorCinder_EventScript_PokeballOne_3

ProfessorCinder_EventScript_PokeballOne_6:
# 119 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballOne_2
	goto ProfessorCinder_EventScript_PokeballOne_3


ProfessorCinder_EventScript_PokeballTwo::
# 130 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 131 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballTwo_4
ProfessorCinder_EventScript_PokeballTwo_3:
# 135 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballTwo_1:
# 137 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballTwo_2:
# 132 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 2
# 133 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballTwo_1

ProfessorCinder_EventScript_PokeballTwo_4:
# 131 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballTwo_6
	goto ProfessorCinder_EventScript_PokeballTwo_3

ProfessorCinder_EventScript_PokeballTwo_6:
# 131 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballTwo_2
	goto ProfessorCinder_EventScript_PokeballTwo_3


ProfessorCinder_EventScript_PokeballThree::
# 142 "data/maps/ProfessorCinder/scripts.pory"
	lockall
# 143 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, ProfessorCinder_EventScript_PokeballThree_4
ProfessorCinder_EventScript_PokeballThree_3:
# 147 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_EventScript_PokeballOne_Text_0
ProfessorCinder_EventScript_PokeballThree_1:
# 149 "data/maps/ProfessorCinder/scripts.pory"
	releaseall
	end

ProfessorCinder_EventScript_PokeballThree_2:
# 144 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 3
# 145 "data/maps/ProfessorCinder/scripts.pory"
	call ProfessorCinder_PickStarterForSlot
	goto ProfessorCinder_EventScript_PokeballThree_1

ProfessorCinder_EventScript_PokeballThree_4:
# 143 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, ProfessorCinder_EventScript_PokeballThree_6
	goto ProfessorCinder_EventScript_PokeballThree_3

ProfessorCinder_EventScript_PokeballThree_6:
# 143 "data/maps/ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, ProfessorCinder_EventScript_PokeballThree_2
	goto ProfessorCinder_EventScript_PokeballThree_3


ProfessorCinder_PickStarterForSlot::
# 157 "data/maps/ProfessorCinder/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 160 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq ProfessorCinder_PickStarterForSlot_2
# 207 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_5
# 254 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_11
# 301 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq ProfessorCinder_PickStarterForSlot_23
# 348 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq ProfessorCinder_PickStarterForSlot_41
# 395 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq ProfessorCinder_PickStarterForSlot_59
# 442 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq ProfessorCinder_PickStarterForSlot_77
# 489 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq ProfessorCinder_PickStarterForSlot_95
# 536 "data/maps/ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq ProfessorCinder_PickStarterForSlot_113
	return

ProfessorCinder_PickStarterForSlot_2:
# 162 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_8
# 177 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_17
# 192 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 193 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_3, MSGBOX_YESNO
# 194 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_34
# 200 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 201 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_5:
# 209 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_14
# 224 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_29
# 239 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 240 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_6, MSGBOX_YESNO
# 241 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_52
# 247 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 248 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_8:
# 163 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 164 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_0, MSGBOX_YESNO
# 165 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_19
# 171 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 172 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_11:
# 256 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_26
# 271 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_47
# 286 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 287 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_9, MSGBOX_YESNO
# 288 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_70
# 294 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 295 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_14:
# 210 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 211 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_4, MSGBOX_YESNO
# 212 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_31
# 218 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 219 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_17:
# 178 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 179 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_2, MSGBOX_YESNO
# 180 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_37
# 186 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 187 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_19:
# 166 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 167 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 168 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_23:
# 303 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_44
# 318 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_65
# 333 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 334 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_12, MSGBOX_YESNO
# 335 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_88
# 341 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 342 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_26:
# 257 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 258 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_7, MSGBOX_YESNO
# 259 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_49
# 265 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 266 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_29:
# 225 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 226 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_5, MSGBOX_YESNO
# 227 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_55
# 233 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 234 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_31:
# 213 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIKORITA
# 214 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 215 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_34:
# 195 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 196 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 197 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_37:
# 181 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 182 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 183 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_41:
# 350 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_62
# 365 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_83
# 380 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 381 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_15, MSGBOX_YESNO
# 382 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_106
# 388 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 389 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_44:
# 304 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 305 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_10, MSGBOX_YESNO
# 306 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_67
# 312 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 313 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_47:
# 272 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 273 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_8, MSGBOX_YESNO
# 274 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_73
# 280 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 281 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_49:
# 260 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TREECKO
# 261 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 262 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_52:
# 242 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TOTODILE
# 243 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 244 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_55:
# 228 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CYNDAQUIL
# 229 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 230 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_59:
# 397 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_80
# 412 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_101
# 427 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 428 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_18, MSGBOX_YESNO
# 429 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_124
# 435 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 436 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_62:
# 351 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 352 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_13, MSGBOX_YESNO
# 353 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_85
# 359 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 360 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_65:
# 319 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 320 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_11, MSGBOX_YESNO
# 321 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_91
# 327 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 328 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_67:
# 307 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TURTWIG
# 308 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 309 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_70:
# 289 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_MUDKIP
# 290 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 291 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_73:
# 275 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TORCHIC
# 276 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 277 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_77:
# 444 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_98
# 459 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_119
# 474 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 475 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 476 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_139
# 482 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 483 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_80:
# 398 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 399 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_16, MSGBOX_YESNO
# 400 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_103
# 406 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 407 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_83:
# 366 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 367 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_14, MSGBOX_YESNO
# 368 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_109
# 374 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 375 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_85:
# 354 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SNIVY
# 355 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 356 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_88:
# 336 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_PIPLUP
# 337 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 338 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_91:
# 322 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIMCHAR
# 323 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 324 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_95:
# 491 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_116
# 506 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_134
# 521 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 522 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 523 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_151
# 529 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 530 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_98:
# 445 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 446 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_19, MSGBOX_YESNO
# 447 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_121
# 453 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 454 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_101:
# 413 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 414 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_17, MSGBOX_YESNO
# 415 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_127
# 421 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 422 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_103:
# 401 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHESPIN
# 402 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 403 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_106:
# 383 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_OSHAWOTT
# 384 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 385 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_109:
# 369 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TEPIG
# 370 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 371 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_113:
# 538 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorCinder_PickStarterForSlot_131
# 553 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ProfessorCinder_PickStarterForSlot_146
# 568 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 569 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_26, MSGBOX_YESNO
# 570 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_157
# 576 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 577 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_116:
# 492 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 493 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_22, MSGBOX_YESNO
# 494 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_136
# 500 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 501 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_119:
# 460 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 461 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_20, MSGBOX_YESNO
# 462 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_142
# 468 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 469 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_121:
# 448 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_ROWLET
# 449 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 450 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_124:
# 430 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FROAKIE
# 431 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 432 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_127:
# 416 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FENNEKIN
# 417 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 418 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_131:
# 539 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 540 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_24, MSGBOX_YESNO
# 541 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_148
# 547 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 548 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_134:
# 507 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 508 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_23, MSGBOX_YESNO
# 509 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_154
# 515 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 516 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_136:
# 495 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_GROOKEY
# 496 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 497 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_139:
# 477 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 478 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 479 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_142:
# 463 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_LITTEN
# 464 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 465 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_146:
# 554 "data/maps/ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 555 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_25, MSGBOX_YESNO
# 556 "data/maps/ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorCinder_PickStarterForSlot_160
# 562 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
# 563 "data/maps/ProfessorCinder/scripts.pory"
	msgbox ProfessorCinder_PickStarterForSlot_Text_1
	return

ProfessorCinder_PickStarterForSlot_148:
# 542 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SPRIGATITO
# 543 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 544 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_151:
# 524 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 525 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 526 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_154:
# 510 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SCORBUNNY
# 511 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 512 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_157:
# 571 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_QUAXLY
# 572 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 573 "data/maps/ProfessorCinder/scripts.pory"
	hidemonpic
	return

ProfessorCinder_PickStarterForSlot_160:
# 557 "data/maps/ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FUECOCO
# 558 "data/maps/ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 559 "data/maps/ProfessorCinder/scripts.pory"
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

ProfessorCinder_EventScript_Professor_Text_0:
# 103 "data/maps/ProfessorCinder/scripts.pory"
	.string "What region would you like to see?$"

ProfessorCinder_EventScript_Professor_Text_1:
# 108 "data/maps/ProfessorCinder/scripts.pory"
	.string "Choose your Pokemon wisely.$"

ProfessorCinder_EventScript_Professor_Text_2:
# 110 "data/maps/ProfessorCinder/scripts.pory"
	.string "Take care of your Pokemon.$"

ProfessorCinder_EventScript_PokeballOne_Text_0:
# 123 "data/maps/ProfessorCinder/scripts.pory"
	.string "Don't take another.$"

ProfessorCinder_PickStarterForSlot_Text_0:
# 164 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

ProfessorCinder_PickStarterForSlot_Text_1:
# 172 "data/maps/ProfessorCinder/scripts.pory"
	.string "Maybe another choice then.$"

ProfessorCinder_PickStarterForSlot_Text_2:
# 179 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Charmander?$"

ProfessorCinder_PickStarterForSlot_Text_3:
# 193 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Squirtle?$"

ProfessorCinder_PickStarterForSlot_Text_4:
# 211 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chikorita?$"

ProfessorCinder_PickStarterForSlot_Text_5:
# 226 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

ProfessorCinder_PickStarterForSlot_Text_6:
# 240 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Totodile?$"

ProfessorCinder_PickStarterForSlot_Text_7:
# 258 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Treecko?$"

ProfessorCinder_PickStarterForSlot_Text_8:
# 273 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Torchic?$"

ProfessorCinder_PickStarterForSlot_Text_9:
# 287 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Mudkip?$"

ProfessorCinder_PickStarterForSlot_Text_10:
# 305 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Turtwig?$"

ProfessorCinder_PickStarterForSlot_Text_11:
# 320 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chimchar?$"

ProfessorCinder_PickStarterForSlot_Text_12:
# 334 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Piplup?$"

ProfessorCinder_PickStarterForSlot_Text_13:
# 352 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Snivy?$"

ProfessorCinder_PickStarterForSlot_Text_14:
# 367 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Tepig?$"

ProfessorCinder_PickStarterForSlot_Text_15:
# 381 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Oshawott?$"

ProfessorCinder_PickStarterForSlot_Text_16:
# 399 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chespin?$"

ProfessorCinder_PickStarterForSlot_Text_17:
# 414 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fennekin?$"

ProfessorCinder_PickStarterForSlot_Text_18:
# 428 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Froakie?$"

ProfessorCinder_PickStarterForSlot_Text_19:
# 446 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Rowlet?$"

ProfessorCinder_PickStarterForSlot_Text_20:
# 461 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Litten?$"

ProfessorCinder_PickStarterForSlot_Text_21:
# 475 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Popplio?$"

ProfessorCinder_PickStarterForSlot_Text_22:
# 493 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Grookey?$"

ProfessorCinder_PickStarterForSlot_Text_23:
# 508 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

ProfessorCinder_PickStarterForSlot_Text_24:
# 540 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

ProfessorCinder_PickStarterForSlot_Text_25:
# 555 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

ProfessorCinder_PickStarterForSlot_Text_26:
# 569 "data/maps/ProfessorCinder/scripts.pory"
	.string "Do you want to choose Quaxly?$"
