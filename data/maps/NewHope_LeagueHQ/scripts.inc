NewHope_LeagueHQ_MapScripts::
# 2 "data/maps/NewHope_LeagueHQ/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewHope_LeagueHQ_OnTransition
	.byte 0


NewHope_LeagueHQ_Trigger_BlockPath::
# 6 "data/maps/NewHope_LeagueHQ/scripts.pory"
	lockall
# 7 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_Trigger_BlockPath_Text_0
# 8 "data/maps/NewHope_LeagueHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 9 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitmovement 0
# 10 "data/maps/NewHope_LeagueHQ/scripts.pory"
	releaseall
	return


NewHope_LeagueHQ_OnTransition::
# 14 "data/maps/NewHope_LeagueHQ/scripts.pory"
	removeobject LOCALID_NH_CHAIRMAN
# 15 "data/maps/NewHope_LeagueHQ/scripts.pory"
	removeobject LOCALID_NH_PT_REP
	end


NewHope_LeagueHQ_EventScript_Registration::
# 20 "data/maps/NewHope_LeagueHQ/scripts.pory"
	lockall
# 21 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/NewHope_LeagueHQ/scripts.pory"
	goto_if_unset FLAG_LEAGUE_REG, NewHope_LeagueHQ_EventScript_Registration_1
# 49 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_9, MSGBOX_AUTOCLOSE
# 50 "data/maps/NewHope_LeagueHQ/scripts.pory"
	releaseall
	end

NewHope_LeagueHQ_EventScript_Registration_1:
# 23 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_1, MSGBOX_YESNO
# 24 "data/maps/NewHope_LeagueHQ/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHope_LeagueHQ_EventScript_Registration_4
# 44 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_8, MSGBOX_AUTOCLOSE
# 45 "data/maps/NewHope_LeagueHQ/scripts.pory"
	releaseall
	end

NewHope_LeagueHQ_EventScript_Registration_4:
# 25 "data/maps/NewHope_LeagueHQ/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 26 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_2, MSGBOX_AUTOCLOSE
# 27 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_3, MSGBOX_AUTOCLOSE
# 28 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_4, MSGBOX_AUTOCLOSE
# 29 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_5, MSGBOX_AUTOCLOSE
# 30 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_6, MSGBOX_AUTOCLOSE
# 31 "data/maps/NewHope_LeagueHQ/scripts.pory"
	delay 180
# 32 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Registration_Text_7, MSGBOX_AUTOCLOSE
# 33 "data/maps/NewHope_LeagueHQ/scripts.pory"
	delay 180
# 34 "data/maps/NewHope_LeagueHQ/scripts.pory"
	opendoor 12, 7
# 35 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitdooranim
# 36 "data/maps/NewHope_LeagueHQ/scripts.pory"
	addobject LOCALID_NH_CHAIRMAN
# 37 "data/maps/NewHope_LeagueHQ/scripts.pory"
	applymovement LOCALID_NH_CHAIRMAN, League_Reps_Enter
# 38 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitmovement 0
# 39 "data/maps/NewHope_LeagueHQ/scripts.pory"
	closedoor 12, 7
# 40 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitdooranim
# 41 "data/maps/NewHope_LeagueHQ/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 42 "data/maps/NewHope_LeagueHQ/scripts.pory"
	goto NewHope_LeagueHQ_EventScript_Chairman
	return


NewHope_LeagueHQ_EventScript_Chairman::
# 57 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_1, MSGBOX_AUTOCLOSE
# 60 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_2, MSGBOX_AUTOCLOSE
# 61 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_3, MSGBOX_AUTOCLOSE
# 62 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_4, MSGBOX_AUTOCLOSE
# 63 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_5, MSGBOX_AUTOCLOSE
# 65 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_6, MSGBOX_AUTOCLOSE
# 66 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_7, MSGBOX_AUTOCLOSE
# 67 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_8, MSGBOX_AUTOCLOSE
# 68 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_9, MSGBOX_AUTOCLOSE
# 69 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_10, MSGBOX_AUTOCLOSE
# 71 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Chairman_Text_11, MSGBOX_AUTOCLOSE
# 73 "data/maps/NewHope_LeagueHQ/scripts.pory"
	applymovement LOCALID_NH_CHAIRMAN, Chariman_Move_Over
# 74 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitmovement 0
# 75 "data/maps/NewHope_LeagueHQ/scripts.pory"
	turnobject LOCALID_NH_CHAIRMAN, DIR_NORTH
# 76 "data/maps/NewHope_LeagueHQ/scripts.pory"
	delay 60
