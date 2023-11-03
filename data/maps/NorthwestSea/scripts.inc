NorthwestSea_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NorthwestSea_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NorthwestSea_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 16
	goto_if_eq NorthwestSea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

NorthwestSea_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setweather WEATHER_FOG_HORIZONTAL
	return


NorthwestSea_EventScript_ItemDiveBall::
	finditem ITEM_DIVE_BALL
	end


NorthwestSea_EventScript_ItemTM46::
	finditem ITEM_TM46
	end


NorthwestSea_EventScript_ItemMaxElixir::
	finditem ITEM_MAX_ELIXIR
	end


NorthwestSea_EventScript_ShardHouseSign::
	msgbox NorthwestSea_EventScript_ShardHouseSign_Text_0, MSGBOX_SIGN
	end


NorthwestSea_EventScript_George::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_GEORGE, 0, NorthwestSea_EventScript_George_Text_0, NorthwestSea_EventScript_George_Text_1
	msgbox NorthwestSea_EventScript_George_Text_2, MSGBOX_NPC
	return


NorthwestSea_EventScript_Anya::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ANYA, 0, NorthwestSea_EventScript_Anya_Text_0, NorthwestSea_EventScript_Anya_Text_1
	msgbox NorthwestSea_EventScript_Anya_Text_2, MSGBOX_NPC
	return


NorthwestSea_EventScript_Morgan::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_MORGAN, 0, NorthwestSea_EventScript_Morgan_Text_0, NorthwestSea_EventScript_Morgan_Text_1
	msgbox NorthwestSea_EventScript_Morgan_Text_2, MSGBOX_NPC
	return


NorthwestSea_EventScript_Amanda::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_AMANDA, 0, NorthwestSea_EventScript_Amanda_Text_0, NorthwestSea_EventScript_Amanda_Text_1
	msgbox NorthwestSea_EventScript_Amanda_Text_2, MSGBOX_NPC
	return


NorthwestSea_EventScript_Akira::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_AKIRA, 0, NorthwestSea_EventScript_Akira_Text_0, NorthwestSea_EventScript_Akira_Text_1
	msgbox NorthwestSea_EventScript_Akira_Text_2, MSGBOX_NPC
	return


NorthwestSea_EventScript_Swimmer::
	msgbox NorthwestSea_EventScript_Swimmer_Text_0, MSGBOX_NPC
	return


NorthwestSea_EventScript_ShardHouseSign_Text_0:
	.string "SHARD EXCHANGE$"

NorthwestSea_EventScript_George_Text_0:
	.string "Whoah! Don't sneak up on a guy with his\n"
	.string "line in the water!$"

NorthwestSea_EventScript_George_Text_1:
	.string "My line's tangled!$"

NorthwestSea_EventScript_George_Text_2:
	.string "The strong currents are home to strong\n"
	.string "POKéMON.\l"
	.string "Only serious FISHERMEN come out here.$"

NorthwestSea_EventScript_Anya_Text_0:
	.string "This isn't an ideal swimming spot.$"

NorthwestSea_EventScript_Anya_Text_1:
	.string "Give me a break…$"

NorthwestSea_EventScript_Anya_Text_2:
	.string "I don't want to get tossed around, so\n"
	.string "I'm staying where the water is calm.$"

NorthwestSea_EventScript_Morgan_Text_0:
	.string "The GHOST SHIP…\n"
	.string "It beckons me…$"

NorthwestSea_EventScript_Morgan_Text_1:
	.string "Aiyeeee!!$"

NorthwestSea_EventScript_Morgan_Text_2:
	.string "Do you sense it?\n"
	.string "Just north of here, shrouded in fog, a\l"
	.string "wrecked ship swarming with spirits…\p"
	.string "Alas, I cannot figure out how to reach\n"
	.string "it.$"

NorthwestSea_EventScript_Amanda_Text_0:
	.string "Help me out of this crazy place!$"

NorthwestSea_EventScript_Amanda_Text_1:
	.string "Dizzy…$"

NorthwestSea_EventScript_Amanda_Text_2:
	.string "These currents are confusing.\n"
	.string "How am I supposed to get anywhere?$"

NorthwestSea_EventScript_Akira_Text_0:
	.string "Witness the hidden potential of\n"
	.string "DRAGONS!$"

NorthwestSea_EventScript_Akira_Text_1:
	.string "You did your best…$"

NorthwestSea_EventScript_Akira_Text_2:
	.string "My POKéMON may not be DRAGONS yet, but\n"
	.string "mark my words:\l"
	.string "one day, they will grow up to be big and\l"
	.string "mighty.$"

NorthwestSea_EventScript_Swimmer_Text_0:
	.string "I want to get to that clearing right\n"
	.string "over there.\l"
	.string "But the current makes it impossible\l"
	.string "from here.\p"
	.string "There must be a way to slip in, right?$"
