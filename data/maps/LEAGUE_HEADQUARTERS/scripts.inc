LEAGUE_HEADQUARTERS_MapScripts::
	.byte 0


LEAGUE_HEADQUARTERS_Chairman::
# 6 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lock
# 7 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	faceplayer
# 8 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_0
# 10 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_1
# 11 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 13 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_2
# 14 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_AMULET_COIN, 1
# 15 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 16 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 17 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 18 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
# 19 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_QUICK_BALL, 50
# 21 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_3
# 22 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 23 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
# 24 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag B_FLAG_TERA_ORB_NO_COST
# 27 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_4
# 28 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end


LEAGUE_HEADQUARTERS_Registration::
# 33 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lock
# 34 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	faceplayer
# 36 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_0
# 38 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	callnative ChoosePartyMon
# 39 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitstate
# 41 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto TeraMenu1
# 43 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
TeraMenu1:
# 44 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	multichoice 20, 0, TERA_CHOICE_P1, 0
# 45 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_2
# 50 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_3
# 55 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_4
# 60 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_5
# 65 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_6
# 70 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_7
# 75 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_8
# 80 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_9
# 85 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_10
# 90 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_11
LEAGUE_HEADQUARTERS_Registration_1:
# 94 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
TeraMenu2:
# 95 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	multichoice 20, 0, TERA_CHOICE_P2, 0
# 96 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_23
# 101 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_24
# 106 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_25
# 111 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_26
# 116 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_27
# 121 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_28
# 126 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_29
# 131 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_30
# 136 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_31
# 141 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_32
LEAGUE_HEADQUARTERS_Registration_22:
# 146 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end

LEAGUE_HEADQUARTERS_Registration_2:
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_NORMAL, slot = VAR_0x8004
# 47 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_3:
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_FIRE, slot = VAR_0x8004
# 52 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_4:
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_WATER, slot = VAR_0x8004
# 57 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_3, MSGBOX_DEFAULT
# 58 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_5:
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_ELECTRIC, slot = VAR_0x8004
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_4, MSGBOX_DEFAULT
# 63 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_6:
# 66 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_GRASS, slot = VAR_0x8004
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_5, MSGBOX_DEFAULT
# 68 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_7:
# 71 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_ICE, slot = VAR_0x8004
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_6, MSGBOX_DEFAULT
# 73 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_8:
# 76 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_FIGHTING, slot = VAR_0x8004
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_7, MSGBOX_DEFAULT
# 78 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_9:
# 81 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_POISON, slot = VAR_0x8004
# 82 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_8, MSGBOX_DEFAULT
# 83 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_10:
# 86 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_GROUND, slot = VAR_0x8004
# 87 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_9, MSGBOX_DEFAULT
# 88 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_11:
# 91 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto TeraMenu2
	goto LEAGUE_HEADQUARTERS_Registration_1

LEAGUE_HEADQUARTERS_Registration_23:
# 97 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_FLYING, slot = VAR_0x8004
# 98 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_10, MSGBOX_DEFAULT
# 99 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_24:
# 102 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_PSYCHIC, slot = VAR_0x8004
# 103 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_11, MSGBOX_DEFAULT
# 104 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_25:
# 107 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_BUG, slot = VAR_0x8004
# 108 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_12, MSGBOX_DEFAULT
# 109 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_26:
# 112 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_ROCK, slot = VAR_0x8004
# 113 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_13, MSGBOX_DEFAULT
# 114 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_27:
# 117 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_GHOST, slot = VAR_0x8004
# 118 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_14, MSGBOX_DEFAULT
# 119 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_28:
# 122 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_DRAGON, slot = VAR_0x8004
# 123 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_15, MSGBOX_DEFAULT
# 124 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_29:
# 127 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_DARK, slot = VAR_0x8004
# 128 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_16, MSGBOX_DEFAULT
# 129 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_30:
# 132 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_STEEL, slot = VAR_0x8004
# 133 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_17, MSGBOX_DEFAULT
# 134 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_31:
# 137 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setteratype type = TYPE_FAIRY, slot = VAR_0x8004
# 138 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_18, MSGBOX_DEFAULT
# 139 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmessage
	goto LEAGUE_HEADQUARTERS_Registration_22

LEAGUE_HEADQUARTERS_Registration_32:
# 142 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto TeraMenu1
	goto LEAGUE_HEADQUARTERS_Registration_22


LEAGUE_HEADQUARTERS_Chairman_Text_0:
# 8 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Welcome to the Pokemon League!$"

LEAGUE_HEADQUARTERS_Chairman_Text_1:
# 10 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Here's a TM to get you started.$"

LEAGUE_HEADQUARTERS_Chairman_Text_2:
# 13 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "And, of course, some items!$"

LEAGUE_HEADQUARTERS_Chairman_Text_3:
# 21 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "But most importantly: a Tera Orb$"

LEAGUE_HEADQUARTERS_Chairman_Text_4:
# 27 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Hopefully these will help going!$"

LEAGUE_HEADQUARTERS_Registration_Text_0:
# 36 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Pick a Pokemon to set its Tera type.$"

LEAGUE_HEADQUARTERS_Registration_Text_1:
# 47 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Normal.$"

LEAGUE_HEADQUARTERS_Registration_Text_2:
# 52 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Fire.$"

LEAGUE_HEADQUARTERS_Registration_Text_3:
# 57 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Water.$"

LEAGUE_HEADQUARTERS_Registration_Text_4:
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Electric.$"

LEAGUE_HEADQUARTERS_Registration_Text_5:
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Grass.$"

LEAGUE_HEADQUARTERS_Registration_Text_6:
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Ice.$"

LEAGUE_HEADQUARTERS_Registration_Text_7:
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Fighting.$"

LEAGUE_HEADQUARTERS_Registration_Text_8:
# 82 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Poison.$"

LEAGUE_HEADQUARTERS_Registration_Text_9:
# 87 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Ground.$"

LEAGUE_HEADQUARTERS_Registration_Text_10:
# 98 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Flying.$"

LEAGUE_HEADQUARTERS_Registration_Text_11:
# 103 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Psychic.$"

LEAGUE_HEADQUARTERS_Registration_Text_12:
# 108 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Bug.$"

LEAGUE_HEADQUARTERS_Registration_Text_13:
# 113 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Rock.$"

LEAGUE_HEADQUARTERS_Registration_Text_14:
# 118 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Ghost.$"

LEAGUE_HEADQUARTERS_Registration_Text_15:
# 123 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Dragon.$"

LEAGUE_HEADQUARTERS_Registration_Text_16:
# 128 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Dark.$"

LEAGUE_HEADQUARTERS_Registration_Text_17:
# 133 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Steel.$"

LEAGUE_HEADQUARTERS_Registration_Text_18:
# 138 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Your Pokemon's tera type is now Fairy.$"
