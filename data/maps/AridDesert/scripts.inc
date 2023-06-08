AridDesert_MapScripts::
	.byte 0


AridDesert_EventScript_Sign::
	msgbox AridDesert_EventScript_Sign_Text_0, MSGBOX_SIGN
	return


AridDesert_EventScript_Boy::
	msgbox AridDesert_EventScript_Boy_Text_0, MSGBOX_NPC
	return


AridDesert_EventScript_RuinManiac::
	msgbox AridDesert_EventScript_RuinManiac_Text_0, MSGBOX_NPC
	return


AridDesert_EventScript_Zander::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ZANDER, 0, AridDesert_EventScript_Zander_Text_0, AridDesert_EventScript_Zander_Text_1
	msgbox AridDesert_EventScript_Zander_Text_2, MSGBOX_NPC
	return


AridDesert_EventScript_Armin::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ARMIN, 0, AridDesert_EventScript_Armin_Text_0, AridDesert_EventScript_Armin_Text_1
	msgbox AridDesert_EventScript_Armin_Text_2, MSGBOX_NPC
	return


AridDesert_EventScript_Charlie::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_CHARLIE, 0, AridDesert_EventScript_Charlie_Text_0, AridDesert_EventScript_Charlie_Text_1
	msgbox AridDesert_EventScript_Charlie_Text_2, MSGBOX_NPC
	return


AridDesert_EventScript_Alexa::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ALEXA, 0, AridDesert_EventScript_Alexa_Text_0, AridDesert_EventScript_Alexa_Text_1
	msgbox AridDesert_EventScript_Alexa_Text_2, MSGBOX_NPC
	return


AridDesert_EventScript_ItemSuperPotion::
	finditem ITEM_SUPER_POTION
	end


AridDesert_EventScript_ItemGreatBall::
	finditem ITEM_GREAT_BALL
	end


AridDesert_EventScript_Sign_Text_0:
	.string "{LEFT_ARROW} ARID ISLAND\n"
	.string "{RIGHT_ARROW} ARID RUINS$"

AridDesert_EventScript_Boy_Text_0:
	.string "Ack, I can't see a thing in this\n"
	.string "sandstorm!\p"
	.string "I'm gonna need to go back to town and\n"
	.string "stock up…\l"
	.string "There's nowhere to heal my POKéMON out\l"
	.string "here.$"

AridDesert_EventScript_RuinManiac_Text_0:
	.string "I'm having difficulty locating the\n"
	.string "ruins…\l"
	.string "I hear there are multiple entrances, so\l"
	.string "where in blazes are they?$"

AridDesert_EventScript_Zander_Text_0:
	.string "Fellow TRAINER spotted!\n"
	.string "Get ready!$"

AridDesert_EventScript_Zander_Text_1:
	.string "Fumbled it!$"

AridDesert_EventScript_Zander_Text_2:
	.string "Be careful running through the sand.\n"
	.string "You might trip over wild POKéMON!$"

AridDesert_EventScript_Armin_Text_0:
	.string "Hey, this isn't the ocean…!$"

AridDesert_EventScript_Armin_Text_1:
	.string "I'm so confused…$"

AridDesert_EventScript_Armin_Text_2:
	.string "I think I took a wrong turn\n"
	.string "somewhere…$"

AridDesert_EventScript_Charlie_Text_0:
	.string "I'm on the hunt for ruins!$"

AridDesert_EventScript_Charlie_Text_1:
	.string "Magnificent!$"

AridDesert_EventScript_Charlie_Text_2:
	.string "Have you seen any ruins around here?$"

AridDesert_EventScript_Alexa_Text_0:
	.string "Are you watching your POKéMON's\n"
	.string "health?$"

AridDesert_EventScript_Alexa_Text_1:
	.string "My POKéMON's health!$"

AridDesert_EventScript_Alexa_Text_2:
	.string "Sandstorms can wear down your POKéMON.\n"
	.string "My secret? I use POKéMON that aren't\l"
	.string "hurt by sandstorms!$"
