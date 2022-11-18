GatewayIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GatewayIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GatewayIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_GATEWAY_ISLAND
	return


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


GatewayIsland_EventScript_Lass_Text_0:
	.string "Hmm... None of your POKéMON can learn\n"
	.string "WATERFALL.$"

GatewayIsland_EventScript_Lass_Text_1:
	.string "Oh! Your {STR_VAR_1}\n"
	.string "can learn WATERFALL!$"
