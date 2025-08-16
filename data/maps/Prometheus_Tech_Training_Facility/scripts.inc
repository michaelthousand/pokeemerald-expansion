Prometheus_Tech_Training_Facility_MapScripts::
	.byte 0


Prometheus_Tech_Training_Facility_EventScript_Hyper::
# 5 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	lock
# 6 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	faceplayer
# 8 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
# 10 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	callnative ChoosePartyMon
# 11 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitstate
# 13 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
# 15 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	multichoice 20, 0, MULTI_HT_STATS, 0
# 16 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_Hyper_2
# 21 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_Hyper_3
# 26 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_Hyper_4
# 31 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_Hyper_5
# 36 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_Hyper_6
# 41 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_Hyper_7
# 46 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_Hyper_8
Prometheus_Tech_Training_Facility_EventScript_Hyper_1:
# 57 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	release
	end

Prometheus_Tech_Training_Facility_EventScript_Hyper_2:
# 17 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_HP, slot = VAR_0x8004
# 18 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_Hyper_1

Prometheus_Tech_Training_Facility_EventScript_Hyper_3:
# 22 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_ATK, slot = VAR_0x8004
# 23 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_Hyper_1

Prometheus_Tech_Training_Facility_EventScript_Hyper_4:
# 27 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_DEF, slot = VAR_0x8004
# 28 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_4, MSGBOX_DEFAULT
# 29 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_Hyper_1

Prometheus_Tech_Training_Facility_EventScript_Hyper_5:
# 32 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_SPATK, slot = VAR_0x8004
# 33 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_5, MSGBOX_DEFAULT
# 34 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_Hyper_1

Prometheus_Tech_Training_Facility_EventScript_Hyper_6:
# 37 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_SPDEF, slot = VAR_0x8004
# 38 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_6, MSGBOX_DEFAULT
# 39 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_Hyper_1

Prometheus_Tech_Training_Facility_EventScript_Hyper_7:
# 42 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_SPEED, slot = VAR_0x8004
# 43 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_7, MSGBOX_DEFAULT
# 44 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_Hyper_1

Prometheus_Tech_Training_Facility_EventScript_Hyper_8:
# 47 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_HP, slot = VAR_0x8004
# 48 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_ATK, slot = VAR_0x8004
# 49 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_DEF, slot = VAR_0x8004
# 50 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_SPATK, slot = VAR_0x8004
# 51 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_SPDEF, slot = VAR_0x8004
# 52 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	hypertrain stat = STAT_SPEED, slot = VAR_0x8004
# 53 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_8, MSGBOX_DEFAULT
# 54 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_Hyper_1


Prometheus_Tech_Training_Facility_EventScript_EV::
# 62 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	lock
# 63 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	faceplayer
# 65 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
# 67 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	callnative ChoosePartyMon
# 68 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitstate
# 70 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_1, MSGBOX_DEFAULT
# 71 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
# 72 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	multichoice 20, 0, MULTI_EV_STATS, 0
# 73 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_2
# 76 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_3
# 79 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_4
# 82 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_5
# 85 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_6
# 88 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_7
# 92 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_2, MSGBOX_DEFAULT
# 93 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
# 94 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	release
	end

Prometheus_Tech_Training_Facility_EventScript_EV_1:
# 98 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_3, MSGBOX_DEFAULT
# 99 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
# 100 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	multichoice 20, 0, MULTI_EV_MODES, 0
# 104 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_16
# 107 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_17
# 110 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_18
# 113 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_19
# 116 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_20
# 119 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_21
# 123 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_4, MSGBOX_DEFAULT
# 124 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
# 125 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	release
	end

Prometheus_Tech_Training_Facility_EventScript_EV_2:
# 74 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8005, 0
	goto Prometheus_Tech_Training_Facility_EventScript_EV_1

Prometheus_Tech_Training_Facility_EventScript_EV_3:
# 77 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8005, 1
	goto Prometheus_Tech_Training_Facility_EventScript_EV_1

Prometheus_Tech_Training_Facility_EventScript_EV_4:
# 80 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8005, 2
	goto Prometheus_Tech_Training_Facility_EventScript_EV_1

