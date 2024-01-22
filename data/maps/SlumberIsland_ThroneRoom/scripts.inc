SlumberIsland_ThroneRoom_MapScripts::
	.byte 0


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
	goto Common_EventScript_RemoveStaticPokemon
	goto SlumberIsland_ThroneRoom_EventScript_Regigigas_1


SlumberIsland_ThroneRoom_EventScript_Regigigas_Text_0:
	.string "REGIGIGAS is recharging…$"
