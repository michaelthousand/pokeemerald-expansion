NewHope_BattleCenter_MapScripts::
	.byte 0


NewHope_BattleCenter_EventScript_Rules::
# 5 "data/maps/NewHope_BattleCenter/scripts.pory"
	lock
# 6 "data/maps/NewHope_BattleCenter/scripts.pory"
	faceplayer
# 8 "data/maps/NewHope_BattleCenter/scripts.pory"
	goto_if_unset FLAG_BATTLE_CENTER_RULES, NewHope_BattleCenter_EventScript_Rules_1
# 26 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 27 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 28 "data/maps/NewHope_BattleCenter/scripts.pory"
	release
	end

NewHope_BattleCenter_EventScript_Rules_1:
# 9 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 14 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 15 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 17 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 19 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 20 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 21 "data/maps/NewHope_BattleCenter/scripts.pory"
	setflag FLAG_BATTLE_CENTER_RULES
# 22 "data/maps/NewHope_BattleCenter/scripts.pory"
	release
	end


NewHope_BattleCenter_Trigger_Rules::
# 34 "data/maps/NewHope_BattleCenter/scripts.pory"
	goto_if_unset FLAG_BATTLE_CENTER_RULES, NewHope_BattleCenter_Trigger_Rules_1
# 54 "data/maps/NewHope_BattleCenter/scripts.pory"
	lock
# 55 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 56 "data/maps/NewHope_BattleCenter/scripts.pory"
	release
	end

NewHope_BattleCenter_Trigger_Rules_1:
# 35 "data/maps/NewHope_BattleCenter/scripts.pory"
	lock
# 36 "data/maps/NewHope_BattleCenter/scripts.pory"
	faceplayer
# 37 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 43 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 45 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 47 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 48 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 49 "data/maps/NewHope_BattleCenter/scripts.pory"
	setflag FLAG_BATTLE_CENTER_RULES
# 50 "data/maps/NewHope_BattleCenter/scripts.pory"
	release
	end


NewHope_BattleCenter_EventScript_Rules_Text_0:
# 9 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "This facility has two main rooms for\ntrainers.$"

NewHope_BattleCenter_EventScript_Rules_Text_1:
# 11 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "The first is for friendly battles, where\nyou can test your skills without any\pstakes.$"

NewHope_BattleCenter_EventScript_Rules_Text_2:
# 13 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "The second room is where we host our\nLocal Tournaments.$"

NewHope_BattleCenter_EventScript_Rules_Text_3:
# 14 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Win XX battles there, and you’ll be\ncrowned the victor.$"

NewHope_BattleCenter_EventScript_Rules_Text_4:
# 15 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Winners receive a special prize and, more\nimportantly, points toward Regional\pChampionship qualification.$"

NewHope_BattleCenter_EventScript_Rules_Text_5:
# 17 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "The level cap for this facility is XX.$"

NewHope_BattleCenter_EventScript_Rules_Text_6:
# 19 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "If you’re looking to prove yourself\noutside of the Gyms, this is the place\pto do it.$"

NewHope_BattleCenter_EventScript_Rules_Text_7:
# 20 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Good luck!$"
