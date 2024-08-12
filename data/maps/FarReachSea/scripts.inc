FarReachSea_MapScripts::
	.byte 0


FarReachSea_EventScript_Grandma::
	lock
	faceplayer
	cleartrainerflag TRAINER_DRACAENA
	goto_if_set FLAG_DEFEATED_GRANDMA, FarReachSea_EventScript_Grandma_2
	msgbox FarReachSea_EventScript_Grandma_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FarReachSea_EventScript_Grandma_9
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_DRACAENA, 0, FarReachSea_EventScript_Grandma_Text_6, FarReachSea_EventScript_Grandma_Text_7, FarReachSea_EventScript_Grandma_PostBattle
FarReachSea_EventScript_Grandma_1:
	release
	end

FarReachSea_EventScript_Grandma_2:
	msgbox FarReachSea_EventScript_Grandma_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FarReachSea_EventScript_Grandma_6
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_DRACAENA, 0, FarReachSea_EventScript_Grandma_Text_2, FarReachSea_EventScript_Grandma_Text_3, FarReachSea_EventScript_Grandma_PostBattle
	goto FarReachSea_EventScript_Grandma_1

FarReachSea_EventScript_Grandma_6:
	msgbox FarReachSea_EventScript_Grandma_Text_1
	release
	end

FarReachSea_EventScript_Grandma_9:
	msgbox FarReachSea_EventScript_Grandma_Text_5, MSGBOX_DEFAULT
	release
	end


FarReachSea_EventScript_Grandma_PostBattle::
	goto_if_set FLAG_DEFEATED_GRANDMA, FarReachSea_EventScript_Grandma_PostBattle_2
	setflag FLAG_DEFEATED_GRANDMA
	msgbox FarReachSea_EventScript_Grandma_PostBattle_Text_1
FarReachSea_EventScript_Grandma_PostBattle_1:
	release
	end

FarReachSea_EventScript_Grandma_PostBattle_2:
	msgbox FarReachSea_EventScript_Grandma_PostBattle_Text_0
	goto FarReachSea_EventScript_Grandma_PostBattle_1


FarReachSea_EventScript_PirateFortressSign::
	msgbox FarReachSea_EventScript_PirateFortressSign_Text_0, MSGBOX_SIGN
	end


FarReachSea_EventScript_KeepOutSign::
	msgbox FarReachSea_EventScript_KeepOutSign_Text_0, MSGBOX_SIGN
	end


FarReachSea_EventScript_Shirley::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_SHIRLEY, 0, FarReachSea_EventScript_Shirley_Text_0, FarReachSea_EventScript_Shirley_Text_1
	msgbox FarReachSea_EventScript_Shirley_Text_2, MSGBOX_NPC
	return


FarReachSea_EventScript_Deborah::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_DEBORAH, 0, FarReachSea_EventScript_Deborah_Text_0, FarReachSea_EventScript_Deborah_Text_1
	msgbox FarReachSea_EventScript_Deborah_Text_2, MSGBOX_NPC
	return


FarReachSea_EventScript_Connie::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_CONNIE, 0, FarReachSea_EventScript_Connie_Text_0, FarReachSea_EventScript_Connie_Text_1
	msgbox FarReachSea_EventScript_Connie_Text_2, MSGBOX_NPC
	return


FarReachSea_EventScript_Hoshido::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_HOSHIDO, 0, FarReachSea_EventScript_Hoshido_Text_0, FarReachSea_EventScript_Hoshido_Text_1
	msgbox FarReachSea_EventScript_Hoshido_Text_2, MSGBOX_NPC
	return


FarReachSea_EventScript_Yukari::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_YUKARI, 0, FarReachSea_EventScript_Yukari_Text_0, FarReachSea_EventScript_Yukari_Text_1
	msgbox FarReachSea_EventScript_Yukari_Text_2, MSGBOX_NPC
	return


FarReachSea_EventScript_ItemMaxRevive::
	finditem ITEM_MAX_REVIVE
	end


FarReachSea_EventScript_ItemElixir::
	finditem ITEM_ELIXIR
	end


FarReachSea_EventScript_Grandma_Text_0:
	.string "Back already, eh, {PLAYER}?\p"
	.string "Let me guess… you have new tales of\n"
	.string "adventure to share with me?\p"
	.string "Well, I'm sure you know the best way to\n"
	.string "show me everything you've\l"
	.string "experienced…\p"
	.string "Are you ready for another battle with\n"
	.string "your old GRANDMA?$"

