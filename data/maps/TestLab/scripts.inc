TestLab_MapScripts::
# 2 "data/maps/TestLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestLab_EventScript_BallDefault
	.byte 0


TestLab_EventScript_BallDefault::
# 6 "data/maps/TestLab/scripts.pory"
	setvar STARTER_REGION, 0
	return


TestLab_EventScript_Birch::
# 10 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, TestLab_EventScript_Birch_4
TestLab_EventScript_Birch_3:
# 34 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Birch_Text_2, MSGBOX_NPC
TestLab_EventScript_Birch_1:
	end

TestLab_EventScript_Birch_2:
# 11 "data/maps/TestLab/scripts.pory"
	lock
# 12 "data/maps/TestLab/scripts.pory"
	faceplayer
# 13 "data/maps/TestLab/scripts.pory"
	message TestLab_EventScript_Birch_Text_0
# 14 "data/maps/TestLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 15 "data/maps/TestLab/scripts.pory"
	closemessage
# 17 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestLab_EventScript_Birch_10
# 21 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestLab_EventScript_Birch_11
# 25 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestLab_EventScript_Birch_12
TestLab_EventScript_Birch_9:
# 29 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Birch_Text_1
# 30 "data/maps/TestLab/scripts.pory"
	waitmessage
# 31 "data/maps/TestLab/scripts.pory"
	release
	goto TestLab_EventScript_Birch_1

TestLab_EventScript_Birch_4:
# 10 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, TestLab_EventScript_Birch_6
	goto TestLab_EventScript_Birch_3

TestLab_EventScript_Birch_6:
# 10 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, TestLab_EventScript_Birch_2
	goto TestLab_EventScript_Birch_3

TestLab_EventScript_Birch_10:
# 18 "data/maps/TestLab/scripts.pory"
	call StarterFade
# 19 "data/maps/TestLab/scripts.pory"
	setvar STARTER_REGION, 2
	goto TestLab_EventScript_Birch_9

TestLab_EventScript_Birch_11:
# 22 "data/maps/TestLab/scripts.pory"
	call StarterFade
# 23 "data/maps/TestLab/scripts.pory"
	setvar STARTER_REGION, 1
	goto TestLab_EventScript_Birch_9

TestLab_EventScript_Birch_12:
# 26 "data/maps/TestLab/scripts.pory"
	call StarterFade
# 27 "data/maps/TestLab/scripts.pory"
	setvar STARTER_REGION, 0
	goto TestLab_EventScript_Birch_9


StarterFade::
# 40 "data/maps/TestLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/TestLab/scripts.pory"
	delay 20
# 42 "data/maps/TestLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


TestLab_EventScript_PokeballOne::
# 47 "data/maps/TestLab/scripts.pory"
	lockall
# 48 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, TestLab_EventScript_PokeballOne_4
TestLab_EventScript_PokeballOne_3:
# 60 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_PokeballOne_Text_0
TestLab_EventScript_PokeballOne_1:
# 62 "data/maps/TestLab/scripts.pory"
	waitmessage
# 63 "data/maps/TestLab/scripts.pory"
	releaseall
	end

TestLab_EventScript_PokeballOne_2:
# 49 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq TestLab_EventScript_PokeballOne_9
# 52 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq TestLab_EventScript_PokeballOne_10
# 55 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq TestLab_EventScript_PokeballOne_11
	goto TestLab_EventScript_PokeballOne_1

TestLab_EventScript_PokeballOne_4:
# 48 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, TestLab_EventScript_PokeballOne_6
	goto TestLab_EventScript_PokeballOne_3

TestLab_EventScript_PokeballOne_6:
# 48 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, TestLab_EventScript_PokeballOne_2
	goto TestLab_EventScript_PokeballOne_3

TestLab_EventScript_PokeballOne_9:
# 50 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Sprigatito
	goto TestLab_EventScript_PokeballOne_1

TestLab_EventScript_PokeballOne_10:
# 53 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Grookey
	goto TestLab_EventScript_PokeballOne_1

TestLab_EventScript_PokeballOne_11:
# 56 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Chespin
	goto TestLab_EventScript_PokeballOne_1


TestLab_EventScript_PokeballTwo::
# 68 "data/maps/TestLab/scripts.pory"
	lockall
# 69 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, TestLab_EventScript_PokeballTwo_4
TestLab_EventScript_PokeballTwo_3:
# 81 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_PokeballOne_Text_0
TestLab_EventScript_PokeballTwo_1:
# 83 "data/maps/TestLab/scripts.pory"
	waitmessage
# 84 "data/maps/TestLab/scripts.pory"
	releaseall
	end

TestLab_EventScript_PokeballTwo_2:
# 70 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq TestLab_EventScript_PokeballTwo_9
# 73 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq TestLab_EventScript_PokeballTwo_10
# 76 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq TestLab_EventScript_PokeballTwo_11
	goto TestLab_EventScript_PokeballTwo_1

