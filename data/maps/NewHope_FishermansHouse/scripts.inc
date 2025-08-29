NewHope_FishermansHouse_MapScripts::
	.byte 0


NewHope_FishermansHouse_EventScript_OldRod::
# 4 "data/maps/NewHope_FishermansHouse/scripts.pory"
	lockall
# 5 "data/maps/NewHope_FishermansHouse/scripts.pory"
	faceplayer
# 6 "data/maps/NewHope_FishermansHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, NewHope_FishermansHouse_EventScript_OldRod_2
# 11 "data/maps/NewHope_FishermansHouse/scripts.pory"
	msgbox NewHope_FishermansHouse_EventScript_OldRod_Text_1, MSGBOX_AUTOCLOSE
NewHope_FishermansHouse_EventScript_OldRod_1:
# 13 "data/maps/NewHope_FishermansHouse/scripts.pory"
	releaseall
	end

NewHope_FishermansHouse_EventScript_OldRod_2:
# 7 "data/maps/NewHope_FishermansHouse/scripts.pory"
	msgbox NewHope_FishermansHouse_EventScript_OldRod_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/NewHope_FishermansHouse/scripts.pory"
	giveitem ITEM_OLD_ROD, 1
# 9 "data/maps/NewHope_FishermansHouse/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
	goto NewHope_FishermansHouse_EventScript_OldRod_1


NewHope_FishermansHouse_EventScript_OldRod_Text_0:
# 7 "data/maps/NewHope_FishermansHouse/scripts.pory"
	.string "I'm done with fishing.\pHave this.$"

NewHope_FishermansHouse_EventScript_OldRod_Text_1:
# 11 "data/maps/NewHope_FishermansHouse/scripts.pory"
	.string "Have fun catching Magikarp.$"
