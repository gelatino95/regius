BattleGrotto_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_B2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_TRANSITION, BattleGrotto_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BattleGrotto_B2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_B1F_EventScript_PlayerFaceNorth
	end

BattleGrotto_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	cleartrainerflag TRAINER_WARREN
	cleartrainerflag TRAINER_MARY
	cleartrainerflag TRAINER_ALEXIA
	cleartrainerflag TRAINER_RANDY
	cleartrainerflag TRAINER_ABDUL
	cleartrainerflag TRAINER_KEIRA
	cleartrainerflag TRAINER_GILLIGAN
	end


BattleGrotto_B2F_EventScript_StartAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B2F_EventScript_StartAttendant_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BattleGrotto_B2F_EventScript_StartAttendant_1
	msgbox BattleGrotto_B2F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	return

BattleGrotto_B2F_EventScript_StartAttendant_1:
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return


BattleGrotto_B2F_EventScript_EndAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B2F_EventScript_EndAttendant_Text_0, MSGBOX_DEFAULT
	goto_if_unset FLAG_GROTTO_FLOOR_2_COMPLETE, BattleGrotto_B2F_EventScript_EndAttendant_2
BattleGrotto_B2F_EventScript_EndAttendant_1:
	msgbox BattleGrotto_B2F_EventScript_EndAttendant_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BattleGrotto_B2F_EventScript_EndAttendant_5
	msgbox BattleGrotto_B2F_EventScript_EndAttendant_Text_3, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return

BattleGrotto_B2F_EventScript_EndAttendant_2:
	msgbox BattleGrotto_B2F_EventScript_EndAttendant_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_MACHO_BRACE
	setflag FLAG_GROTTO_FLOOR_2_COMPLETE
	goto BattleGrotto_B2F_EventScript_EndAttendant_1

BattleGrotto_B2F_EventScript_EndAttendant_5:
	msgbox BattleGrotto_B2F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_B3F, 13, 36
	end


BattleGrotto_B2F_EventScript_Warren::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_WARREN, 0, BattleGrotto_B2F_EventScript_Warren_Text_0, BattleGrotto_B2F_EventScript_Warren_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B2F_EventScript_Warren_Text_2, MSGBOX_NPC
	return


BattleGrotto_B2F_EventScript_Mary::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_MARY, 0, BattleGrotto_B2F_EventScript_Mary_Text_0, BattleGrotto_B2F_EventScript_Mary_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B2F_EventScript_Mary_Text_2, MSGBOX_NPC
	return


BattleGrotto_B2F_EventScript_Alexia::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_ALEXIA, 0, BattleGrotto_B2F_EventScript_Alexia_Text_0, BattleGrotto_B2F_EventScript_Alexia_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B2F_EventScript_Alexia_Text_2, MSGBOX_NPC
	return


BattleGrotto_B2F_EventScript_Randy::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_RANDY, 0, BattleGrotto_B2F_EventScript_Randy_Text_0, BattleGrotto_B2F_EventScript_Randy_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B2F_EventScript_Randy_Text_2, MSGBOX_NPC
	return


BattleGrotto_B2F_EventScript_Abdul::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_ABDUL, 0, BattleGrotto_B2F_EventScript_Abdul_Text_0, BattleGrotto_B2F_EventScript_Abdul_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B2F_EventScript_Abdul_Text_2, MSGBOX_NPC
	return


BattleGrotto_B2F_EventScript_Keira::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_KEIRA, 0, BattleGrotto_B2F_EventScript_Keira_Text_0, BattleGrotto_B2F_EventScript_Keira_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B2F_EventScript_Keira_Text_2, MSGBOX_NPC
	return


BattleGrotto_B2F_EventScript_Gilligan::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_GILLIGAN, 0, BattleGrotto_B2F_EventScript_Gilligan_Text_0, BattleGrotto_B2F_EventScript_Gilligan_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B2F_EventScript_Gilligan_Text_2, MSGBOX_NPC
	return


BattleGrotto_B2F_EventScript_StartAttendant_Text_0:
	.string "You're currently on sublevel 2.\p"
	.string "Would you like to quit and\n"
	.string "return to the lobby?$"

BattleGrotto_B2F_EventScript_StartAttendant_Text_1:
	.string "Good luck!$"

BattleGrotto_B2F_EventScript_EndAttendant_Text_0:
	.string "Congratulations on defeating\n"
	.string "all TRAINERS on the floor!$"

BattleGrotto_B2F_EventScript_EndAttendant_Text_1:
	.string "For clearing sublevel 2 for the first\n"
	.string "time, here is a special prize.$"

BattleGrotto_B2F_EventScript_EndAttendant_Text_2:
	.string "Would you like to move on to\n"
	.string "sublevel 3?$"

BattleGrotto_B2F_EventScript_EndAttendant_Text_3:
	.string "Okay, I'll return you to the lobby. Thank\n"
	.string "you for playing!$"

BattleGrotto_B2F_EventScript_Warren_Text_0:
	.string "Welcome to sublevel 2!\n"
	.string "Now it's serious!$"

BattleGrotto_B2F_EventScript_Warren_Text_1:
	.string "Argh!$"

BattleGrotto_B2F_EventScript_Warren_Text_2:
	.string "You're gonna go far, I can tell.$"

BattleGrotto_B2F_EventScript_Mary_Text_0:
	.string "My shoes are getting wet…$"

BattleGrotto_B2F_EventScript_Mary_Text_1:
	.string "Oh, come on…$"

BattleGrotto_B2F_EventScript_Mary_Text_2:
	.string "The sooner I get out of this damp cave,\n"
	.string "the better.$"

BattleGrotto_B2F_EventScript_Alexia_Text_0:
	.string "Deeper… deeper…$"

BattleGrotto_B2F_EventScript_Alexia_Text_1:
	.string "Too deep!$"

BattleGrotto_B2F_EventScript_Alexia_Text_2:
	.string "What lies at the end, I wonder…$"

BattleGrotto_B2F_EventScript_Randy_Text_0:
	.string "Go on, show me what you're made of!$"

BattleGrotto_B2F_EventScript_Randy_Text_1:
	.string "Fascinating!$"

BattleGrotto_B2F_EventScript_Randy_Text_2:
	.string "Too bad there are no wild POKéMON\n"
	.string "around here, right?$"

BattleGrotto_B2F_EventScript_Abdul_Text_0:
	.string "Hm? We are to do battle?$"

BattleGrotto_B2F_EventScript_Abdul_Text_1:
	.string "Aiyeee!!!$"

BattleGrotto_B2F_EventScript_Abdul_Text_2:
	.string "So I've been bested! It can't be helped.$"

BattleGrotto_B2F_EventScript_Keira_Text_0:
	.string "Getting tired yet?$"

BattleGrotto_B2F_EventScript_Keira_Text_1:
	.string "Hmph!$"

BattleGrotto_B2F_EventScript_Keira_Text_2:
	.string "Don't give up hope yet!$"

BattleGrotto_B2F_EventScript_Gilligan_Text_0:
	.string "So you've made it!\n"
	.string "I'm very much looking forward to our\l"
	.string "bout.$"

BattleGrotto_B2F_EventScript_Gilligan_Text_1:
	.string "Confound it all!$"

BattleGrotto_B2F_EventScript_Gilligan_Text_2:
	.string "Yes, you did well. Now move on, and spare\n"
	.string "me my dignity!$"
