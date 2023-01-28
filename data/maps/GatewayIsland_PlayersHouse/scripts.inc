GatewayIsland_PlayersHouse_MapScripts::
	.byte 0


GatewayIsland_PlayersHouse_ItemBall::
	lock
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_0
	givemon SPECIES_PLAKOMASK 15, ITEM_NONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_1, MSGBOX_DEFAULT
	waitfanfare
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_PlayersHouse_ItemBall_2
GatewayIsland_PlayersHouse_ItemBall_1:
	setflag FLAG_SYS_POKEMON_GET
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	playfanfare MUS_OBTAIN_ITEM
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_3, MSGBOX_DEFAULT
	waitfanfare
	giveitem ITEM_POKE_BALL, 5
	removeobject 1
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_4, MSGBOX_AUTOCLOSE
	release
	end

GatewayIsland_PlayersHouse_ItemBall_2:
	call Common_EventScript_NameReceivedPartyMon
	goto GatewayIsland_PlayersHouse_ItemBall_1


GatewayIsland_PlayersHouse_EventScript_PlayersBed::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox GatewayIsland_PlayersHouse_EventScript_PlayersBed_Text_0, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_PlayersHouse_EventScript_PlayersBed_2
GatewayIsland_PlayersHouse_EventScript_PlayersBed_1:
	release
	end

GatewayIsland_PlayersHouse_EventScript_PlayersBed_2:
	fadescreen 1
	playfanfare MUS_HEAL
	special HealPlayerParty
	waitfanfare
	fadescreen 0
	msgbox GatewayIsland_PlayersHouse_EventScript_PlayersBed_Text_1, MSGBOX_AUTOCLOSE
	goto GatewayIsland_PlayersHouse_EventScript_PlayersBed_1


GatewayIsland_PlayersHouse_EventScript_GrandmasBed::
	msgbox GatewayIsland_PlayersHouse_EventScript_GrandmasBed_Text_0, MSGBOX_SIGN
	return


GatewayIsland_PlayersHouse_ItemBall_Text_0:
	.string "Dear {PLAYER},\p"
	.string "Today is the day you set off\n"
	.string "on your first adventure.\p"
	.string "I'm sorry I couldn't be here\n"
	.string "for your big day.\p"
	.string "I've provided everything you will\n"
	.string "need as a new TRAINER,\l"
	.string "including your first POKéMON.\p"
	.string "Treat it with love, and it\n"
	.string "will care for you in return.$"

GatewayIsland_PlayersHouse_ItemBall_Text_1:
	.string "{PLAYER} received PLAKOMASK!$"

GatewayIsland_PlayersHouse_ItemBall_Text_2:
	.string "Would you like to give a\n"
	.string "nickname to your PLAKOMASK?$"

GatewayIsland_PlayersHouse_ItemBall_Text_3:
	.string "{PLAYER} received the POKéNAV!$"

GatewayIsland_PlayersHouse_ItemBall_Text_4:
	.string "And remember, if you grow\n"
	.string "weary from your adventure,\l"
	.string "you can always return home and\l"
	.string "rest in your bed.\p"
	.string "There's no shame in\n"
	.string "taking a break.\p"
	.string "I'm out exploring the islands.\n"
	.string "Come find me once you have\l"
	.string "seen everything the REGIUS\l"
	.string "ARCHIPELAGO has to offer.\p"
	.string "I'll be waiting!\p"
	.string "- GRANDMA$"

GatewayIsland_PlayersHouse_EventScript_PlayersBed_Text_0:
	.string "Would you like to take\n"
	.string "a rest?$"

GatewayIsland_PlayersHouse_EventScript_PlayersBed_Text_1:
	.string "You and your POKéMON\n"
	.string "are feeling refreshed!$"

GatewayIsland_PlayersHouse_EventScript_GrandmasBed_Text_0:
	.string "GRANDMA's bed.\n"
	.string "Better not mess with it!$"
