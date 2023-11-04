GhostShip_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	clearflag FLAG_GHOST_SHIP_HIDE_DUSCLOPS
	showobjectat 1, MAP_GHOST_SHIP_B1F
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 17
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	compare VAR_TEMP_0, 25
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	compare VAR_TEMP_0, 41
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setobjectxyperm 1, 0, 0
GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_GHOST_SHIP_HIDE_EVENT_DUSCLOPS
	removeobject 3
	return

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm 1, 10, 22
	goto GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	setobjectxyperm 1, 34, 20
	goto GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	compare VAR_GHOST_SHIP_STATE, 0
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	compare VAR_GHOST_SHIP_STATE, 0
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_unset FLAG_UNLOCKED_CAPTAINS_QUARTERS, GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto_if_unset FLAG_UNLOCKED_SECRET_CABIN, GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_5
GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	compare VAR_GHOST_SHIP_STATE, 1
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 32, 29, METATILE_Pirate_Ship_Door_Locked, TRUE
	goto GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
	setmetatile 38, 30, METATILE_Pirate_Ship_Door_Locked, TRUE
	goto GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	setmetatile 17, 9, METATILE_Pirate_Ship_SouthExitLeftNoArrow, FALSE
	setmetatile 18, 9, METATILE_Pirate_Ship_SouthExitRightNoArrow, FALSE
	return


GhostShip_B1F_EventScript_CaptainsQuartersDoor::
	lock
	goto_if_set FLAG_UNLOCKED_CAPTAINS_QUARTERS, GhostShip_B1F_EventScript_CaptainsQuartersDoor_2
	msgbox GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_1, MSGBOX_DEFAULT
	checkitem ITEM_ELEGANT_KEY
	compare VAR_RESULT, 0
	goto_if_ne GhostShip_B1F_EventScript_CaptainsQuartersDoor_5
GhostShip_B1F_EventScript_CaptainsQuartersDoor_4:
	release
	end

GhostShip_B1F_EventScript_CaptainsQuartersDoor_2:
	msgbox GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_0, MSGBOX_DEFAULT
	release
	end

GhostShip_B1F_EventScript_CaptainsQuartersDoor_5:
	msgbox GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq GhostShip_B1F_EventScript_CaptainsQuartersDoor_8
	delay 10
	playse SE_UNLOCK
	waitse
	setmetatile 32, 29, METATILE_Pirate_Ship_Door_Unlocked, TRUE
	special DrawWholeMapView
	setflag FLAG_UNLOCKED_CAPTAINS_QUARTERS
	msgbox GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_0, MSGBOX_DEFAULT
	goto GhostShip_B1F_EventScript_CaptainsQuartersDoor_4

GhostShip_B1F_EventScript_CaptainsQuartersDoor_8:
	release
	end


GhostShip_B1F_EventScript_SecretCabinDoor::
	lock
	goto_if_set FLAG_UNLOCKED_SECRET_CABIN, GhostShip_B1F_EventScript_SecretCabinDoor_2
	msgbox GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_1, MSGBOX_DEFAULT
	checkitem ITEM_OLD_KEY
	compare VAR_RESULT, 0
	goto_if_ne GhostShip_B1F_EventScript_SecretCabinDoor_5
GhostShip_B1F_EventScript_SecretCabinDoor_4:
	release
	end

GhostShip_B1F_EventScript_SecretCabinDoor_2:
	msgbox GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_0, MSGBOX_DEFAULT
	release
	end

GhostShip_B1F_EventScript_SecretCabinDoor_5:
	msgbox GhostShip_B1F_EventScript_SecretCabinDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq GhostShip_B1F_EventScript_SecretCabinDoor_8
	delay 10
	playse SE_UNLOCK
	waitse
	setmetatile 38, 30, METATILE_Pirate_Ship_Door_Unlocked, TRUE
	special DrawWholeMapView
	setflag FLAG_UNLOCKED_SECRET_CABIN
	msgbox GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_0, MSGBOX_DEFAULT
	goto GhostShip_B1F_EventScript_SecretCabinDoor_4

GhostShip_B1F_EventScript_SecretCabinDoor_8:
	release
	end


GhostShip_B1F_EventScript_ItemDiveBall::
	finditem ITEM_DIVE_BALL
	end


GhostShip_B1F_EventScript_ItemTM30::
	finditem ITEM_TM30
	end


