Route4_MapScripts::
	.byte 0


Route4_Trailblaze::
# 4 "data/maps/Route4/scripts.pory"
	giveitem ITEM_TM_TRAILBLAZE
# 5 "data/maps/Route4/scripts.pory"
	setflag FLAG_TRAILBLAZE
# 6 "data/maps/Route4/scripts.pory"
	removeobject 1
# 7 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_GrassShards::
# 12 "data/maps/Route4/scripts.pory"
	giveitem ITEM_GRASS_TERA_SHARD, 5
# 13 "data/maps/Route4/scripts.pory"
	addvar VAR_GRASS_SHARDS, 5
# 14 "data/maps/Route4/scripts.pory"
	setflag FLAG_GRASS_SHARDS_ROUTE4
# 15 "data/maps/Route4/scripts.pory"
	removeobject 2
# 16 "data/maps/Route4/scripts.pory"
	closemessage
	end

