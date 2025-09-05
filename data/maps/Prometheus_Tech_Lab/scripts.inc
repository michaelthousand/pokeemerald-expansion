Prometheus_Tech_Lab_MapScripts::
	.byte 0


Prometheus_Tech_Lab_EventScript_ExpShare::
# 4 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	lockall
# 5 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	faceplayer
# 7 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto_if_unset FLAG_EXP_SHARE_ON, Prometheus_Tech_Lab_EventScript_ExpShare_2
# 19 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_ExpShare_Text_5, MSGBOX_YESNO
# 20 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_ExpShare_8
# 24 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_ExpShare_Text_7, MSGBOX_AUTOCLOSE
# 25 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	Return
Prometheus_Tech_Lab_EventScript_ExpShare_1:
# 29 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	releaseall
	end

Prometheus_Tech_Lab_EventScript_ExpShare_2:
# 8 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_ExpShare_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_ExpShare_Text_1, MSGBOX_YESNO
# 10 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_ExpShare_5
# 15 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_ExpShare_Text_4, MSGBOX_AUTOCLOSE
# 16 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	Return
	goto Prometheus_Tech_Lab_EventScript_ExpShare_1

Prometheus_Tech_Lab_EventScript_ExpShare_5:
# 11 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setflag FLAG_EXP_SHARE_ON
# 12 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_ExpShare_Text_2, MSGBOX_AUTOCLOSE
# 13 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_ExpShare_Text_3, MSGBOX_AUTOCLOSE
	goto Prometheus_Tech_Lab_EventScript_ExpShare_1

Prometheus_Tech_Lab_EventScript_ExpShare_8:
# 21 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	clearflag FLAG_EXP_SHARE_ON
# 22 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_ExpShare_Text_6, MSGBOX_AUTOCLOSE
	goto Prometheus_Tech_Lab_EventScript_ExpShare_1


Prometheus_Tech_Lab_EventScript_Tera::
# 34 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	lock
# 35 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	faceplayer
# 37 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_0, MSGBOX_YESNO
# 38 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_2
Prometheus_Tech_Lab_EventScript_Tera_1:
# 148 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Tera_2:
# 39 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_1
# 41 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 42 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 44 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu1
# 46 "data/maps/Prometheus_Tech_Lab/scripts.pory"
TeraMenu1:
# 47 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, TERA_CHOICE_P1, 0
# 48 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_5
# 53 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_6
# 58 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_7
# 63 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_8
# 68 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_9
# 73 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_10
# 78 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_11
# 83 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_12
# 88 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_13
# 93 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_14
Prometheus_Tech_Lab_EventScript_Tera_4:
# 97 "data/maps/Prometheus_Tech_Lab/scripts.pory"
TeraMenu2:
# 98 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, TERA_CHOICE_P2, 0
# 99 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_25
# 104 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_26
# 109 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_27
# 114 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_28
# 119 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_29
# 124 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_30
# 129 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_31
# 134 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_32
# 139 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_33
# 144 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_34
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_5:
# 49 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_NORMAL, slot = VAR_0x8004
# 50 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_2, MSGBOX_DEFAULT
# 51 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_6:
# 54 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FIRE, slot = VAR_0x8004
# 55 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_3, MSGBOX_DEFAULT
# 56 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_7:
# 59 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_WATER, slot = VAR_0x8004
# 60 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4, MSGBOX_DEFAULT
# 61 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_8:
# 64 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ELECTRIC, slot = VAR_0x8004
# 65 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_5, MSGBOX_DEFAULT
# 66 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_9:
# 69 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GRASS, slot = VAR_0x8004
# 70 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_6, MSGBOX_DEFAULT
# 71 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_10:
# 74 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ICE, slot = VAR_0x8004
# 75 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_7, MSGBOX_DEFAULT
# 76 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_11:
# 79 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FIGHTING, slot = VAR_0x8004
# 80 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_8, MSGBOX_DEFAULT
# 81 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_12:
# 84 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_POISON, slot = VAR_0x8004
# 85 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_9, MSGBOX_DEFAULT
# 86 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_13:
# 89 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GROUND, slot = VAR_0x8004
# 90 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_10, MSGBOX_DEFAULT
# 91 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_14:
# 94 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu2
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_25:
# 100 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FLYING, slot = VAR_0x8004
# 101 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_11, MSGBOX_DEFAULT
# 102 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_26:
# 105 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_PSYCHIC, slot = VAR_0x8004
# 106 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_12, MSGBOX_DEFAULT
# 107 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_27:
# 110 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_BUG, slot = VAR_0x8004
# 111 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_13, MSGBOX_DEFAULT
# 112 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_28:
# 115 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ROCK, slot = VAR_0x8004
# 116 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_14, MSGBOX_DEFAULT
# 117 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_29:
# 120 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GHOST, slot = VAR_0x8004
# 121 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_15, MSGBOX_DEFAULT
# 122 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_30:
# 125 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_DRAGON, slot = VAR_0x8004
# 126 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_16, MSGBOX_DEFAULT
# 127 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_31:
# 130 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_DARK, slot = VAR_0x8004
# 131 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_17, MSGBOX_DEFAULT
# 132 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_32:
# 135 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_STEEL, slot = VAR_0x8004
# 136 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_18, MSGBOX_DEFAULT
# 137 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_33:
# 140 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FAIRY, slot = VAR_0x8004
# 141 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_19, MSGBOX_DEFAULT
# 142 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_34:
# 145 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu1
	goto Prometheus_Tech_Lab_EventScript_Tera_1


