GatewayIsland_PlayersHouse_MapScripts::
	.byte 0


GatewayIsland_PlayersHouse_ItemBall::
	lock
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_0
	givemon SPECIES_DUNKETRA, 15, ITEM_ANCIENT_SLAB
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
	giveitem ITEM_REGIUS_CREST, 1
	giveitem ITEM_ELEGANT_KEY, 1
	giveitem ITEM_OLD_KEY, 1
	giveitem ITEM_STONE_KEY, 1
	giveitem ITEM_PLATE_FOSSIL, 1
	giveitem ITEM_FROND_FOSSIL, 1
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
	.string "{PLAYER} received DUNKETRA!$"

GatewayIsland_PlayersHouse_ItemBall_Text_2:
	.string "Would you like to give a\n"
	.string "nickname to your DUNKETRA?$"
