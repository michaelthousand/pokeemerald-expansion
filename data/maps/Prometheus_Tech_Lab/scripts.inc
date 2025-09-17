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
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_1, MSGBOX_AUTOCLOSE
# 38 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_2, MSGBOX_AUTOCLOSE
# 39 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	delay 60
# 41 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_NORMAL_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_2
# 53 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_FIRE_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_3
# 65 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_WATER_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_4
# 77 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_ELECTRIC_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_5
# 89 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_GRASS_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_6
# 101 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_ICE_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_7
# 113 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_FIGHTING_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_8
# 125 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_POISON_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_9
# 137 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_GROUND_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_10
# 149 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_FLYING_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_11
# 161 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_PSYCHIC_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_12
# 173 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_BUG_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_13
# 185 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_ROCK_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_14
# 197 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_GHOST_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_15
# 209 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_DRAGON_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_16
# 221 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_DARK_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_17
# 233 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_STEEL_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_18
# 245 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_FAIRY_SHARDS, 20
	goto_if_ge Prometheus_Tech_Lab_EventScript_Tera_19
# 258 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_40, MSGBOX_AUTOCLOSE
Prometheus_Tech_Lab_EventScript_Tera_1:
# 261 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Tera_2:
# 42 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_3, MSGBOX_YESNO
# 43 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_39
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_3:
# 54 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_6, MSGBOX_YESNO
# 55 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_41
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_4:
# 66 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_8, MSGBOX_YESNO
# 67 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_43
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_5:
# 78 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_10, MSGBOX_YESNO
# 79 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_45
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_6:
# 90 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_12, MSGBOX_YESNO
# 91 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_47
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_7:
# 102 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_14, MSGBOX_YESNO
# 103 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_49
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_8:
# 114 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_16, MSGBOX_YESNO
# 115 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_51
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_9:
# 126 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_18, MSGBOX_YESNO
# 127 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_53
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_10:
# 138 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_20, MSGBOX_YESNO
# 139 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_55
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_11:
# 150 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_22, MSGBOX_YESNO
# 151 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_57
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_12:
# 162 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_24, MSGBOX_YESNO
# 163 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_59
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_13:
# 174 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_26, MSGBOX_YESNO
# 175 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_61
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_14:
# 186 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_28, MSGBOX_YESNO
# 187 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_63
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_15:
# 198 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_30, MSGBOX_YESNO
# 199 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_65
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_16:
# 210 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_32, MSGBOX_YESNO
# 211 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_67
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_17:
# 222 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_34, MSGBOX_YESNO
# 223 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_69
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_18:
# 234 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_36, MSGBOX_YESNO
# 235 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_71
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_19:
# 246 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_38, MSGBOX_YESNO
# 247 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Prometheus_Tech_Lab_EventScript_Tera_73
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_39:
# 44 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 45 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 46 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 47 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_NORMAL, slot = VAR_0x8004
# 48 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_NORMAL_TERA_SHARD, 20
# 49 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_NORMAL_SHARDS, -20
# 50 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_5, MSGBOX_DEFAULT
# 51 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_41:
# 56 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 57 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 58 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 59 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FIRE, slot = VAR_0x8004
# 60 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_FIRE_TERA_SHARD, 20
# 61 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_FIRE_SHARDS, -20
# 62 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_7, MSGBOX_DEFAULT
# 63 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_43:
# 68 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 69 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 70 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 71 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_WATER, slot = VAR_0x8004
# 72 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_WATER_TERA_SHARD, 20
# 73 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_WATER_SHARDS, -20
# 74 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_9, MSGBOX_DEFAULT
# 75 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_45:
# 80 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 81 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 82 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 83 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ELECTRIC, slot = VAR_0x8004
# 84 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_ELECTRIC_TERA_SHARD, 20
# 85 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_ELECTRIC_SHARDS, -20
# 86 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_11, MSGBOX_DEFAULT
# 87 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_47:
# 92 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 93 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 94 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 95 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GRASS, slot = VAR_0x8004
# 96 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_GRASS_TERA_SHARD, 20
# 97 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_GRASS_SHARDS, -20
# 98 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_13, MSGBOX_DEFAULT
# 99 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_49:
# 104 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 105 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 106 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 107 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ICE, slot = VAR_0x8004
# 108 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_ICE_TERA_SHARD, 20
# 109 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_ICE_SHARDS, -20
# 110 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_15, MSGBOX_DEFAULT
# 111 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_51:
# 116 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 117 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 118 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 119 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FIGHTING, slot = VAR_0x8004
# 120 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_FIGHTING_TERA_SHARD, 20
# 121 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_FIGHTING_SHARDS, -20
# 122 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_17, MSGBOX_DEFAULT
# 123 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_53:
# 128 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 129 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 130 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 131 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_POISON, slot = VAR_0x8004
# 132 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_POISON_TERA_SHARD, 20
# 133 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_POISON_SHARDS, -20
# 134 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_19, MSGBOX_DEFAULT
# 135 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_55:
# 140 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 141 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 142 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 143 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GROUND, slot = VAR_0x8004
# 144 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_GROUND_TERA_SHARD, 20
# 145 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_GROUND_SHARDS, -20
# 146 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_21, MSGBOX_DEFAULT
# 147 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_57:
# 152 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 153 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 154 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 155 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FLYING, slot = VAR_0x8004
# 156 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_FLYING_TERA_SHARD, 20
# 157 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_FLYING_SHARDS, -20
# 158 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_23, MSGBOX_DEFAULT
# 159 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_59:
# 164 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 165 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 166 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 167 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_PSYCHIC, slot = VAR_0x8004
# 168 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_PSYCHIC_TERA_SHARD, 20
# 169 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_PSYCHIC_SHARDS, -20
# 170 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_25, MSGBOX_DEFAULT
# 171 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_61:
# 176 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 177 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 178 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 179 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_BUG, slot = VAR_0x8004
# 180 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_BUG_TERA_SHARD, 20
# 181 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_BUG_SHARDS, -20
# 182 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_27, MSGBOX_DEFAULT
# 183 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_63:
# 188 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 189 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 190 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 191 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_ROCK, slot = VAR_0x8004
# 192 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_ROCK_TERA_SHARD, 20
# 193 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_ROCK_SHARDS, -20
# 194 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_29, MSGBOX_DEFAULT
# 195 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_65:
# 200 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 201 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 202 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 203 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_GHOST, slot = VAR_0x8004
# 204 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_GHOST_TERA_SHARD, 20
# 205 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_GHOST_SHARDS, -20
# 206 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_31, MSGBOX_DEFAULT
# 207 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_67:
# 212 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 213 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 214 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 215 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_DRAGON, slot = VAR_0x8004
# 216 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_DRAGON_TERA_SHARD, 20
# 217 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_DRAGON_SHARDS, -20
# 218 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_33, MSGBOX_DEFAULT
# 219 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_69:
# 224 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 225 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 226 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 227 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_DARK, slot = VAR_0x8004
# 228 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_DARK_TERA_SHARD, 20
# 229 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_DARK_SHARDS, -20
# 230 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_35, MSGBOX_DEFAULT
# 231 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_71:
# 236 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 237 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 238 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 239 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_STEEL, slot = VAR_0x8004
# 240 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_STEEL_TERA_SHARD, 20
# 241 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_STEEL_SHARDS, -20
# 242 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_37, MSGBOX_DEFAULT
# 243 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1

