ForestsEdge_Gym_MapScripts::
	.byte 0


ForestsEdge_Gym_EventScript_Arwen::
# 6 "data/maps/ForestsEdge_Gym/scripts.pory"
	random 2
# 7 "data/maps/ForestsEdge_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 9 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Arwen_2
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, TRAINER_ARWEN_2
# 21 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, TRUE
# 22 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Script_StartVgcPreviewAndSelection
# 24 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_2, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Arwen, MSGBOX_AUTOCLOSE
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ARWEN_1
ForestsEdge_Gym_EventScript_Arwen_1:
# 30 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_EventScript_Arwen_6
	return

ForestsEdge_Gym_EventScript_Arwen_2:
# 10 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, TRAINER_ARWEN_1
# 11 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, TRUE
# 12 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Script_StartVgcPreviewAndSelection
# 14 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_1, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
# 15 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Arwen, MSGBOX_AUTOCLOSE
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ARWEN_1
	goto ForestsEdge_Gym_EventScript_Arwen_1

ForestsEdge_Gym_EventScript_Arwen_5:
# 31 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 32 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 33 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox GotBadge01, MSGBOX_AUTOCLOSE
# 34 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	return

ForestsEdge_Gym_EventScript_Arwen_6:
# 30 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_EventScript_Arwen_5
	return


ForestsEdge_Gym_EventScript_Orion::
# 51 "data/maps/ForestsEdge_Gym/scripts.pory"
	random 2
# 52 "data/maps/ForestsEdge_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 54 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Orion_2
# 61 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_2, Orion_Intro, Orion_Outro, Not_Enough_Mons
# 62 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Orion, MSGBOX_AUTOCLOSE
# 63 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 64 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ORION_1
ForestsEdge_Gym_EventScript_Orion_1:
# 67 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_EventScript_Orion_7
ForestsEdge_Gym_EventScript_Orion_5:
	end

ForestsEdge_Gym_EventScript_Orion_2:
# 55 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_1, Orion_Intro, Orion_Outro, Not_Enough_Mons
# 56 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Orion, MSGBOX_AUTOCLOSE
# 57 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 58 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ORION_1
	goto ForestsEdge_Gym_EventScript_Orion_1

ForestsEdge_Gym_EventScript_Orion_6:
# 68 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 69 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 70 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox GotBadge01, MSGBOX_AUTOCLOSE
# 71 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	goto ForestsEdge_Gym_EventScript_Orion_5

ForestsEdge_Gym_EventScript_Orion_7:
# 67 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_EventScript_Orion_6
	goto ForestsEdge_Gym_EventScript_Orion_5


ForestsEdge_Gym_EventScript_FirstTrainer::
# 97 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_PSY_FLY_T1, Trainer_1_Intro, Trainer_1_Outro, Not_Enough_Mons
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Trainer_1, MSGBOX_AUTOCLOSE
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


Arwen_Intro::
# 38 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "My birds will clip your wings!$"

Arwen_Outro::
# 42 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Oh no! My wings were clipped!$"

PostBattle_Arwen::
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're ready to soar.$"

GotBadge01::
# 76 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats! You got the Mindwing badge!$"

Orion_Intro::
# 80 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I already know your every move!$"

Orion_Outro::
# 84 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I didn't see that coming...$"

PostBattle_Orion::
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats on your first badge$"

Not_Enough_Mons::
# 92 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're not ready for this fight$"

Trainer_1_Intro::
# 103 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Let's see if you're ready!$"

Trainer_1_Outro::
# 107 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are certainly ready$"

PostBattle_Trainer_1::
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck getting your first badge$"
