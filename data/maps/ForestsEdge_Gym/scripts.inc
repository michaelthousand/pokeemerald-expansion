ForestsEdge_Gym_MapScripts::
	.byte 0


ForestsEdgeGym_EventScript_Rules::
# 8 "data/maps/ForestsEdge_Gym/scripts.pory"
	lock
# 9 "data/maps/ForestsEdge_Gym/scripts.pory"
	faceplayer
# 11 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 17 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 18 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 19 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 21 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 23 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_9, MSGBOX_DEFAULT
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	release
	end


ForestsEdge_Gym_EventScript_Arwen::
# 31 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_1, Arwen_Intro, Arwen_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Arwen, NO_MUSIC
	end


ForestsEdge_Gym_After_Arwen::
# 36 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 37 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ARWEN_1
# 38 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Arwen, MSGBOX_DEFAULT
# 40 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_After_Arwen_3
ForestsEdge_Gym_After_Arwen_1:
# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
	release
	end

ForestsEdge_Gym_After_Arwen_2:
# 41 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 42 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
	goto ForestsEdge_Gym_After_Arwen_1

ForestsEdge_Gym_After_Arwen_3:
# 40 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_After_Arwen_2
	goto ForestsEdge_Gym_After_Arwen_1


ForestsEdge_Gym_EventScript_Orion::
# 50 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_1, Orion_Intro, Orion_Outro, Not_Enough_Mons, ForestsEdge_Gym_After_Orion, NO_MUSIC
	end


ForestsEdge_Gym_After_Orion::
# 55 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 56 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ORION_1
# 57 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Orion, MSGBOX_DEFAULT
# 59 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_After_Orion_3
ForestsEdge_Gym_After_Orion_1:
# 64 "data/maps/ForestsEdge_Gym/scripts.pory"
	release
	end

ForestsEdge_Gym_After_Orion_2:
# 60 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 61 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
	goto ForestsEdge_Gym_After_Orion_1

ForestsEdge_Gym_After_Orion_3:
# 59 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_After_Orion_2
	goto ForestsEdge_Gym_After_Orion_1


ForestsEdgeGym_EvenScript_PostBattle::
# 70 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EvenScript_PostBattle_Text_0, MSGBOX_DEFAULT
# 75 "data/maps/ForestsEdge_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 79 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	release
	end


ForestsEdge_Gym_EventScript_FirstTrainer::
# 146 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_PSY_FLY_T1, Trainer_1_Intro, Trainer_1_Outro, Not_Enough_Mons
# 147 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Trainer_1, MSGBOX_AUTOCLOSE
# 148 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


ForestsEdgeGym_EventScript_Rules_Text_0:
# 11 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explai\nhow Gyms work here in the REGION.$"

ForestsEdgeGym_EventScript_Rules_Text_1:
# 13 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in a different type.$"

ForestsEdgeGym_EventScript_Rules_Text_2:
# 14 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "If you pay attention to the junior\ntrainers you face beforehand, you may get a hint about the types you’ll be up against.$"

ForestsEdgeGym_EventScript_Rules_Text_3:
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Remember: you must defeat both Leaders\nto earn the badge.$"

ForestsEdgeGym_EventScript_Rules_Text_4:
# 17 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your team.$"

ForestsEdgeGym_EventScript_Rules_Text_5:
# 18 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

ForestsEdgeGym_EventScript_Rules_Text_6:
# 19 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Earning a badge will also award you points\ntoward qualifying for the Regional Championship.$"

ForestsEdgeGym_EventScript_Rules_Text_7:
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You don't have any badges yet so they\nwon't bring their A team.$"

ForestsEdgeGym_EventScript_Rules_Text_8:
# 21 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

ForestsEdgeGym_EventScript_Rules_Text_9:
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck!$"

ForestsEdgeGym_EvenScript_PostBattle_Text_0:
# 70 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "The PostBattle Fired$"

Arwen_Intro::
# 108 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "My birds will clip your wings!$"

Arwen_Outro::
# 112 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Oh no! My wings were clipped!$"

PostBattle_Arwen::
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're ready to soar.$"

Orion_Intro::
# 120 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Focus your mind and prevail.$"

Orion_Outro::
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Your resolve was stronger.$"

PostBattle_Orion::
# 128 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Impressive control of your team.$"

Not_Enough_Mons::
# 132 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You need at least four battle-ready Pokémon.$"

GotBadge01::
# 136 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats! You got the Mindwing badge!$"

LevelCap29Msg::
# 140 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Level cap increased to 29.$"

Trainer_1_Intro::
# 152 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Let's see if you're ready!$"

Trainer_1_Outro::
# 156 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are certainly ready$"

PostBattle_Trainer_1::
# 160 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck getting your first badge$"