TestLab_EventScript_PokeballTwo_4:
# 69 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, TestLab_EventScript_PokeballTwo_6
	goto TestLab_EventScript_PokeballTwo_3

TestLab_EventScript_PokeballTwo_6:
# 69 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, TestLab_EventScript_PokeballTwo_2
	goto TestLab_EventScript_PokeballTwo_3

TestLab_EventScript_PokeballTwo_9:
# 71 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Litten
	goto TestLab_EventScript_PokeballTwo_1

TestLab_EventScript_PokeballTwo_10:
# 74 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Chimchar
	goto TestLab_EventScript_PokeballTwo_1

TestLab_EventScript_PokeballTwo_11:
# 77 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Charmander
	goto TestLab_EventScript_PokeballTwo_1


TestLab_EventScript_PokeballThree::
# 89 "data/maps/TestLab/scripts.pory"
	lockall
# 90 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, TestLab_EventScript_PokeballThree_4
TestLab_EventScript_PokeballThree_3:
# 102 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_PokeballOne_Text_0
TestLab_EventScript_PokeballThree_1:
# 104 "data/maps/TestLab/scripts.pory"
	waitmessage
# 105 "data/maps/TestLab/scripts.pory"
	releaseall
	end

TestLab_EventScript_PokeballThree_2:
# 91 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq TestLab_EventScript_PokeballThree_9
# 94 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq TestLab_EventScript_PokeballThree_10
# 97 "data/maps/TestLab/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq TestLab_EventScript_PokeballThree_11
	goto TestLab_EventScript_PokeballThree_1

TestLab_EventScript_PokeballThree_4:
# 90 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, TestLab_EventScript_PokeballThree_6
	goto TestLab_EventScript_PokeballThree_3

TestLab_EventScript_PokeballThree_6:
# 90 "data/maps/TestLab/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, TestLab_EventScript_PokeballThree_2
	goto TestLab_EventScript_PokeballThree_3

TestLab_EventScript_PokeballThree_9:
# 92 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Quaxly
	goto TestLab_EventScript_PokeballThree_1

TestLab_EventScript_PokeballThree_10:
# 95 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Popplio
	goto TestLab_EventScript_PokeballThree_1

TestLab_EventScript_PokeballThree_11:
# 98 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Froakie
	goto TestLab_EventScript_PokeballThree_1


TestLab_EventScript_Sprigatito::
# 111 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 112 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 113 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Sprigatito_1
# 135 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 136 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Sprigatito_1:
# 114 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5, ITEM_NONE
# 115 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Sprigatito_4
# 122 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Sprigatito_5
# 130 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 131 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Sprigatito_4:
# 116 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_1
# 118 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 119 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 120 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Sprigatito_5:
# 123 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_1
# 125 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 126 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 127 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Grookey::
# 142 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 143 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 144 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Grookey_1
# 166 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 167 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Grookey_1:
# 145 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_GROOKEY, 5, ITEM_NONE
# 146 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Grookey_4
# 153 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Grookey_5
# 161 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 162 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Grookey_4:
# 147 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Grookey_Text_1
# 149 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 150 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 151 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Grookey_5:
# 154 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Grookey_Text_1
# 156 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 157 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 158 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Chespin::
# 173 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 174 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 175 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Chespin_1
# 197 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 198 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Chespin_1:
# 176 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_CHESPIN, 5, ITEM_NONE
# 177 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Chespin_4
# 184 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Chespin_5
# 192 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 193 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Chespin_4:
# 178 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chespin_Text_1
# 180 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 181 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 182 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Chespin_5:
# 185 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 186 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chespin_Text_1
# 187 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 188 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_ONE
# 189 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Litten::
# 204 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 205 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Litten_Text_0, MSGBOX_YESNO
# 206 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Litten_1
# 228 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 229 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Litten_1:
# 207 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_NONE
# 208 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Litten_4
# 215 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Litten_5
# 223 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 224 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Litten_4:
# 209 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 210 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Litten_Text_1
# 211 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 212 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 213 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Litten_5:
# 216 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 217 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Litten_Text_1
# 218 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 219 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 220 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Chimchar::
# 235 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 236 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 237 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Chimchar_1
# 259 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 260 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Chimchar_1:
# 238 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5, ITEM_NONE
# 239 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Chimchar_4
# 246 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Chimchar_5
# 254 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 255 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Chimchar_4:
# 240 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 241 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chimchar_Text_1
# 242 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 243 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 244 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Chimchar_5:
# 247 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chimchar_Text_1
# 249 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 250 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 251 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Charmander::
# 266 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 267 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 268 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Charmander_1
# 290 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 291 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Charmander_1:
# 269 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_NONE
# 270 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Charmander_4
# 277 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Charmander_5
# 285 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 286 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Charmander_4:
# 271 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Charmander_Text_1
# 273 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 274 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 275 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Charmander_5:
# 278 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 279 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Charmander_Text_1
# 280 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 281 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_TWO
# 282 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Quaxly::
# 297 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 298 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 299 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Quaxly_1
# 321 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 322 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Quaxly_1:
# 300 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5, ITEM_NONE
# 301 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Quaxly_4
# 308 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Quaxly_5
# 316 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 317 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Quaxly_4:
# 302 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 303 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Quaxly_Text_1
# 304 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 305 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 306 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Quaxly_5:
# 309 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 310 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Quaxly_Text_1
# 311 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 312 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 313 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Popplio::
# 328 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 329 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 330 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Popplio_1
# 352 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 353 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Popplio_1:
# 331 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5, ITEM_NONE
# 332 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Popplio_4
# 339 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Popplio_5
# 347 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 348 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Popplio_4:
# 333 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 334 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Popplio_Text_1
# 335 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 336 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 337 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Popplio_5:
# 340 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 341 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Popplio_Text_1
# 342 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 343 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 344 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Froakie::
# 359 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 360 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 361 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Froakie_1
# 383 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 384 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Froakie_1:
# 362 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_FROAKIE, 5, ITEM_NONE
# 363 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Froakie_4
# 370 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Froakie_5
# 378 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 379 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Froakie_4:
# 364 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 365 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Froakie_Text_1
# 366 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 367 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 368 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Froakie_5:
# 371 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 372 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Froakie_Text_1
# 373 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 374 "data/maps/TestLab/scripts.pory"
	setflag STARTER_BALL_THREE
