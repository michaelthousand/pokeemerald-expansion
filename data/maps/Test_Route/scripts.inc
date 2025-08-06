Test_Route_MapScripts::
	.byte 0


Test_Route_EventScript_RoxanneBattle::
# 5 "data/maps/Test_Route/scripts.pory"
	trainerbattle_double TRAINER_ROXANNE_2, Roxanne_Intro, Roxanne_Outro, Roxanne_NotEnoughMons
# 6 "data/maps/Test_Route/scripts.pory"
	msgbox PostBattle_Roxanne, MSGBOX_AUTOCLOSE
# 7 "data/maps/Test_Route/scripts.pory"
	waitmessage
	end


Roxanne_Intro::
# 11 "data/maps/Test_Route/scripts.pory"
	.string "I hope this works$"

Roxanne_Outro::
# 15 "data/maps/Test_Route/scripts.pory"
	.string "Yay! It worked!$"

Roxanne_NotEnoughMons::
# 19 "data/maps/Test_Route/scripts.pory"
	.string "You're not ready for this fight$"

PostBattle_Roxanne::
# 23 "data/maps/Test_Route/scripts.pory"
	.string "Eat my ass, trainer$"
