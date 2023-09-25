.set LOCALID_NURSE, 1

KapokIsland_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KapokIsland_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KapokIsland_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_KAPOK_ISLAND
	return


KapokIsland_PokemonCenter_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	msgbox KapokIsland_PokemonCenter_Nurse_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_PokemonCenter_Nurse_1
	goto KapokIsland_PokemonCenter_Nurse_Goodbye
	return

KapokIsland_PokemonCenter_Nurse_1:
	msgbox KapokIsland_PokemonCenter_Nurse_Text_1, MSGBOX_DEFAULT
	waitmessage
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	message KapokIsland_PokemonCenter_Nurse_Text_2
	waitmessage
	applymovement 1, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	goto KapokIsland_PokemonCenter_Nurse_Goodbye
	return


KapokIsland_PokemonCenter_Nurse_Goodbye::
	msgbox KapokIsland_PokemonCenter_Nurse_Goodbye_Text_0, MSGBOX_DEFAULT
	release
	end


KapokIsland_PokemonCenter_Woman::
	msgbox KapokIsland_PokemonCenter_Woman_Text_0, MSGBOX_NPC
	return


KapokIsland_PokemonCenter_HexManiac::
	msgbox KapokIsland_PokemonCenter_HexManiac_Text_0, MSGBOX_NPC
	return


KapokIsland_PokemonCenter_Boy::
	msgbox KapokIsland_PokemonCenter_Boy_Text_0, MSGBOX_NPC
	return


KapokIsland_PokemonCenter_Nurse_Text_0:
	.string "Hello, and welcome to\n"
	.string "the POKéMON CENTER.\p"
	.string "We restore your tired POKéMON\n"
	.string "to full health.\p"
	.string "Would you like to rest your POKéMON?$"

KapokIsland_PokemonCenter_Nurse_Text_1:
	.string "Okay, I'll take your POKéMON\n"
	.string "for a few seconds.$"

KapokIsland_PokemonCenter_Nurse_Text_2:
	.string "Thank you for waiting.\p"
	.string "We've restored your POKéMON\n"
	.string "to full health.$"

KapokIsland_PokemonCenter_Nurse_Goodbye_Text_0:
	.string "We hope to see you again!$"

KapokIsland_PokemonCenter_Woman_Text_0:
	.string "I'm resting up before an expedition\n"
	.string "into the jungle.$"

KapokIsland_PokemonCenter_HexManiac_Text_0:
	.string "I'm reading about the history of the\n"
	.string "REGIUS ARCHIPELAGO.\l"
	.string "Did you know these seas used to be\l"
	.string "ruled by pirates? Can you believe\l"
	.string "that?\p"
	.string "I wonder where they all went…$"

KapokIsland_PokemonCenter_Boy_Text_0:
	.string "Thank goodness for air conditioning!\n"
	.string "Modern amenities are hard to come by on\l"
	.string "these islands, but KAPOK ISLAND always\l"
	.string "delivers.$"
