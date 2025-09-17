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
	msgbox OldStoneCave2F_EarthPower_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_EARTHPOWER
# 14 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 1
# 15 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_PowerGem::
# 20 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_TM_POWER_GEM, 1
# 21 "data/maps/OldStoneCave2F/scripts.pory"
	msgbox OldStoneCave2F_PowerGem_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_POWERGEM
# 23 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 2
# 24 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_ThunderFang::
# 29 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_TM_THUNDER_FANG, 1
# 30 "data/maps/OldStoneCave2F/scripts.pory"
	msgbox OldStoneCave2F_ThunderFang_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_THUNDERFANG
# 32 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 3
# 33 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_Dig::
# 38 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_TM_DIG, 1
# 39 "data/maps/OldStoneCave2F/scripts.pory"
	msgbox OldStoneCave2F_Dig_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_DIG
# 41 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 4
# 42 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_GroundShards::
# 47 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_GROUND_TERA_SHARD, 11
# 48 "data/maps/OldStoneCave2F/scripts.pory"
	addvar VAR_GROUND_SHARDS, 11
# 49 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_GROUND_SHARDS_OLDSTONE
# 50 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 5
# 51 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_RockShards::
# 55 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_ROCK_TERA_SHARD, 9
# 56 "data/maps/OldStoneCave2F/scripts.pory"
	addvar VAR_ROCK_SHARDS, 9
# 57 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_ROCK_SHARDS_OLDSTONE
# 58 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 6
# 59 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_ElectricShards::
# 63 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_ELECTRIC_TERA_SHARD, 6
# 64 "data/maps/OldStoneCave2F/scripts.pory"
	addvar VAR_ELECTRIC_SHARDS, 6
# 65 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_ELECTRIC_SHARDS_OLDSTONE
# 66 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 7
# 67 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_SteelShards::
# 71 "data/maps/OldStoneCave2F/scripts.pory"
	giveitem ITEM_STEEL_TERA_SHARD, 8
# 72 "data/maps/OldStoneCave2F/scripts.pory"
	addvar VAR_STEEL_SHARDS, 8
# 73 "data/maps/OldStoneCave2F/scripts.pory"
	setflag FLAG_STEEL_SHARDS_OLDSTONE
# 74 "data/maps/OldStoneCave2F/scripts.pory"
	removeobject 8
# 75 "data/maps/OldStoneCave2F/scripts.pory"
	closemessage
	end


OldStoneCave2F_EarthPower_Text_0:
# 12 "data/maps/OldStoneCave2F/scripts.pory"
	.string "TM87 contains Earth Power.$"

OldStoneCave2F_PowerGem_Text_0:
# 21 "data/maps/OldStoneCave2F/scripts.pory"
	.string "TM134 contains Power Gem.$"

OldStoneCave2F_ThunderFang_Text_0:
# 30 "data/maps/OldStoneCave2F/scripts.pory"
	.string "TM08 contains Thunder Fang.$"

OldStoneCave2F_Dig_Text_0:
# 39 "data/maps/OldStoneCave2F/scripts.pory"
	.string "TM28 contains Dig.$"
