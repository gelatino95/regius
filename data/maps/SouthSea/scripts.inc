SouthSea_MapScripts::
	.byte 0


SouthSea_EventScript_InstituteSign::
	msgbox SouthSea_EventScript_InstituteSign_Text_0, MSGBOX_SIGN
	end


SouthSea_EventScript_Francisco::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_FRANCISCO, 0, SouthSea_EventScript_Francisco_Text_0, SouthSea_EventScript_Francisco_Text_1
	msgbox SouthSea_EventScript_Francisco_Text_2, MSGBOX_NPC
	return


SouthSea_EventScript_Angus::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ANGUS, 0, SouthSea_EventScript_Angus_Text_0, SouthSea_EventScript_Angus_Text_1
	msgbox SouthSea_EventScript_Angus_Text_2, MSGBOX_NPC
	return


SouthSea_EventScript_Melissa::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_MELISSA, 0, SouthSea_EventScript_Melissa_Text_0, SouthSea_EventScript_Melissa_Text_1
	msgbox SouthSea_EventScript_Melissa_Text_2, MSGBOX_NPC
	return


SouthSea_EventScript_Todd::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_TODD, 0, SouthSea_EventScript_Todd_Text_0, SouthSea_EventScript_Todd_Text_1
	msgbox SouthSea_EventScript_Todd_Text_2, MSGBOX_NPC
	return


SouthSea_EventScript_ItemFullRestore::
	finditem ITEM_FULL_RESTORE
	end


SouthSea_EventScript_ItemRevive::
	finditem ITEM_REVIVE
	end


SouthSea_EventScript_InstituteSign_Text_0:
	.string "REGIUS ARCHIPELAGO\n"
	.string "MARINE BIOLOGY INSTITUTE$"

SouthSea_EventScript_Francisco_Text_0:
	.string "Watch out! I've hooked a lively one!$"

SouthSea_EventScript_Francisco_Text_1:
	.string "It got away!$"

SouthSea_EventScript_Francisco_Text_2:
	.string "There ain't much down this stretch of\n"
	.string "sea here.\l"
	.string "Nothing but POKéMON to catch!$"

SouthSea_EventScript_Angus_Text_0:
	.string "Don't tell me you came here to FISH,\n"
	.string "too?$"

SouthSea_EventScript_Angus_Text_1:
	.string "Ah, I see…$"

SouthSea_EventScript_Angus_Text_2:
	.string "I'm no good at conversation. Just leave\n"
	.string "me to my FISHING.$"

SouthSea_EventScript_Melissa_Text_0:
	.string "Hey, slow down! What's the rush?$"

SouthSea_EventScript_Melissa_Text_1:
	.string "Ack!$"

SouthSea_EventScript_Melissa_Text_2:
	.string "It would just be nice if everyone could\n"
	.string "slow down a bit and take their time.\l"
	.string "Enjoy life, you know?$"

SouthSea_EventScript_Todd_Text_0:
	.string "I'm trying to break my record!\n"
	.string "Out of my way!$"

SouthSea_EventScript_Todd_Text_1:
	.string "Looks like I'm starting over…$"

SouthSea_EventScript_Todd_Text_2:
	.string "I'm trying to swim as many laps in a row\n"
	.string "as I can. Make some room!$"
