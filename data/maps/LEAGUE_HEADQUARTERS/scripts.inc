LEAGUE_HEADQUARTERS_MapScripts::
# 2 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LEAGUE_HEADQUARTERS_OnTransition
	.byte 0


LEAGUE_HEADQUARTERS_OnTransition::
# 8 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	removeobject 2
# 9 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	removeobject 3
	end


LEAGUE_HEADQUARTERS_Registration::
# 15 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lockall
# 16 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	faceplayer
# 18 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, LEAGUE_HEADQUARTERS_Registration_1
# 37 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_5, MSGBOX_DEFAULT
# 38 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end

LEAGUE_HEADQUARTERS_Registration_1:
# 19 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_1, MSGBOX_YESNO
# 22 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_5
# 28 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_3, MSGBOX_DEFAULT
# 29 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_4, MSGBOX_DEFAULT
# 30 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	addobject 2
# 31 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 2, Chairman_WalkIn
# 32 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmovement 0
# 34 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto LEAGUE_HEADQUARTERS_Chairman
	return

LEAGUE_HEADQUARTERS_Registration_5:
# 23 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_2, MSGBOX_DEFAULT
# 24 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	releaseall
	end


# 45 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
Chairman_WalkIn:
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 46 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 47 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_left
	step_end

# 50 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
PT_Admin_WalkIn:
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 51 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 52 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_left
# 52 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_left
	step_end

# 55 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
Chairman_MoveOver:
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_right
# 57 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 58 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	face_down
	step_end

# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
Chairman_Leave:
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
	step_end

# 65 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
PT_Admin_Leave:
# 66 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_right
# 66 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_right
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
	step_end

LEAGUE_HEADQUARTERS_Chairman::
# 71 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_0, MSGBOX_DEFAULT
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_1, MSGBOX_DEFAULT
# 74 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_2, MSGBOX_DEFAULT
# 75 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_3, MSGBOX_DEFAULT
# 76 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_4, MSGBOX_DEFAULT
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_5, MSGBOX_DEFAULT
# 79 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_6, MSGBOX_DEFAULT
# 80 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_7, MSGBOX_DEFAULT
# 81 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_8, MSGBOX_DEFAULT
# 82 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_9, MSGBOX_DEFAULT
# 83 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_10, MSGBOX_DEFAULT
# 85 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_11, MSGBOX_DEFAULT
# 87 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 2, Chairman_MoveOver
# 88 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	addobject 3
# 89 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 3, PT_Admin_WalkIn
# 90 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmovement 0
# 92 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto LEAGUE_HEADQUARTERS_PT_Admin
	end


LEAGUE_HEADQUARTERS_PT_Admin::
# 97 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_1, MSGBOX_DEFAULT
# 99 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_2, MSGBOX_DEFAULT
# 101 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 102 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_3
# 103 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_4
# 105 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_PT_Admin_Text_5
# 106 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_AMULET_COIN, 1
# 107 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 108 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 109 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 10
# 110 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 2
# 111 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
# 112 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_QUICK_BALL, 50
# 114 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_PT_Admin_Text_6
# 115 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 116 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
# 117 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag B_FLAG_TERA_ORB_NO_COST
# 120 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_7
# 121 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_8
# 123 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 2, Chairman_Leave
# 124 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 3, PT_Admin_Leave
# 125 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmovement 0
# 126 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	removeobject 2
# 127 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	removeobject 3
# 129 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag FLAG_LEAGUE_REG
# 130 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end


LEAGUEHEADQUARTERS_Trigger_BlockPath::
# 136 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lockall
# 137 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUEHEADQUARTERS_Trigger_BlockPath_Text_0
# 138 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 139 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmovement 0
# 140 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	releaseall
	return


LEAGUE_HEADQUARTERS_Registration_Text_0:
# 19 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Welcome to the Pokemon League\nHeadquarters!$"

LEAGUE_HEADQUARTERS_Registration_Text_1:
# 20 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Would you like to register for the Gym\nChallenge?$"

LEAGUE_HEADQUARTERS_Registration_Text_2:
# 23 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "That's fine! Come back whenever you're\nready.$"

LEAGUE_HEADQUARTERS_Registration_Text_3:
# 28 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Excellent! One moment, I'll call the\nLeague Chairman over.$"

LEAGUE_HEADQUARTERS_Registration_Text_4:
# 29 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "He likes to meet new trainers.$"

LEAGUE_HEADQUARTERS_Registration_Text_5:
# 37 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Thank you for registering!$"

LEAGUE_HEADQUARTERS_Chairman_Text_0:
# 71 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Ah, a new challenger! Welcome to the\nLeague.$"

LEAGUE_HEADQUARTERS_Chairman_Text_1:
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "It’s always an honor to greet aspiring\ntrainers at the start of their journey.$"

LEAGUE_HEADQUARTERS_Chairman_Text_2:
# 74 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Here in the REGION, we use a unique\nsystem for the Gym Challenge.$"

LEAGUE_HEADQUARTERS_Chairman_Text_3:
# 75 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Each Gym is led not by one Leader, but by\ntwo.$"

LEAGUE_HEADQUARTERS_Chairman_Text_4:
# 76 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "To claim a badge, you must defeat both\nLeaders of that Gym.$"

LEAGUE_HEADQUARTERS_Chairman_Text_5:
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Only then will their badge be officially\nrecognized by the League.$"

LEAGUE_HEADQUARTERS_Chairman_Text_6:
# 79 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "But the Gym Challenge isn’t the only path\nfor ambitious trainers.$"

LEAGUE_HEADQUARTERS_Chairman_Text_7:
# 80 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "The League also hosts a circuit of local\ntournaments, where trainers test their\pskills outside of traditional Gyms.$"

LEAGUE_HEADQUARTERS_Chairman_Text_8:
# 81 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "And beyond that…$"

LEAGUE_HEADQUARTERS_Chairman_Text_9:
# 82 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "The upcoming World Championships will\nsoon bring challengers from every region.$"

LEAGUE_HEADQUARTERS_Chairman_Text_10:
# 83 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Perhaps, in time, you will be among them.$"

LEAGUE_HEADQUARTERS_Chairman_Text_11:
# 85 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Before you begin, I’d like you to meet one\nof our partners from Prometheus Tech.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_0:
# 97 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Greetings, trainer. I represent\nPrometheus Tech.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_1:
# 98 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "We proudly support new challengers with\nessential tools and items.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_2:
# 99 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Here, please accept these to aid your\nGym Challenge.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_3:
# 102 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "That TM contains Protect, an\nincredibly helpful move when battling.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_4:
# 103 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "It's reusable so you can teach it to\nwhoever you want.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_5:
# 105 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "And, of course, some items!$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_6:
# 114 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "But most importantly: a Tera Orb!\pThis will allow you to terastilize your\npokemon!$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_7:
# 120 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Hopefully these will help you get\ngoing!$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_8:
# 121 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Goodbye for now!$"

LEAGUEHEADQUARTERS_Trigger_BlockPath_Text_0:
# 137 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "That area is restricted!$"
