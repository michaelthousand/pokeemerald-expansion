NewHope_PokeMart_MapScripts::
	.byte 0


NewHope_PokeMart_Employee::
# 4 "data/maps/NewHope_PokeMart/scripts.pory"
	lock
# 5 "data/maps/NewHope_PokeMart/scripts.pory"
	faceplayer
# 6 "data/maps/NewHope_PokeMart/scripts.pory"
	message NewHope_PokeMart_Employee_Text_0
# 7 "data/maps/NewHope_PokeMart/scripts.pory"
	waitmessage
# 8 "data/maps/NewHope_PokeMart/scripts.pory"
	pokemart NewHopeMartItems
# 9 "data/maps/NewHope_PokeMart/scripts.pory"
	msgbox NewHope_PokeMart_Employee_Text_1
# 10 "data/maps/NewHope_PokeMart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/NewHope_PokeMart/scripts.pory"
NewHopeMartItems:
# 15 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 16 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_POTION
# 17 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 18 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 19 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

NewHope_PokeMart_PT_Employee::
# 23 "data/maps/NewHope_PokeMart/scripts.pory"
	lock
# 24 "data/maps/NewHope_PokeMart/scripts.pory"
	faceplayer
# 25 "data/maps/NewHope_PokeMart/scripts.pory"
	message NewHope_PokeMart_Employee_Text_0
# 26 "data/maps/NewHope_PokeMart/scripts.pory"
	waitmessage
# 27 "data/maps/NewHope_PokeMart/scripts.pory"
	pokemart NewHopePTItems
# 28 "data/maps/NewHope_PokeMart/scripts.pory"
	msgbox NewHope_PokeMart_Employee_Text_1
# 29 "data/maps/NewHope_PokeMart/scripts.pory"
	release
	end


	.align 2
# 33 "data/maps/NewHope_PokeMart/scripts.pory"
NewHopePTItems:
# 34 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 35 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 36 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 37 "data/maps/NewHope_PokeMart/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_NONE

NewHope_PokeMart_Employee_Text_0:
# 6 "data/maps/NewHope_PokeMart/scripts.pory"
	.string "How can I help you?$"

NewHope_PokeMart_Employee_Text_1:
# 9 "data/maps/NewHope_PokeMart/scripts.pory"
	.string "Please come again.$"
