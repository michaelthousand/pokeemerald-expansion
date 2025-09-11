PortValor_PokeMart_MapScripts::
	.byte 0


PortValor_PokeMart_Employee::
# 4 "data/maps/PortValor_PokeMart/scripts.pory"
	lock
# 5 "data/maps/PortValor_PokeMart/scripts.pory"
	faceplayer
# 6 "data/maps/PortValor_PokeMart/scripts.pory"
	message PortValor_PokeMart_Employee_Text_0
# 7 "data/maps/PortValor_PokeMart/scripts.pory"
	waitmessage
# 8 "data/maps/PortValor_PokeMart/scripts.pory"
	pokemart PortValorMartItems
# 9 "data/maps/PortValor_PokeMart/scripts.pory"
	msgbox PortValor_PokeMart_Employee_Text_1
# 10 "data/maps/PortValor_PokeMart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/PortValor_PokeMart/scripts.pory"
PortValorMartItems:
# 15 "data/maps/PortValor_PokeMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 16 "data/maps/PortValor_PokeMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 17 "data/maps/PortValor_PokeMart/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/PortValor_PokeMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/PortValor_PokeMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/PortValor_PokeMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/PortValor_PokeMart/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

PortValor_PokeMart_PT_Employee::
# 25 "data/maps/PortValor_PokeMart/scripts.pory"
	lock
# 26 "data/maps/PortValor_PokeMart/scripts.pory"
	faceplayer
# 27 "data/maps/PortValor_PokeMart/scripts.pory"
	message PortValor_PokeMart_PT_Employee_Text_0
# 28 "data/maps/PortValor_PokeMart/scripts.pory"
	message PortValor_PokeMart_Employee_Text_0
# 29 "data/maps/PortValor_PokeMart/scripts.pory"
	waitmessage
# 30 "data/maps/PortValor_PokeMart/scripts.pory"
	pokemart PortValorPTItems
# 31 "data/maps/PortValor_PokeMart/scripts.pory"
	msgbox PortValor_PokeMart_Employee_Text_1
# 32 "data/maps/PortValor_PokeMart/scripts.pory"
	release
	end


	.align 2
# 36 "data/maps/PortValor_PokeMart/scripts.pory"
PortValorPTItems:
# 37 "data/maps/PortValor_PokeMart/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE

PortValor_PokeMart_Employee_Text_0:
# 6 "data/maps/PortValor_PokeMart/scripts.pory"
	.string "How can I help you?$"

PortValor_PokeMart_Employee_Text_1:
# 9 "data/maps/PortValor_PokeMart/scripts.pory"
	.string "Please come again.$"

PortValor_PokeMart_PT_Employee_Text_0:
# 27 "data/maps/PortValor_PokeMart/scripts.pory"
	.string "Hello!\nI'm you local representative for\nPrometheus Tech.$"
