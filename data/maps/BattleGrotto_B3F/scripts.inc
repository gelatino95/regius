BattleGrotto_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_B3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_TRANSITION, BattleGrotto_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BattleGrotto_B3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_B1F_EventScript_PlayerFaceNorth
	end

BattleGrotto_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	cleartrainerflag TRAINER_BOONE
	cleartrainerflag TRAINER_HOPE
	cleartrainerflag TRAINER_LINNEUS
	cleartrainerflag TRAINER_GRANT
	cleartrainerflag TRAINER_NAM
	cleartrainerflag TRAINER_JULIE
	cleartrainerflag TRAINER_CASADY
	end


BattleGrotto_B3F_EventScript_StartAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B3F_EventScript_StartAttendant_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BattleGrotto_B3F_EventScript_StartAttendant_1
	msgbox BattleGrotto_B3F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	return

BattleGrotto_B3F_EventScript_StartAttendant_1:
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return


BattleGrotto_B3F_EventScript_EndAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B3F_EventScript_EndAttendant_Text_0, MSGBOX_DEFAULT
	goto_if_unset FLAG_GROTTO_FLOOR_3_COMPLETE, BattleGrotto_B3F_EventScript_EndAttendant_2
BattleGrotto_B3F_EventScript_EndAttendant_1:
	msgbox BattleGrotto_B3F_EventScript_EndAttendant_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BattleGrotto_B3F_EventScript_EndAttendant_5
	msgbox BattleGrotto_B3F_EventScript_EndAttendant_Text_3, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return

BattleGrotto_B3F_EventScript_EndAttendant_2:
	msgbox BattleGrotto_B3F_EventScript_EndAttendant_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
	setflag FLAG_GROTTO_FLOOR_3_COMPLETE
	goto BattleGrotto_B3F_EventScript_EndAttendant_1

BattleGrotto_B3F_EventScript_EndAttendant_5:
	msgbox BattleGrotto_B3F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_B4F, 11, 36
	end


BattleGrotto_B3F_EventScript_Boone::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_BOONE, 0, BattleGrotto_B3F_EventScript_Boone_Text_0, BattleGrotto_B3F_EventScript_Boone_Text_1, BattleGrotto_B3F_EventScript_PostBattle
	msgbox BattleGrotto_B3F_EventScript_Boone_Text_2, MSGBOX_NPC
	return


BattleGrotto_B3F_EventScript_Hope::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_HOPE, 0, BattleGrotto_B3F_EventScript_Hope_Text_0, BattleGrotto_B3F_EventScript_Hope_Text_1, BattleGrotto_B3F_EventScript_PostBattle
	msgbox BattleGrotto_B3F_EventScript_Hope_Text_2, MSGBOX_NPC
	return


BattleGrotto_B3F_EventScript_Linneus::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_LINNEUS, 0, BattleGrotto_B3F_EventScript_Linneus_Text_0, BattleGrotto_B3F_EventScript_Linneus_Text_1, BattleGrotto_B3F_EventScript_PostBattle
	msgbox BattleGrotto_B3F_EventScript_Linneus_Text_2, MSGBOX_NPC
	return


BattleGrotto_B3F_EventScript_Grant::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_GRANT, 0, BattleGrotto_B3F_EventScript_Grant_Text_0, BattleGrotto_B3F_EventScript_Grant_Text_1, BattleGrotto_B3F_EventScript_PostBattle
	msgbox BattleGrotto_B3F_EventScript_Grant_Text_2, MSGBOX_NPC
	return


BattleGrotto_B3F_EventScript_Nam::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_NAM, 0, BattleGrotto_B3F_EventScript_Nam_Text_0, BattleGrotto_B3F_EventScript_Nam_Text_1, BattleGrotto_B3F_EventScript_PostBattle
	msgbox BattleGrotto_B3F_EventScript_Nam_Text_2, MSGBOX_NPC
	return


BattleGrotto_B3F_EventScript_Julie::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_JULIE, 0, BattleGrotto_B3F_EventScript_Julie_Text_0, BattleGrotto_B3F_EventScript_Julie_Text_1, BattleGrotto_B3F_EventScript_PostBattle
	msgbox BattleGrotto_B3F_EventScript_Julie_Text_2, MSGBOX_NPC
	return


BattleGrotto_B3F_EventScript_Casady::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_CASADY, 0, BattleGrotto_B3F_EventScript_Casady_Text_0, BattleGrotto_B3F_EventScript_Casady_Text_1, BattleGrotto_B3F_EventScript_PostBattle
	msgbox BattleGrotto_B3F_EventScript_Casady_Text_2, MSGBOX_NPC
	return


