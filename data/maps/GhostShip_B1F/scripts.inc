GhostShip_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	clearflag FLAG_GHOST_SHIP_HIDE_DUSCLOPS
	showobjectat 1, MAP_GHOST_SHIP_B1F
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 17
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_TEMP_0, 25
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	compare VAR_TEMP_0, 41
	goto_if_eq GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	setobjectxyperm 1, 0, 0
	return

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxyperm 1, 10, 22
	return

GhostShip_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm 1, 34, 20
	return


GhostShip_B1F_HideDusclopsTrigger::
	setflag FLAG_GHOST_SHIP_HIDE_DUSCLOPS
	removeobject 1
	end

