SoutheastSea_MapScripts::
	.byte 0


SoutheastSea_EventScript_ItemRareCandy::
	finditem ITEM_HM03
	end


SoutheastSea_EventScript_Alberto::
	trainerbattle_single TRAINER_ALBERTO, SoutheastSea_EventScript_Alberto_Text_0, SoutheastSea_EventScript_Alberto_Text_1
	msgbox SoutheastSea_EventScript_Alberto_Text_2, MSGBOX_AUTOCLOSE
	return


SoutheastSea_EventScript_Ed::
	trainerbattle_single TRAINER_ED, SoutheastSea_EventScript_Ed_Text_0, SoutheastSea_EventScript_Alberto_Text_1
	msgbox SoutheastSea_EventScript_Alberto_Text_2, MSGBOX_AUTOCLOSE
	return


SoutheastSea_EventScript_Alberto_Text_0:
	.string "Ho there, TRAINER! Care for a battle?$"

SoutheastSea_EventScript_Alberto_Text_1:
	.string "Drat...$"

SoutheastSea_EventScript_Alberto_Text_2:
	.string "Well fought, TRAINER.$"

SoutheastSea_EventScript_Ed_Text_0:
	.string "Hey! I see you!$"