Prometheus_Tech_Lab_EventScript_Tera_73:
# 248 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_4
# 249 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	callnative ChoosePartyMon
# 250 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitstate
# 251 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	setteratype type = TYPE_FAIRY, slot = VAR_0x8004
# 252 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	removeitem ITEM_FAIRY_TERA_SHARD, 20
# 253 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	addvar VAR_FAIRY_SHARDS, -20
# 254 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Tera_Text_39, MSGBOX_DEFAULT
# 255 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Lab_EventScript_Tera_1


Prometheus_Tech_Lab_EventScript_Nature::
# 266 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	lock
# 267 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	faceplayer
# 269 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_0, MSGBOX_YESNO
# 270 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne Prometheus_Tech_Lab_EventScript_Nature_2
Prometheus_Tech_Lab_EventScript_Nature_1:
# 275 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_2
# 276 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto MintMenu1
# 278 "data/maps/Prometheus_Tech_Lab/scripts.pory"
MintMenu1:
# 279 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P1, 0
# 280 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_5
# 282 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_6
# 285 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_7
# 288 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_8
# 291 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_9
# 294 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_10
# 297 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_11
# 302 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_4:
# 305 "data/maps/Prometheus_Tech_Lab/scripts.pory"
AttackMints:
# 306 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P2, 0
# 307 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_21
# 309 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_22
# 313 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_23
# 317 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_24
# 321 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_25
# 326 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_20:
# 329 "data/maps/Prometheus_Tech_Lab/scripts.pory"
DefenseMints:
# 330 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P3, 0
# 331 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_33
# 333 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_34
# 337 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_35
# 341 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_36
# 345 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_37
# 350 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_32:
# 353 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpAttackMints:
# 354 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P4, 0
# 355 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_45
# 357 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_46
# 361 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_47
# 365 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_48
# 369 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_49
# 374 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_44:
# 377 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpDefenseMints:
# 378 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P5, 0
# 379 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_57
# 381 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_58
# 385 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_59
# 389 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_60
# 393 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_61
# 398 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_56:
# 401 "data/maps/Prometheus_Tech_Lab/scripts.pory"
SpeedMints:
# 402 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	multichoice 20, 0, MINT_CHOICE_P6, 0
# 403 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_69
# 405 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_70
# 409 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_71
# 413 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_72
# 417 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Lab_EventScript_Nature_73
# 422 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
Prometheus_Tech_Lab_EventScript_Nature_68:
# 425 "data/maps/Prometheus_Tech_Lab/scripts.pory"
Done:
# 426 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	release
	end

