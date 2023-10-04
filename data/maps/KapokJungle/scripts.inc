KapokJungle_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	random 20
	compare VAR_RESULT, 19
	goto_if_eq KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	compare VAR_RESULT, 13
	goto_if_ge KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	setweather WEATHER_SHADE
KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	doweather
	end

KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setweather WEATHER_RAIN_THUNDERSTORM
	goto KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setweather WEATHER_RAIN
	goto KapokJungle_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


KapokJungle_EventScript_HerbShopSign::
	msgbox KapokJungle_EventScript_HerbShopSign_Text_0, MSGBOX_SIGN
	end


KapokJungle_EventScript_TrainerTipsSign::
	msgbox KapokJungle_EventScript_TrainerTipsSign_Text_0, MSGBOX_SIGN
	end


KapokJungle_EventScript_DirectionsSign::
	msgbox KapokJungle_EventScript_DirectionsSign_Text_0, MSGBOX_SIGN
	end


KapokJungle_EventScript_LabSign::
	msgbox KapokJungle_EventScript_LabSign_Text_0, MSGBOX_SIGN
	end


KapokJungle_EventScript_Picnicker::
	msgbox KapokJungle_EventScript_Picnicker_Text_0, MSGBOX_NPC
	end


KapokJungle_EventScript_Holden::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_HOLDEN, 0, KapokJungle_EventScript_Holden_Text_0, KapokJungle_EventScript_Holden_Text_1
	msgbox KapokJungle_EventScript_Holden_Text_2, MSGBOX_NPC
	end


KapokJungle_EventScript_Simon::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_SIMON, 0, KapokJungle_EventScript_Simon_Text_0, KapokJungle_EventScript_Simon_Text_1
	msgbox KapokJungle_EventScript_Simon_Text_2, MSGBOX_NPC
	end


KapokJungle_EventScript_Leslie::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LESLIE, 0, KapokJungle_EventScript_Leslie_Text_0, KapokJungle_EventScript_Leslie_Text_1
	msgbox KapokJungle_EventScript_Leslie_Text_2, MSGBOX_NPC
	end


KapokJungle_EventScript_Glen::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_GLEN, 0, KapokJungle_EventScript_Glen_Text_0, KapokJungle_EventScript_Glen_Text_1
	msgbox KapokJungle_EventScript_Glen_Text_2, MSGBOX_NPC
	end


KapokJungle_EventScript_ItemLeafStone::
	finditem ITEM_LEAF_STONE
	end


KapokJungle_EventScript_ItemRareCandy::
	finditem ITEM_RARE_CANDY
	end


KapokJungle_EventScript_ItemMiracleSeed::
	finditem ITEM_MIRACLE_SEED
	end


KapokJungle_EventScript_ItemElixir::
	finditem ITEM_ELIXIR
	end


KapokJungle_EventScript_HerbShopSign_Text_0:
	.string "HERB SHOP$"

KapokJungle_EventScript_TrainerTipsSign_Text_0:
	.string "TRAINER TIPS\p"
	.string "Want to evolve your POKéMON that needs\n"
	.string "to be traded with an item?\p"
	.string "No need for trading: simply USE the\n"
	.string "item, and you're all set.\p"
	.string "Be sure to frequently check if your\n"
	.string "POKeMON can evolve with an ITEM in\l"
	.string "your bag!$"

KapokJungle_EventScript_DirectionsSign_Text_0:
	.string "KAPOK JUNGLE\p"
	.string "{UP_ARROW} RESEARCH LAB\n"
	.string "{LEFT_ARROW} HERB SHOP\l"
	.string "{DOWN_ARROW} KAPOK ISLAND$"

KapokJungle_EventScript_LabSign_Text_0:
	.string "REGIUS BIOLOGICAL INSTITUTE\n"
	.string "KAPOK JUNGLE BRANCH$"

KapokJungle_EventScript_Picnicker_Text_0:
	.string "Keep a vigilant eye out for trash left\n"
	.string "on the forest floor.\l"
	.string "Pick it up whenever you see it!$"

KapokJungle_EventScript_Holden_Text_0:
	.string "I can't see over the tall grass!\n"
	.string "Where am I?$"

KapokJungle_EventScript_Holden_Text_1:
	.string "I'm hopelessly lost…$"

KapokJungle_EventScript_Holden_Text_2:
	.string "The exit is right down there? Phew, I'm\n"
	.string "not actually lost!$"

KapokJungle_EventScript_Simon_Text_0:
	.string "Are you doing your part to keep the\n"
	.string "jungle safe?$"

KapokJungle_EventScript_Simon_Text_1:
	.string "You're all set!$"

KapokJungle_EventScript_Simon_Text_2:
	.string "This is a lush ecosystem. It needs\n"
	.string "protecting!$"

KapokJungle_EventScript_Leslie_Text_0:
	.string "Look what I found…$"

KapokJungle_EventScript_Leslie_Text_1:
	.string "Uh…$"

KapokJungle_EventScript_Leslie_Text_2:
	.string "These islands are teeming with quality\n"
	.string "bugs, if you know where to look…$"

KapokJungle_EventScript_Glen_Text_0:
	.string "My survey of the local species is nearly\n"
	.string "complete!$"

KapokJungle_EventScript_Glen_Text_1:
	.string "My data!$"

KapokJungle_EventScript_Glen_Text_2:
	.string "There are so many POKéMON to catalogue\n"
	.string "here, it's making my head spin!$"
