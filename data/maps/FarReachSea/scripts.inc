FarReachSea_MapScripts::
	.byte 0


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
