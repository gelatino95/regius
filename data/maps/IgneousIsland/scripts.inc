IgneousIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IgneousIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IgneousIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_IGNEOUS_ISLAND
	clearflag FLAG_HIDE_IGNEOUS_ISLAND_FLY_GUY
	goto_if_unset FLAG_DEFEATED_KAPOK_ISLAND_FLY_GUY, IgneousIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	goto_if_set FLAG_RECEIVED_HM_FLY, IgneousIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

IgneousIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_HIDE_IGNEOUS_ISLAND_FLY_GUY
	removeobject 3
	return


IgneousIsland_EventScript_FlyGuy::
	lock
	faceplayer
	msgbox IgneousIsland_EventScript_FlyGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq IgneousIsland_EventScript_FlyGuy_2
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_LESTER_3, 0, IgneousIsland_EventScript_FlyGuy_Text_1, IgneousIsland_EventScript_FlyGuy_Text_2, IgneousIsland_EventScript_FlyGuy_PostBattle
	release
	end

IgneousIsland_EventScript_FlyGuy_2:
	msgbox AridIsland_Text_FlyGuyIllBeHere, MSGBOX_DEFAULT
	release
	end


IgneousIsland_EventScript_FlyGuy_PostBattle::
	msgbox IgneousIsland_EventScript_FlyGuy_PostBattle_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_HM02, 1
	setflag FLAG_RECEIVED_HM_FLY
	msgbox IgneousIsland_EventScript_FlyGuy_PostBattle_Text_1, MSGBOX_DEFAULT
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	setflag FLAG_HIDE_IGNEOUS_ISLAND_FLY_GUY
	removeobject 3
	waitfieldeffect FLDEFF_NPCFLY_OUT
	release
	end


IgneousIsland_EventScript_IslandSign::
	msgbox IgneousIsland_EventScript_IslandSign_Text_0, MSGBOX_SIGN
	end


IgneousIsland_EventScript_RestStopSign::
	msgbox IgneousIsland_EventScript_RestStopSign_Text_0, MSGBOX_SIGN
	end


IgneousIsland_EventScript_Girl::
	msgbox IgneousIsland_EventScript_Girl_Text_0, MSGBOX_NPC
	end


IgneousIsland_EventScript_ItemUltraBall::
	finditem ITEM_ULTRA_BALL
	end


IgneousIsland_EventScript_FlyGuy_Text_0:
	.string "Hey, friend! Fancy seeing you all the\n"
	.string "way out here.\p"
	.string "Remember me?\n"
	.string "The bird guy?\p"
	.string "My birds have been preparing for\n"
	.string "another battle against you.\p"
	.string "This time, we're going all out!\n"
	.string "We won't lose!\p"
	.string "What do you say? Want to battle?$"

IgneousIsland_EventScript_FlyGuy_Text_1:
	.string "Here we come!$"

IgneousIsland_EventScript_FlyGuy_Text_2:
	.string "Incredible!$"

IgneousIsland_EventScript_FlyGuy_PostBattle_Text_0:
	.string "Even after all our training, you beat us\n"
	.string "like it was nothing!\p"
	.string "I have to commend a fellow traveler.\n"
	.string "You've impressed me!\p"
	.string "Here, I have something for you.$"

IgneousIsland_EventScript_FlyGuy_PostBattle_Text_1:
	.string "This is how I get around the islands so\n"
	.string "quickly. Now you can do it too!\p"
	.string "Teach FLY to your bird POKéMON, and\n"
	.string "you'll be as free as the wind.\p"
	.string "Until we meet again!\n"
	.string "I'll see you in the skies!$"

IgneousIsland_EventScript_IslandSign_Text_0:
	.string "IGNEOUS ISLAND\n"
	.string "A volcanic trial by fire.$"

IgneousIsland_EventScript_RestStopSign_Text_0:
	.string "REST STOP$"

IgneousIsland_EventScript_Girl_Text_0:
	.string "Are you wondering why it's so quiet\n"
	.string "around here?\p"
	.string "IGNEOUS ISLAND isn't exactly a popular\n"
	.string "destination. We're at the foot of an\l"
	.string "active volcano, home to lots of strong\l"
	.string "POKéMON.\p"
	.string "Only tough trainers hang around here,\n"
	.string "and you'll find them all further up the\l"
	.string "mountain.$"
