NewHope_ProfessorCinder_MapScripts::
# 2 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewHope_ProfessorCinder_EventScript_BallDefault
	.byte 0


NewHope_ProfessorCinder_EventScript_BallDefault::
# 8 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar STARTER_REGION, 0
	end


StarterFade::
# 13 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	delay 20
# 15 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Common_GiveStarter::
# 20 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_2
# 21 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 23 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	givemon VAR_TEMP_2, 5, ITEM_NONE
# 25 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Common_GiveStarter_2
# 31 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Common_GiveStarter_3
# 38 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_2
	return

Common_GiveStarter_1:
# 43 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	waitfanfare
# 44 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	closemessage
	return

Common_GiveStarter_2:
# 26 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_0
# 28 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call NicknamePartyMon
# 30 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call NewHope_ProfessorCinder_Outro
	goto Common_GiveStarter_1

Common_GiveStarter_3:
# 32 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox Common_GiveStarter_Text_1
# 34 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call NicknameBoxMon
# 36 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call NewHope_ProfessorCinder_Outro
	goto Common_GiveStarter_1


ProfessorCinder_Trigger_1::
# 51 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Trigger_1_1
	return

ProfessorCinder_Trigger_1_1:
# 52 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 53 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	applymovement LOCALID_NH_CINDER, Cinder_Trigger_1
# 54 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto NewHope_ProfessorCinder_Intro
	return


ProfessorCinder_Trigger_2::
# 59 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Trigger_2_1
	return

ProfessorCinder_Trigger_2_1:
# 60 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 61 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	applymovement LOCALID_NH_CINDER, Cinder_Trigger_2
# 62 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto NewHope_ProfessorCinder_Intro
	return


ProfessorCinder_Trigger_3::
# 67 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Trigger_3_1
	return

ProfessorCinder_Trigger_3_1:
# 68 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 69 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	applymovement LOCALID_NH_CINDER, Cinder_Trigger_3
# 70 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto NewHope_ProfessorCinder_Intro
	return


ProfessorCinder_Trigger_4::
# 75 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Trigger_4_1
	return

ProfessorCinder_Trigger_4_1:
# 76 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 77 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	applymovement LOCALID_NH_CINDER, Cinder_Trigger_4
# 78 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto NewHope_ProfessorCinder_Intro
	return


ProfessorCinder_Trigger_5::
# 83 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Trigger_5_1
	return

ProfessorCinder_Trigger_5_1:
# 84 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 85 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	applymovement LOCALID_NH_CINDER, Cinder_Trigger_5
# 86 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto NewHope_ProfessorCinder_Intro
	return


ProfessorCinder_Trigger_6::
# 91 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Trigger_6_1
	return

ProfessorCinder_Trigger_6_1:
# 92 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 93 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	applymovement LOCALID_NH_CINDER, Cinder_Trigger_6
# 94 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto NewHope_ProfessorCinder_Intro
	return


ProfessorCinder_Trigger_7::
# 99 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, ProfessorCinder_Trigger_7_1
	return

ProfessorCinder_Trigger_7_1:
# 100 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 101 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	applymovement LOCALID_NH_CINDER, Cinder_Trigger_7
# 102 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto NewHope_ProfessorCinder_Intro
	return


NewHope_ProfessorCinder_Intro::
# 111 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	faceplayer
# 113 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset TALKED_TO_CINDER, NewHope_ProfessorCinder_Intro_2
NewHope_ProfessorCinder_Intro_1:
# 123 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewHope_ProfessorCinder_Intro_5
# 128 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Intro_Text_5, MSGBOX_DEFAULT
# 129 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	closemessage
NewHope_ProfessorCinder_Intro_4:
# 132 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	releaseall
	end

NewHope_ProfessorCinder_Intro_2:
# 114 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setflag TALKED_TO_CINDER
# 115 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Intro_Text_0, MSGBOX_DEFAULT
# 116 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Intro_Text_1, MSGBOX_DEFAULT
# 117 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Intro_Text_2, MSGBOX_DEFAULT
# 118 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Intro_Text_3, MSGBOX_DEFAULT
# 119 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	delay 60
	goto NewHope_ProfessorCinder_Intro_1

