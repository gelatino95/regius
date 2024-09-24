BattleGrotto_Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_Entrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleGrotto_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleGrotto_Entrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_Entrance_PlayerFaceNorth
	return

BattleGrotto_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, BattleGrotto_Entrance_ComeAgain
	return


BattleGrotto_Entrance_PlayerFaceNorth::
	setvar VAR_TEMP_1, 1
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


BattleGrotto_Entrance_ComeAgain::
	setvar VAR_TEMP_0, 1
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	compare VAR_TEMP_3, 7
	goto_if_eq BattleGrotto_Entrance_ComeAgain_2
BattleGrotto_Entrance_ComeAgain_1:
	end

BattleGrotto_Entrance_ComeAgain_2:
	lock
	msgbox BattleGrotto_Entrance_ComeAgain_Text_0, MSGBOX_AUTOCLOSE
	release
	goto BattleGrotto_Entrance_ComeAgain_1


BattleGrotto_Entrance_FrontDesk::
	lock
	faceplayer
	msgbox BattleGrotto_Entrance_FrontDesk_Text_0, MSGBOX_DEFAULT
	goto BattleGrotto_Entrance_BattleGrottoChallenge
	return


BattleGrotto_Entrance_BattleGrottoChallenge::
	message BattleGrotto_Entrance_BattleGrottoChallenge_Text_0
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleGrotto_Entrance_BattleGrottoChallenge_3
	case 1, BattleGrotto_Entrance_BattleGrottoChallenge_4
	case 2, BattleGrotto_Entrance_BattleGrottoChallenge_5
	case MULTI_B_PRESSED, BattleGrotto_Entrance_BattleGrottoChallenge_5
BattleGrotto_Entrance_BattleGrottoChallenge_1:
	release
	end

BattleGrotto_Entrance_BattleGrottoChallenge_3:
	goto_if_unset FLAG_GROTTO_FLOOR_1_COMPLETE, BattleGrotto_Entrance_BattleGrottoChallenge_7
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor
	goto BattleGrotto_Entrance_BattleGrottoChallenge_1

BattleGrotto_Entrance_BattleGrottoChallenge_4:
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_2, MSGBOX_DEFAULT
	goto BattleGrotto_Entrance_BattleGrottoChallenge
	goto BattleGrotto_Entrance_BattleGrottoChallenge_1

BattleGrotto_Entrance_BattleGrottoChallenge_5:
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_3, MSGBOX_AUTOCLOSE
	goto BattleGrotto_Entrance_BattleGrottoChallenge_1

BattleGrotto_Entrance_BattleGrottoChallenge_7:
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_1, MSGBOX_DEFAULT
	waitmessage
	special HealPlayerParty
	warp MAP_BATTLE_GROTTO_B1F, 4, 36
	release
	end


BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor::
	message BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_0
	waitmessage
	dynmultipush BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_1, 1
	dynmultipush BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_2, 2
	goto_if_set FLAG_GROTTO_FLOOR_2_COMPLETE, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_2
BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_1:
	goto_if_set FLAG_GROTTO_FLOOR_3_COMPLETE, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_5
BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_4:
	goto_if_set FLAG_GROTTO_FLOOR_4_COMPLETE, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_8
BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_7:
	goto_if_set FLAG_GROTTO_FLOOR_5_COMPLETE, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_11
BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_10:
	goto_if_set FLAG_GROTTO_FLOOR_6_COMPLETE, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_14
BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_13:
	dynmultipush BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_8, 127
	dynmultistack 0, 0, FALSE, 5, FALSE, 1, DYN_MULTICHOICE_CB_NONE
	compare VAR_RESULT, 127
	goto_if_eq BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_17
BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_16:
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_1, MSGBOX_DEFAULT
	waitmessage
	special HealPlayerParty
	switch VAR_RESULT
	case 1, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_21
	case 2, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_22
	case 3, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_23
	case 4, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_24
	case 5, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_25
	case 6, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_26
	case 7, BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_27
BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_19:
	release
	end

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_2:
	dynmultipush BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_3, 3
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_1

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_5:
	dynmultipush BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_4, 4
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_4

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_8:
	dynmultipush BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_5, 5
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_7

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_11:
	dynmultipush BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_6, 6
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_10

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_14:
	dynmultipush BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_7, 7
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_13

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_17:
	goto BattleGrotto_Entrance_BattleGrottoChallenge
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_16

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_21:
	warp MAP_BATTLE_GROTTO_B1F, 4, 36
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_19

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_22:
	warp MAP_BATTLE_GROTTO_B2F, 11, 36
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_19

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_23:
	warp MAP_BATTLE_GROTTO_B3F, 13, 36
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_19

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_24:
	warp MAP_BATTLE_GROTTO_B4F, 11, 36
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_19

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_25:
	warp MAP_BATTLE_GROTTO_B5F, 11, 44
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_19

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_26:
	warp MAP_BATTLE_GROTTO_B6F, 15, 36
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_19

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_27:
	warp MAP_BATTLE_GROTTO_B7F, 7, 34
	goto BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_19


BattleGrotto_Entrance_BerryVendor::
	lock
	faceplayer
	msgbox BattleGrotto_Entrance_BerryVendor_Text_0, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	goto BattleGrotto_Entrance_ChooseBerry
	return


BattleGrotto_Entrance_ChooseBerry::
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_0, MSGBOX_DEFAULT
	setvar VAR_0x8004, SCROLL_MULTI_GROTTO_BERRY_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, BattleGrotto_Entrance_ChooseBerry_3
	case 1, BattleGrotto_Entrance_ChooseBerry_4
	case 2, BattleGrotto_Entrance_ChooseBerry_5
	case 3, BattleGrotto_Entrance_ChooseBerry_6
	case 4, BattleGrotto_Entrance_ChooseBerry_7
	case 5, BattleGrotto_Entrance_ChooseBerry_8
	case 6, BattleGrotto_Entrance_ChooseBerry_9
	case 7, BattleGrotto_Entrance_ChooseBerry_10
	case 8, BattleGrotto_Entrance_ChooseBerry_11
	case 9, BattleGrotto_Entrance_ChooseBerry_12
	case 10, BattleGrotto_Entrance_ChooseBerry_13
	case 11, BattleGrotto_Entrance_ChooseBerry_14
	case 12, BattleGrotto_Entrance_ChooseBerry_15
	case 13, BattleGrotto_Entrance_ChooseBerry_16
	case 14, BattleGrotto_Entrance_ChooseBerry_17
	case MULTI_B_PRESSED, BattleGrotto_Entrance_ChooseBerry_17
	goto BattleGrotto_Entrance_ChooseBerry
BattleGrotto_Entrance_ChooseBerry_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_lt BattleGrotto_Entrance_ChooseBerry_20
BattleGrotto_Entrance_ChooseBerry_19:
	checkitemspace VAR_0x8009
	compare VAR_RESULT, FALSE
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_65
BattleGrotto_Entrance_ChooseBerry_64:
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_17, MSGBOX_DEFAULT
	goto BattleGrotto_Entrance_ChooseBerry
	return

BattleGrotto_Entrance_ChooseBerry_3:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_23
BattleGrotto_Entrance_ChooseBerry_22:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_POMEG_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_4:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_26
BattleGrotto_Entrance_ChooseBerry_25:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_KELPSY_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_5:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_29
BattleGrotto_Entrance_ChooseBerry_28:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_QUALOT_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_6:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_32
BattleGrotto_Entrance_ChooseBerry_31:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_HONDEW_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_7:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_35
BattleGrotto_Entrance_ChooseBerry_34:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_GREPA_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_8:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_38
BattleGrotto_Entrance_ChooseBerry_37:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_TAMATO_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_9:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_41
BattleGrotto_Entrance_ChooseBerry_40:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_LUM_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_10:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_44
BattleGrotto_Entrance_ChooseBerry_43:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_LIECHI_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_11:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_9, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_47
BattleGrotto_Entrance_ChooseBerry_46:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_GANLON_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_12:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_10, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_50
BattleGrotto_Entrance_ChooseBerry_49:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_SALAC_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_13:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_11, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_53
BattleGrotto_Entrance_ChooseBerry_52:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_PETAYA_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_14:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_12, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_56
BattleGrotto_Entrance_ChooseBerry_55:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_APICOT_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_15:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_13, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_59
BattleGrotto_Entrance_ChooseBerry_58:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_LANSAT_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_16:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_14, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_62
BattleGrotto_Entrance_ChooseBerry_61:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_STARF_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_17:
	goto BattleGrotto_Entrance_Goodbye
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_20:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_15
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_19