# 77 "data/maps/NewHope_LeagueHQ/scripts.pory"
	opendoor 12, 7
# 78 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitdooranim
# 79 "data/maps/NewHope_LeagueHQ/scripts.pory"
	addobject LOCALID_NH_PT_REP
# 80 "data/maps/NewHope_LeagueHQ/scripts.pory"
	applymovement LOCALID_NH_PT_REP, League_Reps_Enter
# 81 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitmovement 0
# 82 "data/maps/NewHope_LeagueHQ/scripts.pory"
	closedoor 12, 7
# 83 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitdooranim
# 84 "data/maps/NewHope_LeagueHQ/scripts.pory"
	goto NewHope_LeagueHQ_EventScript_PrometheusRep
	return


# 87 "data/maps/NewHope_LeagueHQ/scripts.pory"
League_Reps_Enter:
# 88 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 88 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 88 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 88 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 88 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 88 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 88 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 88 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 89 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_left
# 89 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_left
# 89 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_left
# 90 "data/maps/NewHope_LeagueHQ/scripts.pory"
	end
	step_end

# 93 "data/maps/NewHope_LeagueHQ/scripts.pory"
Chariman_Move_Over:
# 94 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_down
# 95 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_left
# 96 "data/maps/NewHope_LeagueHQ/scripts.pory"
	face_up
# 97 "data/maps/NewHope_LeagueHQ/scripts.pory"
	end
	step_end

NewHope_LeagueHQ_EventScript_PrometheusRep::
# 101 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_0, MSGBOX_AUTOCLOSE
# 102 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_1, MSGBOX_AUTOCLOSE
# 103 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_2, MSGBOX_AUTOCLOSE
# 104 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_3, MSGBOX_AUTOCLOSE
# 105 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_4, MSGBOX_AUTOCLOSE
# 107 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 108 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_5
# 109 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_6
# 111 "data/maps/NewHope_LeagueHQ/scripts.pory"
	message NewHope_LeagueHQ_EventScript_PrometheusRep_Text_7
# 112 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_AMULET_COIN, 1
# 113 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_8, MSGBOX_AUTOCLOSE
# 114 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 115 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_9, MSGBOX_AUTOCLOSE
# 116 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 117 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_10, MSGBOX_AUTOCLOSE
# 118 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 119 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_11, MSGBOX_AUTOCLOSE
# 120 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 10
# 121 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 2
# 122 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_12, MSGBOX_AUTOCLOSE
# 123 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_RARE_CANDY, 50
# 124 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_13, MSGBOX_AUTOCLOSE
# 125 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_POKE_BALL, 50
# 126 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_QUICK_BALL, 50
# 127 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_14, MSGBOX_AUTOCLOSE
# 129 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_15, MSGBOX_AUTOCLOSE
# 130 "data/maps/NewHope_LeagueHQ/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 131 "data/maps/NewHope_LeagueHQ/scripts.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
# 132 "data/maps/NewHope_LeagueHQ/scripts.pory"
	setflag B_FLAG_TERA_ORB_NO_COST
# 133 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_16, MSGBOX_AUTOCLOSE
# 136 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_17, MSGBOX_AUTOCLOSE
# 137 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_PrometheusRep_Text_18, MSGBOX_AUTOCLOSE
# 138 "data/maps/NewHope_LeagueHQ/scripts.pory"
	closemessage
# 140 "data/maps/NewHope_LeagueHQ/scripts.pory"
	applymovement LOCALID_NH_PT_REP, PT_Rep_to_Door
# 141 "data/maps/NewHope_LeagueHQ/scripts.pory"
	applymovement LOCALID_NH_CHAIRMAN, Chairman_to_Door
# 142 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitmovement 0
# 143 "data/maps/NewHope_LeagueHQ/scripts.pory"
	opendoor 12, 7
# 144 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitdooranim
# 146 "data/maps/NewHope_LeagueHQ/scripts.pory"
	turnobject LOCALID_NH_PT_REP, DIR_NORTH
# 147 "data/maps/NewHope_LeagueHQ/scripts.pory"
	turnobject LOCALID_NH_CHAIRMAN, DIR_NORTH
# 149 "data/maps/NewHope_LeagueHQ/scripts.pory"
	applymovement LOCALID_NH_PT_REP, League_Reps_Exit
# 150 "data/maps/NewHope_LeagueHQ/scripts.pory"
	applymovement LOCALID_NH_CHAIRMAN, League_Reps_Exit
# 151 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitmovement 0
# 152 "data/maps/NewHope_LeagueHQ/scripts.pory"
	closedoor 12, 7
# 153 "data/maps/NewHope_LeagueHQ/scripts.pory"
	waitdooranim
