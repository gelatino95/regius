GatewayIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GatewayIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD
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

GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_unset FLAG_REGIROCK_SEAL_OPEN, GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto_if_unset FLAG_REGICE_SEAL_OPEN, GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	goto_if_unset FLAG_REGISTEEL_SEAL_OPEN, GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	goto_if_unset FLAG_GATEWAY_DOOR_OPEN, GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10
	return

GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 25, 12, METATILE_Fortree_RegiSeal_Off, TRUE
	setmetatile 29, 12, METATILE_Fortree_RegiSeal_Off, TRUE
	goto GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1

GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
	setmetatile 25, 13, METATILE_Fortree_RegiSeal_Off, TRUE
	setmetatile 29, 13, METATILE_Fortree_RegiSeal_Off, TRUE
	goto GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4

GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
	setmetatile 25, 14, METATILE_Fortree_RegiSeal_Off_Bottom, TRUE
	setmetatile 29, 14, METATILE_Fortree_RegiSeal_Off_Bottom, TRUE
	goto GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7

GatewayIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10:
	setmetatile 27, 13, METATILE_Fortree_Gateway_Entrance_Cover_Top, TRUE
	setmetatile 27, 14, METATILE_Fortree_Gateway_Entrance_Cover_Bottom, TRUE
	return


GatewayIsland_EventScript_StoneGate::
	lock
	setvar VAR_TEMP_1, SPECIES_REGIROCK
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_EventScript_StoneGate_3
GatewayIsland_EventScript_StoneGate_1:
	setvar VAR_TEMP_1, SPECIES_REGICE
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_EventScript_StoneGate_8
GatewayIsland_EventScript_StoneGate_6:
	setvar VAR_TEMP_1, SPECIES_REGISTEEL
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_EventScript_StoneGate_13
GatewayIsland_EventScript_StoneGate_11:
	goto_if_set FLAG_GATEWAY_DOOR_OPEN, GatewayIsland_EventScript_StoneGate_17
	braillemsgbox GatewayIsland_Braille_StoneGate1
	delay 5
	braillemsgbox GatewayIsland_Braille_StoneGate2
GatewayIsland_EventScript_StoneGate_16:
	release
	end

GatewayIsland_EventScript_StoneGate_2:
	goto GatewayIsland_EventScript_UpdateGateState
	goto GatewayIsland_EventScript_StoneGate_1

GatewayIsland_EventScript_StoneGate_3:
	goto_if_unset FLAG_REGIROCK_SEAL_OPEN, GatewayIsland_EventScript_StoneGate_2
	goto GatewayIsland_EventScript_StoneGate_1

GatewayIsland_EventScript_StoneGate_7:
	goto GatewayIsland_EventScript_UpdateGateState
	goto GatewayIsland_EventScript_StoneGate_6

GatewayIsland_EventScript_StoneGate_8:
	goto_if_unset FLAG_REGICE_SEAL_OPEN, GatewayIsland_EventScript_StoneGate_7
	goto GatewayIsland_EventScript_StoneGate_6

GatewayIsland_EventScript_StoneGate_12:
	goto GatewayIsland_EventScript_UpdateGateState
	goto GatewayIsland_EventScript_StoneGate_11

GatewayIsland_EventScript_StoneGate_13:
	goto_if_unset FLAG_REGISTEEL_SEAL_OPEN, GatewayIsland_EventScript_StoneGate_12
	goto GatewayIsland_EventScript_StoneGate_11

GatewayIsland_EventScript_StoneGate_17:
	msgbox GatewayIsland_EventScript_StoneGate_Text_0, MSGBOX_AUTOCLOSE
	goto GatewayIsland_EventScript_StoneGate_16


GatewayIsland_EventScript_UpdateGateState::
	fadeoutbgm 1
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 30
	setvar VAR_TEMP_1, SPECIES_REGIROCK
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_EventScript_UpdateGateState_3
GatewayIsland_EventScript_UpdateGateState_1:
	setvar VAR_TEMP_1, SPECIES_REGICE
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_EventScript_UpdateGateState_8
GatewayIsland_EventScript_UpdateGateState_6:
	setvar VAR_TEMP_1, SPECIES_REGISTEEL
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_EventScript_UpdateGateState_13
GatewayIsland_EventScript_UpdateGateState_11:
	delay 30
	goto_if_set FLAG_REGIROCK_SEAL_OPEN, GatewayIsland_EventScript_UpdateGateState_19
GatewayIsland_EventScript_UpdateGateState_16:
	fadeinbgm 0
	release
	end

GatewayIsland_EventScript_UpdateGateState_2:
	setmetatile 25, 12, METATILE_Fortree_RegiSeal_Red, TRUE
	setmetatile 29, 12, METATILE_Fortree_RegiSeal_Red, TRUE
	special DrawWholeMapView
	playse SE_UNLOCK
	setflag FLAG_REGIROCK_SEAL_OPEN
	delay 30
	goto GatewayIsland_EventScript_UpdateGateState_1

GatewayIsland_EventScript_UpdateGateState_3:
	goto_if_unset FLAG_REGIROCK_SEAL_OPEN, GatewayIsland_EventScript_UpdateGateState_2
	goto GatewayIsland_EventScript_UpdateGateState_1