NewHope_ProfessorCinder_Intro_5:
# 124 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Intro_Text_4, MSGBOX_DEFAULT
# 125 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	closemessage
# 126 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call NewHope_ProfessorCinder_EventScript_Professor
	goto NewHope_ProfessorCinder_Intro_4


NewHope_ProfessorCinder_EventScript_Professor::
# 137 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, NewHope_ProfessorCinder_EventScript_Professor_2
# 145 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_EventScript_Professor_Text_2, MSGBOX_NPC
NewHope_ProfessorCinder_EventScript_Professor_1:
	end

NewHope_ProfessorCinder_EventScript_Professor_2:
# 138 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	message NewHope_ProfessorCinder_EventScript_Professor_Text_0
# 139 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	closemessage
# 140 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	multichoice 20, 0, MULTI_STARTER_CHOICE, 0
# 141 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call StarterFade
# 142 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	copyvar STARTER_REGION, VAR_RESULT
# 143 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_EventScript_Professor_Text_1, MSGBOX_AUTOCLOSE
	goto NewHope_ProfessorCinder_EventScript_Professor_1


NewHope_ProfessorCinder_Outro::
# 151 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_Outro_2
# 153 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_Outro_3
# 155 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq NewHope_ProfessorCinder_Outro_4
NewHope_ProfessorCinder_Outro_1:
# 159 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Outro_Text_0, MSGBOX_DEFAULT
# 162 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Outro_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 167 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Outro_Text_2, MSGBOX_DEFAULT
# 169 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Outro_Text_3, MSGBOX_DEFAULT
# 171 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_Outro_Text_4, MSGBOX_DEFAULT
# 172 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 175 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	releaseall
	end

NewHope_ProfessorCinder_Outro_2:
# 152 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	removeobject 1
	goto NewHope_ProfessorCinder_Outro_1

NewHope_ProfessorCinder_Outro_3:
# 154 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	removeobject 2
	goto NewHope_ProfessorCinder_Outro_1

NewHope_ProfessorCinder_Outro_4:
# 156 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	removeobject 3
	goto NewHope_ProfessorCinder_Outro_1


# 181 "data/maps/NewHope_ProfessorCinder/scripts.pory"
Cinder_Trigger_1:
# 182 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_down
# 183 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_left
# 183 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_left
# 183 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_left
# 184 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	face_down
# 185 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	end
	step_end

# 188 "data/maps/NewHope_ProfessorCinder/scripts.pory"
Cinder_Trigger_2:
# 189 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_down
# 190 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_left
# 190 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_left
# 191 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	face_down
# 192 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	end
	step_end

# 195 "data/maps/NewHope_ProfessorCinder/scripts.pory"
Cinder_Trigger_3:
# 196 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_down
# 197 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_left
# 198 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	face_down
# 199 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	end
	step_end

# 202 "data/maps/NewHope_ProfessorCinder/scripts.pory"
Cinder_Trigger_4:
# 203 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_down
# 204 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	end
	step_end

# 207 "data/maps/NewHope_ProfessorCinder/scripts.pory"
Cinder_Trigger_5:
# 208 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_down
# 209 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	face_right
# 210 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	end
	step_end

# 213 "data/maps/NewHope_ProfessorCinder/scripts.pory"
Cinder_Trigger_6:
# 214 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	face_right
# 215 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	end
	step_end

# 218 "data/maps/NewHope_ProfessorCinder/scripts.pory"
Cinder_Trigger_7:
# 219 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	walk_up
# 220 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	face_right
# 221 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	end
	step_end

NewHope_ProfessorCinder_EventScript_PokeballOne::
# 228 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 229 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_ProfessorCinder_EventScript_PokeballOne_4
NewHope_ProfessorCinder_EventScript_PokeballOne_3:
# 233 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_EventScript_PokeballOne_Text_0
NewHope_ProfessorCinder_EventScript_PokeballOne_1:
# 235 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	releaseall
	end

