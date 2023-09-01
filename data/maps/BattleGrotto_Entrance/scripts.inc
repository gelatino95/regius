BattleGrotto_Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_Entrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleGrotto_Entrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_Entrance_PlayerFaceNorth
	return


BattleGrotto_Entrance_PlayerFaceNorth::
	setvar VAR_TEMP_1, 1
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


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
	case 0, BattleGrotto_Entrance_BattleGrottoChallenge_2
	case 1, BattleGrotto_Entrance_BattleGrottoChallenge_3
	case 2, BattleGrotto_Entrance_BattleGrottoChallenge_4
	case MULTI_B_PRESSED, BattleGrotto_Entrance_BattleGrottoChallenge_4
	return

BattleGrotto_Entrance_BattleGrottoChallenge_2:
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_1, MSGBOX_DEFAULT
	waitmessage
	special HealPlayerParty
	warp MAP_BATTLE_GROTTO_B1F, 4, 36
	return

BattleGrotto_Entrance_BattleGrottoChallenge_3:
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_2, MSGBOX_DEFAULT
	goto BattleGrotto_Entrance_BattleGrottoChallenge
	return

BattleGrotto_Entrance_BattleGrottoChallenge_4:
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_3, MSGBOX_AUTOCLOSE
	return


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
	case MULTI_B_PRESSED, BattleGrotto_Entrance_ChooseBerry_10
	goto BattleGrotto_Entrance_ChooseBerry
BattleGrotto_Entrance_ChooseBerry_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_lt BattleGrotto_Entrance_ChooseBerry_13
BattleGrotto_Entrance_ChooseBerry_12:
	checkitemspace VAR_0x8009
	compare VAR_RESULT, FALSE
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_37
BattleGrotto_Entrance_ChooseBerry_36:
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_10, MSGBOX_DEFAULT
	goto BattleGrotto_Entrance_ChooseBerry
	return

BattleGrotto_Entrance_ChooseBerry_3:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_16
BattleGrotto_Entrance_ChooseBerry_15:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_POMEG_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_4:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_19
BattleGrotto_Entrance_ChooseBerry_18:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_KELPSY_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_5:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_22
BattleGrotto_Entrance_ChooseBerry_21:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_QUALOT_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_6:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_25
BattleGrotto_Entrance_ChooseBerry_24:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_HONDEW_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_7:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_28
BattleGrotto_Entrance_ChooseBerry_27:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_GREPA_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_8:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_31
BattleGrotto_Entrance_ChooseBerry_30:
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_TAMATO_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_9:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleGrotto_Entrance_ChooseBerry_34
BattleGrotto_Entrance_ChooseBerry_33:
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_LUM_BERRY
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_10:
	goto BattleGrotto_Entrance_Goodbye
	goto BattleGrotto_Entrance_ChooseBerry_1

BattleGrotto_Entrance_ChooseBerry_13:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_8
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_12

BattleGrotto_Entrance_ChooseBerry_16:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_15

BattleGrotto_Entrance_ChooseBerry_19:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_18

BattleGrotto_Entrance_ChooseBerry_22:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_21

BattleGrotto_Entrance_ChooseBerry_25:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_24

BattleGrotto_Entrance_ChooseBerry_28:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_27

BattleGrotto_Entrance_ChooseBerry_31:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_30

BattleGrotto_Entrance_ChooseBerry_34:
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_33

BattleGrotto_Entrance_ChooseBerry_37:
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_9
	goto BattleGrotto_Entrance_ChooseBerry
	goto BattleGrotto_Entrance_ChooseBerry_36


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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_10, MSGBOX_DEFAULT
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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_8
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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_9
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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_10, MSGBOX_DEFAULT
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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_8
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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_9
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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_10, MSGBOX_DEFAULT
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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_8
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
	msgbox BattleGrotto_Entrance_ChooseBerry_Text_9
	goto BattleGrotto_Entrance_ChooseItem
	goto BattleGrotto_Entrance_ChooseItem_44


BattleGrotto_Entrance_Goodbye::
	special CloseBattlePointsWindow
	msgbox BattleGrotto_Entrance_BattleGrottoChallenge_Text_3, MSGBOX_DEFAULT
	closemessage
	return


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
	.string "full of TRAINERs.\l"
	.string "If you defeat all seven TRAINERs\l"
	.string "on the floor in a row, you will\l"
	.string "earn Battle Points (BP), which can be\l"
	.string "exchanged for prizes in the lobby.\p"
	.string "You can then descend to the\n"
	.string "next floor, where you will find\l"
	.string "even harder TRAINERs.\p"
	.string "If you want to quit your challenge,\n"
	.string "you will be able to start at the\l"
	.string "beginning of any floor you've\l"
	.string "previously visited.\p"
	.string "However, at the moment, we only\n"
	.string "have one floor available.\l"
	.string "The rest are still being prepared.\l"
	.string "Thank you for your patience.$"

BattleGrotto_Entrance_BattleGrottoChallenge_Text_3:
	.string "Come again!$"

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
	.string "I'm sorry, you don't\n"
	.string "have enough Battle Points.$"

BattleGrotto_Entrance_ChooseBerry_Text_9:
	.string "You don't have enough room\n"
	.string "in your BAG for this item.$"

BattleGrotto_Entrance_ChooseBerry_Text_10:
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
