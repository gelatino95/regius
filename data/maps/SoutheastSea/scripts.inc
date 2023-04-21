SoutheastSea_MapScripts::
	.byte 0


SoutheastSea_EventScript_ItemPotion::
	finditem ITEM_POTION
	end


SoutheastSea_EventScript_ItemEther::
	finditem ITEM_ETHER
	end


SoutheastSea_EventScript_Girl1::
	msgbox SoutheastSea_EventScript_Girl1_Text_0, MSGBOX_NPC
	return


SoutheastSea_EventScript_TrainerTips::
	msgbox SoutheastSea_EventScript_TrainerTips_Text_0, MSGBOX_SIGN
	return


SoutheastSea_EventScript_Girl2::
	msgbox SoutheastSea_EventScript_Girl2_Text_0, MSGBOX_NPC
	return


SoutheastSea_EventScript_Girl3::
	msgbox SoutheastSea_EventScript_Girl3_Text_0, MSGBOX_NPC
	return


SoutheastSea_EventScript_RouteSign::
	msgbox SoutheastSea_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	return


SoutheastSea_EventScript_FishingClub::
	msgbox SoutheastSea_EventScript_FishingClub_Text_0, MSGBOX_SIGN
	return


SoutheastSea_EventScript_SurfNPC::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_HM03, SoutheastSea_EventScript_SurfNPC_2
SoutheastSea_EventScript_SurfNPC_1:
	msgbox SoutheastSea_EventScript_SurfNPC_Text_1, MSGBOX_AUTOCLOSE
	release
	end

SoutheastSea_EventScript_SurfNPC_2:
	msgbox SoutheastSea_EventScript_SurfNPC_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_HM03, 1
	setflag FLAG_RECEIVED_HM03
	goto SoutheastSea_EventScript_SurfNPC_1


SoutheastSea_EventScript_Alberto::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ALBERTO, 0, SoutheastSea_EventScript_Alberto_Text_0, SoutheastSea_EventScript_Alberto_Text_1
	msgbox SoutheastSea_EventScript_Alberto_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Fredrick::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_FREDRICK, 0, SoutheastSea_EventScript_Fredrick_Text_0, SoutheastSea_EventScript_Fredrick_Text_1
	msgbox SoutheastSea_EventScript_Fredrick_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Ed::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ED, 0, SoutheastSea_EventScript_Ed_Text_0, SoutheastSea_EventScript_Ed_Text_1
	msgbox SoutheastSea_EventScript_Ed_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Leah::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LEAH, 0, SoutheastSea_EventScript_Leah_Text_0, SoutheastSea_EventScript_Leah_Text_1
	msgbox SoutheastSea_EventScript_Leah_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Declan::
	trainerbattle_single TRAINER_DECLAN, SoutheastSea_EventScript_Declan_Text_0, SoutheastSea_EventScript_Declan_Text_1
	msgbox SoutheastSea_EventScript_Declan_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Matt::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_MATT, 0, SoutheastSea_EventScript_Matt_Text_0, SoutheastSea_EventScript_Matt_Text_1
	msgbox SoutheastSea_EventScript_Matt_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Daisy::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_DAISY, 0, SoutheastSea_EventScript_Daisy_Text_0, SoutheastSea_EventScript_Daisy_Text_1
	msgbox SoutheastSea_EventScript_Daisy_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Rosie::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ROSIE, 0, SoutheastSea_EventScript_Rosie_Text_0, SoutheastSea_EventScript_Rosie_Text_1
	msgbox SoutheastSea_EventScript_Rosie_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Girl1_Text_0:
	.string "People drop useful items\n"
	.string "on the ground all the time.\p"
	.string "Check out any suspicious-looking\n"
	.string "spots you see, maybe you'll find\l"
	.string "something good!$"

SoutheastSea_EventScript_TrainerTips_Text_0:
	.string "TRAINER TIPS\p"
	.string "TRAINERS in the REGIUS\n"
	.string "ARCHIPELAGO love to take part\l"
	.string "in DOUBLE BATTLES!\p"
	.string "If you and your opponent both\n"
	.string "have enough POKéMON, you will\l"
	.string "automatically begin a DOUBLE BATTLE.\p"
	.string "If you prefer SINGLE BATTLES,\n"
	.string "you can change this setting\l"
	.string "in the OPTIONS menu.$"

SoutheastSea_EventScript_Girl2_Text_0:
	.string "FISHING is popular here on\n"
	.string "the islands.\p"
	.string "This is where all the serious\n"
	.string "FISHERS gather.\p"
	.string "If you pay them a visit, maybe they'll\n"
	.string "even let you join their club.$"