BattleGrotto_Entrance_ChooseBerry_23:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_22

BattleGrotto_Entrance_ChooseBerry_26:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_25

BattleGrotto_Entrance_ChooseBerry_29:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_28

BattleGrotto_Entrance_ChooseBerry_32:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_31

BattleGrotto_Entrance_ChooseBerry_35:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_34

BattleGrotto_Entrance_ChooseBerry_38:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_37

BattleGrotto_Entrance_ChooseBerry_41:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_40

BattleGrotto_Entrance_ChooseBerry_44:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_43

BattleGrotto_Entrance_ChooseBerry_47:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_46

BattleGrotto_Entrance_ChooseBerry_50:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_49

BattleGrotto_Entrance_ChooseBerry_53:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_52

BattleGrotto_Entrance_ChooseBerry_56:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_55

BattleGrotto_Entrance_ChooseBerry_59:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_58

BattleGrotto_Entrance_ChooseBerry_62:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_61

BattleGrotto_Entrance_ChooseBerry_65:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_16
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_64


BattleGrotto_Entrance_VitaminVendor::
	lock
	faceplayer
	msgbox BattleGrotto_Entrance_BerryVendor_Text_0, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	goto BattleGrotto_Entrance_ChooseVitamin
	return


BattleGrotto_Entrance_ChooseVitamin::
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_0, MSGBOX_DEFAULT
	setvar VAR_0x8004, SCROLL_MULTI_GROTTO_VITAMIN_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, BattleGrotto_Entrance_ChooseVitamin_3
	case 1, BattleGrotto_Entrance_ChooseVitamin_4
	case 2, BattleGrotto_Entrance_ChooseVitamin_5
	case 3, BattleGrotto_Entrance_ChooseVitamin_6
	case 4, BattleGrotto_Entrance_ChooseVitamin_7
	case 5, BattleGrotto_Entrance_ChooseVitamin_8
	case 6, BattleGrotto_Entrance_ChooseVitamin_9
	case 7, BattleGrotto_Entrance_ChooseVitamin_10
	case 8, BattleGrotto_Entrance_ChooseVitamin_11
	case MULTI_B_PRESSED, BattleGrotto_Entrance_ChooseVitamin_11
	goto BattleGrotto_Entrance_ChooseVitamin
BattleGrotto_Entrance_ChooseVitamin_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_lt BattleGrotto_Entrance_ChooseVitamin_14
BattleGrotto_Entrance_ChooseVitamin_13:
	checkitemspace VAR_0x8009
	compare VAR_RESULT, FALSE
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_41
BattleGrotto_Entrance_ChooseVitamin_40:
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_17, MSGBOX_DEFAULT
	goto BattleGrotto_Entrance_ChooseVitamin
	return

BattleGrotto_Entrance_ChooseVitamin_3:
	msgbox BattleGrotto_Entrance_ChooseVitamin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_17
BattleGrotto_Entrance_ChooseVitamin_16:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_PROTEIN
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_4:
	msgbox BattleGrotto_Entrance_ChooseVitamin_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_20
BattleGrotto_Entrance_ChooseVitamin_19:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_IRON
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_5:
	msgbox BattleGrotto_Entrance_ChooseVitamin_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_23
BattleGrotto_Entrance_ChooseVitamin_22:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_CALCIUM
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_6:
	msgbox BattleGrotto_Entrance_ChooseVitamin_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_26
