PrometheusTech_Shop_MapScripts::
	.byte 0


PrometheusTech_Shop_RegularEmployee::
# 4 "data/maps/PrometheusTech_Shop/scripts.pory"
	lock
# 5 "data/maps/PrometheusTech_Shop/scripts.pory"
	faceplayer
# 6 "data/maps/PrometheusTech_Shop/scripts.pory"
	message PrometheusTech_Shop_RegularEmployee_Text_0
# 7 "data/maps/PrometheusTech_Shop/scripts.pory"
	waitmessage
# 8 "data/maps/PrometheusTech_Shop/scripts.pory"
	pokemart PrometheusTech_StandardShopItems
# 9 "data/maps/PrometheusTech_Shop/scripts.pory"
	msgbox PrometheusTech_Shop_RegularEmployee_Text_1
# 10 "data/maps/PrometheusTech_Shop/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/PrometheusTech_Shop/scripts.pory"
PrometheusTech_StandardShopItems:
# 15 "data/maps/PrometheusTech_Shop/scripts.pory"
	.2byte ITEM_POKE_BALL
# 16 "data/maps/PrometheusTech_Shop/scripts.pory"
	.2byte ITEM_POTION
# 17 "data/maps/PrometheusTech_Shop/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 18 "data/maps/PrometheusTech_Shop/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 19 "data/maps/PrometheusTech_Shop/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

PrometheusTech_Shop_EggEmployee::
# 23 "data/maps/PrometheusTech_Shop/scripts.pory"
	lock
# 24 "data/maps/PrometheusTech_Shop/scripts.pory"
	faceplayer
# 25 "data/maps/PrometheusTech_Shop/scripts.pory"
	message PrometheusTech_Shop_EggEmployee_Text_0
# 26 "data/maps/PrometheusTech_Shop/scripts.pory"
	message PrometheusTech_Shop_RegularEmployee_Text_0
# 27 "data/maps/PrometheusTech_Shop/scripts.pory"
	waitmessage
# 28 "data/maps/PrometheusTech_Shop/scripts.pory"
	pokemart PrometheusTech_EggShopItems
# 29 "data/maps/PrometheusTech_Shop/scripts.pory"
	msgbox PrometheusTech_Shop_RegularEmployee_Text_1
# 30 "data/maps/PrometheusTech_Shop/scripts.pory"
	release
	end


	.align 2
# 34 "data/maps/PrometheusTech_Shop/scripts.pory"
PrometheusTech_EggShopItems:
# 35 "data/maps/PrometheusTech_Shop/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 36 "data/maps/PrometheusTech_Shop/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 37 "data/maps/PrometheusTech_Shop/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_NONE

PrometheusTech_Shop_RegularEmployee_Text_0:
# 6 "data/maps/PrometheusTech_Shop/scripts.pory"
	.string "How can I help you?$"

PrometheusTech_Shop_RegularEmployee_Text_1:
# 9 "data/maps/PrometheusTech_Shop/scripts.pory"
	.string "Please come again.$"

PrometheusTech_Shop_EggEmployee_Text_0:
# 25 "data/maps/PrometheusTech_Shop/scripts.pory"
	.string "Hello!\nI'm you local representative for\nPrometheus Tech.$"
