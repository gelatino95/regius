IgneousCaldera_B1F_MapScripts::
	.byte 0


IgneousCaldera_B1F_EventScript_ItemFireStone::
	finditem ITEM_FIRE_STONE
	end


IgneousCaldera_B1F_EventScript_Maurice::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_MAURICE, 0, IgneousCaldera_B1F_EventScript_Maurice_Text_0, IgneousCaldera_B1F_EventScript_Maurice_Text_1
	msgbox IgneousCaldera_B1F_EventScript_Maurice_Text_2, MSGBOX_NPC
	end


IgneousCaldera_B1F_EventScript_Giorno::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_GIORNO, 0, IgneousCaldera_B1F_EventScript_Giorno_Text_0, IgneousCaldera_B1F_EventScript_Giorno_Text_1
	msgbox IgneousCaldera_B1F_EventScript_Giorno_Text_2, MSGBOX_NPC
	end


IgneousCaldera_B1F_EventScript_Maurice_Text_0:
	.string "I've climbed dozens of mountains, but\n"
	.string "this one takes the cake.$"

IgneousCaldera_B1F_EventScript_Maurice_Text_1:
	.string "Burnt to a crisp…$"

IgneousCaldera_B1F_EventScript_Maurice_Text_2:
	.string "Active volcanoes aren't for the faint\n"
	.string "of heart. You've got guts, kid.$"

IgneousCaldera_B1F_EventScript_Giorno_Text_0:
	.string "This place! These ruins! Don't you see?$"

IgneousCaldera_B1F_EventScript_Giorno_Text_1:
	.string "The implications…!$"

IgneousCaldera_B1F_EventScript_Giorno_Text_2:
	.string "To think that ruins could survive for\n"
	.string "thousands of years in a churning\l"
	.string "volcano… it defies belief!$"
