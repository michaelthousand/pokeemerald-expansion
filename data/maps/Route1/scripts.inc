Route1_MapScripts::
	.byte 0


Route1_OranBerries::
# 4 "data/maps/Route1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 5 "data/maps/Route1/scripts.pory"
	removeobject 1
	return


Route1_CheriBerries::
# 9 "data/maps/Route1/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 2
# 10 "data/maps/Route1/scripts.pory"
	removeobject 2
	return

