GatewayIsland_PlayersHouse_MapScripts::
	.byte 0


GatewayIsland_PlayersHouse_ItemBall::
	lock
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_0
	givemon SPECIES_HELIMAW, 15, ITEM_RARE_CANDY
	playfanfare MUS_OBTAIN_ITEM
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_1
	waitfanfare
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_PlayersHouse_ItemBall_2
GatewayIsland_PlayersHouse_ItemBall_1:
	setflag FLAG_SYS_POKEMON_GET
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
	removeobject 1
	release
	end

GatewayIsland_PlayersHouse_ItemBall_2:
	call Common_EventScript_NameReceivedPartyMon
	goto GatewayIsland_PlayersHouse_ItemBall_1


GatewayIsland_PlayersHouse_ItemBall_Text_0:
	.string "Dear {PLAYER},\p"
	.string "Today is the day you earn\n"
	.string "your first POKéMON.\p"
	.string "I'm sorry I couldn't be here\n"
	.string "for your big day.\p"
	.string "Please explore the islands with your\n"
	.string "new partner, and come find me.\p"
	.string "I'm looking forward to seeing\n"
	.string "how much you've grown.$"

GatewayIsland_PlayersHouse_ItemBall_Text_1:
	.string "{PLAYER} received HELIMAW!$"

GatewayIsland_PlayersHouse_ItemBall_Text_2:
	.string "Would you like to give a\n"
	.string "nickname to your HELIMAW?$"
