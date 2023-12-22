BattleGrotto_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_TRANSITION, BattleGrotto_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BattleGrotto_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_B1F_EventScript_PlayerFaceNorth
	end

BattleGrotto_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	cleartrainerflag TRAINER_TANNER
	cleartrainerflag TRAINER_MICHAELA
	cleartrainerflag TRAINER_GARTH
	cleartrainerflag TRAINER_MILTON
	cleartrainerflag TRAINER_AUDREY
	cleartrainerflag TRAINER_HOGARTH
	cleartrainerflag TRAINER_ARIANA
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
	goto_if_unset FLAG_GROTTO_FLOOR_1_COMPLETE, BattleGrotto_B1F_EventScript_EndAttendant_2
BattleGrotto_B1F_EventScript_EndAttendant_1:
	msgbox BattleGrotto_B1F_EventScript_EndAttendant_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BattleGrotto_B1F_EventScript_EndAttendant_5
	msgbox BattleGrotto_B1F_EventScript_EndAttendant_Text_3, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return

BattleGrotto_B1F_EventScript_EndAttendant_2:
	msgbox BattleGrotto_B1F_EventScript_EndAttendant_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	setflag FLAG_GROTTO_FLOOR_1_COMPLETE
	goto BattleGrotto_B1F_EventScript_EndAttendant_1

BattleGrotto_B1F_EventScript_EndAttendant_5:
	msgbox BattleGrotto_B1F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_B2F, 11, 36
	end


BattleGrotto_B1F_EventScript_Tanner::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_TANNER, 0, BattleGrotto_B1F_EventScript_Tanner_Text_0, BattleGrotto_B1F_EventScript_Tanner_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B1F_EventScript_Tanner_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_Michaela::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_MICHAELA, 0, BattleGrotto_B1F_EventScript_Michaela_Text_0, BattleGrotto_B1F_EventScript_Michaela_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B1F_EventScript_Michaela_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_Garth::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_GARTH, 0, BattleGrotto_B1F_EventScript_Garth_Text_0, BattleGrotto_B1F_EventScript_Garth_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B1F_EventScript_Garth_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_Milton::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_MILTON, 0, BattleGrotto_B1F_EventScript_Milton_Text_0, BattleGrotto_B1F_EventScript_Milton_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B1F_EventScript_Milton_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_Audrey::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_AUDREY, 0, BattleGrotto_B1F_EventScript_Audrey_Text_0, BattleGrotto_B1F_EventScript_Audrey_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B1F_EventScript_Audrey_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_Hogarth::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_HOGARTH, 0, BattleGrotto_B1F_EventScript_Hogarth_Text_0, BattleGrotto_B1F_EventScript_Hogarth_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B1F_EventScript_Hogarth_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_Ariana::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_ARIANA, 0, BattleGrotto_B1F_EventScript_Ariana_Text_0, BattleGrotto_B1F_EventScript_Ariana_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B1F_EventScript_Ariana_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_Give1BP::
	buffernumberstring STR_VAR_1, 1
	setvar VAR_0x8004, 1
	special GiveFrontierBattlePoints
	msgbox BattleGrotto_B1F_EventScript_Give1BP_Text_0, MSGBOX_GETPOINTS
	waitmessage
	closemessage
	special HealPlayerParty
	return


BattleGrotto_B1F_EventScript_StartAttendant_Text_0:
	.string "You're currently on sublevel 1.\p"
	.string "Would you like to quit and\n"
	.string "return to the lobby?$"

BattleGrotto_B1F_EventScript_StartAttendant_Text_1:
	.string "Good luck!$"

BattleGrotto_B1F_EventScript_EndAttendant_Text_0:
	.string "Congratulations on defeating\n"
	.string "all TRAINERS on the floor!$"

BattleGrotto_B1F_EventScript_EndAttendant_Text_1:
	.string "For clearing sublevel 1 for the first\n"
	.string "time, here is a special prize.$"

BattleGrotto_B1F_EventScript_EndAttendant_Text_2:
	.string "Would you like to move on to\n"
	.string "sublevel 2?$"

BattleGrotto_B1F_EventScript_EndAttendant_Text_3:
	.string "Okay, I'll return you to the lobby. Thank\n"
	.string "you for playing!$"

BattleGrotto_B1F_EventScript_Tanner_Text_0:
	.string "You won't get past me that easily!$"

BattleGrotto_B1F_EventScript_Tanner_Text_1:
	.string "Drat…$"

BattleGrotto_B1F_EventScript_Tanner_Text_2:
	.string "Well fought, TRAINER.$"

BattleGrotto_B1F_EventScript_Michaela_Text_0:
	.string "So you're taking the challenge too?$"

BattleGrotto_B1F_EventScript_Michaela_Text_1:
	.string "Eek!$"

BattleGrotto_B1F_EventScript_Michaela_Text_2:
	.string "Good luck out there!$"

BattleGrotto_B1F_EventScript_Garth_Text_0:
	.string "Check out what I caught!$"

BattleGrotto_B1F_EventScript_Garth_Text_1:
	.string "Huh? Is that it?$"

BattleGrotto_B1F_EventScript_Garth_Text_2:
	.string "Come fight me again later, okay?$"

BattleGrotto_B1F_EventScript_Milton_Text_0:
	.string "This is a grueling challenge, is it not?$"

BattleGrotto_B1F_EventScript_Milton_Text_1:
	.string "I'm clearly outmatched.$"

BattleGrotto_B1F_EventScript_Milton_Text_2:
	.string "Yes, I think you'll do just fine.$"

BattleGrotto_B1F_EventScript_Audrey_Text_0:
	.string "Do you really want to go deeper into\n"
	.string "this scary cave?$"

BattleGrotto_B1F_EventScript_Audrey_Text_1:
	.string "Ah, wonderful.$"

BattleGrotto_B1F_EventScript_Audrey_Text_2:
	.string "Me? I'll stay right here near the\n"
	.string "entrance.$"

BattleGrotto_B1F_EventScript_Hogarth_Text_0:
	.string "Go on! Get my blood pumping!$"

BattleGrotto_B1F_EventScript_Hogarth_Text_1:
	.string "Ahahahaha!$"

BattleGrotto_B1F_EventScript_Hogarth_Text_2:
	.string "I want to see just how deep this place\n"
	.string "goes.$"

BattleGrotto_B1F_EventScript_Ariana_Text_0:
	.string "I'm the leader of this floor!\n"
	.string "Do you really think you have what it\l"
	.string "takes to get past me?$"

BattleGrotto_B1F_EventScript_Ariana_Text_1:
	.string "Hm! Well played.$"

BattleGrotto_B1F_EventScript_Ariana_Text_2:
	.string "Congratulations! Talk to the attendant\n"
	.string "just ahead to get your reward.$"

BattleGrotto_B1F_EventScript_Give1BP_Text_0:
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Point.$"
