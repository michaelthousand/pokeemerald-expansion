Route26_MapScripts::
	.byte 0


Route26_DarkShards::
# 4 "data/maps/Route26/scripts.pory"
	giveitem ITEM_DARK_TERA_SHARD, 7
# 5 "data/maps/Route26/scripts.pory"
	addvar VAR_DARK_SHARDS, 7
# 6 "data/maps/Route26/scripts.pory"
	setflag FLAG_DARK_SHARDS_ROUTE26
# 7 "data/maps/Route26/scripts.pory"
	removeobject 1
# 8 "data/maps/Route26/scripts.pory"
	closemessage
	end


Route26_GhostShards::
# 13 "data/maps/Route26/scripts.pory"
	giveitem ITEM_GHOST_TERA_SHARD, 3
# 14 "data/maps/Route26/scripts.pory"
	addvar VAR_GHOST_SHARDS, 3
# 15 "data/maps/Route26/scripts.pory"
	setflag FLAG_GHOST_SHARDS_ROUTE26
# 16 "data/maps/Route26/scripts.pory"
	removeobject 2
# 17 "data/maps/Route26/scripts.pory"
	closemessage
	end

