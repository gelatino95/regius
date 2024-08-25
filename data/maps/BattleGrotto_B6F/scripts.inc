BattleGrotto_B6F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_B6F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_TRANSITION, BattleGrotto_B6F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BattleGrotto_B6F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_B1F_EventScript_PlayerFaceNorth
	end

BattleGrotto_B6F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	cleartrainerflag TRAINER_LUCIAN
	cleartrainerflag TRAINER_ADELAIDE
	cleartrainerflag TRAINER_MAGNUS
	cleartrainerflag TRAINER_OLIVIA
	cleartrainerflag TRAINER_LILLIE
	cleartrainerflag TRAINER_HENDRICK
	cleartrainerflag TRAINER_AURELIA
	end


BattleGrotto_B6F_EventScript_StartAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B6F_EventScript_StartAttendant_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BattleGrotto_B6F_EventScript_StartAttendant_1
	msgbox BattleGrotto_B6F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	return

BattleGrotto_B6F_EventScript_StartAttendant_1:
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return


BattleGrotto_B6F_EventScript_EndAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B6F_EventScript_EndAttendant_Text_0, MSGBOX_DEFAULT
	goto_if_unset FLAG_GROTTO_FLOOR_6_COMPLETE, BattleGrotto_B6F_EventScript_EndAttendant_2
BattleGrotto_B6F_EventScript_EndAttendant_1:
	msgbox BattleGrotto_B6F_EventScript_EndAttendant_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BattleGrotto_B6F_EventScript_EndAttendant_5
	msgbox BattleGrotto_B6F_EventScript_EndAttendant_Text_3, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return

BattleGrotto_B6F_EventScript_EndAttendant_2:
	msgbox BattleGrotto_B6F_EventScript_EndAttendant_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_TM06
	setflag FLAG_GROTTO_FLOOR_6_COMPLETE
	goto BattleGrotto_B6F_EventScript_EndAttendant_1

BattleGrotto_B6F_EventScript_EndAttendant_5:
	msgbox BattleGrotto_B6F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_B7F, 7, 34
	end


BattleGrotto_B6F_EventScript_Lucian::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_LUCIAN, 0, BattleGrotto_B6F_EventScript_Lucian_Text_0, BattleGrotto_B6F_EventScript_Lucian_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B6F_EventScript_Lucian_Text_2, MSGBOX_NPC
	return


BattleGrotto_B6F_EventScript_Adelaide::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_ADELAIDE, 0, BattleGrotto_B6F_EventScript_Adelaide_Text_0, BattleGrotto_B6F_EventScript_Adelaide_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B6F_EventScript_Adelaide_Text_2, MSGBOX_NPC
	return


BattleGrotto_B6F_EventScript_Magnus::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_MAGNUS, 0, BattleGrotto_B6F_EventScript_Magnus_Text_0, BattleGrotto_B6F_EventScript_Magnus_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B6F_EventScript_Magnus_Text_2, MSGBOX_NPC
	return


BattleGrotto_B6F_EventScript_Olivia::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_OLIVIA, 0, BattleGrotto_B6F_EventScript_Olivia_Text_0, BattleGrotto_B6F_EventScript_Olivia_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B6F_EventScript_Olivia_Text_2, MSGBOX_NPC
	return


BattleGrotto_B6F_EventScript_Lillie::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_LILLIE, 0, BattleGrotto_B6F_EventScript_Lillie_Text_0, BattleGrotto_B6F_EventScript_Lillie_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B6F_EventScript_Lillie_Text_2, MSGBOX_NPC
	return


BattleGrotto_B6F_EventScript_Hendrick::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_HENDRICK, 0, BattleGrotto_B6F_EventScript_Hendrick_Text_0, BattleGrotto_B6F_EventScript_Hendrick_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B6F_EventScript_Hendrick_Text_2, MSGBOX_NPC
	return


