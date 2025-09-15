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
# 36 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_GRASS_TERA_SHARD, 10
# 38 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_GRASS_SHARDS, 10
# 40 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_GRASS_SHARDS, 10
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_2
Prometheus_Tech_Lab_EventScript_Tera_1:
# 53 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4, MSGBOX_YESNO
# 54 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_5
Prometheus_Tech_Lab_EventScript_Tera_4:
# 164 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Tera_2:
# 41 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_1, MSGBOX_YESNO
# 42 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_7
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_5:
# 55 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_2
# 57 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 58 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 60 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu1
# 62 "data/maps/Prometheus_Tech_Lab/scripts.pory"
TeraMenu1:
# 63 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, TERA_CHOICE_P1, 0
# 64 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_10
# 69 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_11
# 74 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_12
# 79 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_13
# 84 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_14
# 89 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_15
# 94 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_16
# 99 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_17
# 104 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_18
# 109 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_19
Prometheus_Tech_Lab_EventScript_Tera_9:
# 113 "data/maps/Prometheus_Tech_Lab/scripts.pory"
TeraMenu2:
# 114 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, TERA_CHOICE_P2, 0
# 115 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_30
# 120 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_31
# 125 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_32
# 130 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_33
# 135 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_34
# 140 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_35
# 145 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_36
# 150 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_37
# 155 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_38
# 160 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_39
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_7:
# 43 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_2
# 44 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 45 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 46 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GRASS, slot = VAR_0x8004
# 47 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_10:
# 65 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_NORMAL, slot = VAR_0x8004
# 66 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_3, MSGBOX_DEFAULT
# 67 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_11:
# 70 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FIRE, slot = VAR_0x8004
# 71 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_5, MSGBOX_DEFAULT
# 72 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_12:
# 75 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_WATER, slot = VAR_0x8004
# 76 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_6, MSGBOX_DEFAULT
# 77 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_13:
# 80 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ELECTRIC, slot = VAR_0x8004
# 81 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_7, MSGBOX_DEFAULT
# 82 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_14:
# 85 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GRASS, slot = VAR_0x8004
# 86 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_8, MSGBOX_DEFAULT
# 87 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_15:
# 90 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ICE, slot = VAR_0x8004
# 91 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_9, MSGBOX_DEFAULT
# 92 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_16:
# 95 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FIGHTING, slot = VAR_0x8004
# 96 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_10, MSGBOX_DEFAULT
# 97 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_17:
# 100 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_POISON, slot = VAR_0x8004
# 101 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_11, MSGBOX_DEFAULT
# 102 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_18:
# 105 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GROUND, slot = VAR_0x8004
# 106 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_12, MSGBOX_DEFAULT
# 107 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_19:
# 110 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu2
	goto Prometheus_Tech_Lab_EventScript_Tera_9

Prometheus_Tech_Lab_EventScript_Tera_30:
# 116 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FLYING, slot = VAR_0x8004
# 117 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_13, MSGBOX_DEFAULT
# 118 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_31:
# 121 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_PSYCHIC, slot = VAR_0x8004
# 122 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_14, MSGBOX_DEFAULT
# 123 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_32:
# 126 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_BUG, slot = VAR_0x8004
# 127 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_15, MSGBOX_DEFAULT
# 128 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_33:
# 131 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ROCK, slot = VAR_0x8004
# 132 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_16, MSGBOX_DEFAULT
# 133 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_34:
# 136 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GHOST, slot = VAR_0x8004
# 137 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_17, MSGBOX_DEFAULT
# 138 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_35:
# 141 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_DRAGON, slot = VAR_0x8004
# 142 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_18, MSGBOX_DEFAULT
# 143 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_36:
# 146 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_DARK, slot = VAR_0x8004
# 147 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_19, MSGBOX_DEFAULT
# 148 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_37:
# 151 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_STEEL, slot = VAR_0x8004
# 152 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_20, MSGBOX_DEFAULT
# 153 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_38:
# 156 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FAIRY, slot = VAR_0x8004
# 157 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_21, MSGBOX_DEFAULT
# 158 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_4

Prometheus_Tech_Lab_EventScript_Tera_39:
# 161 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto TeraMenu1
	goto Prometheus_Tech_Lab_EventScript_Tera_4


Prometheus_Tech_Lab_EventScript_Nature::
# 169 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	lock
# 170 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	faceplayer
# 172 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_0, MSGBOX_YESNO
# 173 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Prometheus_Tech_Lab_EventScript_Nature_2
Prometheus_Tech_Lab_EventScript_Nature_1:
# 178 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_2
# 179 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto MintMenu1
# 181 "data/maps/Prometheus_Tech_Lab/scripts.pory"
MintMenu1:
# 182 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P1, 0
# 183 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_5
# 185 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_6
# 188 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_7
# 191 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_8
# 194 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_9
# 197 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_10
# 200 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_11
# 205 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_4:
# 208 "data/maps/Prometheus_Tech_Lab/scripts.pory"
AttackMints:
# 209 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P2, 0
# 210 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_21
# 212 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_22
# 216 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_23
# 220 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_24
# 224 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_25
# 229 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_20:
# 232 "data/maps/Prometheus_Tech_Lab/scripts.pory"
DefenseMints:
# 233 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P3, 0
# 234 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_33
# 236 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_34
# 240 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_35
# 244 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_36
# 248 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_37
# 253 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_32:
# 256 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpAttackMints:
# 257 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P4, 0
# 258 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_45
# 260 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_46
# 264 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_47
# 268 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_48
# 272 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_49
# 277 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_44:
# 280 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpDefenseMints:
# 281 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P5, 0
# 282 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_57
# 284 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_58
# 288 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_59
# 292 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_60
# 296 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_61
# 301 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_56:
# 304 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpeedMints:
# 305 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P6, 0
# 306 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_69
# 308 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_70
# 312 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_71
# 316 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_72
# 320 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_73
# 325 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_68:
# 328 "data/maps/Prometheus_Tech_Lab/scripts.pory"
Done:
# 329 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Nature_2:
# 174 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_1
# 175 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_1