BattleGrotto_B3F_EventScript_PostBattle::
	special HealPlayerParty
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleGrotto_B3F_EventScript_PostBattle_2
	settrainerflag TRAINER_BOONE
	settrainerflag TRAINER_HOPE
	settrainerflag TRAINER_LINNEUS
	settrainerflag TRAINER_GRANT
	settrainerflag TRAINER_NAM
	settrainerflag TRAINER_JULIE
	settrainerflag TRAINER_CASADY
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	end

BattleGrotto_B3F_EventScript_PostBattle_2:
	buffernumberstring STR_VAR_1, 1
	setvar VAR_0x8004, 1
	special GiveFrontierBattlePoints
	msgbox BattleGrotto_B3F_EventScript_PostBattle_Text_0, MSGBOX_GETPOINTS
	waitmessage
	closemessage
	end


BattleGrotto_B3F_EventScript_StartAttendant_Text_0:
	.string "You're currently on sublevel 3.\p"
	.string "Would you like to quit and\n"
	.string "return to the lobby?$"

BattleGrotto_B3F_EventScript_StartAttendant_Text_1:
	.string "Good luck!$"

BattleGrotto_B3F_EventScript_EndAttendant_Text_0:
	.string "Congratulations on defeating\n"
	.string "all TRAINERS on the floor!$"

BattleGrotto_B3F_EventScript_EndAttendant_Text_1:
	.string "For clearing sublevel 3 for the first\n"
	.string "time, here is a special prize.$"

BattleGrotto_B3F_EventScript_EndAttendant_Text_2:
	.string "Would you like to move on to\n"
	.string "sublevel 4?$"

BattleGrotto_B3F_EventScript_EndAttendant_Text_3:
	.string "Okay, I'll return you to the lobby. Thank\n"
	.string "you for playing!$"

BattleGrotto_B3F_EventScript_Boone_Text_0:
	.string "We're in the middle of a truly\n"
	.string "groundbreaking expedition!$"

BattleGrotto_B3F_EventScript_Boone_Text_1:
	.string "Marvelous!$"

BattleGrotto_B3F_EventScript_Boone_Text_2:
	.string "Did you know? This tunnel has been here\n"
	.string "long before the BATTLE GROTTO set up\l"
	.string "shop.$"

BattleGrotto_B3F_EventScript_Hope_Text_0:
	.string "Is this really the safest place to\n"
	.string "battle?$"

BattleGrotto_B3F_EventScript_Hope_Text_1:
	.string "Ouch!$"

BattleGrotto_B3F_EventScript_Hope_Text_2:
	.string "If I stand here much longer, my clothes\n"
	.string "are going to get singed…$"

BattleGrotto_B3F_EventScript_Linneus_Text_0:
	.string "Outta the frying pan!$"

BattleGrotto_B3F_EventScript_Linneus_Text_1:
	.string "Into the fire!$"

BattleGrotto_B3F_EventScript_Linneus_Text_2:
	.string "Now this is my kind of place!$"

BattleGrotto_B3F_EventScript_Grant_Text_0:
	.string "The harder the path gets, the happier I\n"
	.string "am!$"

BattleGrotto_B3F_EventScript_Grant_Text_1:
	.string "Hahahaha!$"

BattleGrotto_B3F_EventScript_Grant_Text_2:
	.string "Put me in harsh conditions like this and\n"
	.string "I'm happy!$"

BattleGrotto_B3F_EventScript_Nam_Text_0:
	.string "How far are you willing to go?$"

BattleGrotto_B3F_EventScript_Nam_Text_1:
	.string "I see…$"

BattleGrotto_B3F_EventScript_Nam_Text_2:
	.string "Good luck out there.$"

BattleGrotto_B3F_EventScript_Julie_Text_0:
	.string "Show me your strategy!$"

BattleGrotto_B3F_EventScript_Julie_Text_1:
	.string "Tch…$"

BattleGrotto_B3F_EventScript_Julie_Text_2:
	.string "Well fought.$"

BattleGrotto_B3F_EventScript_Casady_Text_0:
	.string "Are you feeling the heat yet?\p"
	.string "I won't let you past this floor without\n"
	.string "a fight!$"

BattleGrotto_B3F_EventScript_Casady_Text_1:
	.string "Hot! Hot! Hot!$"

BattleGrotto_B3F_EventScript_Casady_Text_2:
	.string "You've got what it takes!$"

BattleGrotto_B3F_EventScript_PostBattle_Text_0:
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Point.$"
