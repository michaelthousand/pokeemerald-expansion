Route2_MapScripts::
	.byte 0


Route2_AirCutter::
# 4 "data/maps/Route2/scripts.pory"
	giveitem ITEM_TM_AIR_CUTTER, 1
# 5 "data/maps/Route2/scripts.pory"
	msgbox Route2_AirCutter_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/Route2/scripts.pory"
	setflag FLAG_AIRCUTTER
# 7 "data/maps/Route2/scripts.pory"
	removeobject 1
# 8 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_NormalShards::
# 13 "data/maps/Route2/scripts.pory"
	giveitem ITEM_NORMAL_TERA_SHARD, 7
# 14 "data/maps/Route2/scripts.pory"
	addvar VAR_NORMAL_SHARDS, 7
# 15 "data/maps/Route2/scripts.pory"
	setflag FLAG_NORMAL_SHARDS_ROUTE2
# 16 "data/maps/Route2/scripts.pory"
	removeobject 2
# 17 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_GrassShards::
# 22 "data/maps/Route2/scripts.pory"
	giveitem ITEM_GRASS_TERA_SHARD, 3
# 23 "data/maps/Route2/scripts.pory"
	addvar VAR_GRASS_SHARDS, 3
# 24 "data/maps/Route2/scripts.pory"
	setflag FLAG_GRASS_SHARDS_ROUTE2
# 25 "data/maps/Route2/scripts.pory"
	removeobject 3
# 26 "data/maps/Route2/scripts.pory"
	closemessage
	end


Route2_AirCutter_Text_0:
# 5 "data/maps/Route2/scripts.pory"
	.string "TM115 contains Air Cutter.$"
