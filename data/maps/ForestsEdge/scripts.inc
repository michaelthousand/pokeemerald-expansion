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
	special LoadPlayerParty
# 9 "data/maps/ForestsEdge/scripts.pory"
	special HealPlayerParty
# 10 "data/maps/ForestsEdge/scripts.pory"
	callnative UpdateFollowingPokemon
# 12 "data/maps/ForestsEdge/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	goto ForestsEdge_OnResume_1


ForceWildNow::
# 19 "data/maps/ForestsEdge/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON, 5, ITEM_NONE
# 20 "data/maps/ForestsEdge/scripts.pory"
	dowildbattle
	end


ReArmStepEncounters::
# 25 "data/maps/ForestsEdge/scripts.pory"
	special WildDbg_Snapshot
# 27 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_0x8001, 1
	goto_if_eq ReArmStepEncounters_2
# 30 "data/maps/ForestsEdge/scripts.pory"
	msgbox ReArmStepEncounters_Text_1, MSGBOX_DEFAULT
ReArmStepEncounters_1:
# 33 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_0x8002, 1
	goto_if_eq ReArmStepEncounters_6
ReArmStepEncounters_5:
# 36 "data/maps/ForestsEdge/scripts.pory"
	compare VAR_0x8003, 1
	goto_if_eq ReArmStepEncounters_9
ReArmStepEncounters_8:
# 40 "data/maps/ForestsEdge/scripts.pory"
	msgbox ReArmStepEncounters_Text_4, MSGBOX_DEFAULT
	end

ReArmStepEncounters_2:
# 28 "data/maps/ForestsEdge/scripts.pory"
	msgbox ReArmStepEncounters_Text_0, MSGBOX_DEFAULT
	goto ReArmStepEncounters_1

ReArmStepEncounters_6:
# 34 "data/maps/ForestsEdge/scripts.pory"
	msgbox ReArmStepEncounters_Text_2, MSGBOX_DEFAULT
	goto ReArmStepEncounters_5

ReArmStepEncounters_9:
# 37 "data/maps/ForestsEdge/scripts.pory"
	msgbox ReArmStepEncounters_Text_3, MSGBOX_DEFAULT
	goto ReArmStepEncounters_8


ReArmStepEncounters_Text_0:
# 28 "data/maps/ForestsEdge/scripts.pory"
	.string "DBG: latch = 1 (encounters disabled)$"

ReArmStepEncounters_Text_1:
# 30 "data/maps/ForestsEdge/scripts.pory"
	.string "DBG: latch = 0 (encounters enabled)$"

ReArmStepEncounters_Text_2:
# 34 "data/maps/ForestsEdge/scripts.pory"
	.string "DBG: header = NONE on this map$"

ReArmStepEncounters_Text_3:
# 37 "data/maps/ForestsEdge/scripts.pory"
	.string "DBG: land table = NULL for current time$"

ReArmStepEncounters_Text_4:
# 40 "data/maps/ForestsEdge/scripts.pory"
	.string "DBG: snapshot done$"
