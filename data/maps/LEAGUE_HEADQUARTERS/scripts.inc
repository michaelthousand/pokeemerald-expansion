LEAGUE_HEADQUARTERS_MapScripts::
	.byte 0


LEAGUE_HEADQUARTERS_Chairman::
# 6 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lock
# 7 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	faceplayer
# 8 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_0
# 10 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_1
# 11 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 13 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_2
# 14 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_AMULET_COIN, 1
# 15 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 16 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 17 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 10
# 18 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 2
# 19 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
# 20 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_QUICK_BALL, 50
# 22 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_Chairman_Text_3
# 23 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 24 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
# 25 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag B_FLAG_TERA_ORB_NO_COST
# 28 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_4
# 29 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end


LEAGUE_HEADQUARTERS_Registration::
# 34 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lock
# 35 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	faceplayer
# 37 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_0
# 40 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end


LEAGUE_HEADQUARTERS_Chairman_Text_0:
# 8 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Welcome to the Pokemon League!$"

LEAGUE_HEADQUARTERS_Chairman_Text_1:
# 10 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Here's a TM to get you started.$"

LEAGUE_HEADQUARTERS_Chairman_Text_2:
# 13 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "And, of course, some items!$"

LEAGUE_HEADQUARTERS_Chairman_Text_3:
# 22 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "But most importantly: a Tera Orb$"

LEAGUE_HEADQUARTERS_Chairman_Text_4:
# 28 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Hopefully these will help going!$"

LEAGUE_HEADQUARTERS_Registration_Text_0:
# 37 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Pick a Pokemon to set its Tera type.$"
