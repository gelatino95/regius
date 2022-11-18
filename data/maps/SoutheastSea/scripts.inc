SoutheastSea_MapScripts::
	.byte 0


SoutheastSea_EventScript_ItemRareCandy::
	finditem ITEM_HM03
	setflag FLAG_RECEIVED_HM03
	finditem ITEM_HM01
	setflag FLAG_RECEIVED_HM01
	end


SoutheastSea_EventScript_ItemRepel::
	finditem ITEM_REPEL
	end


SoutheastSea_EventScript_Alberto::
	trainerbattle_single TRAINER_ALBERTO, SoutheastSea_EventScript_Alberto_Text_0, SoutheastSea_EventScript_Alberto_Text_1
	goto_if_set FLAG_USED_REPEL, SoutheastSea_EventScript_Alberto_1
	msgbox SoutheastSea_EventScript_Alberto_Text_3, MSGBOX_AUTOCLOSE
	return

SoutheastSea_EventScript_Alberto_1:
	msgbox SoutheastSea_EventScript_Alberto_Text_2, MSGBOX_AUTOCLOSE
	return


SoutheastSea_EventScript_Ed::
	trainerbattle_single TRAINER_ED, SoutheastSea_EventScript_Ed_Text_0, SoutheastSea_EventScript_Alberto_Text_1
	msgbox SoutheastSea_EventScript_Alberto_Text_3, MSGBOX_AUTOCLOSE
	return


SoutheastSea_EventScript_Alberto_Text_0:
	.string "Ho there, TRAINER! Care for a battle?$"

SoutheastSea_EventScript_Alberto_Text_1:
	.string "Drat...$"

SoutheastSea_EventScript_Alberto_Text_2:
	.string "Sniff...\n"
	.string "Uh, you smell like REPEL.$"

SoutheastSea_EventScript_Alberto_Text_3:
	.string "Well fought, TRAINER.$"

SoutheastSea_EventScript_Ed_Text_0:
	.string "Hey! I see you!$"
