ForestsEdge_Gym_MapScripts::
	.byte 0


ForestsEdge_Gym_EventScript_FlyingBattle::
# 6 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_FLYING_GYM_1, Flying_Leader_Intro, Flying_Leader_Outro, Not_Enough_Mons
# 7 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Flying, MSGBOX_AUTOCLOSE
# 8 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


ForestsEdge_Gym_EventScript_PsychicBattle::
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_PSYCHIC_GYM_1, Psychic_Leader_Intro, Psychic_Leader_Outro, Not_Enough_Mons
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Psychic, MSGBOX_AUTOCLOSE
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


Flying_Leader_Intro::
# 12 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "My birds will clip your wings!$"

Flying_Leader_Outro::
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Oh no! My wings were clipped!$"

PostBattle_Flying::
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're ready to soar.$"

Psychic_Leader_Intro::
# 31 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I already know your every move!$"

Psychic_Leader_Outro::
# 35 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I didn't see that coming...$"

PostBattle_Psychic::
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
