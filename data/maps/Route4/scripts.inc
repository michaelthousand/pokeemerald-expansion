Route4_MapScripts::
	.byte 0


Route4_Trailblaze::
# 4 "data/maps/Route4/scripts.pory"
	giveitem ITEM_TM_TRAILBLAZE
# 5 "data/maps/Route4/scripts.pory"
	msgbox Route4_Trailblaze_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/Route4/scripts.pory"
	setflag FLAG_TRAILBLAZE
# 7 "data/maps/Route4/scripts.pory"
	removeobject 1
# 8 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_GrassShards::
# 13 "data/maps/Route4/scripts.pory"
	giveitem ITEM_GRASS_TERA_SHARD, 4
# 14 "data/maps/Route4/scripts.pory"
	addvar VAR_GRASS_SHARDS, 4
# 15 "data/maps/Route4/scripts.pory"
	setflag FLAG_GRASS_SHARDS_ROUTE4
# 16 "data/maps/Route4/scripts.pory"
	removeobject 2
# 17 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_FireShards::
# 21 "data/maps/Route4/scripts.pory"
	giveitem ITEM_FIRE_TERA_SHARD, 4
# 22 "data/maps/Route4/scripts.pory"
	addvar VAR_FIRE_SHARDS, 4
# 23 "data/maps/Route4/scripts.pory"
	setflag FLAG_FIRE_SHARDS_ROUTE4
# 24 "data/maps/Route4/scripts.pory"
	removeobject 3
# 25 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_NormalShards::
# 29 "data/maps/Route4/scripts.pory"
	giveitem ITEM_NORMAL_TERA_SHARD, 4
# 30 "data/maps/Route4/scripts.pory"
	addvar VAR_NORMAL_SHARDS, 4
# 31 "data/maps/Route4/scripts.pory"
	setflag FLAG_NORMAL_SHARDS_ROUTE4
# 32 "data/maps/Route4/scripts.pory"
	removeobject 4
# 33 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_FightingShards::
# 37 "data/maps/Route4/scripts.pory"
	giveitem ITEM_FIGHTING_TERA_SHARD, 4
# 38 "data/maps/Route4/scripts.pory"
	addvar VAR_FIGHTING_SHARDS, 4
# 39 "data/maps/Route4/scripts.pory"
	setflag FLAG_FIGHTING_SHARDS_ROUTE4
# 40 "data/maps/Route4/scripts.pory"
	removeobject 5
# 41 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_FlyingShards::
# 45 "data/maps/Route4/scripts.pory"
	giveitem ITEM_FLYING_TERA_SHARD, 4
# 46 "data/maps/Route4/scripts.pory"
	addvar VAR_FLYING_SHARDS, 4
# 47 "data/maps/Route4/scripts.pory"
	setflag FLAG_FLYING_SHARDS_ROUTE4
# 48 "data/maps/Route4/scripts.pory"
	removeobject 6
# 49 "data/maps/Route4/scripts.pory"
	closemessage
	end


Route4_Trailblaze_Text_0:
# 5 "data/maps/Route4/scripts.pory"
	.string "TM12 contains Trailblaze.$"
