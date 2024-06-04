SlumberIsland_ThroneRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SlumberIsland_ThroneRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SlumberIsland_ThroneRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_unset FLAG_CAUGHT_REGIGIGAS, SlumberIsland_ThroneRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SlumberIsland_ThroneRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 7, 2, 0x201, TRUE
	setmetatile 9, 2, 0x201, TRUE
	return


SlumberIsland_ThroneRoom_EventScript_Regigigas::
	lock
	waitse
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIGIGAS, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SlumberIsland_ThroneRoom_EventScript_Regigigas_2
	msgbox SlumberIsland_ThroneRoom_EventScript_Regigigas_Text_0, MSGBOX_AUTOCLOSE
SlumberIsland_ThroneRoom_EventScript_Regigigas_1:
	release
	end

SlumberIsland_ThroneRoom_EventScript_Regigigas_2:
	setflag FLAG_CAUGHT_REGIGIGAS
	setmetatile 7, 2, 0x201, FALSE
	setmetatile 9, 2, 0x201, FALSE
	goto Common_EventScript_RemoveStaticPokemon
	goto SlumberIsland_ThroneRoom_EventScript_Regigigas_1


SlumberIsland_ThroneRoom_EventScript_Regigigas_Text_0:
	.string "REGIGIGAS is recharging…$"
