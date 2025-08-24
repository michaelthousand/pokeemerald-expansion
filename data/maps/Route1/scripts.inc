Route1_MapScripts::
	.byte 0


Route1_OranBerries::
# 4 "data/maps/Route1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 2
# 5 "data/maps/Route1/scripts.pory"
	setflag FLAG_ROUTE1_ORAN_BERRIES
# 6 "data/maps/Route1/scripts.pory"
	removeobject 1
# 7 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_CheriBerries::
# 12 "data/maps/Route1/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 2
# 13 "data/maps/Route1/scripts.pory"
	setflag FLAG_ROUTE1_CHERI_BERRIES
# 14 "data/maps/Route1/scripts.pory"
	removeobject 2
# 15 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_GrassySeed::
# 20 "data/maps/Route1/scripts.pory"
	giveitem ITEM_GRASSY_SEED, 1
# 21 "data/maps/Route1/scripts.pory"
	setflag FLAG_ROUTE1_GRASSY_SEED
# 22 "data/maps/Route1/scripts.pory"
	removeobject 3
# 23 "data/maps/Route1/scripts.pory"
	closemessage
	end

