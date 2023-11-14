IgneousIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IgneousIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IgneousIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_IGNEOUS_ISLAND
	return


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
