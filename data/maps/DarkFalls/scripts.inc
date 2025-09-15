DarkFalls_MapScripts::
# 2 "data/maps/DarkFalls/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DarkFalls_OnResume
	.byte 0


DarkFalls_OnResume::
# 7 "data/maps/DarkFalls/scripts.pory"
	goto_if_set FLAG_VGC_PENDING_RESTORE, DarkFalls_OnResume_2
DarkFalls_OnResume_1:
	end

DarkFalls_OnResume_2:
# 8 "data/maps/DarkFalls/scripts.pory"
	special Vgc_RestorePartyBackup
# 9 "data/maps/DarkFalls/scripts.pory"
	special HealPlayerParty
# 10 "data/maps/DarkFalls/scripts.pory"
	callnative UpdateFollowingPokemon
# 11 "data/maps/DarkFalls/scripts.pory"
	special Vgc_RestorePartyBackup
# 12 "data/maps/DarkFalls/scripts.pory"
	special WeightedSelector_Off
# 13 "data/maps/DarkFalls/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	goto DarkFalls_OnResume_1

