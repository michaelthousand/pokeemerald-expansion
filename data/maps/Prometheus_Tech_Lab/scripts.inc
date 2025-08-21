Prometheus_Tech_Lab_MapScripts::
	.byte 0


Prometheus_Tech_Lab_EventScript_Tera::
# 4 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	lock
# 5 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	faceplayer
# 7 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_0, MSGBOX_YESNO
# 8 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_2
Prometheus_Tech_Lab_EventScript_Tera_1:
# 118 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Tera_2:
# 9 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_1
# 11 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 12 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 14 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu1
# 16 "data/maps/Prometheus_Tech_Lab/scripts.pory"
TeraMenu1:
# 17 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, TERA_CHOICE_P1, 0
# 18 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_5
# 23 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_6
# 28 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_7
# 33 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_8
# 38 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_9
# 43 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_10
# 48 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_11
# 53 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_12
# 58 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_13
# 63 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_14
Prometheus_Tech_Lab_EventScript_Tera_4:
# 67 "data/maps/Prometheus_Tech_Lab/scripts.pory"
TeraMenu2:
# 68 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, TERA_CHOICE_P2, 0
# 69 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_25
# 74 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_26
# 79 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_27
# 84 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_28
# 89 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_29
# 94 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_30
# 99 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_31
# 104 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_32
# 109 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_33
# 114 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_34
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_5:
# 19 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_NORMAL, slot = VAR_0x8004
# 20 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_6:
# 24 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FIRE, slot = VAR_0x8004
# 25 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_3, MSGBOX_DEFAULT
# 26 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_7:
# 29 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_WATER, slot = VAR_0x8004
# 30 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4, MSGBOX_DEFAULT
# 31 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_8:
# 34 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ELECTRIC, slot = VAR_0x8004
# 35 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_5, MSGBOX_DEFAULT
# 36 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_9:
# 39 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GRASS, slot = VAR_0x8004
# 40 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_6, MSGBOX_DEFAULT
# 41 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_10:
# 44 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ICE, slot = VAR_0x8004
# 45 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_7, MSGBOX_DEFAULT
# 46 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_11:
# 49 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FIGHTING, slot = VAR_0x8004
# 50 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_8, MSGBOX_DEFAULT
# 51 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_12:
# 54 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_POISON, slot = VAR_0x8004
# 55 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_9, MSGBOX_DEFAULT
# 56 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_13:
# 59 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GROUND, slot = VAR_0x8004
# 60 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_10, MSGBOX_DEFAULT
# 61 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_14:
# 64 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu2
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_25:
# 70 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FLYING, slot = VAR_0x8004
# 71 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_11, MSGBOX_DEFAULT
# 72 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_26:
# 75 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_PSYCHIC, slot = VAR_0x8004
# 76 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_12, MSGBOX_DEFAULT
# 77 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_27:
# 80 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_BUG, slot = VAR_0x8004
# 81 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_13, MSGBOX_DEFAULT
# 82 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_28:
# 85 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ROCK, slot = VAR_0x8004
# 86 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_14, MSGBOX_DEFAULT
# 87 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_29:
# 90 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GHOST, slot = VAR_0x8004
# 91 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_15, MSGBOX_DEFAULT
# 92 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_30:
# 95 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_DRAGON, slot = VAR_0x8004
# 96 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_16, MSGBOX_DEFAULT
# 97 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_31:
# 100 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_DARK, slot = VAR_0x8004
# 101 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_17, MSGBOX_DEFAULT
# 102 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_32:
# 105 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_STEEL, slot = VAR_0x8004
# 106 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_18, MSGBOX_DEFAULT
# 107 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_33:
# 110 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FAIRY, slot = VAR_0x8004
# 111 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_19, MSGBOX_DEFAULT
# 112 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_34:
# 115 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu1
	goto Prometheus_Tech_Lab_EventScript_Tera_1


Prometheus_Tech_Lab_EventScript_Nature::
# 123 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	lock
# 124 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	faceplayer
# 126 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_0, MSGBOX_YESNO
# 127 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Prometheus_Tech_Lab_EventScript_Nature_2
Prometheus_Tech_Lab_EventScript_Nature_1:
# 132 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_2
# 133 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto MintMenu1
# 135 "data/maps/Prometheus_Tech_Lab/scripts.pory"
MintMenu1:
# 136 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P1, 0
# 137 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_5
# 139 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_6
# 142 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_7
# 145 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_8
# 148 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_9
# 151 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_10
# 154 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_11
# 159 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_4:
# 162 "data/maps/Prometheus_Tech_Lab/scripts.pory"
AttackMints:
# 163 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P2, 0
# 164 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_21
# 166 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_22
# 170 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_23
# 174 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_24
# 178 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_25
# 183 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_20:
# 186 "data/maps/Prometheus_Tech_Lab/scripts.pory"
DefenseMints:
# 187 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P3, 0
# 188 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_33
# 190 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_34
# 194 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_35
# 198 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_36
# 202 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_37
# 207 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_32:
# 210 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpAttackMints:
# 211 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P4, 0
# 212 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_45
# 214 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_46
# 218 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_47
# 222 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_48
# 226 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_49
# 231 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_44:
# 234 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpDefenseMints:
# 235 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P5, 0
# 236 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_57
# 238 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_58
# 242 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_59
# 246 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_60
# 250 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_61
# 255 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_56:
# 258 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpeedMints:
# 259 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P6, 0
# 260 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_69
# 262 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_70
# 266 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_71
# 270 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_72
# 274 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_73
# 279 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_68:
# 282 "data/maps/Prometheus_Tech_Lab/scripts.pory"
Done:
# 283 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Nature_2:
# 128 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_1
# 129 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_1

