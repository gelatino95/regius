AridIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_ARID_ISLAND
	return


AridIsland_EventScript_ItemProtein::
	finditem ITEM_PROTEIN
	end


AridIsland_EventScript_AridIslandSign::
	msgbox AridIsland_EventScript_AridIslandSign_Text_0, MSGBOX_SIGN
	return


AridIsland_EventScript_DesertSign::
	msgbox AridIsland_EventScript_DesertSign_Text_0, MSGBOX_SIGN
	return


AridIsland_EventScript_Boy1::
	msgbox AridIsland_EventScript_Boy1_Text_0, MSGBOX_NPC
	return


AridIsland_EventScript_Boy2::
	msgbox AridIsland_EventScript_Boy2_Text_0, MSGBOX_NPC
	return


AridIsland_EventScript_RuinManiac::
	msgbox AridIsland_EventScript_RuinManiac_Text_0, MSGBOX_NPC
	return


AridIsland_EventScript_DrinkMart::
	lock
	message AridIsland_EventScript_DrinkMart_Text_0
	waitmessage
	pokemart DrinkMartItems
	msgbox AridIsland_EventScript_DrinkMart_Text_1
	release
	return


	.align 2
DrinkMartItems:
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

AridIsland_EventScript_GeneralMart::
	lock
	message AridIsland_EventScript_GeneralMart_Text_0
	waitmessage
	pokemart GeneralMartItems
	msgbox AridIsland_EventScript_GeneralMart_Text_1
	release
	return


	.align 2
GeneralMartItems:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REVIVE
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

AridIsland_EventScript_BerryMart::
	lock
	message AridIsland_EventScript_BerryMart_Text_0
	waitmessage
	pokemart BerryMartItems
	msgbox AridIsland_EventScript_BerryMart_Text_1
	release
	return


	.align 2
BerryMartItems:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

AridIsland_EventScript_AridIslandSign_Text_0:
	.string "ARID ISLAND\n"
	.string "The hot, dry market town.$"

AridIsland_EventScript_DesertSign_Text_0:
	.string "Passage to ARID DESERT.\p"
	.string "WARNING: Severe sandstorms ahead.$"

AridIsland_EventScript_Boy1_Text_0:
	.string "All the MARTS around here\n"
	.string "are outdoors.\p"
	.string "The cool ocean breeze makes the\n"
	.string "weather on this side of the island just\l"
	.string "perfect.$"

AridIsland_EventScript_Boy2_Text_0:
	.string "I'm not allowed to play in\n"
	.string "the desert!\p"
	.string "It's easy to get lost in the\n"
	.string "sandstorm, and it's full of\l"
	.string "scary POKéMON!$"

AridIsland_EventScript_RuinManiac_Text_0:
	.string "The ARID DESERT hides a great secret!\n"
	.string "It's home to ancient ruins just\n"
	.string "begging to be explored!\p"
	.string "Adventurers come from all over\n"
	.string "just to see them.$"

AridIsland_EventScript_DrinkMart_Text_0:
	.string "The desert is hot!\nBeat the heat with a drink!$"

AridIsland_EventScript_DrinkMart_Text_1:
	.string "Come again soon!$"

AridIsland_EventScript_GeneralMart_Text_0:
	.string "General goods here!\nNeed to stock up?$"

AridIsland_EventScript_GeneralMart_Text_1:
	.string "Thank you.$"

AridIsland_EventScript_BerryMart_Text_0:
	.string "Berries for sale!\nGet them while they're ripe!$"

AridIsland_EventScript_BerryMart_Text_1:
	.string "Come again!$"
