GhostShip_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
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
	compare VAR_GHOST_SHIP_STATE, 1
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
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

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
	setmetatile 17, 9, METATILE_Pirate_Ship_SouthExitLeftNoArrow, FALSE
	setmetatile 18, 9, METATILE_Pirate_Ship_SouthExitRightNoArrow, FALSE
	goto GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_13


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

GhostShip_EventScript_DusclopsEncounter_Text_0:
	.string "The door is locked...$"

GhostShip_EventScript_DusclopsEncounter_Text_1:
	.string ".......mine....$"

GhostShip_EventScript_DusclopsEncounter_Text_2:
	.string "....off........\n"
	.string "my.....ship....$"

GhostShip_EventScript_DusclopsEncounter_Text_3:
	.string "The door was unlocked.$"
