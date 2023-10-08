KapokJungle_BioLab_MapScripts::
	.byte 0


KapokJungle_BioLab_EventScript_FossilMan::
	lock
	faceplayer
	msgbox KapokJungle_BioLab_EventScript_FossilMan_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq KapokJungle_BioLab_EventScript_FossilMan_2
	msgbox KapokJungle_BioLab_EventScript_FossilMan_Text_2, MSGBOX_DEFAULT
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil
	release
	end

KapokJungle_BioLab_EventScript_FossilMan_2:
	msgbox KapokJungle_BioLab_EventScript_FossilMan_Text_1, MSGBOX_DEFAULT
	release
	end


KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil::
	chooseitem TREASURES_POCKET
	bufferitemname STR_VAR_1, VAR_ITEM_ID
	switch VAR_ITEM_ID
	case ITEM_HELIX_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_3
	case ITEM_DOME_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_4
	case ITEM_OLD_AMBER, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_5
	case ITEM_ROOT_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_6
	case ITEM_CLAW_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_7
	case ITEM_PLATE_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_8
	case ITEM_FROND_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_9
	case ITEM_NONE, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_10
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_1, MSGBOX_DEFAULT
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil
KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_1:
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_13
KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_12:
	removeitem VAR_ITEM_ID
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_4, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	delay 60
	fadescreen FADE_FROM_BLACK
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_5, MSGBOX_DEFAULT
	switch VAR_ITEM_ID
	case ITEM_HELIX_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_17
	case ITEM_DOME_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_18
	case ITEM_OLD_AMBER, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_19
	case ITEM_ROOT_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_20
	case ITEM_CLAW_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_21
	case ITEM_PLATE_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_22
	case ITEM_FROND_FOSSIL, KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_23
KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_15:
	playfanfare MUS_OBTAIN_ITEM
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_6, MSGBOX_DEFAULT
	waitmessage
	waitfanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_25
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_26
	goto Common_EventScript_NoMoreRoomForPokemon
KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_24:
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_9
	release
	end

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_3:
	bufferspeciesname STR_VAR_2, SPECIES_OMANYTE
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_1

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_4:
	bufferspeciesname STR_VAR_2, SPECIES_KABUTO
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_1

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_5:
	bufferspeciesname STR_VAR_2, SPECIES_AERODACTYL
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_1

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_6:
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_1

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_7:
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_1

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_8:
	bufferspeciesname STR_VAR_2, SPECIES_SLOTHER
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_1

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_9:
	bufferspeciesname STR_VAR_2, SPECIES_ZAMIAD
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_1

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_10:
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_0, MSGBOX_DEFAULT
	release
	end

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_13:
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_3, MSGBOX_DEFAULT
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_12

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_17:
	givemon SPECIES_OMANYTE, 20
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_15

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_18:
	givemon SPECIES_KABUTO, 20
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_15

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_19:
	givemon SPECIES_AERODACTYL, 20
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_15

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_20:
	givemon SPECIES_LILEEP, 20
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_15

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_21:
	givemon SPECIES_ANORITH, 20
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_15

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_22:
	givemon SPECIES_SLOTHER, 20
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_15

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_23:
	givemon SPECIES_ZAMIAD, 20
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_15

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_25:
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_7, MSGBOX_DEFAULT
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_24

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_26:
	msgbox KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_8, MSGBOX_DEFAULT
	goto KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_24


KapokJungle_BioLab_EventScript_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM07, KapokJungle_BioLab_EventScript_Scientist_2
	msgbox KapokJungle_BioLab_EventScript_Scientist_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_HM07
	setflag FLAG_RECEIVED_HM07
KapokJungle_BioLab_EventScript_Scientist_1:
	release
	end

KapokJungle_BioLab_EventScript_Scientist_2:
	msgbox KapokJungle_BioLab_EventScript_Scientist_Text_0, MSGBOX_DEFAULT
	goto KapokJungle_BioLab_EventScript_Scientist_1


KapokJungle_BioLab_EventScript_Notebook::
	msgbox KapokJungle_BioLab_EventScript_Notebook_Text_0, MSGBOX_SIGN
	end


KapokJungle_BioLab_EventScript_Bed::
	lock
	msgbox KapokJungle_BioLab_EventScript_Bed_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokJungle_BioLab_EventScript_Bed_2
KapokJungle_BioLab_EventScript_Bed_1:
	closemessage
	release
	end

KapokJungle_BioLab_EventScript_Bed_2:
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	special HealPlayerParty
	waitfanfare
	fadescreen FADE_FROM_BLACK
	msgbox KapokJungle_BioLab_EventScript_Bed_Text_1, MSGBOX_DEFAULT
	goto KapokJungle_BioLab_EventScript_Bed_1


KapokJungle_BioLab_EventScript_FossilMan_Text_0:
	.string "I do research on extinct species of\n"
	.string "POKéMON.\p"
	.string "I can revive POKéMON from FOSSILS with\n"
	.string "this machine behind me.\p"
	.string "Do you have a FOSSIL you would like me\n"
	.string "to revive?$"

KapokJungle_BioLab_EventScript_FossilMan_Text_1:
	.string "FOSSILS can sometimes be found by\n"
	.string "smashing rocks.\p"
	.string "If you find any, I'd love to help you\n"
	.string "revive them.$"

KapokJungle_BioLab_EventScript_FossilMan_Text_2:
	.string "Fantastic! Can you show me?$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_0:
	.string "Come back if you want to revive a\n"
	.string "FOSSIL.$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_1:
	.string "I can't revive something that's not a\n"
	.string "FOSSIL!$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_2:
	.string "Would you like me to revive this\n"
	.string "{STR_VAR_1}?$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_3:
	.string "Changed your mind?\n"
	.string "Do you want to revive something else?$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_4:
	.string "Okay! I can have it done in a jiffy!\p"
	.string "Just wait one moment…$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_5:
	.string "Success! Your {STR_VAR_1}\n"
	.string "was revived into {STR_VAR_2}!$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_6:
	.string "{PLAYER} received {STR_VAR_2}!$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_7:
	.string "{STR_VAR_2} was added\n"
	.string "to your party.$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_8:
	.string "{STR_VAR_2} was transferred\n"
	.string "to the PC.$"

KapokJungle_BioLab_EventScript_FossilMan_ChooseFossil_Text_9:
	.string "Please take good care of that\n"
	.string "{STR_VAR_2}.$"

KapokJungle_BioLab_EventScript_Scientist_Text_0:
	.string "Use WATERFALL to navigate the jungle\n"
	.string "more easily.\p"
	.string "You might even uncover places you\n"
	.string "couldn't reach before!$"

KapokJungle_BioLab_EventScript_Scientist_Text_1:
	.string "Wow, you came all the way out here?\n"
	.string "You must be an intrepid explorer!\p"
	.string "We SCIENTISTS use the river as a\n"
	.string "shortcut to reach the lab.\p"
	.string "Why don't you take this?\n"
	.string "It will help you navigate the jungle\l"
	.string "more easily.$"

KapokJungle_BioLab_EventScript_Notebook_Text_0:
	.string "It's a survey of all the species in\n"
	.string "KAPOK JUNGLE.\l"
	.string "The list is very long…$"

KapokJungle_BioLab_EventScript_Bed_Text_0:
	.string "It's a bed.\n"
	.string "Want to take a rest?$"

KapokJungle_BioLab_EventScript_Bed_Text_1:
	.string "You and your POKéMON\n"
	.string "are feeling refreshed!$"