SoutheastSea_EventScript_Girl3_Text_0:
	.string "SLUMBER ISLAND is surrounded by\n"
	.string "these sharp rocks on all sides.\l"
	.string "The water is too choppy and\l"
	.string "dangerous to swim or ride through.\p"
	.string "Anyone who tries to FLY there\n"
	.string "gets turned around in a dense\l"
	.string "fog that covers the island.\p"
	.string "It's as if the island doesn't\n"
	.string "want to be visited.\l"
	.string "What could be out there?$"

SoutheastSea_EventScript_RouteSign_Text_0:
	.string "SOUTHEAST SEA\n"
	.string "{UP_ARROW}ARID ISLAND\l"
	.string "{LEFT_ARROW}GATEWAY ISLAND$"

SoutheastSea_EventScript_FishingClub_Text_0:
	.string "REGIUS FISHING CLUB\n"
	.string "Free RODS for members!$"

SoutheastSea_EventScript_SurfNPC_Text_0:
	.string "Ah, {PLAYER}!\n"
	.string "Finally setting off on your own?\p"
	.string "If you want to travel between\n"
	.string "the islands, you'll need this.$"

SoutheastSea_EventScript_SurfNPC_Text_1:
	.string "That HM contains SURF.\p"
	.string "Not only will it let your POKéMON\n"
	.string "carry you across the ocean,\l"
	.string "but it's also great in battle!\p"
	.string "Oh! But teaching the move isn't\n"
	.string "necessary to use it in the field.\p"
	.string "As long as your POKéMON is\n"
	.string "capable of learning it,\l"
	.string "just owning the HM is good enough!\p"
	.string "Go on, just face the water\n"
	.string "and give it a try!$"

SoutheastSea_EventScript_Alberto_Text_0:
	.string "Ho there, trainer! Care for a battle?$"

SoutheastSea_EventScript_Alberto_Text_1:
	.string "Hmm…$"

SoutheastSea_EventScript_Alberto_Text_2:
	.string "Fishin's good today. Why not\n"
	.string "grab a rod and join me?$"

SoutheastSea_EventScript_Fredrick_Text_0:
	.string "With these POKéMON I fished\n"
	.string "up, I'm unstoppable!$"

SoutheastSea_EventScript_Fredrick_Text_1:
	.string "I may have miscalculated…$"

SoutheastSea_EventScript_Fredrick_Text_2:
	.string "You have what it takes to be a\n"
	.string "pro at FISHING, I'm sure of it.$"

SoutheastSea_EventScript_Ed_Text_0:
	.string "Hey, nice ride!\n"
	.string "Wanna see mine?$"

SoutheastSea_EventScript_Ed_Text_1:
	.string "My ride!$"

SoutheastSea_EventScript_Ed_Text_2:
	.string "Letting your POKéMON carry you\n"
	.string "across the water is the way to go!$"

SoutheastSea_EventScript_Leah_Text_0:
	.string "Would you mind staying\n"
	.string "out of my way?$"

SoutheastSea_EventScript_Leah_Text_1:
	.string "I'm just trying to swim here…$"

SoutheastSea_EventScript_Leah_Text_2:
	.string "Aren't the waves nice today?$"

SoutheastSea_EventScript_Declan_Text_0:
	.string "You got your first POKéMON?\n"
	.string "So did I!$"

SoutheastSea_EventScript_Declan_Text_1:
	.string "Drat…$"

SoutheastSea_EventScript_Declan_Text_2:
	.string "All the trainers around here\n"
	.string "like double battles.\l"
	.string "But I only have one POKéMON…$"

SoutheastSea_EventScript_Matt_Text_0:
	.string "Ho there!\n"
	.string "I see you there, TRAINER!$"

SoutheastSea_EventScript_Matt_Text_1:
	.string "I let it go!$"

SoutheastSea_EventScript_Matt_Text_2:
	.string "I've been FISHING all over\n"
	.string "these islands. There's so much\l"
	.string "life out there, you never know\l"
	.string "what you'll find next!$"

SoutheastSea_EventScript_Daisy_Text_0:
	.string "Heeeey! You!\n"
	.string "Wanna play with me?$"

SoutheastSea_EventScript_Daisy_Text_1:
	.string "Aww…$"

SoutheastSea_EventScript_Daisy_Text_2:
	.string "I'm not stuck out here!\n"
	.string "My POKéMON can carry me back.$"

SoutheastSea_EventScript_Rosie_Text_0:
	.string "My POKéMON are itching to\n"
	.string "come out and play!$"

SoutheastSea_EventScript_Rosie_Text_1:
	.string "Alright! Good fight!$"

SoutheastSea_EventScript_Rosie_Text_2:
	.string "I keep bumping into wild\n"
	.string "KELPENT. They're so wiggly!$"
