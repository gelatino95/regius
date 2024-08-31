AridIsland_House1_MapScripts::
	.byte 0


AridIsland_House1_EventScript_Repel_Lady::
	goto_if_set FLAG_RECEIVED_REPEL_LADY_GIFT_1, AridIsland_House1_EventScript_Repel_Lady_4
AridIsland_House1_EventScript_Repel_Lady_2:
	goto_if_set FLAG_USED_REPEL, AridIsland_House1_EventScript_Repel_Lady_8
	goto_if_unset FLAG_TALKED_TO_REPEL_LADY, AridIsland_House1_EventScript_Repel_Lady_11
	setvar VAR_TEMP_1, SPECIES_REGIROCK
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne AridIsland_House1_EventScript_Repel_Lady_16
AridIsland_House1_EventScript_Repel_Lady_14:
	setvar VAR_TEMP_1, SPECIES_REGICE
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne AridIsland_House1_EventScript_Repel_Lady_21
AridIsland_House1_EventScript_Repel_Lady_19:
	setvar VAR_TEMP_1, SPECIES_REGISTEEL
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne AridIsland_House1_EventScript_Repel_Lady_26
AridIsland_House1_EventScript_Repel_Lady_25:
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_6, MSGBOX_NPC
	return

AridIsland_House1_EventScript_Repel_Lady_1:
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_0, MSGBOX_NPC
	return

AridIsland_House1_EventScript_Repel_Lady_3:
	goto_if_set FLAG_RECEIVED_REPEL_LADY_GIFT_3, AridIsland_House1_EventScript_Repel_Lady_1
	goto AridIsland_House1_EventScript_Repel_Lady_2

AridIsland_House1_EventScript_Repel_Lady_4:
	goto_if_set FLAG_RECEIVED_REPEL_LADY_GIFT_2, AridIsland_House1_EventScript_Repel_Lady_3
	goto AridIsland_House1_EventScript_Repel_Lady_2

AridIsland_House1_EventScript_Repel_Lady_8:
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_1, MSGBOX_NPC
	return

AridIsland_House1_EventScript_Repel_Lady_11:
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_2, MSGBOX_NPC
	setflag FLAG_TALKED_TO_REPEL_LADY
	return

AridIsland_House1_EventScript_Repel_Lady_15:
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_3, MSGBOX_NPC
	giveitem ITEM_BLACK_FLUTE, 1
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_4, MSGBOX_NPC
	setflag FLAG_RECEIVED_REPEL_LADY_GIFT_1
	end

AridIsland_House1_EventScript_Repel_Lady_16:
	goto_if_unset FLAG_RECEIVED_REPEL_LADY_GIFT_1, AridIsland_House1_EventScript_Repel_Lady_15
	goto AridIsland_House1_EventScript_Repel_Lady_14

AridIsland_House1_EventScript_Repel_Lady_20:
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_3, MSGBOX_NPC
	giveitem ITEM_RARE_CANDY, 1
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_5, MSGBOX_NPC
	setflag FLAG_RECEIVED_REPEL_LADY_GIFT_2
	end

AridIsland_House1_EventScript_Repel_Lady_21:
	goto_if_unset FLAG_RECEIVED_REPEL_LADY_GIFT_2, AridIsland_House1_EventScript_Repel_Lady_20
	goto AridIsland_House1_EventScript_Repel_Lady_19

AridIsland_House1_EventScript_Repel_Lady_24:
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_3, MSGBOX_NPC
	giveitem ITEM_PP_MAX, 1
	msgbox AridIsland_House1_EventScript_Repel_Lady_Text_5, MSGBOX_NPC
	setflag FLAG_RECEIVED_REPEL_LADY_GIFT_3
	end

AridIsland_House1_EventScript_Repel_Lady_26:
	goto_if_unset FLAG_RECEIVED_REPEL_LADY_GIFT_3, AridIsland_House1_EventScript_Repel_Lady_24
	goto AridIsland_House1_EventScript_Repel_Lady_25


AridIsland_House1_EventScript_Repel_Lady_Text_0:
	.string "Child, you have demonstrated time and\n"
	.string "again that you care for our\l"
	.string "environment.\l"
	.string "I have nothing else to offer you.\p"
	.string "Thank you for restoring my faith in the\n"
	.string "future of our precious islands.$"

AridIsland_House1_EventScript_Repel_Lady_Text_1:
	.string "Sniff…\p"
	.string "Eugh… you reek of REPEL.\n"
	.string "That nasty chemical that pollutes\l"
	.string "our ocean…\p"
	.string "Please, leave me be.\n"
	.string "I want nothing to do with you.$"

AridIsland_House1_EventScript_Repel_Lady_Text_2:
	.string "Sniff…\p"
	.string "Hm… you smell clean, child.\n"
	.string "Many other TRAINERS can't say\l"
	.string "the same.\p"
	.string "They have all been tainted by REPEL.\n"
	.string "It's a foul-smelling chemical that\l"
	.string "pollutes our pristine waters.\p"
	.string "I won't even associate with those\n"
	.string "who use it.\p"
	.string "Child, please don't be like the rest.\n"
	.string "I encourage you to never use REPEL,\l"
	.string "for the sake of our environment.\p"
	.string "I know it's a great inconvenience\n"
	.string "to you as a TRAINER,\l"
	.string "but I will reward you for your efforts.\p"
	.string "Return to me later, and I may\n"
	.string "have something for you.\p"
	.string "But I will know if you used any\n"
	.string "kind of REPEL in the meantime.\l"
	.string "I can smell it a mile away.$"

AridIsland_House1_EventScript_Repel_Lady_Text_3:
	.string "Ah, child, you have been on\n"
	.string "quite an adventure, haven't you?\p"
	.string "Sniff…\n"
	.string "And you still smell fresh as ever.\p"
	.string "Thank you for choosing to avoid using\n"
	.string "REPEL. You have helped our ocean\l"
	.string "remain clean.\p"
	.string "For that, I think you deserve a reward.\n"
	.string "Don't be shy!$"

AridIsland_House1_EventScript_Repel_Lady_Text_4:
	.string "This should help a TRAINER such as you.\n"
	.string "It may not be as effective as a REPEL,\l"
	.string "but it will ward off wild POKéMON in a\l"
	.string "way that does not hurt the\l"
	.string "environment.$"

AridIsland_House1_EventScript_Repel_Lady_Text_5:
	.string "I hope this gift serves you well, child.$"

AridIsland_House1_EventScript_Repel_Lady_Text_6:
	.string "I have not prepared anything yet, but\n"
	.string "please continue to avoid using REPEL\l"
	.string "and come back later.\l"
	.string "I may have a reward for you.$"
