BattleGrotto_B4F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_B4F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_TRANSITION, BattleGrotto_B4F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BattleGrotto_B4F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_B1F_EventScript_PlayerFaceNorth
	end

BattleGrotto_B4F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	cleartrainerflag TRAINER_ARATAKA
	cleartrainerflag TRAINER_HANS
	cleartrainerflag TRAINER_ASTRID
	cleartrainerflag TRAINER_KEITO
	cleartrainerflag TRAINER_YURI
	cleartrainerflag TRAINER_VINCENT
	cleartrainerflag TRAINER_TAMARA
	end


BattleGrotto_B4F_EventScript_StartAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B4F_EventScript_StartAttendant_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BattleGrotto_B4F_EventScript_StartAttendant_1
	msgbox BattleGrotto_B4F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	return

BattleGrotto_B4F_EventScript_StartAttendant_1:
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return


BattleGrotto_B4F_EventScript_EndAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B4F_EventScript_EndAttendant_Text_0, MSGBOX_DEFAULT
	goto_if_unset FLAG_GROTTO_FLOOR_4_COMPLETE, BattleGrotto_B4F_EventScript_EndAttendant_2
BattleGrotto_B4F_EventScript_EndAttendant_1:
	msgbox BattleGrotto_B4F_EventScript_EndAttendant_Text_2, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return

BattleGrotto_B4F_EventScript_EndAttendant_2:
	msgbox BattleGrotto_B4F_EventScript_EndAttendant_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_DRAGON_SCALE
	setflag FLAG_GROTTO_FLOOR_4_COMPLETE
	goto BattleGrotto_B4F_EventScript_EndAttendant_1


BattleGrotto_B4F_EventScript_Arataka::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_ARATAKA, 0, BattleGrotto_B4F_EventScript_Arataka_Text_0, BattleGrotto_B4F_EventScript_Arataka_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B4F_EventScript_Arataka_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Hans::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_HANS, 0, BattleGrotto_B4F_EventScript_Hans_Text_0, BattleGrotto_B4F_EventScript_Hans_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B4F_EventScript_Hans_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Astrid::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_ASTRID, 0, BattleGrotto_B4F_EventScript_Astrid_Text_0, BattleGrotto_B4F_EventScript_Astrid_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B4F_EventScript_Astrid_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Keito::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_KEITO, 0, BattleGrotto_B4F_EventScript_Keito_Text_0, BattleGrotto_B4F_EventScript_Keito_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B4F_EventScript_Keito_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Yuri::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_YURI, 0, BattleGrotto_B4F_EventScript_Yuri_Text_0, BattleGrotto_B4F_EventScript_Yuri_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B4F_EventScript_Yuri_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Vincent::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_VINCENT, 0, BattleGrotto_B4F_EventScript_Vincent_Text_0, BattleGrotto_B4F_EventScript_Vincent_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B4F_EventScript_Vincent_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Tamara::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_TAMARA, 0, BattleGrotto_B4F_EventScript_Tamara_Text_0, BattleGrotto_B4F_EventScript_Tamara_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B4F_EventScript_Tamara_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_StartAttendant_Text_0:
	.string "You're currently on sublevel 4.\p"
	.string "Would you like to quit and\n"
	.string "return to the lobby?$"

BattleGrotto_B4F_EventScript_StartAttendant_Text_1:
	.string "Good luck!$"

BattleGrotto_B4F_EventScript_EndAttendant_Text_0:
	.string "Congratulations on defeating\n"
	.string "all TRAINERS on the floor!$"

BattleGrotto_B4F_EventScript_EndAttendant_Text_1:
	.string "For clearing sublevel 4 for the first\n"
	.string "time, here is a special prize.$"

BattleGrotto_B4F_EventScript_EndAttendant_Text_2:
	.string "You've completed all the sublevels that\n"
	.string "are currently available.\p"
	.string "I will return you to the lobby.$"

BattleGrotto_B4F_EventScript_Arataka_Text_0:
	.string "Join me for non-stop training!$"

BattleGrotto_B4F_EventScript_Arataka_Text_1:
	.string "Uh… break time?$"

BattleGrotto_B4F_EventScript_Arataka_Text_2:
	.string "I have been training here for 72\n"
	.string "straight hours.$"

BattleGrotto_B4F_EventScript_Hans_Text_0:
	.string "It's hard to stretch our wings down\n"
	.string "here.$"

BattleGrotto_B4F_EventScript_Hans_Text_1:
	.string "Grounded!$"

BattleGrotto_B4F_EventScript_Hans_Text_2:
	.string "At least this chamber is a bit spacious.\n"
	.string "I can let my birds fly!$"

BattleGrotto_B4F_EventScript_Astrid_Text_0:
	.string "I've seen your future!$"

BattleGrotto_B4F_EventScript_Astrid_Text_1:
	.string "This wasn't meant to be!$"

BattleGrotto_B4F_EventScript_Astrid_Text_2:
	.string "Only you can forge your own destiny.\n"
	.string "Remember that.$"

BattleGrotto_B4F_EventScript_Keito_Text_0:
	.string "Could I bother you for a battle?$"

BattleGrotto_B4F_EventScript_Keito_Text_1:
	.string "Well done.$"

BattleGrotto_B4F_EventScript_Keito_Text_2:
	.string "Please do visit again sometime.$"

BattleGrotto_B4F_EventScript_Yuri_Text_0:
	.string "The secrets of the universe…!$"

BattleGrotto_B4F_EventScript_Yuri_Text_1:
	.string "Eureka!$"

BattleGrotto_B4F_EventScript_Yuri_Text_2:
	.string "There's much to be discovered in this\n"
	.string "place, I'm sure of it…$"

BattleGrotto_B4F_EventScript_Vincent_Text_0:
	.string "Face the serpent's wrath!$"

BattleGrotto_B4F_EventScript_Vincent_Text_1:
	.string "Impossible…!$"

BattleGrotto_B4F_EventScript_Vincent_Text_2:
	.string "Mark my words, if you underestimate the\n"
	.string "power of DRAGONS, it will be your last\l"
	.string "mistake.$"

BattleGrotto_B4F_EventScript_Tamara_Text_0:
	.string "Ah, a challenger!\p"
	.string "Well, what are you waiting for?\n"
	.string "Don't disappoint me!$"

BattleGrotto_B4F_EventScript_Tamara_Text_1:
	.string "Hohoho! Wonderful…$"

BattleGrotto_B4F_EventScript_Tamara_Text_2:
	.string "You were a worthy foe. Keep climbing\n"
	.string "higher!$"