NewHope_ProfessorCinder_EventScript_PokeballOne_2:
# 230 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 1
# 231 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call NewHope_ProfessorCinder_PickStarterForSlot
	goto NewHope_ProfessorCinder_EventScript_PokeballOne_1

NewHope_ProfessorCinder_EventScript_PokeballOne_4:
# 229 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_ProfessorCinder_EventScript_PokeballOne_6
	goto NewHope_ProfessorCinder_EventScript_PokeballOne_3

NewHope_ProfessorCinder_EventScript_PokeballOne_6:
# 229 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_ProfessorCinder_EventScript_PokeballOne_2
	goto NewHope_ProfessorCinder_EventScript_PokeballOne_3


NewHope_ProfessorCinder_EventScript_PokeballTwo::
# 240 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 241 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_ProfessorCinder_EventScript_PokeballTwo_4
NewHope_ProfessorCinder_EventScript_PokeballTwo_3:
# 245 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_EventScript_PokeballOne_Text_0
NewHope_ProfessorCinder_EventScript_PokeballTwo_1:
# 247 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	releaseall
	end

NewHope_ProfessorCinder_EventScript_PokeballTwo_2:
# 242 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 2
# 243 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call NewHope_ProfessorCinder_PickStarterForSlot
	goto NewHope_ProfessorCinder_EventScript_PokeballTwo_1

NewHope_ProfessorCinder_EventScript_PokeballTwo_4:
# 241 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_ProfessorCinder_EventScript_PokeballTwo_6
	goto NewHope_ProfessorCinder_EventScript_PokeballTwo_3

NewHope_ProfessorCinder_EventScript_PokeballTwo_6:
# 241 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_ProfessorCinder_EventScript_PokeballTwo_2
	goto NewHope_ProfessorCinder_EventScript_PokeballTwo_3


NewHope_ProfessorCinder_EventScript_PokeballThree::
# 252 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	lockall
# 253 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewHope_ProfessorCinder_EventScript_PokeballThree_4
NewHope_ProfessorCinder_EventScript_PokeballThree_3:
# 257 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_EventScript_PokeballOne_Text_0
NewHope_ProfessorCinder_EventScript_PokeballThree_1:
# 259 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	releaseall
	end

NewHope_ProfessorCinder_EventScript_PokeballThree_2:
# 254 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_1, 3
# 255 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call NewHope_ProfessorCinder_PickStarterForSlot
	goto NewHope_ProfessorCinder_EventScript_PokeballThree_1

NewHope_ProfessorCinder_EventScript_PokeballThree_4:
# 253 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewHope_ProfessorCinder_EventScript_PokeballThree_6
	goto NewHope_ProfessorCinder_EventScript_PokeballThree_3

NewHope_ProfessorCinder_EventScript_PokeballThree_6:
# 253 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewHope_ProfessorCinder_EventScript_PokeballThree_2
	goto NewHope_ProfessorCinder_EventScript_PokeballThree_3


NewHope_ProfessorCinder_PickStarterForSlot::
# 267 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 270 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_2
# 317 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_5
# 364 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_11
# 411 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 3
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_23
# 458 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 4
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_41
# 505 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 5
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_59
# 552 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 6
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_77
# 599 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 7
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_95
# 646 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare STARTER_REGION, 8
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_113
	return

