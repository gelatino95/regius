IgneousClimb_MapScripts::
	.byte 0


IgneousClimb_EventScript_ExplosionTutor::
	lock
	faceplayer
	msgbox IgneousClimb_EventScript_ExplosionTutor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq IgneousClimb_EventScript_ExplosionTutor_2
IgneousClimb_EventScript_ExplosionTutor_1:
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, 0
	goto_if_eq IgneousClimb_EventScript_ExplosionTutor_5
	msgbox IgneousClimb_EventScript_ExplosionTutor_Text_2, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_EXPLOSION
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq IgneousClimb_EventScript_ExplosionTutor_8
IgneousClimb_EventScript_ExplosionTutor_7:
	msgbox IgneousClimb_EventScript_ExplosionTutor_Text_3, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	release
	end

IgneousClimb_EventScript_ExplosionTutor_2:
	goto IgneousClimb_EventScript_ExplosionDeclined
	goto IgneousClimb_EventScript_ExplosionTutor_1

IgneousClimb_EventScript_ExplosionTutor_5:
	msgbox IgneousClimb_EventScript_ExplosionTutor_Text_1, MSGBOX_DEFAULT
	release
	end

IgneousClimb_EventScript_ExplosionTutor_8:
	goto IgneousClimb_EventScript_ExplosionDeclined
	goto IgneousClimb_EventScript_ExplosionTutor_7


IgneousClimb_EventScript_ExplosionDeclined::
	msgbox IgneousClimb_EventScript_ExplosionDeclined_Text_0, MSGBOX_DEFAULT
	release
	end


IgneousClimb_EventScript_Albert::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ALBERT, 0, IgneousClimb_EventScript_Albert_Text_0, IgneousClimb_EventScript_Albert_Text_1
	msgbox IgneousClimb_EventScript_Albert_Text_2, MSGBOX_NPC
	end


IgneousClimb_EventScript_Vito::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_VITO, 0, IgneousClimb_EventScript_Vito_Text_0, IgneousClimb_EventScript_Vito_Text_1
	msgbox IgneousClimb_EventScript_Vito_Text_2, MSGBOX_NPC
	end


IgneousClimb_EventScript_Janet::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_JANET, 0, IgneousClimb_EventScript_Janet_Text_0, IgneousClimb_EventScript_Janet_Text_1
	msgbox IgneousClimb_EventScript_Janet_Text_2, MSGBOX_NPC
	end


IgneousClimb_EventScript_ItemTM11::
	finditem ITEM_TM11
	end


IgneousClimb_EventScript_ItemSunStone::
	finditem ITEM_SUN_STONE
	end


IgneousClimb_EventScript_ExplosionTutor_Text_0:
	.string "Ah, clear blue skies as far as the eye\n"
	.string "can see.\p"
	.string "Of course, if the volcano erupts, the\n"
	.string "sky will be blotted out with ash.\p"
	.string "Oh well, if we're going down in flames, we\n"
	.string "may as well get a head start.\p"
	.string "Want me to teach your POKéMON the move\n"
	.string "EXPLOSION?\l"
	.string "I'll do it for one HEART SCALE.$"

IgneousClimb_EventScript_ExplosionTutor_Text_1:
	.string "Uh… you don't have a HEART SCALE.\n"
	.string "Maybe come back later, yeah?$"

IgneousClimb_EventScript_ExplosionTutor_Text_2:
	.string "Which POKéMON should learn EXPLOSION?$"

IgneousClimb_EventScript_ExplosionTutor_Text_3:
	.string "{PLAYER} handed over one HEART\n"
	.string "SCALE.$"

IgneousClimb_EventScript_ExplosionDeclined_Text_0:
	.string "You're only putting off the inevitable,\n"
	.string "you know.$"

IgneousClimb_EventScript_Albert_Text_0:
	.string "It's a long way up the mountain!$"

IgneousClimb_EventScript_Albert_Text_1:
	.string "Haha! I lost!$"

IgneousClimb_EventScript_Albert_Text_2:
	.string "Are you sure you're prepared for this\n"
	.string "rugged terrain?$"

IgneousClimb_EventScript_Vito_Text_0:
	.string "Rock out with me!$"

IgneousClimb_EventScript_Vito_Text_1:
	.string "Metal…$"

IgneousClimb_EventScript_Vito_Text_2:
	.string "I'm looking for a sick backdrop for my\n"
	.string "next music video.$"

IgneousClimb_EventScript_Janet_Text_0:
	.string "You aren't thinking of going in the\n"
	.string "volcano, are you?$"

IgneousClimb_EventScript_Janet_Text_1:
	.string "Impossible…!$"

IgneousClimb_EventScript_Janet_Text_2:
	.string "I'm not sure I'm ready for the volcano\n"
	.string "yet. I'm staying here for now.$"
