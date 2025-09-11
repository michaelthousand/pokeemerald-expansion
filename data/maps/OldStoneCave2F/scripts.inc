OldStoneCave2F_MapScripts::
# 2 "data/maps/OldStoneCave2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldStoneCave2F_SetFlash
	.byte 0


OldStoneCave2F_SetFlash::
# 6 "data/maps/OldStoneCave2F/scripts.pory"
	setflashlevel 3
	end


OldStoneCave2F_EarthPower::
# 11 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_TM_EARTH_POWER, 1
# 12 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_EARTHPOWER
# 13 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 1
# 14 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_PowerGem::
# 19 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_TM_POWER_GEM, 1
# 20 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_POWERGEM
# 21 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 2
# 22 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_ThunderFang::
# 27 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_TM_THUNDER_FANG, 1
# 28 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_THUNDERFANG
# 29 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 3
# 30 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_Dig::
# 35 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_TM_DIG, 1
# 36 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_DIG
# 37 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 4
# 38 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end

