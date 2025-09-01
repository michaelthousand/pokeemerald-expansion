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
	clearflag FLAG_VGC_PENDING_RESTORE
	goto ForestsEdge_OnResume_1


ForceWildNow::
# 19 "data/maps/ForestsEdge/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES, 4
# 20 "data/maps/ForestsEdge/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 5
# 21 "data/maps/ForestsEdge/scripts.pory"
	dowildbattle
	end

