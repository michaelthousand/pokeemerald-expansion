TestLab_MapScripts::
# 2 "data/maps/TestLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestLab_EventScript_BallDefault
	.byte 0


TestLab_EventScript_BallDefault::
# 6 "data/maps/TestLab/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 0
	return


TestLab_EventScript_Birch::
# 10 "data/maps/TestLab/scripts.pory"
	lockall
# 11 "data/maps/TestLab/scripts.pory"
	faceplayer
# 12 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04F, TestLab_EventScript_Birch_4
TestLab_EventScript_Birch_3:
# 28 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Birch_Text_2
TestLab_EventScript_Birch_1:
# 30 "data/maps/TestLab/scripts.pory"
	waitmessage
# 31 "data/maps/TestLab/scripts.pory"
	releaseall
	end

TestLab_EventScript_Birch_2:
# 13 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Birch_Text_0, MSGBOX_YESNO
# 14 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Birch_9
# 24 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Birch_Text_1
	goto TestLab_EventScript_Birch_1

TestLab_EventScript_Birch_4:
# 12 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04E, TestLab_EventScript_Birch_6
	goto TestLab_EventScript_Birch_3

TestLab_EventScript_Birch_6:
# 12 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04D, TestLab_EventScript_Birch_2
	goto TestLab_EventScript_Birch_3

TestLab_EventScript_Birch_9:
# 15 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 2
	goto_if_ne TestLab_EventScript_Birch_13
# 19 "data/maps/TestLab/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 0
TestLab_EventScript_Birch_12:
# 21 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Birch_Text_1
	goto TestLab_EventScript_Birch_1

TestLab_EventScript_Birch_13:
# 16 "data/maps/TestLab/scripts.pory"
	addvar VAR_UNUSED_0x40FF, 1
	goto TestLab_EventScript_Birch_12


TestLab_EventScript_PokeballOne::
# 36 "data/maps/TestLab/scripts.pory"
	lockall
# 37 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04F, TestLab_EventScript_PokeballOne_4
TestLab_EventScript_PokeballOne_3:
# 49 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_PokeballOne_Text_0
TestLab_EventScript_PokeballOne_1:
# 51 "data/maps/TestLab/scripts.pory"
	waitmessage
# 52 "data/maps/TestLab/scripts.pory"
	releaseall
	end

TestLab_EventScript_PokeballOne_2:
# 38 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_eq TestLab_EventScript_PokeballOne_9
# 41 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 1
	goto_if_eq TestLab_EventScript_PokeballOne_10
# 44 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 2
	goto_if_eq TestLab_EventScript_PokeballOne_11
	goto TestLab_EventScript_PokeballOne_1

TestLab_EventScript_PokeballOne_4:
# 37 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04E, TestLab_EventScript_PokeballOne_6
	goto TestLab_EventScript_PokeballOne_3

TestLab_EventScript_PokeballOne_6:
# 37 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04D, TestLab_EventScript_PokeballOne_2
	goto TestLab_EventScript_PokeballOne_3

TestLab_EventScript_PokeballOne_9:
# 39 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Sprigatito
	goto TestLab_EventScript_PokeballOne_1

TestLab_EventScript_PokeballOne_10:
# 42 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Grookey
	goto TestLab_EventScript_PokeballOne_1

TestLab_EventScript_PokeballOne_11:
# 45 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Chespin
	goto TestLab_EventScript_PokeballOne_1


TestLab_EventScript_PokeballTwo::
# 57 "data/maps/TestLab/scripts.pory"
	lockall
# 58 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04F, TestLab_EventScript_PokeballTwo_4
TestLab_EventScript_PokeballTwo_3:
# 70 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_PokeballOne_Text_0
TestLab_EventScript_PokeballTwo_1:
# 72 "data/maps/TestLab/scripts.pory"
	waitmessage
# 73 "data/maps/TestLab/scripts.pory"
	releaseall
	end

TestLab_EventScript_PokeballTwo_2:
# 59 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_eq TestLab_EventScript_PokeballTwo_9
# 62 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 1
	goto_if_eq TestLab_EventScript_PokeballTwo_10
# 65 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 2
	goto_if_eq TestLab_EventScript_PokeballTwo_11
	goto TestLab_EventScript_PokeballTwo_1

TestLab_EventScript_PokeballTwo_4:
# 58 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04E, TestLab_EventScript_PokeballTwo_6
	goto TestLab_EventScript_PokeballTwo_3

TestLab_EventScript_PokeballTwo_6:
# 58 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04D, TestLab_EventScript_PokeballTwo_2
	goto TestLab_EventScript_PokeballTwo_3

TestLab_EventScript_PokeballTwo_9:
# 60 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Litten
	goto TestLab_EventScript_PokeballTwo_1

TestLab_EventScript_PokeballTwo_10:
# 63 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Chimchar
	goto TestLab_EventScript_PokeballTwo_1

TestLab_EventScript_PokeballTwo_11:
# 66 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Charmander
	goto TestLab_EventScript_PokeballTwo_1


TestLab_EventScript_PokeballThree::
# 78 "data/maps/TestLab/scripts.pory"
	lockall
