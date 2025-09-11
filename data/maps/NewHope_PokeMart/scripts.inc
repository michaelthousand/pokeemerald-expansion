NewHope_PokeMart_MapScripts::
	.byte 0


NewHope_PokeMart_Employee::
# 4 "data/maps/NewHope_PokeMart/scripts.pory"
	lock
# 5 "data/maps/NewHope_PokeMart/scripts.pory"
	faceplayer
# 6 "data/maps/NewHope_PokeMart/scripts.pory"
	compare VAR_BADGES, 2
	goto_if_lt NewHope_PokeMart_Employee_2
# 15 "data/maps/NewHope_PokeMart/scripts.pory"
	message NewHope_PokeMart_Employee_Text_3
# 16 "data/maps/NewHope_PokeMart/scripts.pory"
	waitmessage
# 17 "data/maps/NewHope_PokeMart/scripts.pory"
	pokemart NewHopeMartItems
# 18 "data/maps/NewHope_PokeMart/scripts.pory"
	msgbox NewHope_PokeMart_Employee_Text_4
NewHope_PokeMart_Employee_1:
# 20 "data/maps/NewHope_PokeMart/scripts.pory"
	release
	end

NewHope_PokeMart_Employee_2:
# 7 "data/maps/NewHope_PokeMart/scripts.pory"
	msgbox NewHope_PokeMart_Employee_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/NewHope_PokeMart/scripts.pory"
	msgbox NewHope_PokeMart_Employee_Text_1, MSGBOX_AUTOCLOSE
# 9 "data/maps/NewHope_PokeMart/scripts.pory"
	message NewHope_PokeMart_Employee_Text_2
# 10 "data/maps/NewHope_PokeMart/scripts.pory"
	message NewHope_PokeMart_Employee_Text_3
# 11 "data/maps/NewHope_PokeMart/scripts.pory"
	waitmessage
# 12 "data/maps/NewHope_PokeMart/scripts.pory"
	pokemart NewHopeMartItems_Start
# 13 "data/maps/NewHope_PokeMart/scripts.pory"
	msgbox NewHope_PokeMart_Employee_Text_4
	goto NewHope_PokeMart_Employee_1


	.align 2
# 24 "data/maps/NewHope_PokeMart/scripts.pory"
NewHopeMartItems_Start:
# 25 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 26 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_POTION
# 27 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 28 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 29 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

	.align 2
# 32 "data/maps/NewHope_PokeMart/scripts.pory"
NewHopeMartItems:
# 33 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 34 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 35 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_POTION
# 36 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 37 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 38 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 39 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

NewHope_PokeMart_PT_Employee::
# 43 "data/maps/NewHope_PokeMart/scripts.pory"
	lock
# 44 "data/maps/NewHope_PokeMart/scripts.pory"
	faceplayer
# 45 "data/maps/NewHope_PokeMart/scripts.pory"
	message NewHope_PokeMart_PT_Employee_Text_0
# 46 "data/maps/NewHope_PokeMart/scripts.pory"
	message NewHope_PokeMart_Employee_Text_3
# 47 "data/maps/NewHope_PokeMart/scripts.pory"
	waitmessage
# 48 "data/maps/NewHope_PokeMart/scripts.pory"
	pokemart NewHopePTItems
# 49 "data/maps/NewHope_PokeMart/scripts.pory"
	msgbox NewHope_PokeMart_Employee_Text_4
# 50 "data/maps/NewHope_PokeMart/scripts.pory"
	release
	end


	.align 2
# 54 "data/maps/NewHope_PokeMart/scripts.pory"
NewHopePTItems:
# 55 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

NewHope_PokeMart_Employee_Text_0:
# 7 "data/maps/NewHope_PokeMart/scripts.pory"
	.string "Hello!$"

NewHope_PokeMart_Employee_Text_1:
# 8 "data/maps/NewHope_PokeMart/scripts.pory"
	.string "Just so you know, we have low\nstock at the moment.$"

NewHope_PokeMart_Employee_Text_2:
# 9 "data/maps/NewHope_PokeMart/scripts.pory"
	.string "You'll need to come back later\nfor all of our offerings.$"

NewHope_PokeMart_Employee_Text_3:
# 10 "data/maps/NewHope_PokeMart/scripts.pory"
	.string "How can I help you?$"

NewHope_PokeMart_Employee_Text_4:
# 13 "data/maps/NewHope_PokeMart/scripts.pory"
	.string "Please come again.$"

NewHope_PokeMart_PT_Employee_Text_0:
# 45 "data/maps/NewHope_PokeMart/scripts.pory"
	.string "Hello!\nI'm you local representative for\nPrometheus Tech.$"
