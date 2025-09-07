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
	special WeightedSelector_Off
# 13 "data/maps/PortValor/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	goto PortValor_OnResume_1


PortValor_EventScript_WarpPT::
# 20 "data/maps/PortValor/scripts.pory"
	lockall
# 21 "data/maps/PortValor/scripts.pory"
	faceplayer
# 22 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_WarpPT_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/PortValor/scripts.pory"
	releaseall
	end


PortValor_EventScript_WarpNH::
# 29 "data/maps/PortValor/scripts.pory"
	lockall
# 30 "data/maps/PortValor/scripts.pory"
	faceplayer
# 31 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_WarpNH_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/PortValor/scripts.pory"
	releaseall
	end


PortValor_EventScript_Villager1::
# 38 "data/maps/PortValor/scripts.pory"
	lockall
# 39 "data/maps/PortValor/scripts.pory"
	faceplayer
# 41 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_0, MSGBOX_YESNO
# 42 "data/maps/PortValor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_EventScript_Villager1_2
PortValor_EventScript_Villager1_1:
# 46 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_1, MSGBOX_YESNO
# 47 "data/maps/PortValor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_EventScript_Villager1_5
PortValor_EventScript_Villager1_4:
# 52 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_2, MSGBOX_YESNO
# 53 "data/maps/PortValor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_EventScript_Villager1_8
PortValor_EventScript_Villager1_7:
# 73 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_8, MSGBOX_YESNO
# 74 "data/maps/PortValor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortValor_EventScript_Villager1_11
PortValor_EventScript_Villager1_10:
# 80 "data/maps/PortValor/scripts.pory"
	releaseall
	end

PortValor_EventScript_Villager1_2:
# 43 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
	goto PortValor_EventScript_Villager1_1

PortValor_EventScript_Villager1_5:
# 48 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 5
# 49 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 5
	goto PortValor_EventScript_Villager1_4

PortValor_EventScript_Villager1_8:
# 54 "data/maps/PortValor/scripts.pory"
	compare VAR_BADGES, 0
	goto_if_eq PortValor_EventScript_Villager1_14
# 57 "data/maps/PortValor/scripts.pory"
	compare VAR_BADGES, 1
	goto_if_eq PortValor_EventScript_Villager1_15
# 61 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_5, MSGBOX_AUTOCLOSE
PortValor_EventScript_Villager1_13:
# 64 "data/maps/PortValor/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq PortValor_EventScript_Villager1_19
# 67 "data/maps/PortValor/scripts.pory"
	compare VAR_LEVEL_CAP, 29
	goto_if_eq PortValor_EventScript_Villager1_20
	goto PortValor_EventScript_Villager1_7

PortValor_EventScript_Villager1_11:
# 75 "data/maps/PortValor/scripts.pory"
	setvar VAR_BADGES, 0
# 76 "data/maps/PortValor/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 77 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_9, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_10

PortValor_EventScript_Villager1_14:
# 55 "data/maps/PortValor/scripts.pory"
	setvar VAR_BADGES, 1
# 56 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_3, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_13

PortValor_EventScript_Villager1_15:
# 58 "data/maps/PortValor/scripts.pory"
	setvar VAR_BADGES, 2
# 59 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_4, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_13

PortValor_EventScript_Villager1_19:
# 65 "data/maps/PortValor/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 66 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_6, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_7

PortValor_EventScript_Villager1_20:
# 68 "data/maps/PortValor/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 69 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager1_Text_7, MSGBOX_AUTOCLOSE
	goto PortValor_EventScript_Villager1_7


PortValor_EventScript_Villager3::
# 86 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_KYOGRE
# 87 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 88 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_BLUE_ORB
# 89 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 91 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 4
# 92 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 0
# 93 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 94 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 252
# 95 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 96 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 252
# 98 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
	return


PortValor_EventScript_Villager2::
# 104 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_THWACKEY
# 105 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 106 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_GRASSY_SEED
# 107 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 109 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 110 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 252
# 111 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 112 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 0
# 113 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 114 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 116 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 119 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_FOONGUS
# 120 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 121 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_MENTAL_HERB
# 122 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 124 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 125 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 0
# 126 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 252
# 127 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 0
# 128 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 129 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 131 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 134 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_MAGNEMITE
# 135 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 136 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_MAGNET
# 137 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 139 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 140 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 0
# 141 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 142 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 244
# 143 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 144 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 12
# 146 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 149 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_LAPRAS
# 150 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 151 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_NEVER_MELT_ICE
# 152 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 154 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 155 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 0
# 156 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 157 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 252
# 158 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 159 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 161 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 164 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8000, SPECIES_OGERPON
# 165 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8001, 21
# 166 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8002, ITEM_LIFE_ORB
# 167 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8003, 31
# 169 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8004, 252
# 170 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8005, 252
# 171 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8006, 0
# 172 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8007, 0
# 173 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8008, 0
# 174 "data/maps/PortValor/scripts.pory"
	setvar VAR_0x8009, 4
# 176 "data/maps/PortValor/scripts.pory"
	callnative Script_GiveCustomMonEVsIVs
# 179 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager2_Text_0, MSGBOX_AUTOCLOSE
# 181 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 10
# 182 "data/maps/PortValor/scripts.pory"
	giveitem ITEM_MODEST_MINT, 10
# 184 "data/maps/PortValor/scripts.pory"
	msgbox PortValor_EventScript_Villager2_Text_1, MSGBOX_AUTOCLOSE
	end


PortValor_EventScript_WarpPT_Text_0:
# 22 "data/maps/PortValor/scripts.pory"
	.string "This is the warp to PT$"

PortValor_EventScript_WarpNH_Text_0:
# 31 "data/maps/PortValor/scripts.pory"
	.string "This is the warp to New Hope$"

PortValor_EventScript_Villager1_Text_0:
# 41 "data/maps/PortValor/scripts.pory"
	.string "Would you like rare candies?$"

PortValor_EventScript_Villager1_Text_1:
# 46 "data/maps/PortValor/scripts.pory"
	.string "Ability items?$"

PortValor_EventScript_Villager1_Text_2:
# 52 "data/maps/PortValor/scripts.pory"
	.string "Would you like a badge?$"

PortValor_EventScript_Villager1_Text_3:
# 56 "data/maps/PortValor/scripts.pory"
	.string "1st badge acquired$"

PortValor_EventScript_Villager1_Text_4:
# 59 "data/maps/PortValor/scripts.pory"
	.string "2nd badge acquired$"

PortValor_EventScript_Villager1_Text_5:
# 61 "data/maps/PortValor/scripts.pory"
	.string "Max badges reached$"

PortValor_EventScript_Villager1_Text_6:
# 66 "data/maps/PortValor/scripts.pory"
	.string "Level cap increased to 29$"

PortValor_EventScript_Villager1_Text_7:
# 69 "data/maps/PortValor/scripts.pory"
	.string "Level cap increased to 41$"

PortValor_EventScript_Villager1_Text_8:
# 73 "data/maps/PortValor/scripts.pory"
	.string "Reset badges?$"

PortValor_EventScript_Villager1_Text_9:
# 77 "data/maps/PortValor/scripts.pory"
	.string "Badges and lvl cap reset$"

PortValor_EventScript_Villager2_Text_0:
# 179 "data/maps/PortValor/scripts.pory"
	.string "Pokemon added to party$"

PortValor_EventScript_Villager2_Text_1:
# 184 "data/maps/PortValor/scripts.pory"
	.string "Have a great day$"