BattleGrotto_Entrance_ChooseVitamin_25:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_ZINC
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_7:
	msgbox BattleGrotto_Entrance_ChooseVitamin_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_29
BattleGrotto_Entrance_ChooseVitamin_28:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_CARBOS
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_8:
	msgbox BattleGrotto_Entrance_ChooseVitamin_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_32
BattleGrotto_Entrance_ChooseVitamin_31:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_HP_UP
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_9:
	msgbox BattleGrotto_Entrance_ChooseVitamin_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_35
BattleGrotto_Entrance_ChooseVitamin_34:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_PP_UP
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_10:
	msgbox BattleGrotto_Entrance_ChooseVitamin_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseVitamin_38
BattleGrotto_Entrance_ChooseVitamin_37:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_RARE_CANDY
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_11:
	goto BattleGrotto_Entrance_Goodbye
	goto BattleGrotto_Entrance_ChooseVitamin_1

BattleGrotto_Entrance_ChooseVitamin_14:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_15
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_13

BattleGrotto_Entrance_ChooseVitamin_17:
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_16

BattleGrotto_Entrance_ChooseVitamin_20:
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_19

BattleGrotto_Entrance_ChooseVitamin_23:
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_22

BattleGrotto_Entrance_ChooseVitamin_26:
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_25

BattleGrotto_Entrance_ChooseVitamin_29:
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_28

BattleGrotto_Entrance_ChooseVitamin_32:
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_31

BattleGrotto_Entrance_ChooseVitamin_35:
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_34

BattleGrotto_Entrance_ChooseVitamin_38:
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_37

BattleGrotto_Entrance_ChooseVitamin_41:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_16
	goto BattleGrotto_Entrance_ChooseVitamin
	goto BattleGrotto_Entrance_ChooseVitamin_40


BattleGrotto_Entrance_TMVendor::
	lock
	faceplayer
	msgbox BattleGrotto_Entrance_BerryVendor_Text_0, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	goto BattleGrotto_Entrance_ChooseTM
	return


BattleGrotto_Entrance_ChooseTM::
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_0, MSGBOX_DEFAULT
	setvar VAR_0x8004, SCROLL_MULTI_GROTTO_TM_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, BattleGrotto_Entrance_ChooseTM_3
	case 1, BattleGrotto_Entrance_ChooseTM_4
	case 2, BattleGrotto_Entrance_ChooseTM_5
	case 3, BattleGrotto_Entrance_ChooseTM_6
	case 4, BattleGrotto_Entrance_ChooseTM_7
	case 5, BattleGrotto_Entrance_ChooseTM_8
	case 6, BattleGrotto_Entrance_ChooseTM_9
	case 7, BattleGrotto_Entrance_ChooseTM_10
	case 8, BattleGrotto_Entrance_ChooseTM_11
	case 9, BattleGrotto_Entrance_ChooseTM_12
	case MULTI_B_PRESSED, BattleGrotto_Entrance_ChooseTM_12
	goto BattleGrotto_Entrance_ChooseTM
BattleGrotto_Entrance_ChooseTM_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_lt BattleGrotto_Entrance_ChooseTM_15
BattleGrotto_Entrance_ChooseTM_14:
	checkitemspace VAR_0x8009
	compare VAR_RESULT, FALSE
	goto_if_eq BattleGrotto_Entrance_ChooseTM_45
BattleGrotto_Entrance_ChooseTM_44:
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_17, MSGBOX_DEFAULT
	goto BattleGrotto_Entrance_ChooseTM
	return