GhostShip_B1F_EventScript_ItemElegantKey::
	finditem ITEM_ELEGANT_KEY
	end


GhostShip_B1F_EventScript_GalleySign::
	msgbox GhostShip_B1F_EventScript_GalleySign_Text_0, MSGBOX_SIGN
	end


GhostShip_B1F_EventScript_StoreRoomSign::
	msgbox GhostShip_B1F_EventScript_StoreRoomSign_Text_0, MSGBOX_SIGN
	end


GhostShip_B1F_EventScript_CaptainsQuartersSign::
	msgbox GhostShip_B1F_EventScript_CaptainsQuartersSign_Text_0, MSGBOX_SIGN
	end


GhostShip_B1F_HideDusclopsTrigger::
	setflag FLAG_GHOST_SHIP_HIDE_DUSCLOPS
	removeobject 1
	end


GhostShip_EventScript_ItemHM08::
	finditem ITEM_HM08
	setflag FLAG_RECEIVED_HM08
	setvar VAR_GHOST_SHIP_STATE, 1
	setmetatile 17, 9, METATILE_Pirate_Ship_SouthExitLeftNoArrow, FALSE
	setmetatile 18, 9, METATILE_Pirate_Ship_SouthExitRightNoArrow, FALSE
	end


GhostShip_EventScript_DusclopsEncounter::
	lock
	playse SE_CLICK
	delay 40
	msgbox GhostShip_EventScript_DusclopsEncounter_Text_0
	playmoncry SPECIES_DUSCLOPS, 2
	delay 40
	waitmoncry
	fadescreen 1
	msgbox GhostShip_EventScript_DusclopsEncounter_Text_1
	closemessage
	clearflag FLAG_GHOST_SHIP_HIDE_EVENT_DUSCLOPS
	addobject 3
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	fadescreen 0
	delay 40
	applymovement 3, DusclopsAppears
	waitmovement 0
	playmoncry SPECIES_DUSCLOPS, 0
	msgbox GhostShip_EventScript_DusclopsEncounter_Text_2
	special SetDusclopsBattle
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GhostShip_EventScript_DusclopsEncounter_2
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq GhostShip_EventScript_DusclopsEncounter_2
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq GhostShip_EventScript_DusclopsEncounter_2
GhostShip_EventScript_DusclopsEncounter_1:
	setflag FLAG_GHOST_SHIP_HIDE_EVENT_DUSCLOPS
	removeobject 3
	release
	end

GhostShip_EventScript_DusclopsEncounter_2:
	fadescreen 1
	setflag FLAG_GHOST_SHIP_HIDE_EVENT_DUSCLOPS
	removeobject 3
	fadescreen 0
	delay 40
	playse SE_UNLOCK
	delay 40
	msgbox GhostShip_EventScript_DusclopsEncounter_Text_3
	setmetatile 17, 9, METATILE_Pirate_Ship_SouthExitLeft, FALSE
	setmetatile 18, 9, METATILE_Pirate_Ship_SouthExitRight, FALSE
	setvar VAR_GHOST_SHIP_STATE, 2
	goto GhostShip_EventScript_DusclopsEncounter_1


DusclopsAppears:
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_16
	set_invisible
	delay_16
	set_visible
	step_end

GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_0:
	.string "The door is unlocked.$"

GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_1:
	.string "The door is locked.$"

GhostShip_B1F_EventScript_CaptainsQuartersDoor_Text_2:
	.string "Use the ELEGANT KEY?$"

GhostShip_B1F_EventScript_SecretCabinDoor_Text_0:
	.string "Use the OLD KEY?$"

GhostShip_B1F_EventScript_GalleySign_Text_0:
	.string "GALLEY$"

GhostShip_B1F_EventScript_StoreRoomSign_Text_0:
	.string "STORE ROOM$"

GhostShip_B1F_EventScript_CaptainsQuartersSign_Text_0:
	.string "CAPTAIN'S QUARTERS$"

GhostShip_EventScript_DusclopsEncounter_Text_0:
	.string "The door is locked...$"

GhostShip_EventScript_DusclopsEncounter_Text_1:
	.string ".......mine....$"

GhostShip_EventScript_DusclopsEncounter_Text_2:
	.string "....off........\n"
	.string "my.....ship....$"

GhostShip_EventScript_DusclopsEncounter_Text_3:
	.string "The door was unlocked.$"