# 79 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04F, TestLab_EventScript_PokeballThree_4
TestLab_EventScript_PokeballThree_3:
# 91 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_PokeballOne_Text_0
TestLab_EventScript_PokeballThree_1:
# 93 "data/maps/TestLab/scripts.pory"
	waitmessage
# 94 "data/maps/TestLab/scripts.pory"
	releaseall
	end

TestLab_EventScript_PokeballThree_2:
# 80 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_eq TestLab_EventScript_PokeballThree_9
# 83 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 1
	goto_if_eq TestLab_EventScript_PokeballThree_10
# 86 "data/maps/TestLab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 2
	goto_if_eq TestLab_EventScript_PokeballThree_11
	goto TestLab_EventScript_PokeballThree_1

TestLab_EventScript_PokeballThree_4:
# 79 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04E, TestLab_EventScript_PokeballThree_6
	goto TestLab_EventScript_PokeballThree_3

TestLab_EventScript_PokeballThree_6:
# 79 "data/maps/TestLab/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x04D, TestLab_EventScript_PokeballThree_2
	goto TestLab_EventScript_PokeballThree_3

TestLab_EventScript_PokeballThree_9:
# 81 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Quaxly
	goto TestLab_EventScript_PokeballThree_1

TestLab_EventScript_PokeballThree_10:
# 84 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Popplio
	goto TestLab_EventScript_PokeballThree_1

TestLab_EventScript_PokeballThree_11:
# 87 "data/maps/TestLab/scripts.pory"
	call TestLab_EventScript_Froakie
	goto TestLab_EventScript_PokeballThree_1


TestLab_EventScript_Sprigatito::
# 100 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 101 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_0, MSGBOX_YESNO
# 102 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Sprigatito_1
# 124 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 125 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Sprigatito_1:
# 103 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5, ITEM_NONE
# 104 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Sprigatito_4
# 111 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Sprigatito_5
# 119 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 120 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Sprigatito_4:
# 105 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_1
# 107 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 108 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04F
# 109 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Sprigatito_5:
# 112 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_1
# 114 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 115 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04F
# 116 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Grookey::
# 131 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 132 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Grookey_Text_0, MSGBOX_YESNO
# 133 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Grookey_1
# 155 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 156 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Grookey_1:
# 134 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_GROOKEY, 5, ITEM_NONE
# 135 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Grookey_4
# 142 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Grookey_5
# 150 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 151 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Grookey_4:
# 136 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Grookey_Text_1
# 138 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 139 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04F
# 140 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Grookey_5:
# 143 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Grookey_Text_1
# 145 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 146 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04F
# 147 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Chespin::
# 162 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 163 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chespin_Text_0, MSGBOX_YESNO
# 164 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Chespin_1
# 186 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 187 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Chespin_1:
# 165 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_CHESPIN, 5, ITEM_NONE
# 166 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Chespin_4
# 173 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Chespin_5
# 181 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 182 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Chespin_4:
# 167 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 168 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chespin_Text_1
# 169 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 170 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04F
# 171 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Chespin_5:
# 174 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 175 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chespin_Text_1
# 176 "data/maps/TestLab/scripts.pory"
	removeobject 1
# 177 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04F
# 178 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Litten::
# 193 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 194 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Litten_Text_0, MSGBOX_YESNO
# 195 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Litten_1
# 217 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 218 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Litten_1:
# 196 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_NONE
# 197 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Litten_4
# 204 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Litten_5
# 212 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 213 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Litten_4:
# 198 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Litten_Text_1
# 200 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 201 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04E
# 202 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Litten_5:
# 205 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Litten_Text_1
# 207 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 208 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04E
# 209 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Chimchar::
# 224 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 225 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chimchar_Text_0, MSGBOX_YESNO
# 226 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Chimchar_1
# 248 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 249 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Chimchar_1:
# 227 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5, ITEM_NONE
# 228 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Chimchar_4
# 235 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Chimchar_5
# 243 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 244 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Chimchar_4:
# 229 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 230 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chimchar_Text_1
# 231 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 232 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04E
# 233 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Chimchar_5:
# 236 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 237 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Chimchar_Text_1
# 238 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 239 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04E
# 240 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Charmander::
# 255 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 256 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 257 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Charmander_1
# 279 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 280 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Charmander_1:
# 258 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_NONE
# 259 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Charmander_4
# 266 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Charmander_5
# 274 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 275 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Charmander_4:
# 260 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Charmander_Text_1
# 262 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 263 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04E
# 264 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Charmander_5:
# 267 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Charmander_Text_1
# 269 "data/maps/TestLab/scripts.pory"
	removeobject 2
