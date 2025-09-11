Route2_MapScripts::
	.byte 0


Route2_AirCutter::
# 4 "data/maps/Route2/scripts.pory"
	giveitem ITEM_TM_AIR_CUTTER, 1
# 5 "data/maps/Route2/scripts.pory"
	setflag FLAG_AIRCUTTER
# 6 "data/maps/Route2/scripts.pory"
	removeobject 1
# 7 "data/maps/Route2/scripts.pory"
	closemessage
	end

