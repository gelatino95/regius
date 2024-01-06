AridRuins_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, AridRuins_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AridRuins_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_unset FLAG_ARID_RUINS_CHAMBER_OPEN, AridRuins_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AridRuins_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 33, 19, 0x236, TRUE
	setmetatile 34, 19, 0x236, TRUE
	setmetatile 35, 19, 0x236, TRUE
	setmetatile 33, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 34, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 35, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


AridRuins_EventScript_Braille_EastWall::
	lock
	braillemsgbox AridRuins_Braille_EastWall1
	delay 5
	braillemsgbox AridRuins_Braille_EastWall2
	release
	end


AridRuins_EventScript_Braille_WestWall::
	lock
	braillemsgbox AridRuins_Braille_WestWall1
	delay 5
	braillemsgbox AridRuins_Braille_WestWall2
	release
	end


AridRuins_EventScript_ChamberDoor::
	lock
	goto_if_set FLAG_ARID_RUINS_CHAMBER_OPEN, AridRuins_EventScript_ChamberDoor_2
	braillemsgbox AridRuins_Braille_ChamberDoor1
	delay 5
	braillemsgbox AridRuins_Braille_ChamberDoor2
	checkitem ITEM_REGIUS_CREST
	compare VAR_RESULT, 0
	goto_if_ne AridRuins_EventScript_ChamberDoor_5
AridRuins_EventScript_ChamberDoor_1:
	release
	end

AridRuins_EventScript_ChamberDoor_2:
	msgbox AridRuins_EventScript_ChamberDoor_Text_0, MSGBOX_AUTOCLOSE
	goto AridRuins_EventScript_ChamberDoor_1

AridRuins_EventScript_ChamberDoor_5:
	msgbox AridRuins_EventScript_ChamberDoor_Text_1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne AridRuins_EventScript_ChamberDoor_7
	goto AridRuins_EventScript_ChamberDoor_1

AridRuins_EventScript_ChamberDoor_7:
	fadeoutbgm 1
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 30
	setmetatile 33, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
	setmetatile 34, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
	setmetatile 35, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
	setmetatile 33, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
	setmetatile 34, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
	setmetatile 35, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
	special DrawWholeMapView
	playse SE_UNLOCK
	setflag FLAG_ARID_RUINS_CHAMBER_OPEN
	delay 30
	fadeinbgm 0
	goto AridRuins_EventScript_ChamberDoor_1


AridRuins_EventScript_Regirock::
	lock
	waitse
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIROCK, 25
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AridRuins_EventScript_Regirock_2
	msgbox AridRuins_EventScript_Regirock_Text_0, MSGBOX_AUTOCLOSE
AridRuins_EventScript_Regirock_1:
	release
	end

AridRuins_EventScript_Regirock_2:
	setflag FLAG_DEFEATED_REGIROCK
	goto Common_EventScript_RemoveStaticPokemon
	goto AridRuins_EventScript_Regirock_1


AridRuins_EventScript_RuinManiac::
	msgbox AridRuins_EventScript_RuinManiac_Text_0, MSGBOX_NPC
	return


AridRuins_EventScript_Custer::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_CUSTER, 0, AridRuins_EventScript_Custer_Text_0, AridRuins_EventScript_Custer_Text_1
	msgbox AridRuins_EventScript_Custer_Text_2, MSGBOX_NPC
	return


AridRuins_EventScript_Mindy::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_MINDY, 0, AridRuins_EventScript_Mindy_Text_0, AridRuins_EventScript_Mindy_Text_1
	msgbox AridRuins_EventScript_Mindy_Text_2, MSGBOX_NPC
	return


AridRuins_EventScript_RockSmashGuy::
	lock
	faceplayer
	msgbox AridRuins_EventScript_RockSmashGuy_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_HM06, 1
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	msgbox AridRuins_EventScript_RockSmashGuy_Text_1, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 4
	setflag FLAG_HIDE_ARID_RUINS_ROCK_SMASH_GUY
	playse SE_EXIT
	waitse
	fadescreen FADE_FROM_BLACK
	release
	end


AridRuins_EventScript_ItemAncientSlab::
	finditem ITEM_ANCIENT_SLAB
	end


AridRuins_Braille_EastWall1:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "THIS WAS A\n"
	.braille "PLACE OF\n"
	.braille "HIGH HONOR\n"
	.braille "LONG AGO.$"
	
AridRuins_Braille_EastWall2:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "WITNESS OUR\n"
	.braille "GREAT WORKS\n"
	.braille "AND FOREVER\n"
	.braille "REMEMBER US.$"

AridRuins_Braille_WestWall1:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "THE CHILDREN\n"
	.braille "OF THE GREAT\n"
	.braille "COLOSSUS ARE\n"
	.braille "SEALED AWAY.$"

AridRuins_Braille_WestWall2:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "THE TITANS\n"
	.braille "WILL SURVIVE\n"
	.braille "EVEN AS WE\n"
	.braille "PERISH.$"

AridRuins_Braille_ChamberDoor1:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "THE TITAN OF\n"
	.braille "STONE AWAITS\n"
	.braille "THE ORDER TO\n"
	.braille "RISE AGAIN.$"

AridRuins_Braille_ChamberDoor2:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "IT WILL ONLY\n"
	.braille "RESPOND TO\n"
	.braille "THE MARK OF\n"
	.braille "THE COLOSSUS$"

AridRuins_EventScript_ChamberDoor_Text_0:
	.string "The way is open.$"

AridRuins_EventScript_ChamberDoor_Text_1:
	.string "Use the REGIUS CREST?$"

AridRuins_EventScript_Regirock_Text_0:
	.string "REGIROCK is recharging…$"

AridRuins_EventScript_RuinManiac_Text_0:
	.string "This may look like an ordinary cave, but\n"
	.string "look closer!\l"
	.string "The symmetrical design indicates that\l"
	.string "this structure was built by intelligent\l"
	.string "hands.\p"
	.string "Sadly, much of the original detail has\n"
	.string "long since eroded away.\p"
	.string "As archaeologists, it is our job to\n"
	.string "glean what we can from the clues that\l"
	.string "still remain.$"

AridRuins_EventScript_Custer_Text_0:
	.string "Have you seen the writing on the wall?$"

AridRuins_EventScript_Custer_Text_1:
	.string "I see the writing on the wall…$"

AridRuins_EventScript_Custer_Text_2:
	.string "To think that some carvings still remain\n"
	.string "after all these years!$"

AridRuins_EventScript_Mindy_Text_0:
	.string "This place is starting to give me the\n"
	.string "creeps!$"

AridRuins_EventScript_Mindy_Text_1:
	.string "My head is spinning!$"

AridRuins_EventScript_Mindy_Text_2:
	.string "Just who were the people who built this\n"
	.string "place?$"

AridRuins_EventScript_RockSmashGuy_Text_0:
	.string "Ah! You surprised me.\p"
	.string "Me? I'm digging for treasure!\n"
	.string "I'm getting my POKéMON to smash rocks\l"
	.string "and recover the stuff inside.\l"
	.string "These islands are chock full of\l"
	.string "valuable minerals and ancient\l"
	.string "artifacts!\p"
	.string "Phew, I think I'm done for today.\n"
	.string "Why don't you give it a try?$"

AridRuins_EventScript_RockSmashGuy_Text_1:
	.string "Just owning that HM should let your\n"
	.string "POKéMON break rocks like these.\l"
	.string "You might uncover some rare ITEMS!\l"
	.string "But watch out, because sometimes wild\l"
	.string "POKéMON will come out instead!\p"
	.string "Well, I'll leave you to it.\n"
	.string "Happy hunting!$"