GatewayIsland_EventScript_UpdateGateState_7:
	setmetatile 25, 13, METATILE_Fortree_RegiSeal_Blue, TRUE
	setmetatile 29, 13, METATILE_Fortree_RegiSeal_Blue, TRUE
	special DrawWholeMapView
	playse SE_UNLOCK
	setflag FLAG_REGICE_SEAL_OPEN
	delay 30
	goto GatewayIsland_EventScript_UpdateGateState_6

GatewayIsland_EventScript_UpdateGateState_8:
	goto_if_unset FLAG_REGICE_SEAL_OPEN, GatewayIsland_EventScript_UpdateGateState_7
	goto GatewayIsland_EventScript_UpdateGateState_6

GatewayIsland_EventScript_UpdateGateState_12:
	setmetatile 25, 14, METATILE_Fortree_RegiSeal_Gray, TRUE
	setmetatile 29, 14, METATILE_Fortree_RegiSeal_Gray, TRUE
	special DrawWholeMapView
	playse SE_UNLOCK
	setflag FLAG_REGISTEEL_SEAL_OPEN
	delay 30
	goto GatewayIsland_EventScript_UpdateGateState_11

GatewayIsland_EventScript_UpdateGateState_13:
	goto_if_unset FLAG_REGISTEEL_SEAL_OPEN, GatewayIsland_EventScript_UpdateGateState_12
	goto GatewayIsland_EventScript_UpdateGateState_11

GatewayIsland_EventScript_UpdateGateState_17:
	setmetatile 27, 13, METATILE_Fortree_Gateway_Entrance_Top, TRUE
	setmetatile 27, 14, METATILE_Fortree_Gateway_Entrance_Bottom, FALSE
	special DrawWholeMapView
	playse SE_UNLOCK
	setflag FLAG_GATEWAY_DOOR_OPEN
	delay 30
	goto GatewayIsland_EventScript_UpdateGateState_16

GatewayIsland_EventScript_UpdateGateState_18:
	goto_if_set FLAG_REGISTEEL_SEAL_OPEN, GatewayIsland_EventScript_UpdateGateState_17
	goto GatewayIsland_EventScript_UpdateGateState_16

GatewayIsland_EventScript_UpdateGateState_19:
	goto_if_set FLAG_REGICE_SEAL_OPEN, GatewayIsland_EventScript_UpdateGateState_18
	goto GatewayIsland_EventScript_UpdateGateState_16


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


GatewayIsland_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox GatewayIsland_EventScript_LittleGirl_Text_0, MSGBOX_AUTOCLOSE
	release
	end


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


GatewayIsland_EventScript_Woman::
	msgbox GatewayIsland_EventScript_Woman_Text_0, MSGBOX_NPC
	end


GatewayIsland_EventScript_GateMan::
	goto_if_set FLAG_GATEWAY_DOOR_OPEN, GatewayIsland_EventScript_GateMan_2
	msgbox GatewayIsland_EventScript_GateMan_Text_1, MSGBOX_NPC
GatewayIsland_EventScript_GateMan_1:
	end

GatewayIsland_EventScript_GateMan_2:
	msgbox GatewayIsland_EventScript_GateMan_Text_0, MSGBOX_NPC
	goto GatewayIsland_EventScript_GateMan_1


GatewayIsland_EventScript_SouthBeachBoy::
	msgbox GatewayIsland_EventScript_SouthBeachBoy_Text_0, MSGBOX_NPC
	end


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


GatewayIsland_EventScript_ItemPokeBall::
	finditem ITEM_POKE_BALL
	end


GatewayIsland_Braille_StoneGate1:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "AWAKEN THE\n"
	.braille "CHILDREN OF\n"
	.braille "ROCK, ICE,\n"
	.braille "AND STEEL$"
	
GatewayIsland_Braille_StoneGate2:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "THE RESTING\n"
	.braille "PLACE OF\n"
	.braille "THE COLOSSUS\n"
	.braille "WILL OPEN$"

GatewayIsland_EventScript_StoneGate_Text_0:
	.string "The way is open.$"

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

GatewayIsland_EventScript_LittleGirl_Text_0:
	.string "Hi!\n"
	.string "Do you have any cute POKéMON?$"

GatewayIsland_EventScript_Kecleon_Text_0:
	.string "Kiyahn!$"

GatewayIsland_EventScript_Lass_Text_0:
	.string "Hmm... None of your POKéMON can learn\n"
	.string "WATERFALL.$"

GatewayIsland_EventScript_Lass_Text_1:
	.string "Oh! Your {STR_VAR_1}\n"
	.string "can learn WATERFALL!$"

GatewayIsland_EventScript_Woman_Text_0:
	.string "Sigh…\p"
	.string "Life on the island can be\n"
	.string "a bit uneventful.\l"
	.string "But I wouldn't trade it for anything.$"

GatewayIsland_EventScript_GateMan_Text_0:
	.string "Huh? The gate is open!\n"
	.string "Did you do that…?$"

GatewayIsland_EventScript_GateMan_Text_1:
	.string "This stone gate has been here as long\n"
	.string "as anyone can remember.\p"
	.string "Apparently it was left by some\n"
	.string "ancient civilization.\p"
	.string "No one has been able to see what's\n"
	.string "behind it, either.\l"
	.string "It's quite an enigma.$"

GatewayIsland_EventScript_SouthBeachBoy_Text_0:
	.string "The trainers down this way are\n"
	.string "too tough!\p"
	.string "If you're a newbie trainer,\n"
	.string "you might want to rethink\l"
	.string "going down south.$"

GatewayIsland_EventScript_FlyingTaxi_Text_0:
	.string "Want a lift?$"