BattleGrotto_Entrance_ChooseTM_3:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_18
BattleGrotto_Entrance_ChooseTM_17:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_TM16
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_4:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_21
BattleGrotto_Entrance_ChooseTM_20:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_TM17
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_5:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_24
BattleGrotto_Entrance_ChooseTM_23:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_TM20
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_6:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_27
BattleGrotto_Entrance_ChooseTM_26:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_TM33
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_7:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_30
BattleGrotto_Entrance_ChooseTM_29:
	setvar VAR_0x8008, 20
	setvar VAR_0x8009, ITEM_TM14
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_8:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_33
BattleGrotto_Entrance_ChooseTM_32:
	setvar VAR_0x8008, 20
	setvar VAR_0x8009, ITEM_TM15
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_9:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_36
BattleGrotto_Entrance_ChooseTM_35:
	setvar VAR_0x8008, 20
	setvar VAR_0x8009, ITEM_TM22
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_10:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_39
BattleGrotto_Entrance_ChooseTM_38:
	setvar VAR_0x8008, 20
	setvar VAR_0x8009, ITEM_TM25
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_11:
	msgbox BattleGrotto_Entrance_ChooseTM_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseTM_42
BattleGrotto_Entrance_ChooseTM_41:
	setvar VAR_0x8008, 20
	setvar VAR_0x8009, ITEM_TM38
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_12:
	goto BattleGrotto_Entrance_Goodbye
	goto BattleGrotto_Entrance_ChooseTM_1

BattleGrotto_Entrance_ChooseTM_15:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_15
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_14

BattleGrotto_Entrance_ChooseTM_18:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_17

BattleGrotto_Entrance_ChooseTM_21:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_20

BattleGrotto_Entrance_ChooseTM_24:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_23

BattleGrotto_Entrance_ChooseTM_27:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_26

BattleGrotto_Entrance_ChooseTM_30:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_29

BattleGrotto_Entrance_ChooseTM_33:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_32

BattleGrotto_Entrance_ChooseTM_36:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_35

BattleGrotto_Entrance_ChooseTM_39:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_38

BattleGrotto_Entrance_ChooseTM_42:
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_41

BattleGrotto_Entrance_ChooseTM_45:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_16
	goto BattleGrotto_Entrance_ChooseTM
	goto BattleGrotto_Entrance_ChooseTM_44


BattleGrotto_Entrance_ItemVendor::
	lock
	faceplayer
	msgbox BattleGrotto_Entrance_BerryVendor_Text_0, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	goto BattleGrotto_Entrance_ChooseItem
	return


BattleGrotto_Entrance_ChooseItem::
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_0, MSGBOX_DEFAULT
	setvar VAR_0x8004, SCROLL_MULTI_GROTTO_ITEM_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, BattleGrotto_Entrance_ChooseItem_3
	case 1, BattleGrotto_Entrance_ChooseItem_4
	case 2, BattleGrotto_Entrance_ChooseItem_5
	case 3, BattleGrotto_Entrance_ChooseItem_6
	case 4, BattleGrotto_Entrance_ChooseItem_7
	case 5, BattleGrotto_Entrance_ChooseItem_8
	case 6, BattleGrotto_Entrance_ChooseItem_9
	case 7, BattleGrotto_Entrance_ChooseItem_10
	case 8, BattleGrotto_Entrance_ChooseItem_11
	case 9, BattleGrotto_Entrance_ChooseItem_12
	case MULTI_B_PRESSED, BattleGrotto_Entrance_ChooseItem_12
	goto BattleGrotto_Entrance_ChooseItem
BattleGrotto_Entrance_ChooseItem_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_lt BattleGrotto_Entrance_ChooseItem_15
BattleGrotto_Entrance_ChooseItem_14:
	checkitemspace VAR_0x8009
	compare VAR_RESULT, FALSE
	goto_if_eq BattleGrotto_Entrance_ChooseItem_45
BattleGrotto_Entrance_ChooseItem_44:
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_17, MSGBOX_DEFAULT
	goto BattleGrotto_Entrance_ChooseItem
	return