# 270 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04E
# 271 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Quaxly::
# 286 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 287 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Quaxly_Text_0, MSGBOX_YESNO
# 288 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Quaxly_1
# 310 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 311 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Quaxly_1:
# 289 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5, ITEM_NONE
# 290 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Quaxly_4
# 297 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Quaxly_5
# 305 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 306 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Quaxly_4:
# 291 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 292 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Quaxly_Text_1
# 293 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 294 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 295 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Quaxly_5:
# 298 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 299 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Quaxly_Text_1
# 300 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 301 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 302 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Popplio::
# 317 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 318 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Popplio_Text_0, MSGBOX_YESNO
# 319 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Popplio_1
# 341 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 342 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Popplio_1:
# 320 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5, ITEM_NONE
# 321 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Popplio_4
# 328 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Popplio_5
# 336 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 337 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Popplio_4:
# 322 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 323 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Popplio_Text_1
# 324 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 325 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 326 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Popplio_5:
# 329 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 330 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Popplio_Text_1
# 331 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 332 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 333 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


TestLab_EventScript_Froakie::
# 348 "data/maps/TestLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 349 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Froakie_Text_0, MSGBOX_YESNO
# 350 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestLab_EventScript_Froakie_1
# 372 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 373 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_NotChosen
	return

TestLab_EventScript_Froakie_1:
# 351 "data/maps/TestLab/scripts.pory"
	givemon SPECIES_FROAKIE, 5, ITEM_NONE
# 352 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestLab_EventScript_Froakie_4
# 359 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestLab_EventScript_Froakie_5
# 367 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 368 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Sprigatito_Text_2
	return

TestLab_EventScript_Froakie_4:
# 353 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 354 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Froakie_Text_1
# 355 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 356 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 357 "data/maps/TestLab/scripts.pory"
	call NicknamePartyMon
	return

TestLab_EventScript_Froakie_5:
# 360 "data/maps/TestLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 361 "data/maps/TestLab/scripts.pory"
	msgbox TestLab_EventScript_Froakie_Text_1
# 362 "data/maps/TestLab/scripts.pory"
	removeobject 3
# 363 "data/maps/TestLab/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 364 "data/maps/TestLab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 380 "data/maps/TestLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 381 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 382 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 383 "data/maps/TestLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 384 "data/maps/TestLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 391 "data/maps/TestLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 392 "data/maps/TestLab/scripts.pory"
	hidemonpic
# 393 "data/maps/TestLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 396 "data/maps/TestLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 394 "data/maps/TestLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


TestLab_EventScript_Birch_Text_0:
# 13 "data/maps/TestLab/scripts.pory"
	.string "Hello, would you like to see more?$"

TestLab_EventScript_Birch_Text_1:
# 21 "data/maps/TestLab/scripts.pory"
	.string "Choose your Pokemon wisely$"

TestLab_EventScript_Birch_Text_2:
# 28 "data/maps/TestLab/scripts.pory"
	.string "Take care of your Pokemon$"

TestLab_EventScript_PokeballOne_Text_0:
# 49 "data/maps/TestLab/scripts.pory"
	.string "Don't Take Another$"

TestLab_EventScript_Sprigatito_Text_0:
# 101 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

TestLab_EventScript_Sprigatito_Text_1:
# 106 "data/maps/TestLab/scripts.pory"
	.string "Recieved Sprigatito$"

TestLab_EventScript_Sprigatito_Text_2:
# 120 "data/maps/TestLab/scripts.pory"
	.string "No More Room$"

TestLab_EventScript_Grookey_Text_0:
# 132 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

TestLab_EventScript_Grookey_Text_1:
# 137 "data/maps/TestLab/scripts.pory"
	.string "Recieved Grookey$"

TestLab_EventScript_Chespin_Text_0:
# 163 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

TestLab_EventScript_Chespin_Text_1:
# 168 "data/maps/TestLab/scripts.pory"
	.string "Recieved Chespin$"

TestLab_EventScript_Litten_Text_0:
# 194 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Litten?$"

TestLab_EventScript_Litten_Text_1:
# 199 "data/maps/TestLab/scripts.pory"
	.string "Recieved Litten$"

TestLab_EventScript_Chimchar_Text_0:
# 225 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

TestLab_EventScript_Chimchar_Text_1:
# 230 "data/maps/TestLab/scripts.pory"
	.string "Recieved Chimchar$"

TestLab_EventScript_Charmander_Text_0:
# 256 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

TestLab_EventScript_Charmander_Text_1:
# 261 "data/maps/TestLab/scripts.pory"
	.string "Recieved Charmander$"

TestLab_EventScript_Quaxly_Text_0:
# 287 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

TestLab_EventScript_Quaxly_Text_1:
# 292 "data/maps/TestLab/scripts.pory"
	.string "Recieved Quaxly$"

TestLab_EventScript_Popplio_Text_0:
# 318 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

TestLab_EventScript_Popplio_Text_1:
# 323 "data/maps/TestLab/scripts.pory"
	.string "Recieved Popplio$"

TestLab_EventScript_Froakie_Text_0:
# 349 "data/maps/TestLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

TestLab_EventScript_Froakie_Text_1:
# 354 "data/maps/TestLab/scripts.pory"
	.string "Recieved Froakie$"

NicknamePartyMon_Text_0:
# 380 "data/maps/TestLab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 396 "data/maps/TestLab/scripts.pory"
	.string "Transferred to PC$"

TestLab_NotChosen::
# 399 "data/maps/TestLab/scripts.pory"
	.string "You did not choose the Pokemon$"
