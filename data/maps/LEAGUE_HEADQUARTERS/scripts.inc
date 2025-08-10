LEAGUE_HEADQUARTERS_MapScripts::
	.byte 0


LEAGUE_HEADQUARTERS_Chairman::
# 6 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lock
# 7 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	faceplayer
# 8 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_0
# 9 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 10 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_AMULET_COIN, 1
# 11 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 12 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 13 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 14 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
# 15 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_QUICK_BALL, 50
# 16 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_1
# 17 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end


LEAGUE_HEADQUARTERS_Chairman_Text_0:
# 8 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Welcome to the Pokemon League!$"

LEAGUE_HEADQUARTERS_Chairman_Text_1:
# 16 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Hopefully these will help get you started.$"
