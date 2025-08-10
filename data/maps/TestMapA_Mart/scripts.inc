TestMapA_Mart_MapScripts::
	.byte 0


TestMapA_Mart_Employee::
# 4 "data/maps/TestMapA_Mart/scripts.pory"
	lock
# 5 "data/maps/TestMapA_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/TestMapA_Mart/scripts.pory"
	message TestMapA_Mart_Employee_Text_0
# 7 "data/maps/TestMapA_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/TestMapA_Mart/scripts.pory"
	pokemart MyMartItems
# 9 "data/maps/TestMapA_Mart/scripts.pory"
	msgbox TestMapA_Mart_Employee_Text_1
# 10 "data/maps/TestMapA_Mart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/TestMapA_Mart/scripts.pory"
MyMartItems:
# 15 "data/maps/TestMapA_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 16 "data/maps/TestMapA_Mart/scripts.pory"
	.2byte ITEM_POTION
# 17 "data/maps/TestMapA_Mart/scripts.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE

TestMapA_Mart_Employee_Text_0:
# 6 "data/maps/TestMapA_Mart/scripts.pory"
	.string "How can I help you?$"

TestMapA_Mart_Employee_Text_1:
# 9 "data/maps/TestMapA_Mart/scripts.pory"
	.string "Please come again.$"
