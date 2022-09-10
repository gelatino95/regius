Underwater_CentralSea_MapScripts::
	.byte 0


Underwater_CentralSea_EventScript_Dahlia::
	trainerbattle_single TRAINER_DAHLIA, Underwater_CentralSea_EventScript_Dahlia_Text_0, Underwater_CentralSea_EventScript_Dahlia_Text_1
	msgbox Underwater_CentralSea_EventScript_Dahlia_Text_2, MSGBOX_AUTOCLOSE
	return


Underwater_CentralSea_EventScript_Dahlia_Text_0:
	.string "There are so many lovely corals around\n"
	.string "here!$"

Underwater_CentralSea_EventScript_Dahlia_Text_1:
	.string "Oh no! My corals!$"

Underwater_CentralSea_EventScript_Dahlia_Text_2:
	.string "Corals may seem peaceful, but they\n"
	.string "don't get along with each other well.$"
