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