Prometheus_Tech_Lab_EventScript_Nature_2:
# 271 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_1
# 272 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_1

Prometheus_Tech_Lab_EventScript_Nature_5:
# 281 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_6:
# 283 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_3
# 284 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto AttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_7:
# 286 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_4
# 287 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto DefenseMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_8:
# 289 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_5
# 290 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpAttackMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_9:
# 292 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_6
# 293 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpDefenseMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_10:
# 295 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_7
# 296 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto SpeedMints
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_11:
# 298 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_8, MSGBOX_DEFAULT
# 299 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
# 300 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_4

Prometheus_Tech_Lab_EventScript_Nature_21:
# 308 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_22:
# 310 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_9, MSGBOX_DEFAULT
# 311 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LONELY_MINT, 1
# 312 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_23:
# 314 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_10, MSGBOX_DEFAULT
# 315 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 1
# 316 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_24:
# 318 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_11, MSGBOX_DEFAULT
# 319 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAUGHTY_MINT, 1
# 320 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_25:
# 322 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_12, MSGBOX_DEFAULT
# 323 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BRAVE_MINT, 1
# 324 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_20

Prometheus_Tech_Lab_EventScript_Nature_33:
# 332 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_34:
# 334 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_13, MSGBOX_DEFAULT
# 335 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_BOLD_MINT, 1
# 336 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_35:
# 338 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_14, MSGBOX_DEFAULT
# 339 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_IMPISH_MINT, 1
# 340 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_36:
# 342 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_15, MSGBOX_DEFAULT
# 343 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_LAX_MINT, 1
# 344 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_37:
# 346 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_16, MSGBOX_DEFAULT
# 347 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RELAXED_MINT, 1
# 348 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_32

Prometheus_Tech_Lab_EventScript_Nature_45:
# 356 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_46:
# 358 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_17, MSGBOX_DEFAULT
# 359 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MODEST_MINT, 1
# 360 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_47:
# 362 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_18, MSGBOX_DEFAULT
# 363 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_MILD_MINT, 1
# 364 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_48:
# 366 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_19, MSGBOX_DEFAULT
# 367 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_RASH_MINT, 1
# 368 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_49:
# 370 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_20, MSGBOX_DEFAULT
# 371 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_QUIET_MINT, 1
# 372 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_44

Prometheus_Tech_Lab_EventScript_Nature_57:
# 380 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_58:
# 382 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_21, MSGBOX_DEFAULT
# 383 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CALM_MINT, 1
# 384 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_59:
# 386 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_22, MSGBOX_DEFAULT
# 387 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_GENTLE_MINT, 1
# 388 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_60:
# 390 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_23, MSGBOX_DEFAULT
# 391 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 1
# 392 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_61:
# 394 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_24, MSGBOX_DEFAULT
# 395 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_SASSY_MINT, 1
# 396 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_56

