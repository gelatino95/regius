CentralSea_MapScripts::
	.byte 0


CentralSea_EventScript_BikeGirl::
	goto_if_set FLAG_RECEIVED_BIKE, CentralSea_EventScript_BikeGirl_1
	lock
	faceplayer
	msgbox CentralSea_EventScript_BikeGirl_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_ACRO_BIKE
	setflag FLAG_RECEIVED_BIKE
	msgbox CentralSea_EventScript_BikeGirl_Text_2, MSGBOX_DEFAULT
	release
	end

CentralSea_EventScript_BikeGirl_1:
	msgbox CentralSea_EventScript_BikeGirl_Text_0, MSGBOX_NPC
	return


CentralSea_EventScript_RouteSignEast::
	msgbox CentralSea_EventScript_RouteSignEast_Text_0, MSGBOX_SIGN
	return


CentralSea_EventScript_RouteSignWest::
	msgbox CentralSea_EventScript_RouteSignWest_Text_0, MSGBOX_SIGN
	return


CentralSea_EventScript_Francesca::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_FRANCESCA, 0, CentralSea_EventScript_Francesca_Text_0, CentralSea_EventScript_Francesca_Text_1
	msgbox CentralSea_EventScript_Francesca_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Kegan::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_KEGAN, 0, CentralSea_EventScript_Kegan_Text_0, CentralSea_EventScript_Kegan_Text_1
	msgbox CentralSea_EventScript_Kegan_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Austina::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_AUSTINA, 0, CentralSea_EventScript_Austina_Text_0, CentralSea_EventScript_Austina_Text_1
	msgbox CentralSea_EventScript_Austina_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Logan::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LOGAN, 0, CentralSea_EventScript_Logan_Text_0, CentralSea_EventScript_Logan_Text_1
	msgbox CentralSea_EventScript_Logan_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Zeke::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ZEKE, 0, CentralSea_EventScript_Zeke_Text_0, CentralSea_EventScript_Zeke_Text_1
	msgbox CentralSea_EventScript_Zeke_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Apollo::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_APOLLO, 0, CentralSea_EventScript_Apollo_Text_0, CentralSea_EventScript_Apollo_Text_1
	msgbox CentralSea_EventScript_Apollo_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Harold::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_HAROLD, 0, CentralSea_EventScript_Harold_Text_0, CentralSea_EventScript_Harold_Text_1
	msgbox CentralSea_EventScript_Harold_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Betsy::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_BETSY, 0, CentralSea_EventScript_Betsy_Text_0, CentralSea_EventScript_Betsy_Text_1
	msgbox CentralSea_EventScript_Betsy_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_ItemNetBall::
	finditem ITEM_NET_BALL
	end


CentralSea_EventScript_ItemSoftSand::
	finditem ITEM_SOFT_SAND
	end


CentralSea_EventScript_BikeGirl_Text_0:
	.string "Hello again! Still haven't found a way\n"
	.string "off this island with a bike.\l"
	.string "I'll keep you posted if I make any\l"
	.string "progress in that area.$"

CentralSea_EventScript_BikeGirl_Text_1:
	.string "I know what you're thinking: How did\n"
	.string "this girl get way out here with a bike?\p"
	.string "Haha! There's a funny story about that.\n"
	.string "Uh… Hmm…\l"
	.string "To be honest, I'm not sure.\p"
	.string "Well, obviously keeping this spare\n"
	.string "around isn't going to help me leave, so\l"
	.string "why don't you take it?$"

CentralSea_EventScript_BikeGirl_Text_2:
	.string "There aren't really a lot of great biking\n"
	.string "spots on these islands, but give it a\l"
	.string "shot anyway. You can't end up any\l"
	.string "worse than me, that's for sure.\p"
	.string "Now, how am I going to get off this\n"
	.string "island…$"

CentralSea_EventScript_RouteSignEast_Text_0:
	.string "CENTRAL SEA\n"
	.string "{UP_ARROW} KAPOK ISLAND\l"
	.string "NORTHEAST SEA {RIGHT_ARROW}\l"
	.string "{DOWN_ARROW} ARID ISLAND$"

CentralSea_EventScript_RouteSignWest_Text_0:
	.string "CENTRAL SEA\n"
	.string "{LEFT_ARROW} IGNEOUS ISLAND$"

CentralSea_EventScript_Francesca_Text_0:
	.string "Please look at all my pretty POKéMON!$"

CentralSea_EventScript_Francesca_Text_1:
	.string "They were pretty, right?$"

CentralSea_EventScript_Francesca_Text_2:
	.string "I only like pretty pink POKéMON.$"

CentralSea_EventScript_Kegan_Text_0:
	.string "Watch out for deep water!$"

CentralSea_EventScript_Kegan_Text_1:
	.string "Glub…$"

CentralSea_EventScript_Kegan_Text_2:
	.string "I can't hold my breath long enough to\n"
	.string "DIVE.$"

CentralSea_EventScript_Austina_Text_0:
	.string "You're in my training zone! Prepare for\n"
	.string "defeat!$"

CentralSea_EventScript_Austina_Text_1:
	.string "Huh?$"

CentralSea_EventScript_Austina_Text_2:
	.string "Swimming is a great way to build\n"
	.string "stamina.$"

CentralSea_EventScript_Logan_Text_0:
	.string "I'll swim laps around you!$"

CentralSea_EventScript_Logan_Text_1:
	.string "You swam laps around me…$"

CentralSea_EventScript_Logan_Text_2:
	.string "My POKéMON love to play in the water\n"
	.string "while I'm training.$"

CentralSea_EventScript_Zeke_Text_0:
	.string "Hey, kid! You want to be a rock star?$"

CentralSea_EventScript_Zeke_Text_1:
	.string "My star has fallen…$"

CentralSea_EventScript_Zeke_Text_2:
	.string "You've got more mojo than I'll ever\n"
	.string "have, kid.$"

CentralSea_EventScript_Apollo_Text_0:
	.string "Let the crashing waves wash over you!$"

CentralSea_EventScript_Apollo_Text_1:
	.string "Huaaaaah!!!$"

CentralSea_EventScript_Apollo_Text_2:
	.string "To be as fierce and unrelenting as the\n"
	.string "sea itself… that is my dream.$"

CentralSea_EventScript_Harold_Text_0:
	.string "Are you here to help us make our\n"
	.string "sandcastle?$"

CentralSea_EventScript_Harold_Text_1:
	.string "You meanie!$"

CentralSea_EventScript_Harold_Text_2:
	.string "How did we get way out here? We floated\n"
	.string "on our tubes!$"

CentralSea_EventScript_Betsy_Text_0:
	.string "I claim this island as my own! Bow to\n"
	.string "your queen!$"

CentralSea_EventScript_Betsy_Text_1:
	.string "Usurper!$"

CentralSea_EventScript_Betsy_Text_2:
	.string "This will be a perfect spot for my\n"
	.string "castle!$"