Prometheus_Tech_Lab_EventScript_Nature_5:
# 184 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_6:
# 186 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_3
# 187 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto AttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_7:
# 189 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_4
# 190 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto DefenseMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_8:
# 192 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_5
# 193 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpAttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_9:
# 195 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_6
# 196 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpDefenseMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_10:
# 198 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_7
# 199 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpeedMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_11:
# 201 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_8, MSGBOX_DEFAULT
# 202 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
# 203 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_21:
# 211 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_22:
# 213 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_9, MSGBOX_DEFAULT
# 214 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LONELY_MINT, 1
# 215 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_23:
# 217 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_10, MSGBOX_DEFAULT
# 218 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 1
# 219 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_24:
# 221 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_11, MSGBOX_DEFAULT
# 222 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT, 1
# 223 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_25:
# 225 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_12, MSGBOX_DEFAULT
# 226 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BRAVE_MINT, 1
# 227 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_33:
# 235 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_34:
# 237 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_13, MSGBOX_DEFAULT
# 238 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BOLD_MINT, 1
# 239 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_35:
# 241 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_14, MSGBOX_DEFAULT
# 242 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_IMPISH_MINT, 1
# 243 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_36:
# 245 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_15, MSGBOX_DEFAULT
# 246 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LAX_MINT, 1
# 247 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_37:
# 249 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_16, MSGBOX_DEFAULT
# 250 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RELAXED_MINT, 1
# 251 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_45:
# 259 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_46:
# 261 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_17, MSGBOX_DEFAULT
# 262 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MODEST_MINT, 1
# 263 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_47:
# 265 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_18, MSGBOX_DEFAULT
# 266 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MILD_MINT, 1
# 267 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_48:
# 269 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_19, MSGBOX_DEFAULT
# 270 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RASH_MINT, 1
# 271 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_49:
# 273 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_20, MSGBOX_DEFAULT
# 274 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_QUIET_MINT, 1
# 275 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_57:
# 283 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_58:
# 285 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_21, MSGBOX_DEFAULT
# 286 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CALM_MINT, 1
# 287 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_59:
# 289 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_22, MSGBOX_DEFAULT
# 290 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_GENTLE_MINT, 1
# 291 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_60:
# 293 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_23, MSGBOX_DEFAULT
# 294 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 295 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_61:
# 297 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_24, MSGBOX_DEFAULT
# 298 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SASSY_MINT, 1
# 299 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_69:
# 307 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_70:
# 309 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_25, MSGBOX_DEFAULT
# 310 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_TIMID_MINT, 1
# 311 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_71:
# 313 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_26, MSGBOX_DEFAULT
# 314 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_HASTY_MINT, 1
# 315 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_72:
# 317 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_27, MSGBOX_DEFAULT
# 318 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_JOLLY_MINT, 1
# 319 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_73:
# 321 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_28, MSGBOX_DEFAULT
# 322 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAIVE_MINT, 1
# 323 "data/maps/Prometheus_Tech_Lab/scripts.pory"
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
# 36 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Hello! If you bring my Tera Shards, I\ncan change the Tera Tye of your\pPokemon.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_1:
# 41 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera\nType of one of your Pokemon to\pGrass?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_2:
# 43 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Pick a Pokemon to set its Tera type.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_3:
# 47 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Normal.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_4:
# 53 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Do you want to change the tera type\nfor one of your pokemon?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_5:
# 71 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fire.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_6:
# 76 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Water.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_7:
# 81 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Electric.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_8:
# 86 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Grass.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_9:
# 91 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ice.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_10:
# 96 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fighting.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_11:
# 101 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Poison.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_12:
# 106 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ground.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_13:
# 117 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Flying.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_14:
# 122 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Psychic.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_15:
# 127 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Bug.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_16:
# 132 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Rock.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_17:
# 137 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ghost.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_18:
# 142 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Dragon.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_19:
# 147 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Dark.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_20:
# 152 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Steel.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_21:
# 157 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fairy.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_0:
# 172 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Do you want an experimental mint to\nchange the nature of your pokemon?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_1:
# 174 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Maybe next time.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_2:
# 178 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat would you like to raise?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_3:
# 186 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nattack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_4:
# 189 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\ndefense?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_5:
# 192 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. attack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_6:
# 195 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. defense?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_7:
# 198 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nspeed?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_8:
# 201 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a serious mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_9:
# 213 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lonely mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_10:
# 217 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an adamant mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_11:
# 221 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naughty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_12:
# 225 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a brave mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_13:
# 237 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a bold mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_14:
# 241 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an impish mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_15:
# 245 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lax mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_16:
# 249 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a relaxed mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_17:
# 261 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a modest mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_18:
# 265 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a mild mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_19:
# 269 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a rash mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_20:
# 273 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a quiet mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_21:
# 285 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a calm mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_22:
# 289 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a gentle mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_23:
# 293 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a careful mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_24:
# 297 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a sassy mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_25:
# 309 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a timid mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_26:
# 313 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a hasty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_27:
# 317 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a jolly mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_28:
# 321 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naive mint.$"
