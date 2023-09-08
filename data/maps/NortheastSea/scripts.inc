NortheastSea_MapScripts::
	.byte 0


NortheastSea_EventScript_AttackGuru::
	lock
	faceplayer
	cleartrainerflag TRAINER_MANDY
	goto_if_set FLAG_DEFEATED_ATTACK_GURU, NortheastSea_EventScript_AttackGuru_1
	msgbox NortheastSea_EventScript_AttackGuru_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NortheastSea_EventScript_AttackGuru_7
	msgbox NortheastSea_EventScript_AttackGuru_Text_3, MSGBOX_DEFAULT
	release
	end

NortheastSea_EventScript_AttackGuru_1:
	msgbox NortheastSea_EventScript_AttackGuru_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NortheastSea_EventScript_AttackGuru_4
	msgbox NortheastSea_EventScript_AttackGuru_Text_3, MSGBOX_DEFAULT
	release
	end

NortheastSea_EventScript_AttackGuru_4:
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_MANDY, 0, NortheastSea_EventScript_AttackGuru_Text_1, NortheastSea_EventScript_AttackGuru_Text_2, NortheastSea_EventScript_AttackGuru_PostBattle
	return

NortheastSea_EventScript_AttackGuru_7:
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_MANDY, 0, NortheastSea_EventScript_AttackGuru_Text_1, NortheastSea_EventScript_AttackGuru_Text_2, NortheastSea_EventScript_AttackGuru_FirstVictory
	return


NortheastSea_EventScript_AttackGuru_PostBattle::
	msgbox NortheastSea_EventScript_AttackGuru_PostBattle_Text_0, MSGBOX_DEFAULT
	release
	end


NortheastSea_EventScript_AttackGuru_FirstVictory::
	setflag FLAG_DEFEATED_ATTACK_GURU
	msgbox NortheastSea_EventScript_AttackGuru_FirstVictory_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_PROTEIN
	msgbox NortheastSea_EventScript_AttackGuru_FirstVictory_Text_1, MSGBOX_DEFAULT
	release
	end


NortheastSea_EventScript_DefenseGuru::
	lock
	faceplayer
	cleartrainerflag TRAINER_BRUTUS
	goto_if_set FLAG_DEFEATED_DEFENSE_GURU, NortheastSea_EventScript_DefenseGuru_1
	msgbox NortheastSea_EventScript_DefenseGuru_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NortheastSea_EventScript_DefenseGuru_7
	msgbox NortheastSea_EventScript_DefenseGuru_Text_3
	release
	end

NortheastSea_EventScript_DefenseGuru_1:
	msgbox NortheastSea_EventScript_DefenseGuru_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NortheastSea_EventScript_DefenseGuru_4
	msgbox NortheastSea_EventScript_DefenseGuru_Text_3
	release
	end

NortheastSea_EventScript_DefenseGuru_4:
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_BRUTUS, 0, NortheastSea_EventScript_DefenseGuru_Text_1, NortheastSea_EventScript_DefenseGuru_Text_2, NortheastSea_EventScript_DefenseGuru_PostBattle
	return

NortheastSea_EventScript_DefenseGuru_7:
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_BRUTUS, 0, NortheastSea_EventScript_DefenseGuru_Text_1, NortheastSea_EventScript_DefenseGuru_Text_2, NortheastSea_EventScript_DefenseGuru_FirstVictory
	return


NortheastSea_EventScript_DefenseGuru_PostBattle::
	msgbox NortheastSea_EventScript_DefenseGuru_PostBattle_Text_0, MSGBOX_DEFAULT
	release
	end


NortheastSea_EventScript_DefenseGuru_FirstVictory::
	setflag FLAG_DEFEATED_DEFENSE_GURU
	msgbox NortheastSea_EventScript_DefenseGuru_FirstVictory_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_IRON
	msgbox NortheastSea_EventScript_DefenseGuru_FirstVictory_Text_1, MSGBOX_DEFAULT
	release
	end


NortheastSea_EventScript_BattleGrottoSign::
	msgbox NortheastSea_EventScript_BattleGrottoSign_Text_0, MSGBOX_SIGN
	end


NortheastSea_EventScript_MinusIslandSign::
	msgbox NortheastSea_EventScript_MinusIslandSign_Text_0, MSGBOX_SIGN
	end


NortheastSea_EventScript_RouteSign::
	msgbox NortheastSea_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	return


NortheastSea_EventScript_Boy::
	msgbox NortheastSea_EventScript_Boy_Text_0, MSGBOX_NPC
	end


NortheastSea_EventScript_Ronaldo::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_RONALDO, 0, NortheastSea_EventScript_Ronaldo_Text_0, NortheastSea_EventScript_Ronaldo_Text_1
	msgbox NortheastSea_EventScript_Ronaldo_Text_2, MSGBOX_NPC
	return


NortheastSea_EventScript_Lukas::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LUKAS, 0, NortheastSea_EventScript_Lukas_Text_0, NortheastSea_EventScript_Lukas_Text_1
	msgbox NortheastSea_EventScript_Lukas_Text_2, MSGBOX_NPC
	return


NortheastSea_EventScript_Lissy::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LISSY, 0, NortheastSea_EventScript_Lissy_Text_0, NortheastSea_EventScript_Lissy_Text_1
	msgbox NortheastSea_EventScript_Lissy_Text_2, MSGBOX_NPC
	return


