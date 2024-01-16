Underwater_CentralSea_MapScripts::
	.byte 0


Underwater_CentralSea_EventScript_Tulio::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_TULIO, 0, Underwater_CentralSea_EventScript_Tulio_Text_0, Underwater_CentralSea_EventScript_Tulio_Text_1
	msgbox Underwater_CentralSea_EventScript_Tulio_Text_2, MSGBOX_NPC
	end


Underwater_CentralSea_EventScript_Natalie::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_NATALIE, 0, Underwater_CentralSea_EventScript_Natalie_Text_0, Underwater_CentralSea_EventScript_Natalie_Text_1
	msgbox Underwater_CentralSea_EventScript_Natalie_Text_2, MSGBOX_NPC
	end


Underwater_CentralSea_EventScript_Ikechi::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_IKECHI, 0, Underwater_CentralSea_EventScript_Ikechi_Text_0, Underwater_CentralSea_EventScript_Ikechi_Text_1
	msgbox Underwater_CentralSea_EventScript_Ikechi_Text_2, MSGBOX_NPC
	end


Underwater_CentralSea_EventScript_Naomi::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_NAOMI, 0, Underwater_CentralSea_EventScript_Naomi_Text_0, Underwater_CentralSea_EventScript_Naomi_Text_1
	msgbox Underwater_CentralSea_EventScript_Naomi_Text_2, MSGBOX_NPC
	end


Underwater_CentralSea_EventScript_Francine::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_FRANCINE, 0, Underwater_CentralSea_EventScript_Francine_Text_0, Underwater_CentralSea_EventScript_Francine_Text_1
	msgbox Underwater_CentralSea_EventScript_Francine_Text_2, MSGBOX_NPC
	end


Underwater_CentralSea_EventScript_Miles::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_MILES, 0, Underwater_CentralSea_EventScript_Miles_Text_0, Underwater_CentralSea_EventScript_Miles_Text_1
	msgbox Underwater_CentralSea_EventScript_Miles_Text_2, MSGBOX_NPC
	end


Underwater_CentralSea_EventScript_ItemDeepSeaScale::
	finditem ITEM_DEEP_SEA_SCALE
	end


Underwater_CentralSea_EventScript_ItemDiveBall::
	finditem ITEM_DIVE_BALL
	end


Underwater_CentralSea_EventScript_Tulio_Text_0:
	.string "Are you hunting for treasure?$"

Underwater_CentralSea_EventScript_Tulio_Text_1:
	.string "Alright, alright!$"

Underwater_CentralSea_EventScript_Tulio_Text_2:
	.string "Lots of stuff sinks to the sea floor.\n"
	.string "It's all free for the taking!$"

Underwater_CentralSea_EventScript_Natalie_Text_0:
	.string "Look at my precious corals!$"

Underwater_CentralSea_EventScript_Natalie_Text_1:
	.string "My corals!$"

Underwater_CentralSea_EventScript_Natalie_Text_2:
	.string "Corals may look friendly, but they\n"
	.string "actually don't get along too well\l"
	.string "with each other.$"

Underwater_CentralSea_EventScript_Ikechi_Text_0:
	.string "From east to west, we're the best!$"

Underwater_CentralSea_EventScript_Ikechi_Text_1:
	.string "Not the best!$"

Underwater_CentralSea_EventScript_Ikechi_Text_2:
	.string "The tunnel over there is a shortcut to\n"
	.string "the other side of the ARCHIPELAGO.\l"
	.string "Nifty, huh?$"

Underwater_CentralSea_EventScript_Naomi_Text_0:
	.string "From south to north, we'll prove our\n"
	.string "worth!$"

Underwater_CentralSea_EventScript_Naomi_Text_1:
	.string "I'm not worthy!$"

Underwater_CentralSea_EventScript_Naomi_Text_2:
	.string "You can reach most places in the region\n"
	.string "by traveling underwater.$"

Underwater_CentralSea_EventScript_Francine_Text_0:
	.string "Hey, nice ride!\n"
	.string "Mind giving me a turn?$"

Underwater_CentralSea_EventScript_Francine_Text_1:
	.string "Message received!$"

Underwater_CentralSea_EventScript_Francine_Text_2:
	.string "Having a POKéMON to guide you while\n"
	.string "DIVING is such a magical experience!$"

Underwater_CentralSea_EventScript_Miles_Text_0:
	.string "You're a new face!\n"
	.string "What brings you down here?$"

Underwater_CentralSea_EventScript_Miles_Text_1:
	.string "Erm…$"

Underwater_CentralSea_EventScript_Miles_Text_2:
	.string "DIVING is a popular activity around\n"
	.string "here.\p"
	.string "We love seeing new faces on the sea\n"
	.string "floor!$"
