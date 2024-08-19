BattleGrotto_B5F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_B5F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleGrotto_B5F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_B5F_EventScript_PlayerFaceNorth
	end


BattleGrotto_B5F_EventScript_PlayerFaceNorth::
	setvar VAR_TEMP_1, 1
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	compare VAR_TEMP_3, 44
	goto_if_eq BattleGrotto_B5F_EventScript_PlayerFaceNorth_2
BattleGrotto_B5F_EventScript_PlayerFaceNorth_1:
	end

BattleGrotto_B5F_EventScript_PlayerFaceNorth_2:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	cleartrainerflag TRAINER_HELENA
	cleartrainerflag TRAINER_FITZGERALD
	cleartrainerflag TRAINER_MOLLIE
	cleartrainerflag TRAINER_PRIYA
	cleartrainerflag TRAINER_TOBY
	cleartrainerflag TRAINER_RADOVAN
	cleartrainerflag TRAINER_MIKA
	goto BattleGrotto_B5F_EventScript_PlayerFaceNorth_1


BattleGrotto_B5F_EventScript_StartAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B5F_EventScript_StartAttendant_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BattleGrotto_B5F_EventScript_StartAttendant_1
	msgbox BattleGrotto_B5F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	return

BattleGrotto_B5F_EventScript_StartAttendant_1:
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return


BattleGrotto_B5F_EventScript_EndAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B5F_EventScript_EndAttendant_Text_0, MSGBOX_DEFAULT
	goto_if_unset FLAG_GROTTO_FLOOR_5_COMPLETE, BattleGrotto_B5F_EventScript_EndAttendant_2
BattleGrotto_B5F_EventScript_EndAttendant_1:
	msgbox BattleGrotto_B5F_EventScript_EndAttendant_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BattleGrotto_B5F_EventScript_EndAttendant_5
	msgbox BattleGrotto_B5F_EventScript_EndAttendant_Text_3, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return

BattleGrotto_B5F_EventScript_EndAttendant_2:
	msgbox BattleGrotto_B5F_EventScript_EndAttendant_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_TM29
	setflag FLAG_GROTTO_FLOOR_5_COMPLETE
	goto BattleGrotto_B5F_EventScript_EndAttendant_1

BattleGrotto_B5F_EventScript_EndAttendant_5:
	msgbox BattleGrotto_B5F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_B6F, 15, 36
	end


BattleGrotto_B5F_EventScript_StartAttendant_Text_0:
	.string "You're currently on sublevel 5.\p"
	.string "Would you like to quit and\n"
	.string "return to the lobby?$"

BattleGrotto_B5F_EventScript_StartAttendant_Text_1:
	.string "Good luck!$"

BattleGrotto_B5F_EventScript_EndAttendant_Text_0:
	.string "Congratulations on defeating\n"
	.string "all TRAINERS on the floor!$"

BattleGrotto_B5F_EventScript_EndAttendant_Text_1:
	.string "For clearing sublevel 5 for the first\n"
	.string "time, here is a special prize.$"

BattleGrotto_B5F_EventScript_EndAttendant_Text_2:
	.string "Would you like to move on to\n"
	.string "sublevel 6?$"

BattleGrotto_B5F_EventScript_EndAttendant_Text_3:
	.string "Okay, I'll return you to the lobby. Thank\n"
	.string "you for playing!$"