BattleGrotto_Entrance_ChooseItem_3:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_18
BattleGrotto_Entrance_ChooseItem_17:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_WHITE_HERB
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_4:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_21
BattleGrotto_Entrance_ChooseItem_20:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_MENTAL_HERB
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_5:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_24
BattleGrotto_Entrance_ChooseItem_23:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_QUICK_CLAW
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_6:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_27
BattleGrotto_Entrance_ChooseItem_26:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_BRIGHT_POWDER
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_7:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_30
BattleGrotto_Entrance_ChooseItem_29:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_KINGS_ROCK
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_8:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_33
BattleGrotto_Entrance_ChooseItem_32:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_FOCUS_BAND
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_9:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_36
BattleGrotto_Entrance_ChooseItem_35:
	setvar VAR_0x8008, 10
	setvar VAR_0x8009, ITEM_SCOPE_LENS
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_10:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_39
BattleGrotto_Entrance_ChooseItem_38:
	setvar VAR_0x8008, 20
	setvar VAR_0x8009, ITEM_CHOICE_BAND
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_11:
	msgbox BattleGrotto_Entrance_ChooseItem_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseItem_42
BattleGrotto_Entrance_ChooseItem_41:
	setvar VAR_0x8008, 20
	setvar VAR_0x8009, ITEM_LEFTOVERS
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_12:
	goto BattleGrotto_Entrance_Goodbye
	goto BattleGrotto_Entrance_ChooseItem_1

BattleGrotto_Entrance_ChooseItem_15:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_15
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_14

BattleGrotto_Entrance_ChooseItem_18:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_17

BattleGrotto_Entrance_ChooseItem_21:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_20

BattleGrotto_Entrance_ChooseItem_24:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_23

BattleGrotto_Entrance_ChooseItem_27:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_26

BattleGrotto_Entrance_ChooseItem_30:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_29

BattleGrotto_Entrance_ChooseItem_33:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_32

BattleGrotto_Entrance_ChooseItem_36:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_35

BattleGrotto_Entrance_ChooseItem_39:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_38

BattleGrotto_Entrance_ChooseItem_42:
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_41

BattleGrotto_Entrance_ChooseItem_45:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_16
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_44


BattleGrotto_Entrance_Goodbye::
	special CloseBattlePointsWindow
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_3, MSGBOX_DEFAULT
	closemessage
	return


BattleGrotto_Entrance_Monitor::
	lock
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	goto_if_set FLAG_GROTTO_FLOOR_6_COMPLETE, BattleGrotto_Entrance_Monitor_2
	goto_if_set FLAG_GROTTO_FLOOR_5_COMPLETE, BattleGrotto_Entrance_Monitor_3
	goto_if_set FLAG_GROTTO_FLOOR_4_COMPLETE, BattleGrotto_Entrance_Monitor_4
	goto_if_set FLAG_GROTTO_FLOOR_3_COMPLETE, BattleGrotto_Entrance_Monitor_5
	goto_if_set FLAG_GROTTO_FLOOR_2_COMPLETE, BattleGrotto_Entrance_Monitor_6
	goto_if_set FLAG_GROTTO_FLOOR_1_COMPLETE, BattleGrotto_Entrance_Monitor_7
	buffernumberstring STR_VAR_2, 1
BattleGrotto_Entrance_Monitor_1:
	msgbox BattleGrotto_Entrance_Monitor_Text_0, MSGBOX_SIGN
	release
	end

BattleGrotto_Entrance_Monitor_2:
	buffernumberstring STR_VAR_2, 7
	goto BattleGrotto_Entrance_Monitor_1

BattleGrotto_Entrance_Monitor_3:
	buffernumberstring STR_VAR_2, 6
	goto BattleGrotto_Entrance_Monitor_1

BattleGrotto_Entrance_Monitor_4:
	buffernumberstring STR_VAR_2, 5
	goto BattleGrotto_Entrance_Monitor_1

BattleGrotto_Entrance_Monitor_5:
	buffernumberstring STR_VAR_2, 4
	goto BattleGrotto_Entrance_Monitor_1

BattleGrotto_Entrance_Monitor_6:
	buffernumberstring STR_VAR_2, 3
	goto BattleGrotto_Entrance_Monitor_1

BattleGrotto_Entrance_Monitor_7:
	buffernumberstring STR_VAR_2, 2
	goto BattleGrotto_Entrance_Monitor_1


BattleGrotto_Entrance_Woman::
	msgbox BattleGrotto_Entrance_Woman_Text_0, MSGBOX_NPC
	end


