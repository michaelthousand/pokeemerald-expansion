Prometheus_Tech_Campus_MapScripts::
	.byte 0


PT_HQ_Door_Status::
# 6 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	compare PT_HQ_STATUS, 1
	goto_if_eq PT_HQ_Door_Status_2
PT_HQ_Door_Status_1:
	end

PT_HQ_Door_Status_2:
# 7 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	lockall
# 8 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	msgbox PT_HQ_Door_Status_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	closemessage
# 10 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 11 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	waitmovement 0
# 12 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	releaseall
	goto PT_HQ_Door_Status_1


# 17 "data/maps/Prometheus_Tech_Campus/scripts.pory"
StopPlayer:
# 18 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	walk_down
	step_end

PT_HQ_Door_Status_Text_0:
# 8 "data/maps/Prometheus_Tech_Campus/scripts.pory"
	.string "The doors appear to be locked.$"
