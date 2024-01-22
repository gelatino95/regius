IgneousCaldera_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, IgneousCaldera_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

IgneousCaldera_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_unset FLAG_IGNEOUS_CALDERA_CHAMBER_OPEN, IgneousCaldera_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

IgneousCaldera_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 18, 35, METATILE_Cave_EntranceCover, TRUE
	setmetatile 19, 35, METATILE_Cave_EntranceCover, TRUE
	setmetatile 20, 35, METATILE_Cave_EntranceCover, TRUE
	setmetatile 18, 36, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 19, 36, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 20, 36, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


IgneousCaldera_1F_EventScript_ItemBurnHeal::
	finditem ITEM_BURN_HEAL
	end


IgneousCaldera_1F_EventScript_ItemAncientSlab::
	finditem ITEM_ANCIENT_SLAB
	end


IgneousCaldera_1F_EventScript_Ortega::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ORTEGA, 0, IgneousCaldera_1F_EventScript_Ortega_Text_0, IgneousCaldera_1F_EventScript_Ortega_Text_1
	msgbox IgneousCaldera_1F_EventScript_Ortega_Text_2, MSGBOX_NPC
	end


IgneousCaldera_1F_EventScript_Zhao::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ZHAO, 0, IgneousCaldera_1F_EventScript_Zhao_Text_0, IgneousCaldera_1F_EventScript_Zhao_Text_1
	msgbox IgneousCaldera_1F_EventScript_Zhao_Text_2, MSGBOX_NPC
	end


IgneousCaldera_1F_EventScript_Raul::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_RAUL, 0, IgneousCaldera_1F_EventScript_Raul_Text_0, IgneousCaldera_1F_EventScript_Raul_Text_1
	msgbox IgneousCaldera_1F_EventScript_Raul_Text_2, MSGBOX_NPC
	end


IgneousCaldera_1F_EventScript_ChamberDoor::
	lock
	goto_if_set FLAG_IGNEOUS_CALDERA_CHAMBER_OPEN, IgneousCaldera_1F_EventScript_ChamberDoor_2
	braillemsgbox IgneousCaldera_1F_Braille_ChamberDoor1
	delay 5
	braillemsgbox IgneousCaldera_1F_Braille_ChamberDoor2
	checkitem ITEM_REGIUS_CREST
	compare VAR_RESULT, 0
	goto_if_ne IgneousCaldera_1F_EventScript_ChamberDoor_5
IgneousCaldera_1F_EventScript_ChamberDoor_4:
	release
	end

IgneousCaldera_1F_EventScript_ChamberDoor_2:
	msgbox IgneousCaldera_1F_EventScript_ChamberDoor_Text_0, MSGBOX_AUTOCLOSE
	release
	end

IgneousCaldera_1F_EventScript_ChamberDoor_5:
	msgbox IgneousCaldera_1F_EventScript_ChamberDoor_Text_1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne IgneousCaldera_1F_EventScript_ChamberDoor_7
	goto IgneousCaldera_1F_EventScript_ChamberDoor_4

IgneousCaldera_1F_EventScript_ChamberDoor_7:
	fadeoutbgm 1
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 30
	setmetatile 18, 35, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
	setmetatile 19, 35, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
	setmetatile 20, 35, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
	setmetatile 18, 36, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
	setmetatile 19, 36, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
	setmetatile 20, 36, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
	special DrawWholeMapView
	playse SE_UNLOCK
	setflag FLAG_IGNEOUS_CALDERA_CHAMBER_OPEN
	delay 30
	fadeinbgm 0
	goto IgneousCaldera_1F_EventScript_ChamberDoor_4


IgneousCaldera_1F_EventScript_Registeel::
	lock
	waitse
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGISTEEL, 35
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq IgneousCaldera_1F_EventScript_Registeel_2
	msgbox IgneousCaldera_1F_EventScript_Registeel_Text_0, MSGBOX_AUTOCLOSE
IgneousCaldera_1F_EventScript_Registeel_1:
	release
	end

IgneousCaldera_1F_EventScript_Registeel_2:
	setflag FLAG_CAUGHT_REGISTEEL
	goto Common_EventScript_RemoveStaticPokemon
	goto IgneousCaldera_1F_EventScript_Registeel_1


IgneousCaldera_1F_Braille_ChamberDoor1:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "THE TITAN OF\n"
	.braille "STEEL IS\n"
	.braille "TEMPERED BY\n"
	.braille "ETERNAL FIRE$"

IgneousCaldera_1F_Braille_ChamberDoor2:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "THE MARK OF\n"
	.braille "THE COLOSSUS\n"
	.braille "WILL ROUSE\n"
	.braille "IT TO ACTION$"

IgneousCaldera_1F_EventScript_Ortega_Text_0:
	.string "Hey hey!\n"
	.string "Don't let the heat get to ya!$"

IgneousCaldera_1F_EventScript_Ortega_Text_1:
	.string "Hot, hot!$"

IgneousCaldera_1F_EventScript_Ortega_Text_2:
	.string "Aw yeah! This heat is doing something\n"
	.string "for me!\p"
	.string "Or is it the toxic fumes…?$"

IgneousCaldera_1F_EventScript_Zhao_Text_0:
	.string "Excuse me! Let me see your POKéMON!$"

IgneousCaldera_1F_EventScript_Zhao_Text_1:
	.string "Not what I hoped…$"

IgneousCaldera_1F_EventScript_Zhao_Text_2:
	.string "This place is swarming with unique\n"
	.string "POKéMON! I'm gonna find them all!$"

IgneousCaldera_1F_EventScript_Raul_Text_0:
	.string "Step into the crucible with me! Let us\n"
	.string "test our might!$"

IgneousCaldera_1F_EventScript_Raul_Text_1:
	.string "Outstanding!$"

IgneousCaldera_1F_EventScript_Raul_Text_2:
	.string "I've come to the most treacherous\n"
	.string "environment in the region. I hope it\l"
	.string "will bring my training to new heights.$"

IgneousCaldera_1F_EventScript_ChamberDoor_Text_0:
	.string "The way is open.$"

IgneousCaldera_1F_EventScript_ChamberDoor_Text_1:
	.string "Use the REGIUS CREST?$"

IgneousCaldera_1F_EventScript_Registeel_Text_0:
	.string "REGISTEEL is recharging…$"