BattleGrotto_Entrance_Hiker::
	msgbox BattleGrotto_Entrance_Hiker_Text_0, MSGBOX_NPC
	end


BattleGrotto_Entrance_ComeAgain_Text_0:
	.string "We hope to see you again!$"

BattleGrotto_Entrance_FrontDesk_Text_0:
	.string "Welcome to the BATTLE GROTTO!$"

BattleGrotto_Entrance_BattleGrottoChallenge_Text_0:
	.string "Would you like to take the\n"
	.string "BATTLE GROTTO challenge?$"

BattleGrotto_Entrance_BattleGrottoChallenge_Text_1:
	.string "Best of luck!$"

BattleGrotto_Entrance_BattleGrottoChallenge_Text_2:
	.string "In the BATTLE GROTTO, you will make\n"
	.string "your way through a long cave\l"
	.string "full of TRAINERS.\l"
	.string "If you defeat all seven TRAINERS\l"
	.string "on the floor in a row, you will\l"
	.string "earn Battle Points (BP), which can be\l"
	.string "exchanged for prizes in the lobby.\p"
	.string "You can then descend to the\n"
	.string "next sublevel, where you will find\l"
	.string "even harder TRAINERS.\p"
	.string "If you want to quit your challenge,\n"
	.string "you will be able to start at the\l"
	.string "beginning of any sublevel you've\l"
	.string "unlocked.\p"
	.string "We will make sure your POKéMON are\n"
	.string "healed throughout the challenge, so\l"
	.string "please battle to your heart's content!$"

BattleGrotto_Entrance_BattleGrottoChallenge_Text_3:
	.string "Come again!$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_0:
	.string "Which sublevel would you like to start\n"
	.string "from?$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_1:
	.string "1$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_2:
	.string "2$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_3:
	.string "3$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_4:
	.string "4$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_5:
	.string "5$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_6:
	.string "6$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_7:
	.string "7$"

BattleGrotto_Entrance_BattleGrottoChallenge_ChooseFloor_Text_8:
	.string "CANCEL$"

BattleGrotto_Entrance_BerryVendor_Text_0:
	.string "Welcome!$"

BattleGrotto_Entrance_ChooseBerry_Text_0:
	.string "Please choose a prize.$"

BattleGrotto_Entrance_ChooseBerry_Text_1:
	.string "You want the\n"
	.string "POMEG BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_2:
	.string "You want the\n"
	.string "KELPSY BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_3:
	.string "You want the\n"
	.string "QUALOT BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_4:
	.string "You want the\n"
	.string "HONDEW BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_5:
	.string "You want the\n"
	.string "GREPA BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_6:
	.string "You want the\n"
	.string "TAMATO BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_7:
	.string "You want the\n"
	.string "LUM BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_8:
	.string "You want the\n"
	.string "LIECHI BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_9:
	.string "You want the\n"
	.string "GANLON BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_10:
	.string "You want the\n"
	.string "SALAC BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_11:
	.string "You want the\n"
	.string "PETAYA BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_12:
	.string "You want the\n"
	.string "APICOT BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_13:
	.string "You want the\n"
	.string "LANSAT BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_14:
	.string "You want the\n"
	.string "STARF BERRY?$"

BattleGrotto_Entrance_ChooseBerry_Text_15:
	.string "I'm sorry, you don't\n"
	.string "have enough Battle Points.$"

BattleGrotto_Entrance_ChooseBerry_Text_16:
	.string "You don't have enough room\n"
	.string "in your BAG for this item.$"

BattleGrotto_Entrance_ChooseBerry_Text_17:
	.string "Here is your prize!$"

BattleGrotto_Entrance_ChooseVitamin_Text_0:
	.string "You want the\n"
	.string "PROTEIN?$"

BattleGrotto_Entrance_ChooseVitamin_Text_1:
	.string "You want the\n"
	.string "IRON?$"

BattleGrotto_Entrance_ChooseVitamin_Text_2:
	.string "You want the\n"
	.string "CALCIUM?$"

