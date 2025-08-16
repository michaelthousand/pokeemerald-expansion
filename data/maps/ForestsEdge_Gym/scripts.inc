ForestsEdge_Gym_MapScripts::
	.byte 0


ForestsEdge_Gym_EventScript_Arwen::
# 6 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_1, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
# 7 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Arwen, MSGBOX_AUTOCLOSE
# 8 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


ForestsEdge_Gym_EventScript_Orion::
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_1, Orion_Intro, Orion_Outro, Not_Enough_Mons
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Orion, MSGBOX_AUTOCLOSE
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


ForestsEdge_Gym_EventScript_FirstTrainer::
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_PSY_FLY_T1, Trainer_1_Intro, Trainer_1_Outro, Not_Enough_Mons
# 49 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Trainer_1, MSGBOX_AUTOCLOSE
# 50 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


Arwen_Intro::
# 12 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "My birds will clip your wings!$"

Arwen_Outro::
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Oh no! My wings were clipped!$"

PostBattle_Arwen::
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're ready to soar.$"

Orion_Intro::
# 31 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I already know your every move!$"

Orion_Outro::
# 35 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I didn't see that coming...$"

PostBattle_Orion::
# 39 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats on your first badge$"

Not_Enough_Mons::
# 43 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're not ready for this fight$"

Trainer_1_Intro::
# 54 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Let's see if you're ready!$"

Trainer_1_Outro::
# 58 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are certainly ready$"

PostBattle_Trainer_1::
# 62 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck getting your first badge$"
