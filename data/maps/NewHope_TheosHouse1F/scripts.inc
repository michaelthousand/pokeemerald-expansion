# 1 "data/maps/NewHope_TheosHouse1F/scripts.pory"

# 2 "data/maps/NewHope_TheosHouse1F/scripts.pory"
NewHope_TheosHouse1F_MapScripts::
# 3 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewHope_TheosHouse1F_OnFrame
# 4 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.byte 0
# 5 "data/maps/NewHope_TheosHouse1F/scripts.pory"

# 6 "data/maps/NewHope_TheosHouse1F/scripts.pory"
NewHope_TheosHouse1F_OnFrame:
# 7 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	map_script_2 TALK_TO_MOM, 0, NewHope_TheosHouse1F_EventScript_Intro
# 8 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.2byte 0

NewHope_TheosHouse1F_EventScript_Intro::
# 13 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	setvar TALK_TO_MOM, 1
# 14 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	lockall
# 15 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	closemessage
# 17 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	delay 60
# 18 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Go_to_Mom
# 19 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_1, MSGBOX_AUTOCLOSE
# 21 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_2, MSGBOX_AUTOCLOSE
# 22 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_3, MSGBOX_AUTOCLOSE
# 23 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_4, MSGBOX_AUTOCLOSE
# 24 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_5, MSGBOX_AUTOCLOSE
# 25 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	delay 60
# 26 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_6, MSGBOX_AUTOCLOSE
# 27 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_7, MSGBOX_AUTOCLOSE
# 28 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_8, MSGBOX_AUTOCLOSE
# 29 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_9, MSGBOX_AUTOCLOSE
# 30 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_10, MSGBOX_AUTOCLOSE
# 31 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	delay 60
# 32 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_11, MSGBOX_AUTOCLOSE
# 33 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Intro_Text_12, MSGBOX_AUTOCLOSE
# 34 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	releaseall
	end


NewHope_TheosHouse1F_EventScript_Plato::
# 39 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	lockall
# 40 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	msgbox NewHope_TheosHouse1F_EventScript_Plato_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	releaseall
	end


# 45 "data/maps/NewHope_TheosHouse1F/scripts.pory"
Go_to_Mom:
# 46 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	walk_left
# 47 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	walk_left
# 48 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	walk_left
# 49 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	walk_left
# 50 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	walk_left
# 51 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	walk_left
	step_end

NewHope_TheosHouse1F_EventScript_Intro_Text_0:
# 15 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "MOM: Oh, {PLAYER}!$"

NewHope_TheosHouse1F_EventScript_Intro_Text_1:
# 20 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "Happy birthday, {PLAYER}!$"

NewHope_TheosHouse1F_EventScript_Intro_Text_2:
# 21 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "I can't believe you're already 18!$"

NewHope_TheosHouse1F_EventScript_Intro_Text_3:
# 22 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "I am so proud of you...and I know your\ndad is too!$"

NewHope_TheosHouse1F_EventScript_Intro_Text_4:
# 23 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "He really did want to be here for your\nbig day, but you know how he is.$"

NewHope_TheosHouse1F_EventScript_Intro_Text_5:
# 24 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "Being the Champion comes with a lot of\nresponsibilities.$"

NewHope_TheosHouse1F_EventScript_Intro_Text_6:
# 26 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "Oh, that's right!$"

NewHope_TheosHouse1F_EventScript_Intro_Text_7:
# 27 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "He said to tell you that his old friend,\nProfessor Cinder, is waiting at his\plab for you.$"

NewHope_TheosHouse1F_EventScript_Intro_Text_8:
# 28 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "Professor Cinder is going to give you\nyour very own POKEMON!$"

NewHope_TheosHouse1F_EventScript_Intro_Text_9:
# 29 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "Don't forget to also register with the\nLeague before you leave town as well.$"

NewHope_TheosHouse1F_EventScript_Intro_Text_10:
# 30 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "All trainers need to be registered in\norder to compete in the Gym Challenge\por any other official matches.$"

NewHope_TheosHouse1F_EventScript_Intro_Text_11:
# 32 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "I can't wait to see who you will become...$"

NewHope_TheosHouse1F_EventScript_Intro_Text_12:
# 33 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "Now don't forget to pet Plato on your way\nout! He'll miss you very much!$"

NewHope_TheosHouse1F_EventScript_Plato_Text_0:
# 40 "data/maps/NewHope_TheosHouse1F/scripts.pory"
	.string "PLATO: Woof, woof!$"
