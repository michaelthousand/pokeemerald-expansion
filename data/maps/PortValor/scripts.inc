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


PortValor_EventScript_Villager2::
# 67 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_THWACKEY
# 68 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 69 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_EVIOLITE
# 70 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 72 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 73 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 252
# 74 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 75 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 0
# 76 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 77 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 79 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 82 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_RHYHORN
# 83 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 84 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_ASSAULT_VEST
# 85 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 87 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 88 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 252
# 89 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 90 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 0
# 91 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 92 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 94 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 97 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_QUAGSIRE
# 98 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 99 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_LEFTOVERS
# 100 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 102 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 103 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 244
# 104 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 105 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 0
# 106 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 107 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 109 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 112 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_LAPRAS
# 113 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 114 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_MYSTIC_WATER
# 115 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 117 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 118 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 0
# 119 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 120 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 252
# 121 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 122 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 124 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 127 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_OGERPON
# 128 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 129 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_WELLSPRING_MASK
# 130 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 132 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 133 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 252
# 134 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 135 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 0
# 136 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 137 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 139 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 142 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager2_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 10
# 145 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_MODEST_MINT, 10
	end


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

PortValor_EventScript_Villager2_Text_0:
# 142 "data/maps/PortValor/scripts.pory"
	.string "Pokemon added to party$"
