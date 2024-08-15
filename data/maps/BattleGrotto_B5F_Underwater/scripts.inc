BattleGrotto_B5F_Underwater_MapScripts::
	.byte 0


BattleGrotto_B4F_EventScript_Helena::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_HELENA, 0, BattleGrotto_B4F_EventScript_Helena_Text_0, BattleGrotto_B4F_EventScript_Helena_Text_1, BattleGrotto_B5F_EventScript_PostBattle
	msgbox BattleGrotto_B4F_EventScript_Helena_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Fitzgerald::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_FITZGERALD, 0, BattleGrotto_B4F_EventScript_Fitzgerald_Text_0, BattleGrotto_B4F_EventScript_Fitzgerald_Text_1, BattleGrotto_B5F_EventScript_PostBattle
	msgbox BattleGrotto_B4F_EventScript_Fitzgerald_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Mollie::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_MOLLIE, 0, BattleGrotto_B4F_EventScript_Mollie_Text_0, BattleGrotto_B4F_EventScript_Mollie_Text_1, BattleGrotto_B5F_EventScript_PostBattle
	msgbox BattleGrotto_B4F_EventScript_Mollie_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Priya::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_PRIYA, 0, BattleGrotto_B4F_EventScript_Priya_Text_0, BattleGrotto_B4F_EventScript_Priya_Text_1, BattleGrotto_B5F_EventScript_PostBattle
	msgbox BattleGrotto_B4F_EventScript_Priya_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Toby::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_TOBY, 0, BattleGrotto_B4F_EventScript_Toby_Text_0, BattleGrotto_B4F_EventScript_Toby_Text_1, BattleGrotto_B5F_EventScript_PostBattle
	msgbox BattleGrotto_B4F_EventScript_Toby_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Radovan::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_RADOVAN, 0, BattleGrotto_B4F_EventScript_Radovan_Text_0, BattleGrotto_B4F_EventScript_Radovan_Text_1, BattleGrotto_B5F_EventScript_PostBattle
	msgbox BattleGrotto_B4F_EventScript_Radovan_Text_2, MSGBOX_NPC
	return


BattleGrotto_B4F_EventScript_Mika::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_MIKA, 0, BattleGrotto_B4F_EventScript_Mika_Text_0, BattleGrotto_B4F_EventScript_Mika_Text_1, BattleGrotto_B5F_EventScript_PostBattle
	msgbox BattleGrotto_B4F_EventScript_Mika_Text_2, MSGBOX_NPC
	return


BattleGrotto_B5F_EventScript_PostBattle::
	special HealPlayerParty
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleGrotto_B5F_EventScript_PostBattle_2
	settrainerflag TRAINER_HELENA
	settrainerflag TRAINER_FITZGERALD
	settrainerflag TRAINER_MOLLIE
	settrainerflag TRAINER_PRIYA
	settrainerflag TRAINER_TOBY
	settrainerflag TRAINER_RADOVAN
	settrainerflag TRAINER_MIKA
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	end

BattleGrotto_B5F_EventScript_PostBattle_2:
	buffernumberstring STR_VAR_1, 1
	setvar VAR_0x8004, 1
	special GiveFrontierBattlePoints
	msgbox BattleGrotto_B5F_EventScript_PostBattle_Text_0, MSGBOX_GETPOINTS
	waitmessage
	closemessage
	end


BattleGrotto_B4F_EventScript_Helena_Text_0:
	.string "You DIVE with your POKéMON?\n"
	.string "That's so cool!$"

BattleGrotto_B4F_EventScript_Helena_Text_1:
	.string "Haha…$"

BattleGrotto_B4F_EventScript_Helena_Text_2:
	.string "I need special equipment to DIVE.\n"
	.string "It's kind of a hassle!$"

BattleGrotto_B4F_EventScript_Fitzgerald_Text_0:
	.string "There's danger on the ocean floor!$"

BattleGrotto_B4F_EventScript_Fitzgerald_Text_1:
	.string "Yeowch!$"

BattleGrotto_B4F_EventScript_Fitzgerald_Text_2:
	.string "Careful what you touch on the ocean\n"
	.string "floor. Something might bite you.$"

BattleGrotto_B4F_EventScript_Mollie_Text_0:
	.string "Need a light?$"

BattleGrotto_B4F_EventScript_Mollie_Text_1:
	.string "Shocker!$"

BattleGrotto_B4F_EventScript_Mollie_Text_2:
	.string "It gets dark down here. My POKéMON\n"
	.string "keeps the area lit up.$"

BattleGrotto_B4F_EventScript_Priya_Text_0:
	.string "Make sure to keep an eye on your\n"
	.string "oxygen.$"

BattleGrotto_B4F_EventScript_Priya_Text_1:
	.string "Mayday!$"

BattleGrotto_B4F_EventScript_Priya_Text_2:
	.string "Wait, how long have we been down here\n"
	.string "anyway?$"

BattleGrotto_B4F_EventScript_Toby_Text_0:
	.string "All sorts of POKéMON live under the sea!$"

BattleGrotto_B4F_EventScript_Toby_Text_1:
	.string "Okay, I yield!$"

BattleGrotto_B4F_EventScript_Toby_Text_2:
	.string "You'd be hard pressed to find a more\n"
	.string "diverse ecosystem than the ocean.$"

BattleGrotto_B4F_EventScript_Radovan_Text_0:
	.string "Do you wonder what lurks in the abyss…?$"

BattleGrotto_B4F_EventScript_Radovan_Text_1:
	.string "The abyss stared back…$"

BattleGrotto_B4F_EventScript_Radovan_Text_2:
	.string "I wish I could live in the deepest\n"
	.string "depths of the ocean…$"

BattleGrotto_B4F_EventScript_Mika_Text_0:
	.string "You sure have some great endurance to\n"
	.string "make it this far!\p"
	.string "If the water pressure hasn't crushed\n"
	.string "you yet, then I will!$"

BattleGrotto_B4F_EventScript_Mika_Text_1:
	.string "Eek! You're good!$"

BattleGrotto_B4F_EventScript_Mika_Text_2:
	.string "You've proven that you can handle the\n"
	.string "pressure. Go on to the next sublevel!$"

BattleGrotto_B5F_EventScript_PostBattle_Text_0:
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Point.$"
