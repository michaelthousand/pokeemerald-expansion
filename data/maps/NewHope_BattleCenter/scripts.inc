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
	msgbox NewHope_BattleCenter_EventScript_Rules_Text_8, MSGBOX_DEFAULT
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
	return

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
	msgbox NewHope_BattleCenter_Trigger_Rules_Text_0, MSGBOX_DEFAULT
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


NewHope_BattleCenter_EventScript_Friendly1::
# 56 "data/maps/NewHope_BattleCenter/scripts.pory"
	lockall
# 57 "data/maps/NewHope_BattleCenter/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq NewHope_BattleCenter_EventScript_Friendly1_2
NewHope_BattleCenter_EventScript_Friendly1_1:
# 77 "data/maps/NewHope_BattleCenter/scripts.pory"
	releaseall
	return

NewHope_BattleCenter_EventScript_Friendly1_2:
# 58 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Friendly1_Text_0, MSGBOX_DEFAULT
# 60 "data/maps/NewHope_BattleCenter/scripts.pory"
	special Vgc_SavePartyBackup
# 61 "data/maps/NewHope_BattleCenter/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 64 "data/maps/NewHope_BattleCenter/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 65 "data/maps/NewHope_BattleCenter/scripts.pory"
	waitstate
# 68 "data/maps/NewHope_BattleCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_BattleCenter_EventScript_Friendly1_5
# 74 "data/maps/NewHope_BattleCenter/scripts.pory"
	cleartrainerflag TRAINER_FRIENDLY_1
# 75 "data/maps/NewHope_BattleCenter/scripts.pory"
	trainerbattle_double TRAINER_FRIENDLY_1, FriendlyTrainer1_Intro, FriendlyTrainer1_Outro, Not_Enough_Mons, NO_MUSIC
	goto NewHope_BattleCenter_EventScript_Friendly1_1

NewHope_BattleCenter_EventScript_Friendly1_5:
# 70 "data/maps/NewHope_BattleCenter/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
	end


NewHope_BattleCenter_EventScript_Friendly2::
# 81 "data/maps/NewHope_BattleCenter/scripts.pory"
	lockall
# 82 "data/maps/NewHope_BattleCenter/scripts.pory"
	compare VAR_LEVEL_CAP, 21
	goto_if_eq NewHope_BattleCenter_EventScript_Friendly2_2
NewHope_BattleCenter_EventScript_Friendly2_1:
# 102 "data/maps/NewHope_BattleCenter/scripts.pory"
	releaseall
	return

NewHope_BattleCenter_EventScript_Friendly2_2:
# 83 "data/maps/NewHope_BattleCenter/scripts.pory"
	msgbox NewHope_BattleCenter_EventScript_Friendly1_Text_0, MSGBOX_DEFAULT
# 85 "data/maps/NewHope_BattleCenter/scripts.pory"
	special Vgc_SavePartyBackup
# 86 "data/maps/NewHope_BattleCenter/scripts.pory"
	setflag FLAG_VGC_PENDING_RESTORE
# 89 "data/maps/NewHope_BattleCenter/scripts.pory"
	special Vgc_ChoosePartyOfFour
# 90 "data/maps/NewHope_BattleCenter/scripts.pory"
	waitstate
# 93 "data/maps/NewHope_BattleCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne NewHope_BattleCenter_EventScript_Friendly2_5
# 99 "data/maps/NewHope_BattleCenter/scripts.pory"
	cleartrainerflag TRAINER_FRIENDLY_2
# 100 "data/maps/NewHope_BattleCenter/scripts.pory"
	trainerbattle_double TRAINER_FRIENDLY_2, FriendlyTrainer2_Intro, FriendlyTrainer2_Outro, Not_Enough_Mons, NO_MUSIC
	goto NewHope_BattleCenter_EventScript_Friendly2_1

NewHope_BattleCenter_EventScript_Friendly2_5:
# 95 "data/maps/NewHope_BattleCenter/scripts.pory"
	clearflag FLAG_VGC_PENDING_RESTORE
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
	.string "Win 3 battles there, and you’ll be\ncrowned the victor.$"

NewHope_BattleCenter_EventScript_Rules_Text_4:
# 15 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Winners receive a special prize and, more\nimportantly, points toward Regional\pChampionship qualification.$"

NewHope_BattleCenter_EventScript_Rules_Text_5:
# 17 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "You will only compete with trainers\nfrom your same gym tier.$"

NewHope_BattleCenter_EventScript_Rules_Text_6:
# 19 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "If you’re looking to prove yourself\noutside of the Gyms, this is the place\pto do it.$"

NewHope_BattleCenter_EventScript_Rules_Text_7:
# 20 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Good luck!$"

NewHope_BattleCenter_EventScript_Rules_Text_8:
# 26 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "The level cap for this facility is XX.$"

NewHope_BattleCenter_Trigger_Rules_Text_0:
# 42 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Win XX battles there, and you’ll be\ncrowned the victor.$"

NewHope_BattleCenter_EventScript_Friendly1_Text_0:
# 58 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Choose your pokemon.$"

FriendlyTrainer1_Intro::
# 106 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Good luck and have fun!$"

FriendlyTrainer1_Outro::
# 110 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "Gosh! You're good at this!$"

FriendlyTrainer2_Intro::
# 114 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "I'm going to win!$"

FriendlyTrainer2_Outro::
# 118 "data/maps/NewHope_BattleCenter/scripts.pory"
	.string "This is supposed to a friendly match...$"
