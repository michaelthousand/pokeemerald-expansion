ForestsEdge_Gym_MapScripts::
	.byte 0


ForestsEdgeGym_EventScript_Rules::
# 4 "data/maps/ForestsEdge_Gym/scripts.pory"
	lock
# 5 "data/maps/ForestsEdge_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_1, MSGBOX_DEFAULT
# 9 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_2, MSGBOX_DEFAULT
# 11 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_3, MSGBOX_DEFAULT
# 12 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_4, MSGBOX_DEFAULT
# 13 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_5, MSGBOX_DEFAULT
# 14 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 15 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_7, MSGBOX_DEFAULT
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_8, MSGBOX_DEFAULT
# 18 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_6, MSGBOX_DEFAULT
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox ForestsEdgeGym_EventScript_Rules_Text_9, MSGBOX_DEFAULT
# 21 "data/maps/ForestsEdge_Gym/scripts.pory"
	release
	end


ForestsEdge_Gym_EventScript_Arwen::
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	lock
# 27 "data/maps/ForestsEdge_Gym/scripts.pory"
	faceplayer
# 29 "data/maps/ForestsEdge_Gym/scripts.pory"
	random 2
# 30 "data/maps/ForestsEdge_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 34 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Arwen_2
# 49 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_FLETCHINDER
# 50 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_ORICORIO_POM_POM
# 51 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_RUFFLET
# 52 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_GLIGAR
# 53 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_WINGULL
# 54 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_YANMA
# 57 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 58 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 59 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_2, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
ForestsEdge_Gym_EventScript_Arwen_1:
# 62 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Arwen, MSGBOX_AUTOCLOSE
# 63 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 64 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ARWEN_1
# 65 "data/maps/ForestsEdge_Gym/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 66 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 68 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_EventScript_Arwen_7
ForestsEdge_Gym_EventScript_Arwen_5:
# 75 "data/maps/ForestsEdge_Gym/scripts.pory"
	release
	end

ForestsEdge_Gym_EventScript_Arwen_2:
# 36 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_FLETCHINDER
# 37 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_NOIBAT
# 38 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_RUFFLET
# 39 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_GLIGAR
# 40 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_WINGULL
# 41 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_YANMA
# 44 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_1, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
	goto ForestsEdge_Gym_EventScript_Arwen_1

ForestsEdge_Gym_EventScript_Arwen_6:
# 69 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 70 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 71 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox GotBadge01, MSGBOX_AUTOCLOSE
# 72 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	goto ForestsEdge_Gym_EventScript_Arwen_5

ForestsEdge_Gym_EventScript_Arwen_7:
# 68 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_EventScript_Arwen_6
	goto ForestsEdge_Gym_EventScript_Arwen_5


ForestsEdge_Gym_EventScript_Orion::
# 93 "data/maps/ForestsEdge_Gym/scripts.pory"
	random 2
# 94 "data/maps/ForestsEdge_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 96 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Orion_2
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_HATENNA
# 112 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_SPOINK
# 113 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_ELGYEM
# 114 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_MEDITITE
# 115 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_GIRAFARIG
# 116 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_SLOWPOKE
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 119 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 120 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_2, Orion_Intro, Orion_Outro, Not_Enough_Mons
ForestsEdge_Gym_EventScript_Orion_1:
# 123 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Orion, MSGBOX_AUTOCLOSE
# 124 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 125 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ORION_1
# 126 "data/maps/ForestsEdge_Gym/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 127 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_EventScript_Orion_7
ForestsEdge_Gym_EventScript_Orion_5:
	end

ForestsEdge_Gym_EventScript_Orion_2:
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_HATENNA
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_GOTHITA
# 100 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_GIRAFARIG
# 101 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_SLOWPOKE
# 102 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_ELGYEM
# 103 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_MEDITITE
# 106 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 107 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 108 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_1, Orion_Intro, Orion_Outro, Not_Enough_Mons
	goto ForestsEdge_Gym_EventScript_Orion_1

ForestsEdge_Gym_EventScript_Orion_6:
# 130 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 131 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 132 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox GotBadge01, MSGBOX_AUTOCLOSE
# 133 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	goto ForestsEdge_Gym_EventScript_Orion_5

ForestsEdge_Gym_EventScript_Orion_7:
# 129 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_EventScript_Orion_6
	goto ForestsEdge_Gym_EventScript_Orion_5


ForestsEdge_Gym_EventScript_FirstTrainer::
# 159 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_PSY_FLY_T1, Trainer_1_Intro, Trainer_1_Outro, Not_Enough_Mons
# 160 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Trainer_1, MSGBOX_AUTOCLOSE
# 161 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


ForestsEdgeGym_EventScript_Rules_Text_0:
# 6 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Welcome, challenger. Allow me to explai\nhow Gyms work here in the REGION.$"

ForestsEdgeGym_EventScript_Rules_Text_1:
# 8 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Each Gym has two Leaders, and each one\nspecializes in a different type.$"

ForestsEdgeGym_EventScript_Rules_Text_2:
# 9 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "If you pay attention to the junior\ntrainers you face beforehand, you may get a hint about the types you’ll be up against.$"

ForestsEdgeGym_EventScript_Rules_Text_3:
# 11 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Remember: you must defeat both Leaders\nto earn the badge.$"

ForestsEdgeGym_EventScript_Rules_Text_4:
# 12 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Between their battles, you won’t be\nallowed to change your team.$"

ForestsEdgeGym_EventScript_Rules_Text_5:
# 13 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "However, your Pokémon will be fully\nhealed before facing the second Leader.$"

ForestsEdgeGym_EventScript_Rules_Text_6:
# 14 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Earning a badge will also award you points\ntoward qualifying for the Regional Championship.$"

ForestsEdgeGym_EventScript_Rules_Text_7:
# 15 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You don't have any badges yet so they\nwon't bring their A team.$"

ForestsEdgeGym_EventScript_Rules_Text_8:
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "But be sure to still bring a balanced\nteam...you’ll need it!$"

ForestsEdgeGym_EventScript_Rules_Text_9:
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck!$"

Arwen_Intro::
# 80 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "My birds will clip your wings!$"

Arwen_Outro::
# 84 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Oh no! My wings were clipped!$"

PostBattle_Arwen::
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're ready to soar.$"

GotBadge01::
# 138 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats! You got the Mindwing badge!$"

Orion_Intro::
# 142 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I already know your every move!$"

Orion_Outro::
# 146 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I didn't see that coming...$"

PostBattle_Orion::
# 150 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats on your first badge$"

Not_Enough_Mons::
# 154 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're not ready for this fight$"

Trainer_1_Intro::
# 165 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Let's see if you're ready!$"

Trainer_1_Outro::
# 169 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are certainly ready$"

PostBattle_Trainer_1::
# 173 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck getting your first badge$"
