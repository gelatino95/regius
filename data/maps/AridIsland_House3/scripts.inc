AridIsland_House3_MapScripts::
	.byte 0


AridIsland_House3_EventScript_Archaeologist::
	goto_if_set FLAG_TALKED_TO_ARCHAEOLOGIST, AridIsland_House3_EventScript_Archaeologist_2
	msgbox AridIsland_House3_EventScript_Archaeologist_Text_6, MSGBOX_NPC
	additem ITEM_REGI_BALL, 10
	playfanfare MUS_OBTAIN_ITEM
	message AridIsland_House3_EventScript_Archaeologist_Text_1
	waitfanfare
	msgbox AridIsland_House3_EventScript_Archaeologist_Text_2, MSGBOX_AUTOCLOSE
	msgbox AridIsland_House3_EventScript_Archaeologist_Text_7, MSGBOX_NPC
	setflag FLAG_TALKED_TO_ARCHAEOLOGIST
AridIsland_House3_EventScript_Archaeologist_1:
	release
	return

AridIsland_House3_EventScript_Archaeologist_2:
	checkitem ITEM_ANCIENT_SLAB
	compare VAR_RESULT, 0
	goto_if_ne AridIsland_House3_EventScript_Archaeologist_5
	msgbox AridIsland_House3_EventScript_Archaeologist_Text_5, MSGBOX_NPC
	goto AridIsland_House3_EventScript_Archaeologist_1

AridIsland_House3_EventScript_Archaeologist_5:
	lock
	faceplayer
	msgbox AridIsland_House3_EventScript_Archaeologist_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne AridIsland_House3_EventScript_Archaeologist_8
	msgbox AridIsland_House3_EventScript_Archaeologist_Text_4, MSGBOX_NPC
	goto AridIsland_House3_EventScript_Archaeologist_1

AridIsland_House3_EventScript_Archaeologist_8:
	removeitem ITEM_ANCIENT_SLAB
	additem ITEM_REGI_BALL, 10
	playfanfare MUS_OBTAIN_ITEM
	message AridIsland_House3_EventScript_Archaeologist_Text_1
	waitfanfare
	msgbox AridIsland_House3_EventScript_Archaeologist_Text_2, MSGBOX_AUTOCLOSE
	msgbox AridIsland_House3_EventScript_Archaeologist_Text_3, MSGBOX_NPC
	goto AridIsland_House3_EventScript_Archaeologist_1


AridIsland_House3_EventScript_Archaeologist_Text_0:
	.string "Oh? Show me what you have there…\p"
	.string "An ANCIENT SLAB! Marvelous!\n"
	.string "It must be filled with clues about\l"
	.string "the ancient REGIUS civilization…\p"
	.string "Will you part with it, in exchange\n"
	.string "for ten more REGI BALLS?$"

AridIsland_House3_EventScript_Archaeologist_Text_1:
	.string "{PLAYER} received 10 REGI BALLS!$"

AridIsland_House3_EventScript_Archaeologist_Text_2:
	.string "{PLAYER} put away the REGI BALLS\n"
	.string "in the POKé BALLS POCKET.$"

AridIsland_House3_EventScript_Archaeologist_Text_3:
	.string "You have given me a wonderful gift,\n"
	.string "friend! I will get right to work\l"
	.string "deciphering this writing.\p"
	.string "If you come across any more artifacts,\n"
	.string "you know where to find me!$"

AridIsland_House3_EventScript_Archaeologist_Text_4:
	.string "Ah…\p"
	.string "Well, if you reconsider,\n"
	.string "you know where to find me.$"

AridIsland_House3_EventScript_Archaeologist_Text_5:
	.string "Remember to return here if you\n"
	.string "find any artifacts of the ancient\l"
	.string "REGIUS civilization.\l"
	.string "I will reward you for them!$"

AridIsland_House3_EventScript_Archaeologist_Text_6:
	.string "Hm, what's this?\n"
	.string "You have the look of an explorer!\p"
	.string "I was an intrepid adventurer like you,\n"
	.string "a long time ago.\p"
	.string "I made it my mission to capture\n"
	.string "the legendary titans,\l"
	.string "REGIROCK, REGICE, and REGISTEEL\l"
	.string "and unravel their mysteries.\p"
	.string "But even after all these years,\n"
	.string "they remain sealed away.\p"
	.string "You seek the titans as well,\n"
	.string "don't you?\l"
	.string "I can see it in your eyes.\p"
	.string "I created these to aid in my work.\n"
	.string "Please, take them!$"

AridIsland_House3_EventScript_Archaeologist_Text_7:
	.string "I'm counting on you to\n"
	.string "carry on my work!\l"
	.string "Capture the legendary titans!\p"
	.string "REGIROCK is sealed away on\n"
	.string "this very island.\l"
	.string "The ARID RUINS would be a good\l"
	.string "place to start.\p"
	.string "Incidentally, I also collect artifacts\n"
	.string "from the ancient REGIUS\l"
	.string "civilization.\p"
	.string "If you find any during your search,\n"
	.string "please share them with me!\l"
	.string "I can offer more BALLS in return.$"
