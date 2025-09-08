LEAGUE_HEADQUARTERS_MapScripts::
# 2 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LEAGUE_HEADQUARTERS_OnTransition
	.byte 0


SetInitialCap::
# 6 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
	end


LEAGUE_HEADQUARTERS_OnTransition::
# 12 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	removeobject 2
# 13 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	removeobject 3
	end


LEAGUE_HEADQUARTERS_Registration::
# 19 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lockall
# 20 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	faceplayer
# 22 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, LEAGUE_HEADQUARTERS_Registration_1
# 47 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_5, MSGBOX_AUTOCLOSE
# 48 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end

LEAGUE_HEADQUARTERS_Registration_1:
# 23 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_1, MSGBOX_YESNO
# 26 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_5
# 32 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_3, MSGBOX_AUTOCLOSE
# 33 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_4, MSGBOX_AUTOCLOSE
# 36 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	compare VAR_LEVEL_CAP, 0
	goto_if_eq LEAGUE_HEADQUARTERS_Registration_8
LEAGUE_HEADQUARTERS_Registration_7:
# 40 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	addobject 2
# 41 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 2, Chairman_WalkIn
# 42 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmovement 0
# 44 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto LEAGUE_HEADQUARTERS_Chairman
	return

LEAGUE_HEADQUARTERS_Registration_5:
# 27 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Registration_Text_2, MSGBOX_AUTOCLOSE
# 28 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	releaseall
	end

LEAGUE_HEADQUARTERS_Registration_8:
# 37 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	call SetInitialCap
	goto LEAGUE_HEADQUARTERS_Registration_7


# 55 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
Chairman_WalkIn:
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 56 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 57 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_left
	step_end

# 60 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
PT_Admin_WalkIn:
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 61 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_down
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_left
# 62 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_left
	step_end

# 65 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
Chairman_MoveOver:
# 66 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_right
# 67 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 68 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	face_down
	step_end

# 71 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
Chairman_Leave:
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 72 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
	step_end

# 75 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
PT_Admin_Leave:
# 76 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_right
# 76 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_right
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
# 77 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	walk_up
	step_end

LEAGUE_HEADQUARTERS_Chairman::
# 81 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_0, MSGBOX_AUTOCLOSE
# 82 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_1, MSGBOX_AUTOCLOSE
# 84 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_2, MSGBOX_AUTOCLOSE
# 85 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_3, MSGBOX_AUTOCLOSE
# 86 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_4, MSGBOX_AUTOCLOSE
# 87 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_5, MSGBOX_AUTOCLOSE
# 89 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_6, MSGBOX_AUTOCLOSE
# 90 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_7, MSGBOX_AUTOCLOSE
# 91 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_8, MSGBOX_AUTOCLOSE
# 92 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_9, MSGBOX_AUTOCLOSE
# 93 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_10, MSGBOX_AUTOCLOSE
# 95 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_Chairman_Text_11, MSGBOX_AUTOCLOSE
# 97 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 2, Chairman_MoveOver
# 98 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	addobject 3
# 99 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 3, PT_Admin_WalkIn
# 100 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmovement 0
# 102 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	goto LEAGUE_HEADQUARTERS_PT_Admin
	end


LEAGUE_HEADQUARTERS_PT_Admin::
# 107 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_1, MSGBOX_AUTOCLOSE
# 109 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_2, MSGBOX_AUTOCLOSE
# 111 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 112 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_3
# 113 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_4
# 115 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_PT_Admin_Text_5
# 116 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_AMULET_COIN, 1
# 117 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 118 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 119 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 120 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 10
# 121 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 2
# 122 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
# 123 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_POKE_BALL, 50
# 124 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_QUICK_BALL, 50
# 126 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	message LEAGUE_HEADQUARTERS_PT_Admin_Text_6
# 127 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 128 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
# 129 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag B_FLAG_TERA_ORB_NO_COST
# 132 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_7
# 133 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUE_HEADQUARTERS_PT_Admin_Text_8
# 135 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 2, Chairman_Leave
# 136 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement 3, PT_Admin_Leave
# 137 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmovement 0
# 138 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	removeobject 2
# 139 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	removeobject 3
# 141 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	setflag FLAG_LEAGUE_REG
# 142 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	release
	end