NewHope_ProfessorCinder_PickStarterForSlot_2:
# 272 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_8
# 287 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_17
# 302 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 303 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_3, MSGBOX_YESNO
# 304 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_34
# 310 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 311 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_5:
# 319 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_14
# 334 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_29
# 349 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 350 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_6, MSGBOX_YESNO
# 351 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_52
# 357 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 358 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_8:
# 273 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 274 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_0, MSGBOX_YESNO
# 275 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_19
# 281 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 282 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_11:
# 366 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_26
# 381 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_47
# 396 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 397 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_9, MSGBOX_YESNO
# 398 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_70
# 404 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 405 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_14:
# 320 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 321 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_4, MSGBOX_YESNO
# 322 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_31
# 328 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 329 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_17:
# 288 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 289 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_2, MSGBOX_YESNO
# 290 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_37
# 296 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 297 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_19:
# 276 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 277 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 278 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_23:
# 413 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_44
# 428 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_65
# 443 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 444 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_12, MSGBOX_YESNO
# 445 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_88
# 451 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 452 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_26:
# 367 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 368 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_7, MSGBOX_YESNO
# 369 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_49
# 375 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 376 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_29:
# 335 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 336 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_5, MSGBOX_YESNO
# 337 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_55
# 343 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 344 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_31:
# 323 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIKORITA
# 324 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 325 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_34:
# 305 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 306 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 307 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_37:
# 291 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 292 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 293 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_41:
# 460 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_62
# 475 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_83
# 490 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 491 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_15, MSGBOX_YESNO
# 492 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_106
# 498 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 499 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_44:
# 414 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 415 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_10, MSGBOX_YESNO
# 416 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_67
# 422 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 423 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_47:
# 382 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 383 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_8, MSGBOX_YESNO
# 384 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_73
# 390 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 391 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_49:
# 370 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TREECKO
# 371 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 372 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_52:
# 352 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TOTODILE
# 353 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 354 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_55:
# 338 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CYNDAQUIL
# 339 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 340 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_59:
# 507 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_80
# 522 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_101
# 537 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 538 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_18, MSGBOX_YESNO
# 539 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_124
# 545 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 546 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_62:
# 461 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 462 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_13, MSGBOX_YESNO
# 463 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_85
# 469 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 470 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_65:
# 429 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 430 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_11, MSGBOX_YESNO
# 431 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_91
# 437 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 438 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_67:
# 417 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TURTWIG
# 418 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 419 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_70:
# 399 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_MUDKIP
# 400 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 401 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_73:
# 385 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TORCHIC
# 386 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 387 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_77:
# 554 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_98
# 569 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_119
# 584 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 585 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 586 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_139
# 592 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 593 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_80:
# 508 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 509 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_16, MSGBOX_YESNO
# 510 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_103
# 516 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 517 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_83:
# 476 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 477 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_14, MSGBOX_YESNO
# 478 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_109
# 484 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 485 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_85:
# 464 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SNIVY
# 465 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 466 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_88:
# 446 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_PIPLUP
# 447 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 448 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_91:
# 432 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHIMCHAR
# 433 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 434 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_95:
# 601 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_116
# 616 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_134
# 631 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 632 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_21, MSGBOX_YESNO
# 633 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_151
# 639 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 640 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_98:
# 555 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 556 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_19, MSGBOX_YESNO
# 557 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_121
# 563 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 564 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_101:
# 523 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 524 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_17, MSGBOX_YESNO
# 525 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_127
# 531 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 532 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_103:
# 511 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHESPIN
# 512 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 513 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_106:
# 493 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_OSHAWOTT
# 494 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 495 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_109:
# 479 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_TEPIG
# 480 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 481 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_113:
# 648 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_131
# 663 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_146
# 678 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 679 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_26, MSGBOX_YESNO
# 680 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_157
# 686 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 687 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_116:
# 602 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 603 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_22, MSGBOX_YESNO
# 604 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_136
# 610 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 611 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_119:
# 570 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 571 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_20, MSGBOX_YESNO
# 572 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_142
# 578 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 579 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_121:
# 558 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_ROWLET
# 559 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 560 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_124:
# 540 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FROAKIE
# 541 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 542 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_127:
# 526 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FENNEKIN
# 527 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 528 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_131:
# 649 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 650 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_24, MSGBOX_YESNO
# 651 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_148
# 657 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 658 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_134:
# 617 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 618 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_23, MSGBOX_YESNO
# 619 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_154
# 625 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 626 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_136:
# 605 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_GROOKEY
# 606 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 607 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_139:
# 587 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 588 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 589 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_142:
# 573 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_LITTEN
# 574 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 575 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_146:
# 664 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 665 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_25, MSGBOX_YESNO
# 666 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_ProfessorCinder_PickStarterForSlot_160
# 672 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
# 673 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	msgbox NewHope_ProfessorCinder_PickStarterForSlot_Text_1
	return