BattleGrotto_Entrance_ChooseVitamin_Text_3:
	.string "You want the\n"
	.string "ZINC?$"

BattleGrotto_Entrance_ChooseVitamin_Text_4:
	.string "You want the\n"
	.string "CARBOS?$"

BattleGrotto_Entrance_ChooseVitamin_Text_5:
	.string "You want the\n"
	.string "HP UP?$"

BattleGrotto_Entrance_ChooseVitamin_Text_6:
	.string "You want the\n"
	.string "PP UP?$"

BattleGrotto_Entrance_ChooseVitamin_Text_7:
	.string "You want the\n"
	.string "RARE CANDY?$"

BattleGrotto_Entrance_ChooseTM_Text_0:
	.string "You want the\n"
	.string "TM16 LIGHT SCREEN?$"

BattleGrotto_Entrance_ChooseTM_Text_1:
	.string "You want the\n"
	.string "TM17 PROTECT?$"

BattleGrotto_Entrance_ChooseTM_Text_2:
	.string "You want the\n"
	.string "TM20 SAFEGUARD?$"

BattleGrotto_Entrance_ChooseTM_Text_3:
	.string "You want the\n"
	.string "TM33 REFLECT?$"

BattleGrotto_Entrance_ChooseTM_Text_4:
	.string "You want the\n"
	.string "TM14 BLIZZARD?$"

BattleGrotto_Entrance_ChooseTM_Text_5:
	.string "You want the\n"
	.string "TM15 HYPER BEAM?$"

BattleGrotto_Entrance_ChooseTM_Text_6:
	.string "You want the\n"
	.string "TM22 SOLAR BEAM?$"

BattleGrotto_Entrance_ChooseTM_Text_7:
	.string "You want the\n"
	.string "TM25 THUNDER?$"

BattleGrotto_Entrance_ChooseTM_Text_8:
	.string "You want the\n"
	.string "TM38 FIRE BLAST?$"

BattleGrotto_Entrance_ChooseItem_Text_0:
	.string "You want the\n"
	.string "WHITE HERB?$"

BattleGrotto_Entrance_ChooseItem_Text_1:
	.string "You want the\n"
	.string "MENTAL HERB?$"

BattleGrotto_Entrance_ChooseItem_Text_2:
	.string "You want the\n"
	.string "QUICK CLAW?$"

BattleGrotto_Entrance_ChooseItem_Text_3:
	.string "You want the\n"
	.string "BRIGHTPOWDER?$"

BattleGrotto_Entrance_ChooseItem_Text_4:
	.string "You want the\n"
	.string "KING'S ROCK?$"

BattleGrotto_Entrance_ChooseItem_Text_5:
	.string "You want the\n"
	.string "FOCUS BAND?$"

BattleGrotto_Entrance_ChooseItem_Text_6:
	.string "You want the\n"
	.string "SCOPE LENS?$"

BattleGrotto_Entrance_ChooseItem_Text_7:
	.string "You want the\n"
	.string "CHOICE BAND?$"

BattleGrotto_Entrance_ChooseItem_Text_8:
	.string "You want the\n"
	.string "LEFTOVERS?$"

BattleGrotto_Entrance_Monitor_Text_0:
	.string "CHALLENGER: {PLAYER}\n"
	.string "CURRENT BP: {STR_VAR_1}\p"
	.string "LOWEST FLOOR REACHED: {STR_VAR_2}$"

BattleGrotto_Entrance_Woman_Text_0:
	.string "Your POKéMON are healed after every\n"
	.string "battle here, so it's the perfect place\l"
	.string "for some intense training.$"

BattleGrotto_Entrance_Hiker_Text_0:
	.string "Did you know? This cave is an artificial\n"
	.string "formation made long, long ago.\l"
	.string "It was only discovered recently.\p"
	.string "It's a long tunnel that stretches deep\n"
	.string "below sea level.\l"
	.string "Exploration of its furthest depths is\l"
	.string "still ongoing.\p"
	.string "Will you be the first to see what lies at\n"
	.string "the end?$"
