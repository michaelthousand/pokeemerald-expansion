ForestsEdge_Gym_MapScripts::
	.byte 0


ForestsEdge_Gym_EventScript_Arwen::
# 6 "data/maps/ForestsEdge_Gym/scripts.pory"
	lock
# 7 "data/maps/ForestsEdge_Gym/scripts.pory"
	faceplayer
# 9 "data/maps/ForestsEdge_Gym/scripts.pory"
	random 2
# 10 "data/maps/ForestsEdge_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 14 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Arwen_2
# 29 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_FLETCHINDER
# 30 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_ORICORIO_POM_POM
# 31 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_RUFFLET
# 32 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_GLIGAR
# 33 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_WINGULL
# 34 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_YANMA
# 37 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 38 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 39 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_2, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
ForestsEdge_Gym_EventScript_Arwen_1:
# 42 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Arwen, MSGBOX_AUTOCLOSE
# 43 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 44 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ARWEN_1
# 45 "data/maps/ForestsEdge_Gym/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 46 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_EventScript_Arwen_7
ForestsEdge_Gym_EventScript_Arwen_5:
# 55 "data/maps/ForestsEdge_Gym/scripts.pory"
	release
	end

ForestsEdge_Gym_EventScript_Arwen_2:
# 16 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_FLETCHINDER
# 17 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_NOIBAT
# 18 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_RUFFLET
# 19 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_GLIGAR
# 20 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_WINGULL
# 21 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_YANMA
# 24 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 25 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 26 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ARWEN_1, Arwen_Intro, Arwen_Outro, Not_Enough_Mons
	goto ForestsEdge_Gym_EventScript_Arwen_1

ForestsEdge_Gym_EventScript_Arwen_6:
# 49 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 50 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 51 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox GotBadge01, MSGBOX_AUTOCLOSE
# 52 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	goto ForestsEdge_Gym_EventScript_Arwen_5

ForestsEdge_Gym_EventScript_Arwen_7:
# 48 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_EventScript_Arwen_6
	goto ForestsEdge_Gym_EventScript_Arwen_5


ForestsEdge_Gym_EventScript_Orion::
# 73 "data/maps/ForestsEdge_Gym/scripts.pory"
	random 2
# 74 "data/maps/ForestsEdge_Gym/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 76 "data/maps/ForestsEdge_Gym/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq ForestsEdge_Gym_EventScript_Orion_2
# 91 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_HATENNA
# 92 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_SPOINK
# 93 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_ELGYEM
# 94 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_MEDITITE
# 95 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_GIRAFARIG
# 96 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_SLOWPOKE
# 98 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 99 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 100 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_2, Orion_Intro, Orion_Outro, Not_Enough_Mons
ForestsEdge_Gym_EventScript_Orion_1:
# 103 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Orion, MSGBOX_AUTOCLOSE
# 104 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
# 105 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_ORION_1
# 106 "data/maps/ForestsEdge_Gym/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 107 "data/maps/ForestsEdge_Gym/scripts.pory"
	special HealPlayerParty
# 109 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ARWEN_1, ForestsEdge_Gym_EventScript_Orion_7
ForestsEdge_Gym_EventScript_Orion_5:
	end

ForestsEdge_Gym_EventScript_Orion_2:
# 78 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8000, SPECIES_HATENNA
# 79 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8001, SPECIES_GOTHITA
# 80 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8002, SPECIES_GIRAFARIG
# 81 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8003, SPECIES_SLOWPOKE
# 82 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8004, SPECIES_ELGYEM
# 83 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_0x8005, SPECIES_MEDITITE
# 86 "data/maps/ForestsEdge_Gym/scripts.pory"
	callnative Vgc_ScriptShowAiPreviewFromVars
# 87 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitstate
# 88 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_ORION_1, Orion_Intro, Orion_Outro, Not_Enough_Mons
	goto ForestsEdge_Gym_EventScript_Orion_1

ForestsEdge_Gym_EventScript_Orion_6:
# 110 "data/maps/ForestsEdge_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 111 "data/maps/ForestsEdge_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 29
# 112 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox GotBadge01, MSGBOX_AUTOCLOSE
# 113 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	goto ForestsEdge_Gym_EventScript_Orion_5

ForestsEdge_Gym_EventScript_Orion_7:
# 109 "data/maps/ForestsEdge_Gym/scripts.pory"
	goto_if_set FLAG_ORION_1, ForestsEdge_Gym_EventScript_Orion_6
	goto ForestsEdge_Gym_EventScript_Orion_5


ForestsEdge_Gym_EventScript_FirstTrainer::
# 139 "data/maps/ForestsEdge_Gym/scripts.pory"
	trainerbattle_double TRAINER_PSY_FLY_T1, Trainer_1_Intro, Trainer_1_Outro, Not_Enough_Mons
# 140 "data/maps/ForestsEdge_Gym/scripts.pory"
	msgbox PostBattle_Trainer_1, MSGBOX_AUTOCLOSE
# 141 "data/maps/ForestsEdge_Gym/scripts.pory"
	waitmessage
	end


Arwen_Intro::
# 60 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "My birds will clip your wings!$"

Arwen_Outro::
# 64 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Oh no! My wings were clipped!$"

PostBattle_Arwen::
# 68 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're ready to soar.$"

GotBadge01::
# 118 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats! You got the Mindwing badge!$"

Orion_Intro::
# 122 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I already know your every move!$"

Orion_Outro::
# 126 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "I didn't see that coming...$"

PostBattle_Orion::
# 130 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Congrats on your first badge$"

Not_Enough_Mons::
# 134 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You're not ready for this fight$"

Trainer_1_Intro::
# 145 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Let's see if you're ready!$"

Trainer_1_Outro::
# 149 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "You are certainly ready$"

PostBattle_Trainer_1::
# 153 "data/maps/ForestsEdge_Gym/scripts.pory"
	.string "Good luck getting your first badge$"