Prometheus_Tech_Lab_EventScript_Nature_69:
# 404 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_70:
# 406 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_25, MSGBOX_DEFAULT
# 407 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_TIMID_MINT, 1
# 408 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_71:
# 410 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_26, MSGBOX_DEFAULT
# 411 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_HASTY_MINT, 1
# 412 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_72:
# 414 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_27, MSGBOX_DEFAULT
# 415 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_JOLLY_MINT, 1
# 416 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	goto Done
	goto Prometheus_Tech_Lab_EventScript_Nature_68

Prometheus_Tech_Lab_EventScript_Nature_73:
# 418 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	msgbox Prometheus_Tech_Lab_EventScript_Nature_Text_28, MSGBOX_DEFAULT
# 419 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	giveitem ITEM_NAIVE_MINT, 1
# 420 "data/maps/Prometheus_Tech_Lab/scripts.pory"
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
	.string "Hello! If you bring me Tera Shards, I\ncan change the Tera Tye of your Pokemon.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_1:
# 37 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "I'll need 20 tera shards of a particular\ntype to make it work.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_2:
# 38 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Let's see what shards you have...$"

Prometheus_Tech_Lab_EventScript_Tera_Text_3:
# 42 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Normal?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_4:
# 44 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Pick a Pokemon to set its Tera type.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_5:
# 50 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Normal.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_6:
# 54 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Fire?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_7:
# 62 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fire.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_8:
# 66 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Water?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_9:
# 74 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Water.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_10:
# 78 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Electric?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_11:
# 86 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Electric.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_12:
# 90 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Grass?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_13:
# 98 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Grass.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_14:
# 102 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Ice?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_15:
# 110 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ice.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_16:
# 114 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Fighting?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_17:
# 122 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fighting.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_18:
# 126 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Poison?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_19:
# 134 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Poison.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_20:
# 138 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Ground?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_21:
# 146 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ground.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_22:
# 150 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Flying?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_23:
# 158 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fying.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_24:
# 162 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Psychic?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_25:
# 170 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Psychic.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_26:
# 174 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Bug?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_27:
# 182 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Bug.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_28:
# 186 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Rock?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_29:
# 194 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Rock.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_30:
# 198 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Ghost?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_31:
# 206 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Ghost.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_32:
# 210 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Dragon?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_33:
# 218 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Dragon.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_34:
# 222 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Dark?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_35:
# 230 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Dark.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_36:
# 234 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Steel?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_37:
# 242 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Steel.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_38:
# 246 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Would you like to change the Tera Type\nof one of your Pokemon to Fairy?$"

Prometheus_Tech_Lab_EventScript_Tera_Text_39:
# 254 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Your Pokemon's tera type is now Fairy.$"

Prometheus_Tech_Lab_EventScript_Tera_Text_40:
# 258 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Come back if you find more shards.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_0:
# 269 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Do you want an experimental mint to\nchange the nature of your pokemon?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_1:
# 271 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Maybe next time.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_2:
# 275 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat would you like to raise?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_3:
# 283 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nattack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_4:
# 286 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\ndefense?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_5:
# 289 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. attack?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_6:
# 292 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nsp. defense?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_7:
# 295 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "What stat should we lower to raise\nspeed?$"

Prometheus_Tech_Lab_EventScript_Nature_Text_8:
# 298 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a serious mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_9:
# 310 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lonely mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_10:
# 314 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an adamant mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_11:
# 318 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naughty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_12:
# 322 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a brave mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_13:
# 334 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a bold mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_14:
# 338 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's an impish mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_15:
# 342 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a lax mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_16:
# 346 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a relaxed mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_17:
# 358 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a modest mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_18:
# 362 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a mild mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_19:
# 366 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a rash mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_20:
# 370 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a quiet mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_21:
# 382 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a calm mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_22:
# 386 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a gentle mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_23:
# 390 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a careful mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_24:
# 394 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a sassy mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_25:
# 406 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a timid mint$"

Prometheus_Tech_Lab_EventScript_Nature_Text_26:
# 410 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a hasty mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_27:
# 414 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a jolly mint.$"

Prometheus_Tech_Lab_EventScript_Nature_Text_28:
# 418 "data/maps/Prometheus_Tech_Lab/scripts.pory"
	.string "Here's a naive mint.$"
