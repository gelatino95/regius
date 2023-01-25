BattleGrotto_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleGrotto_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_B1F_EventScript_PlayerFaceNorth
	end


BattleGrotto_B1F_EventScript_PlayerFaceNorth::
	setvar VAR_TEMP_1, 1
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


BattleGrotto_B1F_EventScript_StartAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B1F_EventScript_StartAttendant_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BattleGrotto_B1F_EventScript_StartAttendant_1
	msgbox BattleGrotto_B1F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	return

BattleGrotto_B1F_EventScript_StartAttendant_1:
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return


BattleGrotto_B1F_EventScript_EndAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B1F_EventScript_EndAttendant_Text_0, MSGBOX_DEFAULT
	buffernumberstring STR_VAR_1, 7
	setvar VAR_0x8004, 7
	special GiveFrontierBattlePoints
	msgbox BattleGrotto_B1F_EventScript_EndAttendant_Text_1, MSGBOX_GETPOINTS
	waitmessage
	closemessage
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return


BattleGrotto_B1F_EventScript_Declan::
	trainerbattle_detect TRAINER_DECLAN, BattleGrotto_B1F_EventScript_Declan_Text_0, BattleGrotto_B1F_EventScript_Declan_Text_1
	msgbox BattleGrotto_B1F_EventScript_Declan_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_StartAttendant_Text_0:
	.string "Would you like to quit and\n"
	.string "return to the lobby?$"

BattleGrotto_B1F_EventScript_StartAttendant_Text_1:
	.string "Good luck!$"

BattleGrotto_B1F_EventScript_EndAttendant_Text_0:
	.string "Congratulations on defeating\n"
	.string "all TRAINERs on the floor!\l"
	.string "Here is your reward.$"

BattleGrotto_B1F_EventScript_EndAttendant_Text_1:
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Points.$"

BattleGrotto_B1F_EventScript_Declan_Text_0:
	.string "You won't get past me\n"
	.string "that easily!$"

BattleGrotto_B1F_EventScript_Declan_Text_1:
	.string "Drat...$"

BattleGrotto_B1F_EventScript_Declan_Text_2:
	.string "Well fought, TRAINER.$"
