EvergreenWoods_Shack_MapScripts::
	.byte 0


EvergreenWoods_Shack_EventScript_GymGuru::
# 4 "data/maps/EvergreenWoods_Shack/scripts.pory"
	lockall
# 5 "data/maps/EvergreenWoods_Shack/scripts.pory"
	faceplayer
# 7 "data/maps/EvergreenWoods_Shack/scripts.pory"
	goto_if_unset FLAG_KUBFU, EvergreenWoods_Shack_EventScript_GymGuru_2
# 13 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_4, MSGBOX_AUTOCLOSE
EvergreenWoods_Shack_EventScript_GymGuru_1:
# 16 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_5, MSGBOX_YESNO
# 17 "data/maps/EvergreenWoods_Shack/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne EvergreenWoods_Shack_EventScript_GymGuru_6
# 23 "data/maps/EvergreenWoods_Shack/scripts.pory"
InfoLoop:
# 24 "data/maps/EvergreenWoods_Shack/scripts.pory"
	multichoice 20, 0, MULTI_GYM_GURU, 0
# 27 "data/maps/EvergreenWoods_Shack/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EvergreenWoods_Shack_EventScript_GymGuru_9
# 42 "data/maps/EvergreenWoods_Shack/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EvergreenWoods_Shack_EventScript_GymGuru_10
# 58 "data/maps/EvergreenWoods_Shack/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EvergreenWoods_Shack_EventScript_GymGuru_11
# 76 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_6, MSGBOX_AUTOCLOSE
EvergreenWoods_Shack_EventScript_GymGuru_8:
# 79 "data/maps/EvergreenWoods_Shack/scripts.pory"
	goto_if_unset FLAG_KUBFU, EvergreenWoods_Shack_EventScript_GymGuru_17
EvergreenWoods_Shack_EventScript_GymGuru_16:
# 91 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_29, MSGBOX_AUTOCLOSE
# 93 "data/maps/EvergreenWoods_Shack/scripts.pory"
	releaseall
	end

EvergreenWoods_Shack_EventScript_GymGuru_2:
# 8 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_1, MSGBOX_AUTOCLOSE
# 10 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_2, MSGBOX_AUTOCLOSE
# 11 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_3, MSGBOX_AUTOCLOSE
	goto EvergreenWoods_Shack_EventScript_GymGuru_1

EvergreenWoods_Shack_EventScript_GymGuru_6:
# 18 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_6, MSGBOX_AUTOCLOSE
# 19 "data/maps/EvergreenWoods_Shack/scripts.pory"
	releaseall
	end

EvergreenWoods_Shack_EventScript_GymGuru_9:
# 28 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_7, MSGBOX_AUTOCLOSE
# 29 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_8, MSGBOX_AUTOCLOSE
# 30 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_9, MSGBOX_AUTOCLOSE
# 31 "data/maps/EvergreenWoods_Shack/scripts.pory"
	goto_if_unset FLAG_GURU_NEWHOPE, EvergreenWoods_Shack_EventScript_GymGuru_20
EvergreenWoods_Shack_EventScript_GymGuru_19:
# 40 "data/maps/EvergreenWoods_Shack/scripts.pory"
	goto InfoLoop
	goto EvergreenWoods_Shack_EventScript_GymGuru_8

EvergreenWoods_Shack_EventScript_GymGuru_10:
# 43 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_14, MSGBOX_AUTOCLOSE
# 44 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_15, MSGBOX_AUTOCLOSE
# 45 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_16, MSGBOX_AUTOCLOSE
# 47 "data/maps/EvergreenWoods_Shack/scripts.pory"
	goto_if_unset FLAG_GURU_FORESTSEDGE, EvergreenWoods_Shack_EventScript_GymGuru_23
EvergreenWoods_Shack_EventScript_GymGuru_22:
# 56 "data/maps/EvergreenWoods_Shack/scripts.pory"
	goto InfoLoop
	goto EvergreenWoods_Shack_EventScript_GymGuru_8

EvergreenWoods_Shack_EventScript_GymGuru_11:
# 59 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_19, MSGBOX_AUTOCLOSE
# 60 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_20, MSGBOX_AUTOCLOSE
# 61 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_21, MSGBOX_AUTOCLOSE
# 62 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_22, MSGBOX_AUTOCLOSE
# 64 "data/maps/EvergreenWoods_Shack/scripts.pory"
	goto_if_unset FLAG_GURU_PORTVALOR, EvergreenWoods_Shack_EventScript_GymGuru_26
EvergreenWoods_Shack_EventScript_GymGuru_25:
# 73 "data/maps/EvergreenWoods_Shack/scripts.pory"
	goto InfoLoop
	goto EvergreenWoods_Shack_EventScript_GymGuru_8

EvergreenWoods_Shack_EventScript_GymGuru_17:
# 80 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_25, MSGBOX_AUTOCLOSE
# 81 "data/maps/EvergreenWoods_Shack/scripts.pory"
	givemon SPECIES_KUBFU, 5, ITEM_NONE
# 82 "data/maps/EvergreenWoods_Shack/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 83 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_26, MSGBOX_AUTOCLOSE
# 84 "data/maps/EvergreenWoods_Shack/scripts.pory"
	waitfanfare
