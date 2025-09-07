ForestsEdge_MapScripts::
# 2 "data/maps/ForestsEdge/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ForestsEdge_OnResume
	.byte 0


ForestsEdge_OnResume::
# 7 "data/maps/ForestsEdge/scripts.pory"
	goto_if_set FLAG_VGC_PENDING_RESTORE, ForestsEdge_OnResume_2
ForestsEdge_OnResume_1:
	end

ForestsEdge_OnResume_2:
# 8 "data/maps/ForestsEdge/scripts.pory"
	special Vgc_RestorePartyBackup
# 9 "data/maps/ForestsEdge/scripts.pory"
	special HealPlayerParty
# 10 "data/maps/ForestsEdge/scripts.pory"
	callnative UpdateFollowingPokemon
# 11 "data/maps/ForestsEdge/scripts.pory"
	special Vgc_RestorePartyBackup
# 12 "data/maps/ForestsEdge/scripts.pory"
	special WeightedSelector_Off
# 13 "data/maps/ForestsEdge/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	goto ForestsEdge_OnResume_1


ForestsEdge_EventScript_Villager1::
# 20 "data/maps/ForestsEdge/scripts.pory"
	lockall
# 21 "data/maps/ForestsEdge/scripts.pory"
	faceplayer
# 23 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_0, MSGBOX_YESNO
# 24 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ForestsEdge_EventScript_Villager1_2
ForestsEdge_EventScript_Villager1_1:
# 28 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_1, MSGBOX_YESNO
# 29 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ForestsEdge_EventScript_Villager1_5
ForestsEdge_EventScript_Villager1_4:
# 34 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_2, MSGBOX_YESNO
# 35 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ForestsEdge_EventScript_Villager1_8
ForestsEdge_EventScript_Villager1_7:
# 55 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_8, MSGBOX_YESNO
# 56 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ForestsEdge_EventScript_Villager1_11
ForestsEdge_EventScript_Villager1_10:
# 62 "data/maps/ForestsEdge/scripts.pory"
	releaseall
	end

ForestsEdge_EventScript_Villager1_2:
# 25 "data/maps/ForestsEdge/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
	goto ForestsEdge_EventScript_Villager1_1

ForestsEdge_EventScript_Villager1_5:
# 30 "data/maps/ForestsEdge/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 5
# 31 "data/maps/ForestsEdge/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 5
	goto ForestsEdge_EventScript_Villager1_4

ForestsEdge_EventScript_Villager1_8:
# 36 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq ForestsEdge_EventScript_Villager1_14
# 39 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_eq ForestsEdge_EventScript_Villager1_15
# 43 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_5, MSGBOX_AUTOCLOSE
ForestsEdge_EventScript_Villager1_13:
# 46 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq ForestsEdge_EventScript_Villager1_19
# 49 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_LEVEL_CAP, 29
	goto_if_eq ForestsEdge_EventScript_Villager1_20
	goto ForestsEdge_EventScript_Villager1_7

ForestsEdge_EventScript_Villager1_11:
# 57 "data/maps/ForestsEdge/scripts.pory"
	setvar VAR_BADGES, 0
# 58 "data/maps/ForestsEdge/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 59 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_9, MSGBOX_AUTOCLOSE
	goto ForestsEdge_EventScript_Villager1_10

ForestsEdge_EventScript_Villager1_14:
# 37 "data/maps/ForestsEdge/scripts.pory"
	setvar VAR_BADGES, 1
# 38 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_3, MSGBOX_AUTOCLOSE
	goto ForestsEdge_EventScript_Villager1_13

ForestsEdge_EventScript_Villager1_15:
# 40 "data/maps/ForestsEdge/scripts.pory"
	setvar VAR_BADGES, 2
# 41 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_4, MSGBOX_AUTOCLOSE
	goto ForestsEdge_EventScript_Villager1_13

ForestsEdge_EventScript_Villager1_19:
# 47 "data/maps/ForestsEdge/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 48 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_6, MSGBOX_AUTOCLOSE
	goto ForestsEdge_EventScript_Villager1_7

ForestsEdge_EventScript_Villager1_20:
# 50 "data/maps/ForestsEdge/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 51 "data/maps/ForestsEdge/scripts.pory"
	msgbox ForestsEdge_EventScript_Villager1_Text_7, MSGBOX_AUTOCLOSE
	goto ForestsEdge_EventScript_Villager1_7


ForestsEdge_EventScript_Villager1_Text_0:
# 23 "data/maps/ForestsEdge/scripts.pory"
	.string "Would you like rare candies?$"

ForestsEdge_EventScript_Villager1_Text_1:
# 28 "data/maps/ForestsEdge/scripts.pory"
	.string "Ability items?$"

ForestsEdge_EventScript_Villager1_Text_2:
# 34 "data/maps/ForestsEdge/scripts.pory"
	.string "Would you like a badge?$"

ForestsEdge_EventScript_Villager1_Text_3:
# 38 "data/maps/ForestsEdge/scripts.pory"
	.string "1st badge acquired$"

ForestsEdge_EventScript_Villager1_Text_4:
# 41 "data/maps/ForestsEdge/scripts.pory"
	.string "2nd badge acquired$"

ForestsEdge_EventScript_Villager1_Text_5:
# 43 "data/maps/ForestsEdge/scripts.pory"
	.string "Max badges reached$"

ForestsEdge_EventScript_Villager1_Text_6:
# 48 "data/maps/ForestsEdge/scripts.pory"
	.string "Level cap increased to 29$"

ForestsEdge_EventScript_Villager1_Text_7:
# 51 "data/maps/ForestsEdge/scripts.pory"
	.string "Level cap increased to 41$"

ForestsEdge_EventScript_Villager1_Text_8:
# 55 "data/maps/ForestsEdge/scripts.pory"
	.string "Reset badges?$"

ForestsEdge_EventScript_Villager1_Text_9:
# 59 "data/maps/ForestsEdge/scripts.pory"
	.string "Badges and lvl cap reset$"
