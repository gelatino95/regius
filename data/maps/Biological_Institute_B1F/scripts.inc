Biological_Institute_B1F_MapScripts::
	.byte 0


Biological_Institute_EventScript_Litturch::
	lock
	faceplayer
	playmoncry SPECIES_LITTURCH, 0
	msgbox Biological_Institute_EventScript_Litturch_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	release
	end


Biological_Institute_EventScript_LitturchPearl::
	goto_if_unset FLAG_RECEIVED_LITTURCH_PEARL, Biological_Institute_EventScript_LitturchPearl_1
	lock
	faceplayer
	playmoncry SPECIES_LITTURCH, 0
	msgbox Biological_Institute_EventScript_Litturch_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	release
	end

Biological_Institute_EventScript_LitturchPearl_1:
	lock
	faceplayer
	msgbox Biological_Institute_EventScript_LitturchPearl_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_PEARL
	setflag FLAG_RECEIVED_LITTURCH_PEARL
	release
	end


Biological_Institute_EventScript_Litturch_Text_0:
	.string "Lili!$"

Biological_Institute_EventScript_LitturchPearl_Text_0:
	.string "Oh? It's holding something…$"