Prometheus_Tech_Lab_EventScript_Nature::
# 153 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	lock
# 154 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	faceplayer
# 156 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_0, MSGBOX_YESNO
# 157 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Prometheus_Tech_Lab_EventScript_Nature_2
Prometheus_Tech_Lab_EventScript_Nature_1:
# 162 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_2
# 163 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto MintMenu1
# 165 "data/maps/Prometheus_Tech_Lab/scripts.pory"
MintMenu1:
# 166 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P1, 0
# 167 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_5
# 169 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_6
# 172 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_7
# 175 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_8
# 178 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_9
# 181 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_10
# 184 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_11
# 189 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_4:
# 192 "data/maps/Prometheus_Tech_Lab/scripts.pory"
AttackMints:
# 193 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P2, 0
# 194 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_21
# 196 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_22
# 200 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_23
# 204 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_24
# 208 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_25
# 213 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_20:
# 216 "data/maps/Prometheus_Tech_Lab/scripts.pory"
DefenseMints:
# 217 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P3, 0
# 218 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_33
# 220 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_34
# 224 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_35
# 228 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_36
# 232 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_37
# 237 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_32:
# 240 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpAttackMints:
# 241 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P4, 0
# 242 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_45
# 244 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_46
# 248 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_47
# 252 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_48
# 256 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_49
# 261 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_44:
# 264 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpDefenseMints:
# 265 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P5, 0
# 266 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_57
# 268 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_58
# 272 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_59
# 276 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_60
# 280 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_61
# 285 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_56:
# 288 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpeedMints:
# 289 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P6, 0
# 290 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_69
# 292 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_70
# 296 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_71
# 300 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_72
# 304 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_73
# 309 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_68:
# 312 "data/maps/Prometheus_Tech_Lab/scripts.pory"
Done:
# 313 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Nature_2:
# 158 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_1
# 159 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_1