# 85 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_27, MSGBOX_AUTOCLOSE
# 86 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_28, MSGBOX_AUTOCLOSE
# 88 "data/maps/EvergreenWoods_Shack/scripts.pory"
	setflag FLAG_KUBFU
	goto EvergreenWoods_Shack_EventScript_GymGuru_16

EvergreenWoods_Shack_EventScript_GymGuru_20:
# 32 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_10, MSGBOX_AUTOCLOSE
# 33 "data/maps/EvergreenWoods_Shack/scripts.pory"
	giveitem ITEM_CHOICE_BAND, 1
# 34 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_11, MSGBOX_AUTOCLOSE
# 35 "data/maps/EvergreenWoods_Shack/scripts.pory"
	giveitem ITEM_WHITE_HERB, 1
# 36 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_12, MSGBOX_AUTOCLOSE
# 37 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_13, MSGBOX_AUTOCLOSE
# 38 "data/maps/EvergreenWoods_Shack/scripts.pory"
	setflag FLAG_GURU_NEWHOPE
	goto EvergreenWoods_Shack_EventScript_GymGuru_19

EvergreenWoods_Shack_EventScript_GymGuru_23:
# 48 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_10, MSGBOX_AUTOCLOSE
# 49 "data/maps/EvergreenWoods_Shack/scripts.pory"
	giveitem ITEM_TM_FACADE, 1
# 50 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_17, MSGBOX_AUTOCLOSE
# 51 "data/maps/EvergreenWoods_Shack/scripts.pory"
	giveitem ITEM_TM_SAFEGUARD, 1
# 52 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_18, MSGBOX_AUTOCLOSE
# 53 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_13, MSGBOX_AUTOCLOSE
# 54 "data/maps/EvergreenWoods_Shack/scripts.pory"
	setflag FLAG_GURU_FORESTSEDGE
	goto EvergreenWoods_Shack_EventScript_GymGuru_22

EvergreenWoods_Shack_EventScript_GymGuru_26:
# 65 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_10, MSGBOX_AUTOCLOSE
# 66 "data/maps/EvergreenWoods_Shack/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
# 67 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_23, MSGBOX_AUTOCLOSE
# 68 "data/maps/EvergreenWoods_Shack/scripts.pory"
	giveitem ITEM_MYSTIC_WATER, 1
# 69 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_24, MSGBOX_AUTOCLOSE
# 70 "data/maps/EvergreenWoods_Shack/scripts.pory"
	msgbox EvergreenWoods_Shack_EventScript_GymGuru_Text_13, MSGBOX_AUTOCLOSE
# 71 "data/maps/EvergreenWoods_Shack/scripts.pory"
	setflag FLAG_GURU_PORTVALOR
	goto EvergreenWoods_Shack_EventScript_GymGuru_25


EvergreenWoods_Shack_EventScript_GymGuru_Text_0:
# 8 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Welcome, young trainer, to my humble home.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_1:
# 9 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "I remember when I was starting out just\nlike you are.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_2:
# 10 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "If you'd like, I can give you some advice\non the gyms in the region...and some\pitems too!$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_3:
# 11 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "I have no need for such things anymore.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_4:
# 13 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Welcome back, young one!$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_5:
# 16 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Would you like some information?$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_6:
# 18 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Oh well. Maybe another time.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_7:
# 28 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Ah, you want information on New Hope.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_8:
# 29 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "For one leader you'll want to avoid\nPokemon that lower stats.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_9:
# 30 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "However, it wouldn't be a bad idea to have\none or two for the other leader.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_10:
# 32 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Here are some items for when you make it\nthere.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_11:
# 34 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "That should help you overcome stat\ndrops.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_12:
# 36 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "And that will prevent at least one stat\ndrop entirely.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_13:
# 37 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Those should give you a leg up!$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_14:
# 43 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Oh? You want to know about Forest's\nEdge?$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_15:
# 44 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "That gym targets your creatures by\ngiving them status conditions.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_16:
# 45 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "I would try and find some equipment to\nprotect you before going there.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_17:
# 50 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "That TM is Facade. It doubles in damage\nif your Pokemon has a status\ncondition.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_18:
# 52 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "And that TM protects you from status\nconditions entirely!$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_19:
# 59 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "The jewel by the sea - Port Valor! I would\nlove to talk about their gym.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_20:
# 60 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "That gym is all about controlling the\nweather.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_21:
# 61 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "You have to prepare for both the sun and\nrain.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_22:
# 62 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "But be warned - they have some tricks up\ntheir sleeves to prevent obvious\ncounters.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_23:
# 67 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "That TM is Thunderbolt which will help\nin the rain.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_24:
# 69 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "And that will boost your water moves to\nhelp in the sun.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_25:
# 80 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "One last thing before you go.\pI have this Pokemon I never got around\nto training. Maybe you can do it.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_26:
# 83 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Obtained Kubfu!$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_27:
# 85 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "He needs some strange item to evolve and\nI just never bothered to find out what.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_28:
# 86 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "I hope he will serve you well.$"

EvergreenWoods_Shack_EventScript_GymGuru_Text_29:
# 91 "data/maps/EvergreenWoods_Shack/scripts.pory"
	.string "Take care and feel free to return if you\never need more advice!$"
