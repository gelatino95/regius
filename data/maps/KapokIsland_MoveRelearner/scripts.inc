KapokIsland_MoveRelearner_MapScripts::
	.byte 0


KapokIsland_MoveRelearner_EventScript_Main::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_1, KapokIsland_MoveRelearner_EventScript_Main_2
KapokIsland_MoveRelearner_EventScript_Main_1:
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, 0
	goto_if_eq KapokIsland_MoveRelearner_EventScript_Main_5
KapokIsland_MoveRelearner_EventScript_Main_4:
	msgbox KapokIsland_MoveRelearner_EventScript_Main_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_MoveRelearner_EventScript_Main_8
	goto KapokIsland_MoveRelearner_EventScript_ComeBackWithHeartScale
KapokIsland_MoveRelearner_EventScript_Main_7:
	release
	end

KapokIsland_MoveRelearner_EventScript_Main_2:
	msgbox KapokIsland_MoveRelearner_EventScript_Main_Text_0, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto KapokIsland_MoveRelearner_EventScript_Main_1

KapokIsland_MoveRelearner_EventScript_Main_5:
	goto KapokIsland_MoveRelearner_EventScript_ComeBackWithHeartScale
	goto KapokIsland_MoveRelearner_EventScript_Main_4

KapokIsland_MoveRelearner_EventScript_Main_8:
	goto KapokIsland_MoveRelearner_EventScript_ChooseMon
	goto KapokIsland_MoveRelearner_EventScript_Main_7


KapokIsland_MoveRelearner_EventScript_ChooseMon::
	msgbox KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_0, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq KapokIsland_MoveRelearner_EventScript_ChooseMon_2
KapokIsland_MoveRelearner_EventScript_ChooseMon_1:
	special IsSelectedMonEgg
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_MoveRelearner_EventScript_ChooseMon_5
KapokIsland_MoveRelearner_EventScript_ChooseMon_4:
	compare VAR_0x8005, 0
	goto_if_eq KapokIsland_MoveRelearner_EventScript_ChooseMon_8
KapokIsland_MoveRelearner_EventScript_ChooseMon_7:
	msgbox KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_3, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq KapokIsland_MoveRelearner_EventScript_ChooseMon_11
KapokIsland_MoveRelearner_EventScript_ChooseMon_10:
	removeitem ITEM_HEART_SCALE
	msgbox KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_4
	release
	end

KapokIsland_MoveRelearner_EventScript_ChooseMon_2:
	goto KapokIsland_MoveRelearner_EventScript_ComeBackWithHeartScale
	goto KapokIsland_MoveRelearner_EventScript_ChooseMon_1

KapokIsland_MoveRelearner_EventScript_ChooseMon_5:
	msgbox KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_1, MSGBOX_DEFAULT
	goto KapokIsland_MoveRelearner_EventScript_ChooseMon
	goto KapokIsland_MoveRelearner_EventScript_ChooseMon_4

KapokIsland_MoveRelearner_EventScript_ChooseMon_8:
	msgbox KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_2, MSGBOX_DEFAULT
	goto KapokIsland_MoveRelearner_EventScript_ChooseMon
	goto KapokIsland_MoveRelearner_EventScript_ChooseMon_7

KapokIsland_MoveRelearner_EventScript_ChooseMon_11:
	goto KapokIsland_MoveRelearner_EventScript_ChooseMon
	goto KapokIsland_MoveRelearner_EventScript_ChooseMon_10


KapokIsland_MoveRelearner_EventScript_ComeBackWithHeartScale::
	msgbox KapokIsland_MoveRelearner_EventScript_ComeBackWithHeartScale_Text_0, MSGBOX_DEFAULT
	release
	end


KapokIsland_MoveRelearner_EventScript_MoveDeleter_Main::
	lock
	faceplayer
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_MoveRelearner_EventScript_MoveDeleter_Main_2
	goto KapokIsland_MoveRelearner_EventsScript_MoveDeleter_ComeAgain
KapokIsland_MoveRelearner_EventScript_MoveDeleter_Main_1:
	release
	end

KapokIsland_MoveRelearner_EventScript_MoveDeleter_Main_2:
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_Main_1


KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon::
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_2
KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_1:
	special IsSelectedMonEgg
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_5
KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_4:
	special GetNumMovesSelectedMonHas
	compare VAR_RESULT, 1
	goto_if_eq KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_8
KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_7:
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	compare VAR_0x8005, MAX_MON_MOVES
	goto_if_eq KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_11
KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_10:
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_14
KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_13:
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
	release
	end

KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_2:
	goto KapokIsland_MoveRelearner_EventsScript_MoveDeleter_ComeAgain
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_1

KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_5:
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_4

KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_8:
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_7

KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_11:
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_10

KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_14:
	goto KapokIsland_MoveRelearner_EventsScript_MoveDeleter_ComeAgain
	goto KapokIsland_MoveRelearner_EventScript_MoveDeleter_ChooseMon_13


KapokIsland_MoveRelearner_EventsScript_MoveDeleter_ComeAgain::
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end


KapokIsland_MoveRelearner_EventScript_NameRater::
	msgbox KapokIsland_MoveRelearner_EventScript_NameRater_Text_0, MSGBOX_NPC
	end


KapokIsland_MoveRelearner_EventScript_Girl::
	msgbox KapokIsland_MoveRelearner_EventScript_Girl_Text_0, MSGBOX_NPC
	end


KapokIsland_MoveRelearner_EventScript_Main_Text_0:
	.string "I know every move learned by every\n"
	.string "POKéMON. Impressive, right?\l"
	.string "What, you don't believe me?\p"
	.string "Just to prove it, I'll teach your\n"
	.string "POKéMON a move it's forgotten.\l"
	.string "In exchange for one HEART SCALE, of\l"
	.string "course.$"

KapokIsland_MoveRelearner_EventScript_Main_Text_1:
	.string "Want me to teach your POKéMON a move?$"

KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_0:
	.string "Which POKéMON should remember a move?$"

KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_1:
	.string "Um… this is an EGG.\n"
	.string "What do you expect me to do with this?\l"
	.string "Let's try this again.$"

KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_2:
	.string "Wow… I don't believe this.\n"
	.string "I can't think of a single move I can\l"
	.string "teach this POKéMON.$"

KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_3:
	.string "Which move should I teach it?$"

KapokIsland_MoveRelearner_EventScript_ChooseMon_Text_4:
	.string "{PLAYER} handed over one HEART\n"
	.string "SCALE.$"

KapokIsland_MoveRelearner_EventScript_ComeBackWithHeartScale_Text_0:
	.string "Come back with a HEART SCALE and maybe\n"
	.string "I can help you out.$"

KapokIsland_MoveRelearner_EventScript_NameRater_Text_0:
	.string "Hello hello! I'm the NAME RATER!\p"
	.string "But TRAINERS haven't needed my\n"
	.string "services lately, since they learned\l"
	.string "they can change a POKéMON's nickname\l"
	.string "from the PARTY menu.$"

KapokIsland_MoveRelearner_EventScript_Girl_Text_0:
	.string "HEART SCALES are a popular collectible\n"
	.string "on the islands. Every MOVE TUTOR\l"
	.string "accepts them as payment.\p"
	.string "They're not super common, but they're\n"
	.string "not hard to find if you search sandy\l"
	.string "beaches or break open rocks.$"
