OldStoneCave1F_MapScripts::
	.byte 0


Old_Stone_Cave1F_EventScript_Bag::
# 4 "data/maps/OldStoneCave1F/scripts.pory"
	lockall
# 6 "data/maps/OldStoneCave1F/scripts.pory"
	msgbox Old_Stone_Cave1F_EventScript_Bag_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/OldStoneCave1F/scripts.pory"
	msgbox Old_Stone_Cave1F_EventScript_Bag_Text_1, MSGBOX_AUTOCLOSE
# 8 "data/maps/OldStoneCave1F/scripts.pory"
	msgbox Old_Stone_Cave1F_EventScript_Bag_Text_2, MSGBOX_AUTOCLOSE
# 9 "data/maps/OldStoneCave1F/scripts.pory"
	msgbox Old_Stone_Cave1F_EventScript_Bag_Text_3, MSGBOX_AUTOCLOSE
# 10 "data/maps/OldStoneCave1F/scripts.pory"
	setflag FLAG_OLD_STONE_BAG
# 11 "data/maps/OldStoneCave1F/scripts.pory"
	removeobject 1
# 12 "data/maps/OldStoneCave1F/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES, 1
# 13 "data/maps/OldStoneCave1F/scripts.pory"
	giveitem ITEM_HEAVY_DUTY_BOOTS, 1
# 14 "data/maps/OldStoneCave1F/scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 1
# 15 "data/maps/OldStoneCave1F/scripts.pory"
	delay 60
# 17 "data/maps/OldStoneCave1F/scripts.pory"
	releaseall
	return


Old_Stone_Cave1F_EventScript_Bag_Text_0:
# 6 "data/maps/OldStoneCave1F/scripts.pory"
	.string "There's a note in the bag.$"

Old_Stone_Cave1F_EventScript_Bag_Text_1:
# 7 "data/maps/OldStoneCave1F/scripts.pory"
	.string "James,\nHere are the things you'll need for the\nminer plan.$"

Old_Stone_Cave1F_EventScript_Bag_Text_2:
# 8 "data/maps/OldStoneCave1F/scripts.pory"
	.string "DON'T LOSE THEM! The boss won't accept\nanother failure. We'll be waiting\nin Celadon for you.$"

Old_Stone_Cave1F_EventScript_Bag_Text_3:
# 9 "data/maps/OldStoneCave1F/scripts.pory"
	.string "-Jesse$"