Prometheus_Tech_Training_Facility_EventScript_EV_5:
# 83 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8005, 3
	goto Prometheus_Tech_Training_Facility_EventScript_EV_1

Prometheus_Tech_Training_Facility_EventScript_EV_6:
# 86 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8005, 4
	goto Prometheus_Tech_Training_Facility_EventScript_EV_1

Prometheus_Tech_Training_Facility_EventScript_EV_7:
# 89 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8005, 5
	goto Prometheus_Tech_Training_Facility_EventScript_EV_1

Prometheus_Tech_Training_Facility_EventScript_EV_15:
# 129 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	callnative EVEditor_Adjust
# 131 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_30
# 135 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_31
# 139 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Prometheus_Tech_Training_Facility_EventScript_EV_32
# 144 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_8, MSGBOX_DEFAULT
# 145 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
Prometheus_Tech_Training_Facility_EventScript_EV_29:
# 148 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	release
	end

Prometheus_Tech_Training_Facility_EventScript_EV_16:
# 105 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8006, 0
	goto Prometheus_Tech_Training_Facility_EventScript_EV_15

Prometheus_Tech_Training_Facility_EventScript_EV_17:
# 108 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8006, 1
	goto Prometheus_Tech_Training_Facility_EventScript_EV_15

Prometheus_Tech_Training_Facility_EventScript_EV_18:
# 111 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8006, 2
	goto Prometheus_Tech_Training_Facility_EventScript_EV_15

Prometheus_Tech_Training_Facility_EventScript_EV_19:
# 114 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8006, 3
	goto Prometheus_Tech_Training_Facility_EventScript_EV_15

Prometheus_Tech_Training_Facility_EventScript_EV_20:
# 117 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8006, 4
	goto Prometheus_Tech_Training_Facility_EventScript_EV_15

Prometheus_Tech_Training_Facility_EventScript_EV_21:
# 120 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	setvar VAR_0x8006, 5
	goto Prometheus_Tech_Training_Facility_EventScript_EV_15

Prometheus_Tech_Training_Facility_EventScript_EV_30:
# 132 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_5, MSGBOX_DEFAULT
# 133 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_EV_29

Prometheus_Tech_Training_Facility_EventScript_EV_31:
# 136 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_6, MSGBOX_DEFAULT
# 137 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_EV_29

Prometheus_Tech_Training_Facility_EventScript_EV_32:
# 140 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	msgbox Prometheus_Tech_Training_Facility_EventScript_EV_Text_7, MSGBOX_DEFAULT
# 141 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	waitmessage
	goto Prometheus_Tech_Training_Facility_EventScript_EV_29


Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_0:
# 8 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Pick a Pokémon to Hyper Train.$"

Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_1:
# 13 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Pick a stat to Hyper Train.$"

Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_2:
# 18 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Your Pokemon's HP stat has been hyper\ntrained.$"

Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_3:
# 23 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Your Pokemon's attack stat has been hyper\ntrained.$"

Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_4:
# 28 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Your Pokemon's defense stat has been hyper\ntrained.$"

Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_5:
# 33 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Your Pokemon's sp. attack stat has been hyper\ntrained.$"

Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_6:
# 38 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Your Pokemon's sp. defense stat has been hyper\ntrained.$"

Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_7:
# 43 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Your Pokemon's speed stat has been hyper\ntrained.$"

Prometheus_Tech_Training_Facility_EventScript_Hyper_Text_8:
# 53 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "All of your Pokemon's stats have been hyper\ntrained.$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_0:
# 65 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "I can help you tune your Pokemon's EVs\pWhich pokemon are we editing?$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_1:
# 70 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Pick a stat to change.$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_2:
# 92 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Never mind then.$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_3:
# 98 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "How should I change it?$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_4:
# 123 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Canceled.$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_5:
# 132 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Done! EVs updated and stats recalculated.$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_6:
# 136 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "That stat is already at its limit (252).$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_7:
# 140 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Total EVs would exceed 510. Reduce another stat first.$"

Prometheus_Tech_Training_Facility_EventScript_EV_Text_8:
# 144 "data/maps/Prometheus_Tech_Training_Facility/scripts.pory"
	.string "Something went wrong. Try again.$"
