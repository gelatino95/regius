IgneousIsland_HealingSpot_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IgneousIsland_HealingSpot_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IgneousIsland_HealingSpot_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_IGNEOUS_ISLAND
	return


IgneousIsland_HealingSpot_EventScript_OldMan::
	lock
	faceplayer
	msgbox IgneousIsland_HealingSpot_EventScript_OldMan_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq IgneousIsland_HealingSpot_EventScript_OldMan_2
	msgbox IgneousIsland_HealingSpot_EventScript_OldMan_Text_2, MSGBOX_DEFAULT
	msgbox IgneousIsland_HealingSpot_EventScript_OldMan_Text_3
	release
	end

IgneousIsland_HealingSpot_EventScript_OldMan_2:
	msgbox IgneousIsland_HealingSpot_EventScript_OldMan_Text_1, MSGBOX_DEFAULT
	release
	end


IgneousIsland_HealingSpot_EventScript_ShellBellLady::
	lock
	faceplayer
	msgbox IgneousIsland_HealingSpot_EventScript_ShellBellLady_Text_0, MSGBOX_DEFAULT
	checkitem ITEM_SHOAL_SHELL, 1
	compare VAR_RESULT, 0
	goto_if_eq IgneousIsland_HealingSpot_EventScript_ShellBellLady_2
IgneousIsland_HealingSpot_EventScript_ShellBellLady_1:
	checkitem ITEM_SHOAL_SALT, 1
	compare VAR_RESULT, 0
	goto_if_eq IgneousIsland_HealingSpot_EventScript_ShellBellLady_5
IgneousIsland_HealingSpot_EventScript_ShellBellLady_4:
	msgbox IgneousIsland_HealingSpot_EventScript_ShellBellLady_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq IgneousIsland_HealingSpot_EventScript_ShellBellLady_8
	closemessage
	fadescreen FADE_TO_BLACK
	delay 60
	fadescreen FADE_FROM_BLACK
	msgbox IgneousIsland_HealingSpot_EventScript_ShellBellLady_Text_3, MSGBOX_DEFAULT
	removeitem ITEM_SHOAL_SHELL, 1
	removeitem ITEM_SHOAL_SALT, 1
	giveitem ITEM_SHELL_BELL, 1
	release
	end

IgneousIsland_HealingSpot_EventScript_ShellBellLady_2:
	goto IgneousIsland_HealingSpot_EventScript_ShellBellLady_ComeBack
	goto IgneousIsland_HealingSpot_EventScript_ShellBellLady_1

IgneousIsland_HealingSpot_EventScript_ShellBellLady_5:
	goto IgneousIsland_HealingSpot_EventScript_ShellBellLady_ComeBack
	goto IgneousIsland_HealingSpot_EventScript_ShellBellLady_4

IgneousIsland_HealingSpot_EventScript_ShellBellLady_8:
	msgbox IgneousIsland_HealingSpot_EventScript_ShellBellLady_Text_2, MSGBOX_DEFAULT
	release
	end


IgneousIsland_HealingSpot_EventScript_ShellBellLady_ComeBack::
	msgbox IgneousIsland_HealingSpot_EventScript_ShellBellLady_ComeBack_Text_0, MSGBOX_DEFAULT
	release
	end


IgneousIsland_HealingSpot_EventScript_OldMan_Text_0:
	.string "Yar… ye have the look of an adventurer.\p"
	.string "I suppose ye want to hear the tale of\n"
	.string "the GHOST SHIP, then?$"

IgneousIsland_HealingSpot_EventScript_OldMan_Text_1:
	.string "Ha! Perhaps that be for the best…$"

IgneousIsland_HealingSpot_EventScript_OldMan_Text_2:
	.string "North of here, in the treacherous seas\n"
	.string "that no ship can sail, there be a hidden\l"
	.string "cove, shrouded by fog.\p"
	.string "There ye'll find the GHOST SHIP, a great\n"
	.string "vessel wrecked some years ago in a\l"
	.string "terrible battle.\l"
	.string "Even I know not the circumstances\l"
	.string "behind its scuttling.\p"
	.string "It's said that the spirits of the lost\n"
	.string "crew still haunt the ship's gutted\l"
	.string "frame, returned to the world as ghost\l"
	.string "POKéMON.$"

IgneousIsland_HealingSpot_EventScript_OldMan_Text_3:
	.string "Knowing all this, ye'd still be fool\n"
	.string "enough to seek out the haunted ship?\p"
	.string "Yar… then heed my words.\n"
	.string "There be only one path through the\l"
	.string "winding currents that will take ye\l"
	.string "there.\p"
	.string "There be a house on a small island in the\n"
	.string "NORTHWEST SEA, home to one who trades\l"
	.string "in treasure.\p"
	.string "To the west of this house, enter the\n"
	.string "current from the northernmost\l"
	.string "possible location, and ye'll be carried\l"
	.string "to the foggy cove where the GHOST\l"
	.string "SHIP lies.$"

IgneousIsland_HealingSpot_EventScript_ShellBellLady_Text_0:
	.string "Would you care for a SHELL BELL?\p"
	.string "I can fashion one out of SHOAL SHELL\n"
	.string "and SHOAL SALT, one of each.$"

IgneousIsland_HealingSpot_EventScript_ShellBellLady_Text_1:
	.string "Ah, you have exactly what I need!\p"
	.string "What do you say? Want a SHELL BELL?$"

IgneousIsland_HealingSpot_EventScript_ShellBellLady_Text_2:
	.string "Oh, really? Fine.$"

IgneousIsland_HealingSpot_EventScript_ShellBellLady_Text_3:
	.string "Finished!\n"
	.string "Here you are.$"

IgneousIsland_HealingSpot_EventScript_ShellBellLady_ComeBack_Text_0:
	.string "But, hm, you don't have the materials.\n"
	.string "Come back later.$"