LEAGUEHEADQUARTERS_Trigger_BlockPath::
# 148 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	lockall
# 149 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	msgbox LEAGUEHEADQUARTERS_Trigger_BlockPath_Text_0
# 150 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 151 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	waitmovement 0
# 152 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	releaseall
	return


LEAGUE_HEADQUARTERS_Registration_Text_0:
# 23 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Welcome to the Pokemon League\nHeadquarters!$"

LEAGUE_HEADQUARTERS_Registration_Text_1:
# 24 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Would you like to register for the Gym\nChallenge?$"

LEAGUE_HEADQUARTERS_Registration_Text_2:
# 27 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "That's fine! Come back whenever you're\nready.$"

LEAGUE_HEADQUARTERS_Registration_Text_3:
# 32 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Excellent! One moment, I'll call the\nLeague Chairman over.$"

LEAGUE_HEADQUARTERS_Registration_Text_4:
# 33 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "He likes to meet new trainers.$"

LEAGUE_HEADQUARTERS_Registration_Text_5:
# 47 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Thank you for registering!$"

LEAGUE_HEADQUARTERS_Chairman_Text_0:
# 81 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Ah, a new challenger! Welcome to the\nLeague.$"

LEAGUE_HEADQUARTERS_Chairman_Text_1:
# 82 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "It’s always an honor to greet aspiring\ntrainers at the start of their journey.$"

LEAGUE_HEADQUARTERS_Chairman_Text_2:
# 84 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Here in the Valora Region, we use a\nunique system for the Gym Challenge.$"

LEAGUE_HEADQUARTERS_Chairman_Text_3:
# 85 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Each Gym is led not by one Leader, but by\ntwo.$"

LEAGUE_HEADQUARTERS_Chairman_Text_4:
# 86 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "To claim a badge, you must defeat both\nLeaders of that Gym.$"

LEAGUE_HEADQUARTERS_Chairman_Text_5:
# 87 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Only then will their badge be officially\nrecognized by the League.$"

LEAGUE_HEADQUARTERS_Chairman_Text_6:
# 89 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "But the Gym Challenge isn’t the only path\nfor ambitious trainers.$"

LEAGUE_HEADQUARTERS_Chairman_Text_7:
# 90 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "The League also hosts a circuit of local\ntournaments, where trainers test their\pskills outside of traditional Gyms.$"

LEAGUE_HEADQUARTERS_Chairman_Text_8:
# 91 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "And beyond that…$"

LEAGUE_HEADQUARTERS_Chairman_Text_9:
# 92 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "The upcoming World Championships will\nsoon bring challengers from every region.$"

LEAGUE_HEADQUARTERS_Chairman_Text_10:
# 93 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Perhaps, in time, you will be among them.$"

LEAGUE_HEADQUARTERS_Chairman_Text_11:
# 95 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Before you begin, I’d like you to meet one\nof our partners from Prometheus Tech.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_0:
# 107 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Greetings, trainer. I represent\nPrometheus Tech.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_1:
# 108 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "We proudly support new challengers with\nessential tools and items.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_2:
# 109 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Here, please accept these to aid your\nGym Challenge.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_3:
# 112 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "That TM contains Protect, an\nincredibly helpful move when battling.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_4:
# 113 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "It's reusable so you can teach it to\nwhoever you want.$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_5:
# 115 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "And, of course, some items!$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_6:
# 126 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "But most importantly: a Tera Orb!\pThis will allow you to terastilize your\npokemon!$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_7:
# 132 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Hopefully these will help you get\ngoing!$"

LEAGUE_HEADQUARTERS_PT_Admin_Text_8:
# 133 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "Goodbye for now!$"

LEAGUEHEADQUARTERS_Trigger_BlockPath_Text_0:
# 149 "data/maps/LEAGUE_HEADQUARTERS/scripts.pory"
	.string "That area is restricted!$"
