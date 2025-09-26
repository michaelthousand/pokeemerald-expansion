StarlightGrove_MapScripts::
# 2 "data/maps/StarlightGrove/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, StarlightGrove_OnResume
	.byte 0


StarlightGrove_OnResume::
# 7 "data/maps/StarlightGrove/scripts.pory"
	goto_if_set FLAG_VGC_PENDING_RESTORE, StarlightGrove_OnResume_2
StarlightGrove_OnResume_1:
	end

StarlightGrove_OnResume_2:
# 8 "data/maps/StarlightGrove/scripts.pory"
	special Vgc_RestorePartyBackup
# 9 "data/maps/StarlightGrove/scripts.pory"
	special HealPlayerParty
# 10 "data/maps/StarlightGrove/scripts.pory"
	callnative UpdateFollowingPokemon
# 11 "data/maps/StarlightGrove/scripts.pory"
	special Vgc_RestorePartyBackup
# 12 "data/maps/StarlightGrove/scripts.pory"
	special WeightedSelector_Off
# 13 "data/maps/StarlightGrove/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	goto StarlightGrove_OnResume_1

