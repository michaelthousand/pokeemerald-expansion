ForestsEdge_BattleCenter_MapScripts::
	.byte 0


ForestsEdge_BattleCenter_EventScript_Rules::
# 6 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	lock
# 7 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	faceplayer
# 9 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	goto_if_unset FLAG_BATTLE_CENTER_RULES, ForestsEdge_BattleCenter_EventScript_Rules_1
# 27 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 28 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 29 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	release
	end

ForestsEdge_BattleCenter_EventScript_Rules_1:
# 10 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 15 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 16 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 18 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 20 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 21 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 22 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	setflag FLAG_BATTLE_CENTER_RULES
# 23 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	release
	end


ForestsEdge_BattleCenter_Trigger_Rules::
# 35 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	goto_if_unset FLAG_BATTLE_CENTER_RULES, ForestsEdge_BattleCenter_Trigger_Rules_1
# 55 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	lock
# 56 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 57 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	release
	end

ForestsEdge_BattleCenter_Trigger_Rules_1:
# 36 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	lock
# 37 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	faceplayer
# 38 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 42 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 43 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 44 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 46 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 48 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 49 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 50 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	setflag FLAG_BATTLE_CENTER_RULES
# 51 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	release
	end


ForestsEdge_BattleCenter_EventScript_FriendlyOne::
# 64 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	lock
# 65 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	msgbox ForestsEdge_BattleCenter_EventScript_FriendlyOne_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	release
	end


ForestsEdge_BattleCenter_EventScript_Rules_Text_0:
# 10 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "This facility has two main rooms for\ntrainers.$"

ForestsEdge_BattleCenter_EventScript_Rules_Text_1:
# 12 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "The first is for friendly battles, where\nyou can test your skills without any\pstakes.$"

ForestsEdge_BattleCenter_EventScript_Rules_Text_2:
# 14 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "The second room is where we host our\nLocal Tournaments.$"

ForestsEdge_BattleCenter_EventScript_Rules_Text_3:
# 15 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "Win XX battles there, and you’ll be\ncrowned the victor.$"

ForestsEdge_BattleCenter_EventScript_Rules_Text_4:
# 16 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "Winners receive a special prize and, more\nimportantly, points toward Regional\pChampionship qualification.$"

ForestsEdge_BattleCenter_EventScript_Rules_Text_5:
# 18 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "The level cap for this facility is 21.$"

ForestsEdge_BattleCenter_EventScript_Rules_Text_6:
# 20 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "If you’re looking to prove yourself\noutside of the Gyms, this is the place\pto do it.$"

ForestsEdge_BattleCenter_EventScript_Rules_Text_7:
# 21 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "Good luck!$"

ForestsEdge_BattleCenter_EventScript_FriendlyOne_Text_0:
# 65 "data/maps/ForestsEdge_BattleCenter/scripts.pory"
	.string "This will be a battle.$"
