SouthwestSea_MapScripts::
	.byte 0


SouthwestSea_EventScript_SubstituteTutor::
	lock
	faceplayer
	msgbox SouthwestSea_EventScript_SubstituteTutor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_EventScript_SubstituteTutor_2
SouthwestSea_EventScript_SubstituteTutor_1:
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_EventScript_SubstituteTutor_5
	msgbox SouthwestSea_EventScript_SubstituteTutor_Text_2, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SUBSTITUTE
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_EventScript_SubstituteTutor_8
SouthwestSea_EventScript_SubstituteTutor_7:
	msgbox SouthwestSea_EventScript_SubstituteTutor_Text_3, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	release
	end

SouthwestSea_EventScript_SubstituteTutor_2:
	goto SouthwestSea_EventScript_SubstituteDeclined
	goto SouthwestSea_EventScript_SubstituteTutor_1

SouthwestSea_EventScript_SubstituteTutor_5:
	msgbox SouthwestSea_EventScript_SubstituteTutor_Text_1, MSGBOX_DEFAULT
	release
	end

SouthwestSea_EventScript_SubstituteTutor_8:
	goto SouthwestSea_EventScript_SubstituteDeclined
	goto SouthwestSea_EventScript_SubstituteTutor_7


SouthwestSea_EventScript_SubstituteDeclined::
	msgbox SouthwestSea_EventScript_SubstituteDeclined_Text_0, MSGBOX_DEFAULT
	release
	end


SouthwestSea_EventScript_PlusIslandSign::
	msgbox SouthwestSea_EventScript_PlusIslandSign_Text_0, MSGBOX_SIGN
	end


SouthwestSea_EventScript_ItemTM18::
	finditem ITEM_TM18
	end


SouthwestSea_EventScript_ItemHyperPotion::
	finditem ITEM_HYPER_POTION
	end


SouthwestSea_EventScript_Hank::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_HANK, 0, SouthwestSea_EventScript_Hank_Text_0, SouthwestSea_EventScript_Hank_Text_1
	msgbox SouthwestSea_EventScript_Hank_Text_2, MSGBOX_NPC
	return


SouthwestSea_EventScript_Tasha::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_TASHA, 0, SouthwestSea_EventScript_Tasha_Text_0, SouthwestSea_EventScript_Tasha_Text_1
	msgbox SouthwestSea_EventScript_Tasha_Text_2, MSGBOX_NPC
	return


SouthwestSea_EventScript_Hibiki::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_HIBIKI, 0, SouthwestSea_EventScript_Hibiki_Text_0, SouthwestSea_EventScript_Hibiki_Text_1
	msgbox SouthwestSea_EventScript_Hibiki_Text_2, MSGBOX_NPC
	return


SouthwestSea_EventScript_Tina::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_TINA, 0, SouthwestSea_EventScript_Tina_Text_0, SouthwestSea_EventScript_Tina_Text_1
	msgbox SouthwestSea_EventScript_Tina_Text_2, MSGBOX_NPC
	return


SouthwestSea_EventScript_Elwyn::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ELWYN, 0, SouthwestSea_EventScript_Elwyn_Text_0, SouthwestSea_EventScript_Elwyn_Text_1
	msgbox SouthwestSea_EventScript_Elwyn_Text_2, MSGBOX_NPC
	return


SouthwestSea_EventScript_SubstituteTutor_Text_0:
	.string "I feel a little out of place around\n"
	.string "really talented TRAINERS.\p"
	.string "Don't you ever feel that way?\n"
	.string "Come on, put yourself in my shoes!\p"
	.string "Would it help if I teach the move\n"
	.string "SUBSTITUTE to your POKéMON?\l"
	.string "I'll do it for a HEART SCALE.$"

SouthwestSea_EventScript_SubstituteTutor_Text_1:
	.string "Sorry, I can't help you without a HEART\n"
	.string "SCALE. Another time?$"

SouthwestSea_EventScript_SubstituteTutor_Text_2:
	.string "Which POKéMON should learn\n"
	.string "SUBSTITUTE?$"

SouthwestSea_EventScript_SubstituteTutor_Text_3:
	.string "{PLAYER} handed over one HEART\n"
	.string "SCALE.$"

SouthwestSea_EventScript_SubstituteDeclined_Text_0:
	.string "Well, okay. Thanks for the conversation.$"

SouthwestSea_EventScript_PlusIslandSign_Text_0:
	.string "PLUS ISLAND$"

SouthwestSea_EventScript_Hank_Text_0:
	.string "Ho there! Don't get tangled in my line!$"

SouthwestSea_EventScript_Hank_Text_1:
	.string "Catch and release, huh?$"

SouthwestSea_EventScript_Hank_Text_2:
	.string "Listen, I'm just here to fish, okay?$"

SouthwestSea_EventScript_Tasha_Text_0:
	.string "Heeeey! Come over and play!$"

SouthwestSea_EventScript_Tasha_Text_1:
	.string "Not like that!$"

SouthwestSea_EventScript_Tasha_Text_2:
	.string "The waves are so bouncy around here!$"

SouthwestSea_EventScript_Hibiki_Text_0:
	.string "Won't you join me in this little slice of\n"
	.string "paradise?$"

SouthwestSea_EventScript_Hibiki_Text_1:
	.string "Ah…$"

SouthwestSea_EventScript_Hibiki_Text_2:
	.string "Little patches of green like this make\n"
	.string "the trip across the sea worth it.$"

SouthwestSea_EventScript_Tina_Text_0:
	.string "Excuse us! We're trying to train here!$"

SouthwestSea_EventScript_Tina_Text_1:
	.string "Unbelievable!$"

SouthwestSea_EventScript_Tina_Text_2:
	.string "By training against someone of equal\n"
	.string "skill, you can both reach new heights\l"
	.string "you never dreamed of.$"

SouthwestSea_EventScript_Elwyn_Text_0:
	.string "So you want to join in on our sparring\n"
	.string "session, do you?$"

SouthwestSea_EventScript_Elwyn_Text_1:
	.string "Impossible!$"

SouthwestSea_EventScript_Elwyn_Text_2:
	.string "There's no better way to become\n"
	.string "stronger than to join forces with\l"
	.string "others.$"
