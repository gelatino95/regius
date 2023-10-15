IceCave_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, IceCave_B2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

IceCave_B2F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_unset FLAG_ICE_CAVE_CHAMBER_OPEN, IceCave_B2F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IceCave_B2F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 16, 19, 0x3B7, TRUE
	setmetatile 17, 19, 0x3B7, TRUE
	setmetatile 18, 19, 0x3B7, TRUE
	setmetatile 16, 20, METATILE_Cave_IceChamberBraille_Mid, TRUE
	setmetatile 17, 20, METATILE_Cave_IceChamberBraille_Mid, TRUE
	setmetatile 18, 20, METATILE_Cave_IceChamberBraille_Mid, TRUE
	return


IceCave_B2F_EventScript_ItemAncientSlab::
	finditem ITEM_ANCIENT_SLAB
	end


IceCave_B2F_EventScript_ItemTM07::
	finditem ITEM_TM07
	end


IceCave_B2F_EventScript_ChamberDoor::
	lock
	goto_if_set FLAG_ICE_CAVE_CHAMBER_OPEN, IceCave_B2F_EventScript_ChamberDoor_2
	braillemsgbox IceCave_B2F_Braille_ChamberDoor1
	delay 5
	braillemsgbox IceCave_B2F_Braille_ChamberDoor2
	checkitem ITEM_REGIUS_CREST
	compare VAR_RESULT, 0
	goto_if_ne IceCave_B2F_EventScript_ChamberDoor_5
IceCave_B2F_EventScript_ChamberDoor_4:
	release
	end

IceCave_B2F_EventScript_ChamberDoor_2:
	msgbox IceCave_B2F_EventScript_ChamberDoor_Text_0, MSGBOX_AUTOCLOSE
	release
	end

IceCave_B2F_EventScript_ChamberDoor_5:
	msgbox IceCave_B2F_EventScript_ChamberDoor_Text_1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne IceCave_B2F_EventScript_ChamberDoor_7
	goto IceCave_B2F_EventScript_ChamberDoor_4

IceCave_B2F_EventScript_ChamberDoor_7:
	fadeoutbgm 1
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 30
	setmetatile 16, 19, METATILE_Cave_IceChamberEntrance_TopLeft, TRUE
	setmetatile 17, 19, METATILE_Cave_IceChamberEntrance_TopMid, TRUE
	setmetatile 18, 19, METATILE_Cave_IceChamberEntrance_TopRight, TRUE
	setmetatile 16, 20, METATILE_Cave_IceChamberEntrance_BottomLeft, TRUE
	setmetatile 17, 20, METATILE_Cave_IceChamberEntrance_BottomMid, FALSE
	setmetatile 18, 20, METATILE_Cave_IceChamberEntrance_BottomRight, TRUE
	special DrawWholeMapView
	playse SE_UNLOCK
	setflag FLAG_ICE_CAVE_CHAMBER_OPEN
	delay 30
	fadeinbgm 0
	goto IceCave_B2F_EventScript_ChamberDoor_4


IceCave_B2F_EventScript_Regice::
	lock
	waitse
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGICE, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq IceCave_B2F_EventScript_Regice_2
	msgbox IceCave_B2F_EventScript_Regice_Text_0, MSGBOX_AUTOCLOSE
IceCave_B2F_EventScript_Regice_1:
	release
	end

IceCave_B2F_EventScript_Regice_2:
	setflag FLAG_DEFEATED_REGICE
	goto Common_EventScript_RemoveStaticPokemon
	goto IceCave_B2F_EventScript_Regice_1


IceCave_B2F_Braille_ChamberDoor1:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "THE TITAN OF\n"
	.braille "ICE SLEEPS\n"
	.braille "HERE FROZEN\n"
	.braille "IN TIME.$"

IceCave_B2F_Braille_ChamberDoor2:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "PRESENT THE\n"
	.braille "MARK OF THE\n"
	.braille "COLOSSUS\n"
	.braille "TO WAKE IT.$"

IceCave_B2F_EventScript_ChamberDoor_Text_0:
	.string "The way is open.$"

IceCave_B2F_EventScript_ChamberDoor_Text_1:
	.string "Use the REGIUS CREST?$"

IceCave_B2F_EventScript_Regice_Text_0:
	.string "REGICE is recharging…$"
