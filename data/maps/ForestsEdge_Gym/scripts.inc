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
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_2, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
# 17 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Arwen, MSGBOX_AUTOCLOSE
# 18 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 19 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ARWEN_1
ForestsEdge_Gym_EventScript_Arwen_1:
# 22 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_EventScript_Arwen_6
	return

ForestsEdge_Gym_EventScript_Arwen_2:
# 10 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_1, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
# 11 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Arwen, MSGBOX_AUTOCLOSE
# 12 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 13 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ARWEN_1
	goto ForestsEdge_Gym_EventScript_Arwen_1

ForestsEdge_Gym_EventScript_Arwen_5:
# 23 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 24 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox GotBadge01, MSGBOX_AUTOCLOSE
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	return

ForestsEdge_Gym_EventScript_Arwen_6:
# 22 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_EventScript_Arwen_5
	return


ForestsEdge_Gym_EventScript_Orion::
# 43 "data/maps/ForestsEdge_Gym/scripts.pory"
	random 2
# 44 "data/maps/ForestsEdge_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Orion_2
# 53 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_2, Orion_Intro, Orion_Outro, Not_Enough_Mons
# 54 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Orion, MSGBOX_AUTOCLOSE
# 55 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 56 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ORION_1
ForestsEdge_Gym_EventScript_Orion_1:
# 59 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_EventScript_Orion_7
ForestsEdge_Gym_EventScript_Orion_5:
	end

ForestsEdge_Gym_EventScript_Orion_2:
# 47 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_1, Orion_Intro, Orion_Outro, Not_Enough_Mons
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Orion, MSGBOX_AUTOCLOSE
# 49 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 50 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ORION_1
	goto ForestsEdge_Gym_EventScript_Orion_1

ForestsEdge_Gym_EventScript_Orion_6:
# 60 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 61 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 62 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox GotBadge01, MSGBOX_AUTOCLOSE
# 63 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	goto ForestsEdge_Gym_EventScript_Orion_5

ForestsEdge_Gym_EventScript_Orion_7:
# 59 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_EventScript_Orion_6
	goto ForestsEdge_Gym_EventScript_Orion_5


ForestsEdge_Gym_EventScript_FirstTrainer::
# 89 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_PSY_FLY_T1, Trainer_1_Intro, Trainer_1_Outro, Not_Enough_Mons
# 90 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Trainer_1, MSGBOX_AUTOCLOSE
# 91 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


Arwen_Intro::
# 30 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "My birds will clip your wings!$"

Arwen_Outro::
# 34 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Oh no! My wings were clipped!$"

PostBattle_Arwen::
# 38 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're ready to soar.$"

GotBadge01::
# 68 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats! You got the Mindwing badge!$"

Orion_Intro::
# 72 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I already know your every move!$"

Orion_Outro::
# 76 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I didn't see that coming...$"

PostBattle_Orion::
# 80 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats on your first badge$"

Not_Enough_Mons::
# 84 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're not ready for this fight$"

Trainer_1_Intro::
# 95 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Let's see if you're ready!$"

Trainer_1_Outro::
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are certainly ready$"

PostBattle_Trainer_1::
# 103 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck getting your first badge$"
