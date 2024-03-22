AridIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_ARID_ISLAND
	goto_if_set FLAG_DEFEATED_ARID_ISLAND_FLY_GUY, AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_HIDE_ARID_ISLAND_FLY_GUY
	removeobject 8
	return

AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	goto_if_set FLAG_VISITED_KAPOK_ISLAND, AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


AridIsland_EventScript_FlyGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ARID_ISLAND_FLY_GUY, AridIsland_EventScript_FlyGuy_2
	msgbox AridIsland_EventScript_FlyGuy_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq AridIsland_EventScript_FlyGuy_5
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_LESTER_1, 0, AridIsland_EventScript_FlyGuy_Text_2, AridIsland_EventScript_FlyGuy_Text_3, AridIsland_EventScript_FlyGuy_PostBattle
	release
	end

AridIsland_EventScript_FlyGuy_2:
	msgbox AridIsland_EventScript_FlyGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne AridIsland_EventScript_FlyGuy_8
	msgbox AridIsland_Text_FlyGuyComeBack, MSGBOX_DEFAULT
AridIsland_EventScript_FlyGuy_7:
	release
	end

AridIsland_EventScript_FlyGuy_5:
	msgbox AridIsland_Text_FlyGuyIllBeHere, MSGBOX_DEFAULT
	release
	end

AridIsland_EventScript_FlyGuy_8:
	setvar VAR_0x800A, LAST_TALKED_TO_FLYING_TAXI
	special FieldLoadFlyMap
	goto AridIsland_EventScript_FlyGuy_7


AridIsland_EventScript_FlyGuy_PostBattle::
	setflag FLAG_DEFEATED_ARID_ISLAND_FLY_GUY
	msgbox AridIsland_EventScript_FlyGuy_PostBattle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne AridIsland_EventScript_FlyGuy_PostBattle_2
	msgbox AridIsland_Text_FlyGuyComeBack, MSGBOX_DEFAULT
AridIsland_EventScript_FlyGuy_PostBattle_1:
	release
	end

AridIsland_EventScript_FlyGuy_PostBattle_2:
	setvar VAR_0x800A, LAST_TALKED_TO_FLYING_TAXI
	special FieldLoadFlyMap
	goto AridIsland_EventScript_FlyGuy_PostBattle_1


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

AridIsland_EventScript_FlyGuy_Text_0:
	.string "Hey, it's you again!\p"
	.string "My birds can take you to any island\n"
	.string "you've visited before.\p"
	.string "What do you say, want a lift?$"

AridIsland_EventScript_FlyGuy_Text_1:
	.string "Howdy!\p"
	.string "I've been using my bird POKéMON to FLY\n"
	.string "around the islands.\p"
	.string "My birds need to stretch their wings\n"
	.string "before setting out again.\p"
	.string "Would you help me warm them up with a\n"
	.string "battle?$"

AridIsland_EventScript_FlyGuy_Text_2:
	.string "Alright!$"

AridIsland_EventScript_FlyGuy_Text_3:
	.string "Amazing!$"

AridIsland_EventScript_FlyGuy_PostBattle_Text_0:
	.string "Hey, you have real talent as a TRAINER!\p"
	.string "I gotta thank you somehow…\n"
	.string "Oh, I know!\p"
	.string "My birds can take you to any island\n"
	.string "you've visited before.\p"
	.string "What do you say, want a lift?$"

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
	.string "It's home to ancient ruins just\l"
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

AridIsland_Text_FlyGuyComeBack::
	.string "I'll hang around here a little longer, so\n"
	.string "come back if you need a lift.$"

AridIsland_Text_FlyGuyIllBeHere::
	.string "Aw, alright.\p"
	.string "I'll be right here if you change your\n"
	.string "mind.$"
