GatewayIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GatewayIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GatewayIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_GATEWAY_ISLAND
	goto_if_unset FLAG_SYS_POKEMON_GET, GatewayIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GatewayIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxyperm 2, 39, 23
	setobjectxyperm 3, 39, 24
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	return


GatewayIsland_EventScript_KecleonBoy::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEMON_GET, GatewayIsland_EventScript_KecleonBoy_2
	msgbox GatewayIsland_EventScript_KecleonBoy_Text_1, MSGBOX_AUTOCLOSE
GatewayIsland_EventScript_KecleonBoy_1:
	release
	end

GatewayIsland_EventScript_KecleonBoy_2:
	msgbox GatewayIsland_EventScript_KecleonBoy_Text_0, MSGBOX_AUTOCLOSE
	goto GatewayIsland_EventScript_KecleonBoy_1


GatewayIsland_EventScript_Kecleon::
	lock
	faceplayer
	playmoncry SPECIES_KECLEON, 0
	msgbox GatewayIsland_EventScript_Kecleon_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	release
	end


GatewayIsland_EventScript_Lass::
	lock
	faceplayer
	checkpartytmhm ITEM_HM07
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq GatewayIsland_EventScript_Lass_2
	bufferpartymonnick 0, VAR_RESULT
	msgbox GatewayIsland_EventScript_Lass_Text_1, MSGBOX_AUTOCLOSE
GatewayIsland_EventScript_Lass_1:
	release
	end

GatewayIsland_EventScript_Lass_2:
	msgbox GatewayIsland_EventScript_Lass_Text_0, MSGBOX_AUTOCLOSE
	goto GatewayIsland_EventScript_Lass_1


GatewayIsland_EventScript_FlyingTaxi::
	lock
	faceplayer
	msgbox GatewayIsland_EventScript_FlyingTaxi_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq GatewayIsland_EventScript_FlyingTaxi_2
GatewayIsland_EventScript_FlyingTaxi_1:
	release
	end

GatewayIsland_EventScript_FlyingTaxi_2:
	setvar VAR_0x800A, LAST_TALKED_TO_FLYING_TAXI
	special FieldLoadFlyMap
	goto GatewayIsland_EventScript_FlyingTaxi_1


GatewayIsland_EventScript_KecleonBoy_Text_0:
	.string "These islands are chock full of\n"
	.string "wild POKéMON.\p"
	.string "It's wonderful, but it can be\n"
	.string "dangerous if you don't have a\l"
	.string "POKéMON to protect you.$"

GatewayIsland_EventScript_KecleonBoy_Text_1:
	.string "There are wild POKéMON out this way.\n"
	.string "I can't let you go out there unless\l"
	.string "you have a POKéMON of your own.$"

GatewayIsland_EventScript_Kecleon_Text_0:
	.string "Kiyahn!$"

GatewayIsland_EventScript_Lass_Text_0:
	.string "Hmm... None of your POKéMON can learn\n"
	.string "WATERFALL.$"

GatewayIsland_EventScript_Lass_Text_1:
	.string "Oh! Your {STR_VAR_1}\n"
	.string "can learn WATERFALL!$"

GatewayIsland_EventScript_FlyingTaxi_Text_0:
	.string "Want a lift?$"