FarReachSea_EventScript_Grandma_Text_1:
	.string "Ha! I understand.\n"
	.string "I'll be here when you're ready.$"

FarReachSea_EventScript_Grandma_Text_2:
	.string "That's what I like to hear!$"

FarReachSea_EventScript_Grandma_Text_3:
	.string "You've still got it!$"

FarReachSea_EventScript_Grandma_Text_4:
	.string "{PLAYER}!\n"
	.string "What a pleasant surprise.\p"
	.string "You look a little different since\n"
	.string "I last saw you…\l"
	.string "I think you've grown on your journey.\p"
	.string "Why don't you tell me all about it?\p"
	.string "Wait… there's a better way to show me\n"
	.string "how much you've learned.\p"
	.string "Will you have a battle with your old\n"
	.string "GRANDMA?$"

FarReachSea_EventScript_Grandma_Text_5:
	.string "Ah, very well…\n"
	.string "Your journey isn't yet over, I see.\p"
	.string "You'll know when the time is right.\p"
	.string "Come back when you're ready!$"

FarReachSea_EventScript_Grandma_Text_6:
	.string "I won't hold back, so prepare yourself!$"

FarReachSea_EventScript_Grandma_Text_7:
	.string "{PLAYER}…\n"
	.string "I couldn't be more proud.$"

FarReachSea_EventScript_Grandma_PostBattle_Text_0:
	.string "{PLAYER}, it makes me glad to know\n"
	.string "you're still making memories out there.\p"
	.string "You'd be surprised how much of your\n"
	.string "journey I can glean just from the\l"
	.string "battles we've shared!\p"
	.string "So please, once you're finished with\n"
	.string "your next adventure, come back and\l"
	.string "tell me all about it.\p"
	.string "I'll be waiting!$"

FarReachSea_EventScript_Grandma_PostBattle_Text_1:
	.string "To think that you've only just become a\n"
	.string "TRAINER, and you've already bested me…\l"
	.string "It does my heart good.\p"
	.string "Your journey doesn't have to end here,\n"
	.string "you know.\p"
	.string "What's next for you, {PLAYER}?\n"
	.string "That's something only you can decide.\p"
	.string "Whatever it is, go out there and get it!\p"
	.string "I'll be here, waiting for you to tell me\n"
	.string "all about it.$"

FarReachSea_EventScript_PirateFortressSign_Text_0:
	.string "PIRATE FORTRESS$"

FarReachSea_EventScript_KeepOutSign_Text_0:
	.string "KEEP OUT\n"
	.string "No landlubbers allowed!$"

FarReachSea_EventScript_Shirley_Text_0:
	.string "I've done it… all the rarest POKéMON in\n"
	.string "the region are mine!$"

FarReachSea_EventScript_Shirley_Text_1:
	.string "My collection!$"

FarReachSea_EventScript_Shirley_Text_2:
	.string "I can't help but wonder if my collection\n"
	.string "of rare POKéMON is incomplete…$"

FarReachSea_EventScript_Deborah_Text_0:
	.string "Are you prepared for a long journey?$"

FarReachSea_EventScript_Deborah_Text_1:
	.string "Yep, you're prepared!$"

FarReachSea_EventScript_Deborah_Text_2:
	.string "We're in the furthest reaches of the\n"
	.string "REGIUS ARCHIPELAGO.\l"
	.string "There's nothing but open sea beyond.$"

FarReachSea_EventScript_Connie_Text_0:
	.string "Yarr!\n"
	.string "Be ye tough enough to face me trial?$"

FarReachSea_EventScript_Connie_Text_1:
	.string "Yarr…$"

FarReachSea_EventScript_Connie_Text_2:
	.string "I'm not actually a pirate. They wouldn't\n"
	.string "let me in their fortress…$"

FarReachSea_EventScript_Hoshido_Text_0:
	.string "I challenge you to test your might\n"
	.string "against me!$"

FarReachSea_EventScript_Hoshido_Text_1:
	.string "Huoh!$"

FarReachSea_EventScript_Hoshido_Text_2:
	.string "We use this secluded training spot to\n"
	.string "measure our abilities.$"

FarReachSea_EventScript_Yukari_Text_0:
	.string "You! Me! Battle! Now!$"

FarReachSea_EventScript_Yukari_Text_1:
	.string "Argh!$"

FarReachSea_EventScript_Yukari_Text_2:
	.string "You have proven yourself my superior.\n"
	.string "I have nothing left to say!$"