BattleGrotto_B6F_EventScript_Aurelia::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_AURELIA, 0, BattleGrotto_B6F_EventScript_Aurelia_Text_0, BattleGrotto_B6F_EventScript_Aurelia_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B6F_EventScript_Aurelia_Text_2, MSGBOX_NPC
	return


BattleGrotto_B6F_EventScript_StartAttendant_Text_0:
	.string "You're currently on sublevel 6.\p"
	.string "Would you like to quit and\n"
	.string "return to the lobby?$"

BattleGrotto_B6F_EventScript_StartAttendant_Text_1:
	.string "Good luck!$"

BattleGrotto_B6F_EventScript_EndAttendant_Text_0:
	.string "Congratulations on defeating\n"
	.string "all TRAINERS on the floor!$"

BattleGrotto_B6F_EventScript_EndAttendant_Text_1:
	.string "For clearing sublevel 6 for the first\n"
	.string "time, here is a special prize.$"

BattleGrotto_B6F_EventScript_EndAttendant_Text_2:
	.string "Would you like to move on to\n"
	.string "sublevel 7?$"

BattleGrotto_B6F_EventScript_EndAttendant_Text_3:
	.string "Okay, I'll return you to the lobby. Thank\n"
	.string "you for playing!$"

BattleGrotto_B6F_EventScript_Lucian_Text_0:
	.string "You've made it quite far.\n"
	.string "Are you sure you're prepared?$"

BattleGrotto_B6F_EventScript_Lucian_Text_1:
	.string "You're prepared.$"

BattleGrotto_B6F_EventScript_Lucian_Text_2:
	.string "It's oddly peaceful this far down.$"

BattleGrotto_B6F_EventScript_Adelaide_Text_0:
	.string "My poor POKéMON just can't find a\n"
	.string "worthy challenge.$"

BattleGrotto_B6F_EventScript_Adelaide_Text_1:
	.string "That will do!$"

BattleGrotto_B6F_EventScript_Adelaide_Text_2:
	.string "This is a lovely place to find strong\n"
	.string "TRAINERS, don't you think?$"

BattleGrotto_B6F_EventScript_Magnus_Text_0:
	.string "Hey, you look chilly! I can fix that!$"

BattleGrotto_B6F_EventScript_Magnus_Text_1:
	.string "Ice cold!$"

BattleGrotto_B6F_EventScript_Magnus_Text_2:
	.string "Keep on moving and you'll be fine.$"

BattleGrotto_B6F_EventScript_Olivia_Text_0:
	.string "No! S… stay back!$"

BattleGrotto_B6F_EventScript_Olivia_Text_1:
	.string "I misunderstood…$"

BattleGrotto_B6F_EventScript_Olivia_Text_2:
	.string "I've seen your future. Your power is\n"
	.string "immense…$"

BattleGrotto_B6F_EventScript_Lillie_Text_0:
	.string "Don't tell me you're giving up already?$"

BattleGrotto_B6F_EventScript_Lillie_Text_1:
	.string "Well, okay then!$"

BattleGrotto_B6F_EventScript_Lillie_Text_2:
	.string "You don't seem like the quitting type.\n"
	.string "Carry on.$"

BattleGrotto_B6F_EventScript_Hendrick_Text_0:
	.string "So… c-c-cold…$"

BattleGrotto_B6F_EventScript_Hendrick_Text_1:
	.string "Brr…$"

BattleGrotto_B6F_EventScript_Hendrick_Text_2:
	.string "I really should have come better\n"
	.string "dressed, huh?$"

BattleGrotto_B6F_EventScript_Aurelia_Text_0:
	.string "…\p"
	.string "You don't seem bothered by the cold…\p"
	.string "…\p"
	.string "You're just like me.\p"
	.string "…\p"
	.string "Show me what you've got.$"

BattleGrotto_B6F_EventScript_Aurelia_Text_1:
	.string "Ah…$"

BattleGrotto_B6F_EventScript_Aurelia_Text_2:
	.string "…\p"
	.string "Thank you.\n"
	.string "You can move on.$"
