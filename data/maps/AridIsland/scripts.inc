AridIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AridIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_ARID_ISLAND
	return
