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
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_2
Prometheus_Tech_Lab_EventScript_Nature_1:
# 277 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Nature_2:
# 128 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_1
# 130 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto MintMenu1
# 132 "data/maps/Prometheus_Tech_Lab/scripts.pory"
MintMenu1:
# 133 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P1, 0
# 134 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_5
# 139 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_6
# 143 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_7
# 147 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_8
# 151 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_9
# 155 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_10
Prometheus_Tech_Lab_EventScript_Nature_4:
# 161 "data/maps/Prometheus_Tech_Lab/scripts.pory"
AttackMints:
# 162 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P2, 0
# 163 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_18
# 168 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_19
# 173 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_20
# 178 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_21
Prometheus_Tech_Lab_EventScript_Nature_17:
# 184 "data/maps/Prometheus_Tech_Lab/scripts.pory"
DefenseMints:
# 185 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P3, 0
# 186 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_27
# 191 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_28
# 196 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_29
# 201 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_30
Prometheus_Tech_Lab_EventScript_Nature_26:
# 207 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpAttackMints:
# 208 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P4, 0
# 209 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_36
# 214 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_37
# 219 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_38
# 224 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_39
Prometheus_Tech_Lab_EventScript_Nature_35:
# 230 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpDefenseMints:
# 231 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P5, 0
# 232 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_45
# 237 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_46
# 242 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_47
# 247 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_48
Prometheus_Tech_Lab_EventScript_Nature_44:
# 253 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpeedkMints:
# 254 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P6, 0
# 255 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_53
# 260 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_54
# 265 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_55
# 270 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_56
	goto Prometheus_Tech_Lab_EventScript_Nature_1

Prometheus_Tech_Lab_EventScript_Nature_5:
# 135 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_2, MSGBOX_DEFAULT
# 136 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 137 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto AttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_6:
# 140 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_3, MSGBOX_DEFAULT
# 141 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_7:
# 144 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_4, MSGBOX_DEFAULT
# 145 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_8:
# 148 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_5, MSGBOX_DEFAULT
# 149 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_9:
# 152 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_6, MSGBOX_DEFAULT
# 153 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_10:
# 156 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_7, MSGBOX_DEFAULT
# 157 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 158 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_18:
# 164 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_8, MSGBOX_DEFAULT
# 165 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 166 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LONELY_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_17

Prometheus_Tech_Lab_EventScript_Nature_19:
# 169 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_9, MSGBOX_DEFAULT
# 170 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 171 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_17

Prometheus_Tech_Lab_EventScript_Nature_20:
# 174 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_10, MSGBOX_DEFAULT
# 175 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 176 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_17

Prometheus_Tech_Lab_EventScript_Nature_21:
# 179 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_11, MSGBOX_DEFAULT
# 180 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 181 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BRAVE_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_17

Prometheus_Tech_Lab_EventScript_Nature_27:
# 187 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_12, MSGBOX_DEFAULT
# 188 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 189 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BOLD_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_26

Prometheus_Tech_Lab_EventScript_Nature_28:
# 192 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_13, MSGBOX_DEFAULT
# 193 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 194 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_IMPISH_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_26

Prometheus_Tech_Lab_EventScript_Nature_29:
# 197 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_14, MSGBOX_DEFAULT
# 198 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 199 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LAX_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_26

Prometheus_Tech_Lab_EventScript_Nature_30:
# 202 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_15, MSGBOX_DEFAULT
# 203 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 204 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RELAXED_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_26

Prometheus_Tech_Lab_EventScript_Nature_36:
# 210 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_16, MSGBOX_DEFAULT
# 211 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 212 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MODEST_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_35

Prometheus_Tech_Lab_EventScript_Nature_37:
# 215 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_17, MSGBOX_DEFAULT
# 216 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 217 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MILD_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_35

Prometheus_Tech_Lab_EventScript_Nature_38:
# 220 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_18, MSGBOX_DEFAULT
# 221 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 222 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RASH_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_35

Prometheus_Tech_Lab_EventScript_Nature_39:
# 225 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_19, MSGBOX_DEFAULT
# 226 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 227 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_QUIET_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_35

Prometheus_Tech_Lab_EventScript_Nature_45:
# 233 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_20, MSGBOX_DEFAULT
# 234 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 235 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CALM_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_46:
# 238 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_21, MSGBOX_DEFAULT
# 239 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 240 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_GENTLE_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_47:
# 243 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_22, MSGBOX_DEFAULT
# 244 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 245 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_48:
# 248 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_23, MSGBOX_DEFAULT
# 249 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 250 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SASSY_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_53:
# 256 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_24, MSGBOX_DEFAULT
# 257 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 258 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_TIMID_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_1

Prometheus_Tech_Lab_EventScript_Nature_54:
# 261 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_25, MSGBOX_DEFAULT
# 262 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 263 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_HASTY_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_1

Prometheus_Tech_Lab_EventScript_Nature_55:
# 266 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_26, MSGBOX_DEFAULT
# 267 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 268 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_JOLLY_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_1

Prometheus_Tech_Lab_EventScript_Nature_56:
# 271 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_27, MSGBOX_DEFAULT
# 272 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
# 273 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAIVE_MINT, 1
	goto Prometheus_Tech_Lab_EventScript_Nature_1


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
	.string "What stat would you like to raise?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_2:
# 135 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nattack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_3:
# 140 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\ndefense.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_4:
# 144 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. attack.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_5:
# 148 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. defense.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_6:
# 152 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nspeed.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_7:
# 156 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a serious mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_8:
# 164 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lonely mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_9:
# 169 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an adamant mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_10:
# 174 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naughty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_11:
# 179 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a brave mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_12:
# 187 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a bold mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_13:
# 192 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an impish mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_14:
# 197 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lax mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_15:
# 202 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a relaxed mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_16:
# 210 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a modest mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_17:
# 215 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a mild mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_18:
# 220 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a rash mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_19:
# 225 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a quiet mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_20:
# 233 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a calm mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_21:
# 238 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a gentle mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_22:
# 243 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a careful mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_23:
# 248 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a sassy mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_24:
# 256 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a timid mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_25:
# 261 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an hasty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_26:
# 266 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a jolly mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_27:
# 271 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naive mint.$"
