AridIsland_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AridIsland_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AridIsland_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ARID_ISLAND
	return


AridIsland_PokemonCenter_Nurse::
	lock
	faceplayer
	msgbox AridIsland_PokemonCenter_Nurse_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne AridIsland_PokemonCenter_Nurse_2
AridIsland_PokemonCenter_Nurse_1:
	msgbox AridIsland_PokemonCenter_Nurse_Text_3, MSGBOX_DEFAULT
	release
	end

AridIsland_PokemonCenter_Nurse_2:
	msgbox AridIsland_PokemonCenter_Nurse_Text_1, MSGBOX_DEFAULT
	waitmessage
	closemessage
	fadescreen 1
	playfanfare MUS_HEAL
	special HealPlayerParty
	waitfanfare
	fadescreen 0
	message AridIsland_PokemonCenter_Nurse_Text_2
	waitmessage
	applymovement 1, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	goto AridIsland_PokemonCenter_Nurse_1


AridIsland_PokemonCenter_Man::
	msgbox AridIsland_PokemonCenter_Man_Text_0, MSGBOX_NPC
	return


AridIsland_PokemonCenter_Girl::
	msgbox AridIsland_PokemonCenter_Girl_Text_0, MSGBOX_NPC
	return


AridIsland_PokemonCenter_Nurse_Text_0:
	.string "Hello, and welcome to\n"
	.string "the POKéMON CENTER.\p"
	.string "We restore your tired POKéMON\n"
	.string "to full health.\p"
	.string "Would you like to rest your POKéMON?$"

AridIsland_PokemonCenter_Nurse_Text_1:
	.string "Okay, I'll take your POKéMON\n"
	.string "for a few seconds.$"

AridIsland_PokemonCenter_Nurse_Text_2:
	.string "Thank you for waiting.\p"
	.string "We've restored your POKéMON\n"
	.string "to full health.$"

AridIsland_PokemonCenter_Nurse_Text_3:
	.string "We hope to see you again!$"

AridIsland_PokemonCenter_Man_Text_0:
	.string "Hoho! My POKéMON adores BERRY JUICE!\n"
	.string "It will even drink up BERRY JUICE right\l"
	.string "in the middle of battle!\p"
	.string "I hear BERRY JUICE is actually made by\n"
	.string "a rare POKéMON…$"

AridIsland_PokemonCenter_Girl_Text_0:
	.string "So we're on ARID ISLAND, on the eastern\n"
	.string "side of the archipelago…\p"
	.string "If I get lost, I check a MAP in a\n"
	.string "POKéMON CENTER to get my bearings.\p"
	.string "If you have a POKéNAV, you can even\n"
	.string "check where you are in the middle of\l"
	.string "the sea!$"
