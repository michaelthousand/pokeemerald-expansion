PortValor_SailorsHouse_MapScripts::
	.byte 0


PortValor_EventScript_Sailor::
# 4 "data/maps/PortValor_SailorsHouse/scripts.pory"
	lockall
# 5 "data/maps/PortValor_SailorsHouse/scripts.pory"
	faceplayer
# 7 "data/maps/PortValor_SailorsHouse/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_gt PortValor_EventScript_Sailor_18
PortValor_EventScript_Sailor_14:
# 13 "data/maps/PortValor_SailorsHouse/scripts.pory"
	compare VAR_BADGES, 4
	goto_if_gt PortValor_EventScript_Sailor_13
PortValor_EventScript_Sailor_9:
# 19 "data/maps/PortValor_SailorsHouse/scripts.pory"
	compare VAR_BADGES, 7
	goto_if_gt PortValor_EventScript_Sailor_8
PortValor_EventScript_Sailor_7:
# 25 "data/maps/PortValor_SailorsHouse/scripts.pory"
	goto_if_set FLAG_WALKINGWAKE, PortValor_EventScript_Sailor_5
# 29 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_2, MSGBOX_AUTOCLOSE
PortValor_EventScript_Sailor_1:
# 32 "data/maps/PortValor_SailorsHouse/scripts.pory"
	releaseall
	end

PortValor_EventScript_Sailor_2:
# 8 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/PortValor_SailorsHouse/scripts.pory"
	giveitem ITEM_GOOD_ROD, 1
# 10 "data/maps/PortValor_SailorsHouse/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 11 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_1, MSGBOX_AUTOCLOSE
# 12 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_2, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Sailor_1

PortValor_EventScript_Sailor_3:
# 14 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/PortValor_SailorsHouse/scripts.pory"
	giveitem ITEM_HM_SURF, 1
# 16 "data/maps/PortValor_SailorsHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 17 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_3, MSGBOX_AUTOCLOSE
# 18 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_2, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Sailor_1

PortValor_EventScript_Sailor_4:
# 20 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/PortValor_SailorsHouse/scripts.pory"
	givemon SPECIES_WALKING_WAKE, 60, ITEM_NONE
# 22 "data/maps/PortValor_SailorsHouse/scripts.pory"
	setflag FLAG_WALKINGWAKE
# 23 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_3, MSGBOX_AUTOCLOSE
# 24 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_2, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Sailor_1

PortValor_EventScript_Sailor_5:
# 26 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_4, MSGBOX_AUTOCLOSE
# 27 "data/maps/PortValor_SailorsHouse/scripts.pory"
	msgbox PortValor_EventScript_Sailor_Text_5, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Sailor_1

PortValor_EventScript_Sailor_8:
# 19 "data/maps/PortValor_SailorsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PortValor_EventScript_Sailor_10
	goto PortValor_EventScript_Sailor_7

PortValor_EventScript_Sailor_10:
# 19 "data/maps/PortValor_SailorsHouse/scripts.pory"
	goto_if_unset FLAG_WALKINGWAKE, PortValor_EventScript_Sailor_4
	goto PortValor_EventScript_Sailor_7

PortValor_EventScript_Sailor_13:
# 13 "data/maps/PortValor_SailorsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, PortValor_EventScript_Sailor_15
	goto PortValor_EventScript_Sailor_9

PortValor_EventScript_Sailor_15:
# 13 "data/maps/PortValor_SailorsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_SURF, PortValor_EventScript_Sailor_3
	goto PortValor_EventScript_Sailor_9

PortValor_EventScript_Sailor_18:
# 7 "data/maps/PortValor_SailorsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, PortValor_EventScript_Sailor_2
	goto PortValor_EventScript_Sailor_14


PortValor_EventScript_Sailor_Text_0:
# 8 "data/maps/PortValor_SailorsHouse/scripts.pory"
	.string "I think you might be ready for this.$"

PortValor_EventScript_Sailor_Text_1:
# 11 "data/maps/PortValor_SailorsHouse/scripts.pory"
	.string "That will help you catch more than Feebas.$"

PortValor_EventScript_Sailor_Text_2:
# 12 "data/maps/PortValor_SailorsHouse/scripts.pory"
	.string "Come see me again when you've trained more.$"

PortValor_EventScript_Sailor_Text_3:
# 17 "data/maps/PortValor_SailorsHouse/scripts.pory"
	.string "Now you can sail the high seas.$"

PortValor_EventScript_Sailor_Text_4:
# 26 "data/maps/PortValor_SailorsHouse/scripts.pory"
	.string "I've given you everything I can.$"

PortValor_EventScript_Sailor_Text_5:
# 27 "data/maps/PortValor_SailorsHouse/scripts.pory"
	.string "Hope you have some calm seas ahead.$"