Prometheus_Tech_Lab_EventScript_Nature_5:
# 168 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_6:
# 170 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_3
# 171 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto AttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_7:
# 173 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_4
# 174 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto DefenseMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_8:
# 176 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_5
# 177 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpAttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_9:
# 179 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_6
# 180 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpDefenseMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_10:
# 182 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_7
# 183 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpeedMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_11:
# 185 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_8, MSGBOX_DEFAULT
# 186 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
# 187 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_21:
# 195 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_22:
# 197 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_9, MSGBOX_DEFAULT
# 198 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LONELY_MINT, 1
# 199 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_23:
# 201 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_10, MSGBOX_DEFAULT
# 202 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 1
# 203 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_24:
# 205 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_11, MSGBOX_DEFAULT
# 206 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT, 1
# 207 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_25:
# 209 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_12, MSGBOX_DEFAULT
# 210 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BRAVE_MINT, 1
# 211 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_33:
# 219 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_34:
# 221 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_13, MSGBOX_DEFAULT
# 222 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BOLD_MINT, 1
# 223 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_35:
# 225 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_14, MSGBOX_DEFAULT
# 226 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_IMPISH_MINT, 1
# 227 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_36:
# 229 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_15, MSGBOX_DEFAULT
# 230 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LAX_MINT, 1
# 231 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_37:
# 233 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_16, MSGBOX_DEFAULT
# 234 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RELAXED_MINT, 1
# 235 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_45:
# 243 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_46:
# 245 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_17, MSGBOX_DEFAULT
# 246 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MODEST_MINT, 1
# 247 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_47:
# 249 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_18, MSGBOX_DEFAULT
# 250 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MILD_MINT, 1
# 251 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_48:
# 253 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_19, MSGBOX_DEFAULT
# 254 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RASH_MINT, 1
# 255 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_49:
# 257 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_20, MSGBOX_DEFAULT
# 258 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_QUIET_MINT, 1
# 259 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_57:
# 267 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_58:
# 269 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_21, MSGBOX_DEFAULT
# 270 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CALM_MINT, 1
# 271 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_59:
# 273 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_22, MSGBOX_DEFAULT
# 274 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_GENTLE_MINT, 1
# 275 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_60:
# 277 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_23, MSGBOX_DEFAULT
# 278 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 279 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_61:
# 281 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_24, MSGBOX_DEFAULT
# 282 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SASSY_MINT, 1
# 283 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_69:
# 291 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_70:
# 293 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_25, MSGBOX_DEFAULT
# 294 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_TIMID_MINT, 1
# 295 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_71:
# 297 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_26, MSGBOX_DEFAULT
# 298 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_HASTY_MINT, 1
# 299 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_72:
# 301 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_27, MSGBOX_DEFAULT
# 302 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_JOLLY_MINT, 1
# 303 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_73:
# 305 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_28, MSGBOX_DEFAULT
# 306 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAIVE_MINT, 1
# 307 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68


Prometheus_Tech_Lab_EventScript_ExpShare_Text_0:
# 8 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "I've developed a tool that let's all of\nyour Pokemon gain experience from battles.$"

Prometheus_Tech_Lab_EventScript_ExpShare_Text_1:
# 9 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like me to turn it on?$"

Prometheus_Tech_Lab_EventScript_ExpShare_Text_2:
# 12 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "There you go! Exp share active!$"

Prometheus_Tech_Lab_EventScript_ExpShare_Text_3:
# 13 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Talk to me again if you want to\nturn it off.$"

Prometheus_Tech_Lab_EventScript_ExpShare_Text_4:
# 15 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Maybe another time.$"

Prometheus_Tech_Lab_EventScript_ExpShare_Text_5:
# 19 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Want to turn exp share off?$"

Prometheus_Tech_Lab_EventScript_ExpShare_Text_6:
# 22 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "I guess you prefer grinding...$"

Prometheus_Tech_Lab_EventScript_ExpShare_Text_7:
# 24 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Easy mode remains active.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_0:
# 37 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Do you want to change the tera type\nfor one of your pokemon?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_1:
# 39 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Pick a Pokemon to set its Tera type.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_2:
# 50 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Normal.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_3:
# 55 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fire.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_4:
# 60 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Water.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_5:
# 65 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Electric.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_6:
# 70 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Grass.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_7:
# 75 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ice.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_8:
# 80 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fighting.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_9:
# 85 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Poison.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_10:
# 90 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ground.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_11:
# 101 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Flying.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_12:
# 106 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Psychic.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_13:
# 111 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Bug.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_14:
# 116 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Rock.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_15:
# 121 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ghost.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_16:
# 126 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Dragon.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_17:
# 131 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Dark.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_18:
# 136 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Steel.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_19:
# 141 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fairy.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_0:
# 156 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Do you want an experimental mint to\nchange the nature of your pokemon?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_1:
# 158 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Maybe next time.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_2:
# 162 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat would you like to raise?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_3:
# 170 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nattack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_4:
# 173 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\ndefense?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_5:
# 176 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. attack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_6:
# 179 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. defense?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_7:
# 182 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nspeed?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_8:
# 185 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a serious mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_9:
# 197 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lonely mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_10:
# 201 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an adamant mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_11:
# 205 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naughty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_12:
# 209 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a brave mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_13:
# 221 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a bold mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_14:
# 225 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an impish mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_15:
# 229 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lax mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_16:
# 233 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a relaxed mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_17:
# 245 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a modest mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_18:
# 249 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a mild mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_19:
# 253 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a rash mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_20:
# 257 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a quiet mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_21:
# 269 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a calm mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_22:
# 273 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a gentle mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_23:
# 277 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a careful mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_24:
# 281 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a sassy mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_25:
# 293 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a timid mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_26:
# 297 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a hasty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_27:
# 301 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a jolly mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_28:
# 305 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naive mint.$"