# 154 "data/maps/NewHope_LeagueHQ/scripts.pory"
	removeobject LOCALID_NH_PT_REP
# 155 "data/maps/NewHope_LeagueHQ/scripts.pory"
	removeobject LOCALID_NH_CHAIRMAN
# 157 "data/maps/NewHope_LeagueHQ/scripts.pory"
	releaseall
	end


# 161 "data/maps/NewHope_LeagueHQ/scripts.pory"
PT_Rep_to_Door:
# 162 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_right
# 162 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_right
# 162 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_right
# 163 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 163 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 163 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 163 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 164 "data/maps/NewHope_LeagueHQ/scripts.pory"
	end
	step_end

# 167 "data/maps/NewHope_LeagueHQ/scripts.pory"
Chairman_to_Door:
# 168 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_right
# 168 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_right
# 168 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_right
# 168 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_right
# 169 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 169 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 169 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 169 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 170 "data/maps/NewHope_LeagueHQ/scripts.pory"
	end
	step_end

# 173 "data/maps/NewHope_LeagueHQ/scripts.pory"
League_Reps_Exit:
# 174 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 174 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 174 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 174 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 174 "data/maps/NewHope_LeagueHQ/scripts.pory"
	walk_up
# 175 "data/maps/NewHope_LeagueHQ/scripts.pory"
	end
	step_end

NewHope_LeagueHQ_EventScript_NPC1::
# 179 "data/maps/NewHope_LeagueHQ/scripts.pory"
	lockall
# 180 "data/maps/NewHope_LeagueHQ/scripts.pory"
	faceplayer
# 181 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_NPC1_Text_0, MSGBOX_AUTOCLOSE
# 182 "data/maps/NewHope_LeagueHQ/scripts.pory"
	releaseall
	end


NewHope_LeagueHQ_EventScript_NPC2::
# 187 "data/maps/NewHope_LeagueHQ/scripts.pory"
	lockall
# 188 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_NPC2_Text_0, MSGBOX_AUTOCLOSE
# 189 "data/maps/NewHope_LeagueHQ/scripts.pory"
	delay 60
# 190 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_NPC2_Text_1, MSGBOX_AUTOCLOSE
# 191 "data/maps/NewHope_LeagueHQ/scripts.pory"
	releaseall
	end


NewHope_LeagueHQ_EventScript_NPC3::
# 196 "data/maps/NewHope_LeagueHQ/scripts.pory"
	lockall
# 197 "data/maps/NewHope_LeagueHQ/scripts.pory"
	faceplayer
# 198 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_NPC3_Text_0, MSGBOX_AUTOCLOSE
# 199 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_NPC3_Text_1, MSGBOX_AUTOCLOSE
# 200 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_NPC3_Text_2, MSGBOX_AUTOCLOSE
# 201 "data/maps/NewHope_LeagueHQ/scripts.pory"
	releaseall
	end


NewHope_LeagueHQ_EventScript_Ronan::
# 206 "data/maps/NewHope_LeagueHQ/scripts.pory"
	lockall
# 207 "data/maps/NewHope_LeagueHQ/scripts.pory"
	faceplayer
# 208 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Ronan_Text_0, MSGBOX_AUTOCLOSE
# 209 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Ronan_Text_1, MSGBOX_AUTOCLOSE
# 210 "data/maps/NewHope_LeagueHQ/scripts.pory"
	msgbox NewHope_LeagueHQ_EventScript_Ronan_Text_2, MSGBOX_AUTOCLOSE
# 211 "data/maps/NewHope_LeagueHQ/scripts.pory"
	releaseall
	end


NewHope_LeagueHQ_Trigger_BlockPath_Text_0:
# 7 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "RECEPTIONIST: That area is restricted!$"

NewHope_LeagueHQ_EventScript_Registration_Text_0:
# 21 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "RECEPTIONIST: Welcome to the Valora\nPOKEMON League Heaquarters.$"

NewHope_LeagueHQ_EventScript_Registration_Text_1:
# 23 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Are you here to register for the League?$"

NewHope_LeagueHQ_EventScript_Registration_Text_2:
# 26 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Excellent!$"

NewHope_LeagueHQ_EventScript_Registration_Text_3:
# 27 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Let's start with your name.$"

NewHope_LeagueHQ_EventScript_Registration_Text_4:
# 28 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "{PLAYER}? Okay, great.$"

NewHope_LeagueHQ_EventScript_Registration_Text_5:
# 29 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "As a reminder, all trainers must be\nat least 18 to register for the League.$"

