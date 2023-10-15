IceCave_B1F_MapScripts::
	.byte 0


IceCave_B1F_EventScript_ItemIceHeal::
	finditem ITEM_ICE_HEAL
	end


IceCave_B1F_EventScript_ItemUltraBall::
	finditem ITEM_ULTRA_BALL
	end


IceCave_B1F_EventScript_Braille_Water::
	lock
	braillemsgbox IceCave_B1F_Braille_Water
	release
	end


IceCave_B1F_EventScript_Lyra::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LYRA, 0, IceCave_B1F_EventScript_Lyra_Text_0, IceCave_B1F_EventScript_Lyra_Text_1
	msgbox IceCave_B1F_EventScript_Lyra_Text_2, MSGBOX_NPC
	end


IceCave_B1F_Braille_Water:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "AS LONG AS\n"
	.braille "OUR WORKS\n"
	.braille "STILL STAND\n"
	.braille "WE SURVIVE.$"

IceCave_B1F_EventScript_Lyra_Text_0:
	.string "The cold strengthens our resolve!\n"
	.string "Fight me!$"

IceCave_B1F_EventScript_Lyra_Text_1:
	.string "Brr…$"

IceCave_B1F_EventScript_Lyra_Text_2:
	.string "Not many TRAINERS come down here.\n"
	.string "It's too chilly for the average person.\l"
	.string "You must be really determined.$"