Prometheus_Tech_Lab_EventScript_Nature_5:
# 138 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_6:
# 140 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_3
# 141 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto AttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_7:
# 143 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_4
# 144 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto DefenseMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_8:
# 146 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_5
# 147 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpAttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_9:
# 149 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_6
# 150 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpDefenseMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_10:
# 152 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_7
# 153 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpeedMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_11:
# 155 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_8, MSGBOX_DEFAULT
# 156 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
# 157 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_21:
# 165 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_22:
# 167 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_9, MSGBOX_DEFAULT
# 168 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LONELY_MINT, 1
# 169 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_23:
# 171 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_10, MSGBOX_DEFAULT
# 172 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 1
# 173 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_24:
# 175 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_11, MSGBOX_DEFAULT
# 176 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT, 1
# 177 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_25:
# 179 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_12, MSGBOX_DEFAULT
# 180 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BRAVE_MINT, 1
# 181 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_33:
# 189 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_34:
# 191 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_13, MSGBOX_DEFAULT
# 192 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BOLD_MINT, 1
# 193 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_35:
# 195 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_14, MSGBOX_DEFAULT
# 196 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_IMPISH_MINT, 1
# 197 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_36:
# 199 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_15, MSGBOX_DEFAULT
# 200 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LAX_MINT, 1
# 201 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_37:
# 203 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_16, MSGBOX_DEFAULT
# 204 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RELAXED_MINT, 1
# 205 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_45:
# 213 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_46:
# 215 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_17, MSGBOX_DEFAULT
# 216 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MODEST_MINT, 1
# 217 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_47:
# 219 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_18, MSGBOX_DEFAULT
# 220 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MILD_MINT, 1
# 221 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_48:
# 223 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_19, MSGBOX_DEFAULT
# 224 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RASH_MINT, 1
# 225 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_49:
# 227 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_20, MSGBOX_DEFAULT
# 228 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_QUIET_MINT, 1
# 229 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_57:
# 237 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_58:
# 239 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_21, MSGBOX_DEFAULT
# 240 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CALM_MINT, 1
# 241 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_59:
# 243 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_22, MSGBOX_DEFAULT
# 244 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_GENTLE_MINT, 1
# 245 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_60:
# 247 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_23, MSGBOX_DEFAULT
# 248 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 249 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_61:
# 251 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_24, MSGBOX_DEFAULT
# 252 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SASSY_MINT, 1
# 253 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_69:
# 261 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_70:
# 263 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_25, MSGBOX_DEFAULT
# 264 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_TIMID_MINT, 1
# 265 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_71:
# 267 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_26, MSGBOX_DEFAULT
# 268 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_HASTY_MINT, 1
# 269 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_72:
# 271 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_27, MSGBOX_DEFAULT
# 272 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_JOLLY_MINT, 1
# 273 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_73:
# 275 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_28, MSGBOX_DEFAULT
# 276 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAIVE_MINT, 1
# 277 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68


Prometheus_Tech_Lab_EventScript_Tera_Text_0:
# 7 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Do you want to change the tera type\nfor one of your pokemon?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_1:
# 9 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Pick a Pokemon to set its Tera type.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_2:
# 20 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Normal.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_3:
# 25 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fire.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_4:
# 30 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Water.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_5:
# 35 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Electric.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_6:
# 40 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Grass.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_7:
# 45 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ice.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_8:
# 50 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fighting.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_9:
# 55 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Poison.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_10:
# 60 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ground.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_11:
# 71 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Flying.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_12:
# 76 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Psychic.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_13:
# 81 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Bug.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_14:
# 86 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Rock.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_15:
# 91 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ghost.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_16:
# 96 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Dragon.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_17:
# 101 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Dark.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_18:
# 106 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Steel.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_19:
# 111 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fairy.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_0:
# 126 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Do you want an experimental mint to\nchange the nature of your pokemon?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_1:
# 128 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Maybe next time.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_2:
# 132 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat would you like to raise?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_3:
# 140 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nattack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_4:
# 143 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\ndefense?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_5:
# 146 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. attack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_6:
# 149 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. defense?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_7:
# 152 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nspeed?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_8:
# 155 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a serious mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_9:
# 167 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lonely mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_10:
# 171 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an adamant mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_11:
# 175 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naughty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_12:
# 179 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a brave mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_13:
# 191 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a bold mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_14:
# 195 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an impish mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_15:
# 199 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lax mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_16:
# 203 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a relaxed mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_17:
# 215 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a modest mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_18:
# 219 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a mild mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_19:
# 223 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a rash mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_20:
# 227 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a quiet mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_21:
# 239 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a calm mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_22:
# 243 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a gentle mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_23:
# 247 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a careful mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_24:
# 251 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a sassy mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_25:
# 263 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a timid mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_26:
# 267 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a hasty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_27:
# 271 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a jolly mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_28:
# 275 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naive mint.$"