NewHope_LeagueHQ_EventScript_Registration_Text_6:
# 30 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Let me enter in your information...$"

NewHope_LeagueHQ_EventScript_Registration_Text_7:
# 32 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "You're all set! Let me see if the\nChairman is available. He like to meet\pthe new trainers.$"

NewHope_LeagueHQ_EventScript_Registration_Text_8:
# 44 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Maybe another time.$"

NewHope_LeagueHQ_EventScript_Registration_Text_9:
# 49 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "You are already registered.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_0:
# 57 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "CHAIRMAN: Ah, a new challenger!\pWelcome to the League.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_1:
# 58 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "It’s always an honor to greet aspiring\ntrainers at the start of their journey.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_2:
# 60 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Here in the Valora Region, we use a\nunique system for the Gym Challenge.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_3:
# 61 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Each Gym is led not by one Leader, but by\ntwo.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_4:
# 62 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "To claim a badge, you must defeat both\nLeaders of that Gym.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_5:
# 63 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Only then will their badge be officially\nrecognized by the League.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_6:
# 65 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "But the Gym Challenge isn’t the only path\nfor ambitious trainers.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_7:
# 66 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "The League also hosts a circuit of local\ntournaments, where trainers test their\pskills outside of traditional Gyms.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_8:
# 67 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "And beyond that…$"

NewHope_LeagueHQ_EventScript_Chairman_Text_9:
# 68 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "The upcoming World Championships will\nsoon bring challengers from every region.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_10:
# 69 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Perhaps, in time, you will be among them.$"

NewHope_LeagueHQ_EventScript_Chairman_Text_11:
# 71 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Before you begin, I’d like you to meet one\nof our partners from Prometheus Tech.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_0:
# 101 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "PT REP: Greetings, trainer. I represent\nPrometheus Tech.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_1:
# 102 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "We proudly support new challengers with\nessential tools and items.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_2:
# 103 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Be sure to stop by our campus south of\ntown.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_3:
# 104 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "We have a bunch of technologies and new\nadvancements to help trainers.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_4:
# 105 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Here, please accept these to aid your\nGym Challenge.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_5:
# 108 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "That TM contains Protect, an\nincredibly helpful move when battling.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_6:
# 109 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "It's reusable so you can teach it to\nwhoever you want.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_7:
# 111 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "And, of course, some items!$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_8:
# 113 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "The Amulet Coin will double the money\nyou earn from battles.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_9:
# 115 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "The Lucky Egg earns your POKEMON\nextra experience.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_10:
# 117 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Eviolite helps strengthen a POKEMON\nwho can still evolve.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_11:
# 119 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Leftovers is essential for battling.\nIt slowly gives your POKEMON HP back.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_12:
# 122 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Ability capsulses and patches can\nchange a POKEMON's abilities.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_13:
# 124 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Those Rare Candies will give you\nexperience quickly.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_14:
# 127 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "You need some balls, of course.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_15:
# 129 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "But most importantly: a Tera Orb!\pThis will allow you to terastilize your\nPOKEMON!$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_16:
# 133 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Terastilizing your POKEMON changes their\ntype without removing the attack\pbenefits of any original types.$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_17:
# 136 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Hopefully these will help you get\ngoing!$"

NewHope_LeagueHQ_EventScript_PrometheusRep_Text_18:
# 137 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Goodbye for now!$"

NewHope_LeagueHQ_EventScript_NPC1_Text_0:
# 181 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "My father died in the war, I swore\nI'd become the best teainer in\pValora in case I ever get a chance\nto avenge him.$"

NewHope_LeagueHQ_EventScript_NPC2_Text_0:
# 188 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "...$"

NewHope_LeagueHQ_EventScript_NPC2_Text_1:
# 190 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "How do I still not have enough points?$"

NewHope_LeagueHQ_EventScript_NPC3_Text_0:
# 198 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "My daddy is a great trainer.$"

NewHope_LeagueHQ_EventScript_NPC3_Text_1:
# 199 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "He's going to be the Champion soon.$"

NewHope_LeagueHQ_EventScript_NPC3_Text_2:
# 200 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "Maybe someday you'll lose to him!$"

NewHope_LeagueHQ_EventScript_Ronan_Text_0:
# 208 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "RONAN: Well, hello there!$"

NewHope_LeagueHQ_EventScript_Ronan_Text_1:
# 209 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "The name is RONAN, and I'm one of the\nleaders of the New Hope Gym.$"

NewHope_LeagueHQ_EventScript_Ronan_Text_2:
# 210 "data/maps/NewHope_LeagueHQ/scripts.pory"
	.string "I hope to see you someday on the\nBattle Floor!$"
