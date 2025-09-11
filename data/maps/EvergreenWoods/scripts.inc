EvergreenWoods_MapScripts::
	.byte 0


EvergreenWoods_GigaDrain::
# 4 "data/maps/EvergreenWoods/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN, 1
# 5 "data/maps/EvergreenWoods/scripts.pory"
	setflag FLAG_GIGADRAIN
# 6 "data/maps/EvergreenWoods/scripts.pory"
	removeobject 1
# 7 "data/maps/EvergreenWoods/scripts.pory"
	closemessage
	end


EvergreenWoods_StruggleBug::
# 12 "data/maps/EvergreenWoods/scripts.pory"
	giveitem ITEM_TM_STRUGGLE_BUG
# 13 "data/maps/EvergreenWoods/scripts.pory"
	setflag FLAG_STRUGGLEBUG
# 14 "data/maps/EvergreenWoods/scripts.pory"
	removeobject 2
# 15 "data/maps/EvergreenWoods/scripts.pory"
	closemessage
	end

