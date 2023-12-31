CentralSea_MapScripts::
	.byte 0


CentralSea_EventScript_BikeGirl::
	goto_if_set FLAG_RECEIVED_BIKE, CentralSea_EventScript_BikeGirl_1
	lock
	faceplayer
	msgbox CentralSea_EventScript_BikeGirl_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_MACH_BIKE
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


CentralSea_EventScript_RouteSignSouth::
	msgbox CentralSea_EventScript_RouteSignSouth_Text_0, MSGBOX_SIGN
	return


CentralSea_EventScript_Swimmer::
	msgbox CentralSea_EventScript_Swimmer_Text_0, MSGBOX_NPC
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


CentralSea_EventScript_Alicia::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ALICIA, 0, CentralSea_EventScript_Alicia_Text_0, CentralSea_EventScript_Alicia_Text_1
	msgbox CentralSea_EventScript_Alicia_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Caleb::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_CALEB, 0, CentralSea_EventScript_Caleb_Text_0, CentralSea_EventScript_Caleb_Text_1
	msgbox CentralSea_EventScript_Caleb_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Candace::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_CANDACE, 0, CentralSea_EventScript_Candace_Text_0, CentralSea_EventScript_Candace_Text_1
	msgbox CentralSea_EventScript_Candace_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Landon::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LANDON, 0, CentralSea_EventScript_Landon_Text_0, CentralSea_EventScript_Landon_Text_1
	msgbox CentralSea_EventScript_Landon_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Richmond::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_RICHMOND, 0, CentralSea_EventScript_Kegan_Text_0, CentralSea_EventScript_Richmond_Text_0
	msgbox CentralSea_EventScript_Richmond_Text_1, MSGBOX_NPC
	return


CentralSea_EventScript_Melody::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_MELODY, 0, CentralSea_EventScript_Melody_Text_0, CentralSea_EventScript_Melody_Text_1
	msgbox CentralSea_EventScript_Melody_Text_2, MSGBOX_NPC
	return


CentralSea_EventScript_Augustus::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_AUGUSTUS, 0, CentralSea_EventScript_Augustus_Text_0, CentralSea_EventScript_Augustus_Text_1
	msgbox CentralSea_EventScript_Augustus_Text_2, MSGBOX_NPC
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
	.string "CENTRAL SEA\p"
	.string "{UP_ARROW} KAPOK ISLAND\n"
	.string "NORTHEAST SEA {RIGHT_ARROW}\l"
	.string "{DOWN_ARROW} ARID ISLAND$"

CentralSea_EventScript_RouteSignWest_Text_0:
	.string "CENTRAL SEA\p"
	.string "{LEFT_ARROW} IGNEOUS ISLAND$"

CentralSea_EventScript_RouteSignSouth_Text_0:
	.string "CENTRAL SEA\p"
	.string "{UP_ARROW} IGNEOUS ISLAND\n"
	.string "{DOWN_ARROW} GATEWAY ISLAND$"

CentralSea_EventScript_Swimmer_Text_0:
	.string "Every time I try to swim up north, the\n"
	.string "current spits me out right here. It\l"
	.string "looks like a one-way exit.$"

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

CentralSea_EventScript_Alicia_Text_0:
	.string "Out of my way!\n"
	.string "I'm on a mission!$"

CentralSea_EventScript_Alicia_Text_1:
	.string "Yeowch!$"

CentralSea_EventScript_Alicia_Text_2:
	.string "My mission?\n"
	.string "I want to swim around the entire\l"
	.string "perimeter of the REGIUS ARCHIPELAGO.$"

CentralSea_EventScript_Caleb_Text_0:
	.string "Can you take me to the volcano?$"

CentralSea_EventScript_Caleb_Text_1:
	.string "Aww…$"

CentralSea_EventScript_Caleb_Text_2:
	.string "Mom says I'm not allowed to play in\n"
	.string "volcanoes any more.$"

CentralSea_EventScript_Candace_Text_0:
	.string "Excuse me! Please don't distract me.$"

CentralSea_EventScript_Candace_Text_1:
	.string "Tch…$"

CentralSea_EventScript_Candace_Text_2:
	.string "I have to watch my little brother so he\n"
	.string "doesn't do something stupid, like walk\l"
	.string "into a volcano.$"

CentralSea_EventScript_Landon_Text_0:
	.string "Look at my super rare POKéMON!$"

CentralSea_EventScript_Landon_Text_1:
	.string "No! My precious!$"

CentralSea_EventScript_Landon_Text_2:
	.string "Some POKéMON are hard to find in the\n"
	.string "wild. Owning a rare POKéMON is a sign of\l"
	.string "greatness.$"

CentralSea_EventScript_Richmond_Text_0:
	.string "Gah!$"

CentralSea_EventScript_Richmond_Text_1:
	.string "I wonder what's down there in the deep\n"
	.string "water? I could ride down on my POKéMON\l"
	.string "and see.$"

CentralSea_EventScript_Melody_Text_0:
	.string "Halt! Are you tough enough to pass?$"

CentralSea_EventScript_Melody_Text_1:
	.string "You may pass!$"

CentralSea_EventScript_Melody_Text_2:
	.string "Trainers around these parts are tough.\n"
	.string "I'm just making sure you're ready!$"

CentralSea_EventScript_Augustus_Text_0:
	.string "I went DIVING! Look what I caught!$"

CentralSea_EventScript_Augustus_Text_1:
	.string "Buh…?$"

CentralSea_EventScript_Augustus_Text_2:
	.string "There are lots of unique POKéMON on the\n"
	.string "ocean floor.$"