NortheastSea_EventScript_ItemHeartScale::
	finditem ITEM_HEART_SCALE
	end


NortheastSea_EventScript_ItemWaterStone::
	finditem ITEM_WATER_STONE
	end


NortheastSea_EventScript_AttackGuru_Text_0:
	.string "HYAAAAH! What's this?\n"
	.string "You're back for more ATTACK training?$"

NortheastSea_EventScript_AttackGuru_Text_1:
	.string "HYAAAAH! I won't hold back!$"

NortheastSea_EventScript_AttackGuru_Text_2:
	.string "Your power… it's overwhelming!$"

NortheastSea_EventScript_AttackGuru_Text_3:
	.string "HYAAAAH! Do not disturb my training!$"

NortheastSea_EventScript_AttackGuru_Text_4:
	.string "HYAAAAH! Overwhelming power! That is\n"
	.string "the key to victory! Do you not agree?\p"
	.string "TRAINER! Your POKéMON are weak!\n"
	.string "Train with me, and together we will\l"
	.string "boost their ATTACK to new levels!\p"
	.string "What do you say? Will you do ATTACK\n"
	.string "training with me?$"

NortheastSea_EventScript_AttackGuru_PostBattle_Text_0:
	.string "You're getting stronger by the day.\p"
	.string "I'll be here when you're ready to push\n"
	.string "your power to new heights!\l"
	.string "Come train with me again!$"

NortheastSea_EventScript_AttackGuru_FirstVictory_Text_0:
	.string "Your POKéMON look stronger! You are\n"
	.string "already well on the path to ultimate\l"
	.string "power.\p"
	.string "Please take this as a token of your\n"
	.string "victory.$"

NortheastSea_EventScript_AttackGuru_FirstVictory_Text_1:
	.string "I'll be here when you're ready to push\n"
	.string "your power to new heights!\l"
	.string "Come train with me again!$"

NortheastSea_EventScript_DefenseGuru_Text_0:
	.string "HUAAAAH! What's this? Have you\n"
	.string "returned for more DEFENSE training?$"

NortheastSea_EventScript_DefenseGuru_Text_1:
	.string "HUAAAAH! Just try and break through!$"

NortheastSea_EventScript_DefenseGuru_Text_2:
	.string "You proved your resilience.$"

NortheastSea_EventScript_DefenseGuru_Text_3:
	.string "HUAAAAH! Leave me to my training, then!$"

NortheastSea_EventScript_DefenseGuru_Text_4:
	.string "HUAAAAH! To be impenetrable! To shrug\n"
	.string "off any attack! Don't you see? DEFENSE\l"
	.string "is the key to true might!\p"
	.string "Your POKéMON look much too frail.\n"
	.string "Train with me, and we will toughen their\l"
	.string "DEFENSE to the max.\p"
	.string "What do you say? Will you do DEFENSE\n"
	.string "training with me?$"

NortheastSea_EventScript_DefenseGuru_PostBattle_Text_0:
	.string "Hm! Your toughness is commendable.\p"
	.string "When you are ready to boost your\n"
	.string "DEFENSE even higher, come train with me\l"
	.string "again. I will be waiting!$"

NortheastSea_EventScript_DefenseGuru_FirstVictory_Text_0:
	.string "Hm! You have proven that you know the\n"
	.string "value of DEFENSE.\p"
	.string "Take this to commemorate your victory.$"

NortheastSea_EventScript_DefenseGuru_FirstVictory_Text_1:
	.string "When you are ready to boost your\n"
	.string "DEFENSE even higher, come train with me\l"
	.string "again. I will be waiting!$"

NortheastSea_EventScript_BattleGrottoSign_Text_0:
	.string "BATTLE GROTTO\n"
	.string "Reach new depths in your training!$"

NortheastSea_EventScript_MinusIslandSign_Text_0:
	.string "MINUS ISLAND$"

NortheastSea_EventScript_RouteSign_Text_0:
	.string "NORTHEAST SEA\n"
	.string "{LEFT_ARROW} KAPOK ISLAND\l"
	.string "BATTLE GROTTO {RIGHT_ARROW}$"

NortheastSea_EventScript_Boy_Text_0:
	.string "What an oddly-shaped island. Whose idea\n"
	.string "was this?$"

NortheastSea_EventScript_Ronaldo_Text_0:
	.string "I've collected bird POKéMON from all\n"
	.string "over the region! Check them out!$"

NortheastSea_EventScript_Ronaldo_Text_1:
	.string "Crash and burn!$"

NortheastSea_EventScript_Ronaldo_Text_2:
	.string "I wonder if there are more birds out\n"
	.string "there I haven't found yet?$"

NortheastSea_EventScript_Lukas_Text_0:
	.string "Out of the way! I sense a big catch\n"
	.string "coming!$"

NortheastSea_EventScript_Lukas_Text_1:
	.string "Ack, just missed it!$"

NortheastSea_EventScript_Lukas_Text_2:
	.string "Some ocean-dwelling POKéMON can be\n"
	.string "quite fearsome.$"

NortheastSea_EventScript_Lissy_Text_0:
	.string "What a cute TRAINER! Why don't you let\n"
	.string "your POKéMON out to play?$"

NortheastSea_EventScript_Lissy_Text_1:
	.string "Adorable!$"

NortheastSea_EventScript_Lissy_Text_2:
	.string "I think every POKéMON is cute. Yes, even\n"
	.string "the big scary ones!$"
