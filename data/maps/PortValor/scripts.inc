PortValor_MapScripts::
# 2 "data/maps/PortValor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PortValor_OnResume
	.byte 0


PortValor_OnResume::
# 7 "data/maps/PortValor/scripts.pory"
	goto_if_set FLAG_VGC_PENDING_RESTORE, PortValor_OnResume_2
PortValor_OnResume_1:
	end

PortValor_OnResume_2:
# 8 "data/maps/PortValor/scripts.pory"
	special Vgc_RestorePartyBackup
# 9 "data/maps/PortValor/scripts.pory"
	special HealPlayerParty
# 10 "data/maps/PortValor/scripts.pory"
	callnative UpdateFollowingPokemon
# 11 "data/maps/PortValor/scripts.pory"
	special Vgc_RestorePartyBackup
# 12 "data/maps/PortValor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	goto PortValor_OnResume_1


PortValor_EventScript_Villager1::
# 19 "data/maps/PortValor/scripts.pory"
	lockall
# 20 "data/maps/PortValor/scripts.pory"
	faceplayer
# 22 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_0, MSGBOX_YESNO
# 23 "data/maps/PortValor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_EventScript_Villager1_2
PortValor_EventScript_Villager1_1:
# 27 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_1, MSGBOX_YESNO
# 28 "data/maps/PortValor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_EventScript_Villager1_5
PortValor_EventScript_Villager1_4:
# 33 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_2, MSGBOX_YESNO
# 34 "data/maps/PortValor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_EventScript_Villager1_8
PortValor_EventScript_Villager1_7:
# 54 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_8, MSGBOX_YESNO
# 55 "data/maps/PortValor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_EventScript_Villager1_11
PortValor_EventScript_Villager1_10:
# 61 "data/maps/PortValor/scripts.pory"
	releaseall
	end

PortValor_EventScript_Villager1_2:
# 24 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
	goto PortValor_EventScript_Villager1_1

PortValor_EventScript_Villager1_5:
# 29 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 5
# 30 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 5
	goto PortValor_EventScript_Villager1_4

PortValor_EventScript_Villager1_8:
# 35 "data/maps/PortValor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_EventScript_Villager1_14
# 38 "data/maps/PortValor/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_eq PortValor_EventScript_Villager1_15
# 42 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_5, MSGBOX_AUTOCLOSE
PortValor_EventScript_Villager1_13:
# 45 "data/maps/PortValor/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq PortValor_EventScript_Villager1_19
# 48 "data/maps/PortValor/scripts.pory"
	compare VAR_LEVEL_CAP, 29
	goto_if_eq PortValor_EventScript_Villager1_20
	goto PortValor_EventScript_Villager1_7

PortValor_EventScript_Villager1_11:
# 56 "data/maps/PortValor/scripts.pory"
	setvar VAR_BADGES, 0
# 57 "data/maps/PortValor/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 58 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_9, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_10

PortValor_EventScript_Villager1_14:
# 36 "data/maps/PortValor/scripts.pory"
	setvar VAR_BADGES, 1
# 37 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_3, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_13

PortValor_EventScript_Villager1_15:
# 39 "data/maps/PortValor/scripts.pory"
	setvar VAR_BADGES, 2
# 40 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_4, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_13

PortValor_EventScript_Villager1_19:
# 46 "data/maps/PortValor/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 47 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_6, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_7

PortValor_EventScript_Villager1_20:
# 49 "data/maps/PortValor/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 50 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_7, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_7


PortValor_EventScript_Villager1_Text_0:
# 22 "data/maps/PortValor/scripts.pory"
	.string "Would you like rare candies?$"

PortValor_EventScript_Villager1_Text_1:
# 27 "data/maps/PortValor/scripts.pory"
	.string "Ability items?$"

PortValor_EventScript_Villager1_Text_2:
# 33 "data/maps/PortValor/scripts.pory"
	.string "Would you like a badge?$"

PortValor_EventScript_Villager1_Text_3:
# 37 "data/maps/PortValor/scripts.pory"
	.string "1st badge acquired$"

PortValor_EventScript_Villager1_Text_4:
# 40 "data/maps/PortValor/scripts.pory"
	.string "2nd badge acquired$"

PortValor_EventScript_Villager1_Text_5:
# 42 "data/maps/PortValor/scripts.pory"
	.string "Max badges reached$"

PortValor_EventScript_Villager1_Text_6:
# 47 "data/maps/PortValor/scripts.pory"
	.string "Level cap increased to 29$"

PortValor_EventScript_Villager1_Text_7:
# 50 "data/maps/PortValor/scripts.pory"
	.string "Level cap increased to 41$"

PortValor_EventScript_Villager1_Text_8:
# 54 "data/maps/PortValor/scripts.pory"
	.string "Reset badges?$"

PortValor_EventScript_Villager1_Text_9:
# 58 "data/maps/PortValor/scripts.pory"
	.string "Badges and lvl cap reset$"
