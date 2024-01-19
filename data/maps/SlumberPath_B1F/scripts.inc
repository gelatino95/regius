SlumberPath_B1F_MapScripts::
	.byte 0


SlumberPath_B1F_EventScript_ItemAncientSlab::
	finditem ITEM_ANCIENT_SLAB
	end


SlumberPath_B1F_EventScript_Braille::
	lock
	braillemsgbox SlumberPath_B1F_Braille_Wall1
	delay 5
	braillemsgbox SlumberPath_B1F_Braille_Wall2
	release
	end


SlumberPath_B1F_Braille_Wall1:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "A DAY WILL\n"
	.braille "COME WHEN\n"
	.braille "THE DANGER\n"
	.braille "HAS PASSED$"

SlumberPath_B1F_Braille_Wall2:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "OUR COLOSSUS\n"
	.braille "WILL LIVE TO\n"
	.braille "SEE A BETTER\n"
	.braille "WORLD$"