NewHope_ProfessorCinder_PickStarterForSlot_148:
# 652 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SPRIGATITO
# 653 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 654 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_151:
# 634 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_POPPLIO
# 635 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 636 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_154:
# 620 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SCORBUNNY
# 621 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 622 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_157:
# 681 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_QUAXLY
# 682 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 683 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return

NewHope_ProfessorCinder_PickStarterForSlot_160:
# 667 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_FUECOCO
# 668 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	call Common_GiveStarter
# 669 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	hidemonpic
	return


Common_GiveStarter_Text_0:
# 27 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Received your Pokemon!$"

Common_GiveStarter_Text_1:
# 33 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Your Pokemon was sent to your PC.$"

Common_GiveStarter_Text_2:
# 38 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "No more room for Pokemon.$"

NewHope_ProfessorCinder_Intro_Text_0:
# 115 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Ah! There you are!\pYour mother said you'd be stopping by!$"

NewHope_ProfessorCinder_Intro_Text_1:
# 116 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "How long has it been since I've seen you?\n10 years perhaps?$"

NewHope_ProfessorCinder_Intro_Text_2:
# 117 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "My investigations of mythical Pokemon\nhave had me travelling for years.$"

NewHope_ProfessorCinder_Intro_Text_3:
# 118 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "You look just like your father, you know.\nYes, the Champion himself! We were close\pfriends once, back before…\pWell, before our duties pulled us both\naway.$"

NewHope_ProfessorCinder_Intro_Text_4:
# 124 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Which region would you like your Pokemon\nto be from?$"

NewHope_ProfessorCinder_Intro_Text_5:
# 128 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Good luck on your journey!$"

NewHope_ProfessorCinder_EventScript_Professor_Text_0:
# 138 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "What region would you like to see?$"

NewHope_ProfessorCinder_EventScript_Professor_Text_1:
# 143 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Choose your Pokemon wisely.$"

NewHope_ProfessorCinder_EventScript_Professor_Text_2:
# 145 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Take care of your Pokemon.$"

NewHope_ProfessorCinder_Outro_Text_0:
# 159 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Excellent choice! That Pokémon will serve\nyou well. But remember, strength\pcomes from more than just battling.\nTake the time to know your partner.$"

NewHope_ProfessorCinder_Outro_Text_1:
# 162 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Now then, I have something else for you.\nThis is a Pokédex.\nIt will record data on every Pokémon you encounter.$"

NewHope_ProfessorCinder_Outro_Text_2:
# 167 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "The war left deep scars on Valora’s land.\nMany Pokémon habitats were changed or\pshattered entirely. By filling this\nPokédex, you’ll be helping me understand\phow they’ve adapted.$"

NewHope_ProfessorCinder_Outro_Text_3:
# 169 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "One last thing: be sure to vist the \nPrometheus Tech campus south of town.\pThey fund my lab, though truthfully, they\nhardly pay me any attention. They have\pall sorts of tools and technology to\nhelp trainers!$"

NewHope_ProfessorCinder_Outro_Text_4:
# 171 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Now then, off you go!\pAdventure, discovery, and maybe even a\nlittle danger await you out there.\pI’ll be here when you need me.$"

NewHope_ProfessorCinder_EventScript_PokeballOne_Text_0:
# 233 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Don't take another.$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_0:
# 274 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_1:
# 282 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Maybe another choice then.$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_2:
# 289 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_3:
# 303 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_4:
# 321 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_5:
# 336 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_6:
# 350 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_7:
# 368 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_8:
# 383 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_9:
# 397 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_10:
# 415 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_11:
# 430 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chimchar?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_12:
# 444 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Piplup?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_13:
# 462 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Snivy?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_14:
# 477 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Tepig?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_15:
# 491 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_16:
# 509 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Chespin?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_17:
# 524 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fennekin?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_18:
# 538 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Froakie?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_19:
# 556 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Rowlet?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_20:
# 571 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Litten?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_21:
# 585 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Popplio?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_22:
# 603 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Grookey?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_23:
# 618 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_24:
# 650 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_25:
# 665 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

NewHope_ProfessorCinder_PickStarterForSlot_Text_26:
# 679 "data/maps/NewHope_ProfessorCinder/scripts.pory"
	.string "Do you want to choose Quaxly?$"
