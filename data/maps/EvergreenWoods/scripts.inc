EvergreenWoods_MapScripts::
	.byte 0


EvergreenWoods_GigaDrain::
# 4 "data/maps/EvergreenWoods/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN, 1
# 5 "data/maps/EvergreenWoods/scripts.pory"
	msgbox EvergreenWoods_GigaDrain_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/EvergreenWoods/scripts.pory"
	setflag FLAG_GIGADRAIN
# 7 "data/maps/EvergreenWoods/scripts.pory"
	removeobject 1
# 8 "data/maps/EvergreenWoods/scripts.pory"
	closemessage
	end


EvergreenWoods_StruggleBug::
# 13 "data/maps/EvergreenWoods/scripts.pory"
	giveitem ITEM_TM_STRUGGLE_BUG
# 14 "data/maps/EvergreenWoods/scripts.pory"
	msgbox EvergreenWoods_StruggleBug_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/EvergreenWoods/scripts.pory"
	setflag FLAG_STRUGGLEBUG
# 16 "data/maps/EvergreenWoods/scripts.pory"
	removeobject 2
# 17 "data/maps/EvergreenWoods/scripts.pory"
	closemessage
	end


EvergreenWoods_NormalShards::
# 22 "data/maps/EvergreenWoods/scripts.pory"
	giveitem ITEM_NORMAL_TERA_SHARD, 5
# 23 "data/maps/EvergreenWoods/scripts.pory"
	addvar VAR_NORMAL_SHARDS, 5
# 24 "data/maps/EvergreenWoods/scripts.pory"
	setflag FLAG_NORMAL_SHARDS_EVERGREEN
# 25 "data/maps/EvergreenWoods/scripts.pory"
	removeobject 5
# 26 "data/maps/EvergreenWoods/scripts.pory"
	closemessage
	end


EvergreenWoods_BugShards::
# 30 "data/maps/EvergreenWoods/scripts.pory"
	giveitem ITEM_BUG_TERA_SHARD, 5
# 31 "data/maps/EvergreenWoods/scripts.pory"
	addvar VAR_BUG_SHARDS, 5
# 32 "data/maps/EvergreenWoods/scripts.pory"
	setflag FLAG_BUG_SHARDS_EVERGREEN
# 33 "data/maps/EvergreenWoods/scripts.pory"
	removeobject 4
# 34 "data/maps/EvergreenWoods/scripts.pory"
	closemessage
	end


EvergreenWoods_GrassShards::
# 38 "data/maps/EvergreenWoods/scripts.pory"
	giveitem ITEM_GRASS_TERA_SHARD, 5
# 39 "data/maps/EvergreenWoods/scripts.pory"
	addvar VAR_GRASS_SHARDS, 6
# 40 "data/maps/EvergreenWoods/scripts.pory"
	setflag FLAG_GRASS_SHARDS_EVERGREEN
# 41 "data/maps/EvergreenWoods/scripts.pory"
	removeobject 3
# 42 "data/maps/EvergreenWoods/scripts.pory"
	closemessage
	end


EvergreenWoods_GigaDrain_Text_0:
# 5 "data/maps/EvergreenWoods/scripts.pory"
	.string "TM19 contains Giga Drain.$"

EvergreenWoods_StruggleBug_Text_0:
# 14 "data/maps/EvergreenWoods/scripts.pory"
	.string "TM05 contains Struggle Bug.$"