# 375 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 391 "data/maps/TestLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 392 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 393 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 394 "data/maps/TestLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 395 "data/maps/TestLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 402 "data/maps/TestLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 403 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 404 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 407 "data/maps/TestLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 405 "data/maps/TestLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


TestLab_EventScript_Birch_Text_0:
# 13 "data/maps/TestLab/scripts.pory"
	.string "Would you like to see more?$"

TestLab_EventScript_Birch_Text_1:
# 29 "data/maps/TestLab/scripts.pory"
	.string "Choose your Pokemon wisely$"

TestLab_EventScript_Birch_Text_2:
# 34 "data/maps/TestLab/scripts.pory"
	.string "Take care of your Pokemon$"

TestLab_EventScript_PokeballOne_Text_0:
# 60 "data/maps/TestLab/scripts.pory"
	.string "Don't Take Another$"

TestLab_EventScript_Sprigatito_Text_0:
# 112 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

TestLab_EventScript_Sprigatito_Text_1:
# 117 "data/maps/TestLab/scripts.pory"
	.string "Recieved Sprigatito$"

TestLab_EventScript_Sprigatito_Text_2:
# 131 "data/maps/TestLab/scripts.pory"
	.string "No More Room$"

TestLab_EventScript_Grookey_Text_0:
# 143 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

TestLab_EventScript_Grookey_Text_1:
# 148 "data/maps/TestLab/scripts.pory"
	.string "Recieved Grookey$"

TestLab_EventScript_Chespin_Text_0:
# 174 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

TestLab_EventScript_Chespin_Text_1:
# 179 "data/maps/TestLab/scripts.pory"
	.string "Recieved Chespin$"

TestLab_EventScript_Litten_Text_0:
# 205 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Litten?$"

TestLab_EventScript_Litten_Text_1:
# 210 "data/maps/TestLab/scripts.pory"
	.string "Recieved Litten$"

TestLab_EventScript_Chimchar_Text_0:
# 236 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

TestLab_EventScript_Chimchar_Text_1:
# 241 "data/maps/TestLab/scripts.pory"
	.string "Recieved Chimchar$"

TestLab_EventScript_Charmander_Text_0:
# 267 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

TestLab_EventScript_Charmander_Text_1:
# 272 "data/maps/TestLab/scripts.pory"
	.string "Recieved Charmander$"

TestLab_EventScript_Quaxly_Text_0:
# 298 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

TestLab_EventScript_Quaxly_Text_1:
# 303 "data/maps/TestLab/scripts.pory"
	.string "Recieved Quaxly$"

TestLab_EventScript_Popplio_Text_0:
# 329 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

TestLab_EventScript_Popplio_Text_1:
# 334 "data/maps/TestLab/scripts.pory"
	.string "Recieved Popplio$"

TestLab_EventScript_Froakie_Text_0:
# 360 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

TestLab_EventScript_Froakie_Text_1:
# 365 "data/maps/TestLab/scripts.pory"
	.string "Recieved Froakie$"

NicknamePartyMon_Text_0:
# 391 "data/maps/TestLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 407 "data/maps/TestLab/scripts.pory"
	.string "Transferred to PC$"

TestLab_NotChosen::
# 410 "data/maps/TestLab/scripts.pory"
	.string "You did not choose the Pokemon$"
