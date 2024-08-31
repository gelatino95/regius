GatewayIsland_PlayersHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GatewayIsland_PlayersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GatewayIsland_PlayersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_GATEWAY_ISLAND
	return


GatewayIsland_PlayersHouse_EventScript_Grandma::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_POKENAV, GatewayIsland_PlayersHouse_EventScript_Grandma_2
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, GatewayIsland_PlayersHouse_EventScript_Grandma_5
	goto_if_unset FLAG_RECEIVED_REGIUS_CREST, GatewayIsland_PlayersHouse_EventScript_Grandma_8
	msgbox GatewayIsland_PlayersHouse_EventScript_Grandma_Text_5, MSGBOX_DEFAULT
	release
	end

GatewayIsland_PlayersHouse_EventScript_Grandma_2:
	msgbox GatewayIsland_PlayersHouse_EventScript_Grandma_Text_0, MSGBOX_DEFAULT
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	playfanfare MUS_OBTAIN_ITEM
	msgbox GatewayIsland_PlayersHouse_EventScript_Grandma_Text_1, MSGBOX_DEFAULT
	waitfanfare
	msgbox GatewayIsland_PlayersHouse_EventScript_Grandma_Text_2, MSGBOX_DEFAULT
	msgbox GatewayIsland_PlayersHouse_Text_GrandmaComeBackLater, MSGBOX_DEFAULT
	release
	end

GatewayIsland_PlayersHouse_EventScript_Grandma_5:
	msgbox GatewayIsland_PlayersHouse_Text_GrandmaComeBackLater, MSGBOX_DEFAULT
	release
	end

GatewayIsland_PlayersHouse_EventScript_Grandma_8:
	msgbox GatewayIsland_PlayersHouse_EventScript_Grandma_Text_3, MSGBOX_DEFAULT
	giveitem ITEM_REGIUS_CREST, 1
	setflag FLAG_RECEIVED_REGIUS_CREST
	msgbox GatewayIsland_PlayersHouse_EventScript_Grandma_Text_4, MSGBOX_DEFAULT
	release
	end


GatewayIsland_PlayersHouse_ItemBall::
	lock
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq GatewayIsland_PlayersHouse_ItemBall_2
	removeobject 1
	givemon SPECIES_PLAKOMASK, 15, ITEM_NONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_1, MSGBOX_DEFAULT
	waitfanfare
	msgbox GatewayIsland_PlayersHouse_ItemBall_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne GatewayIsland_PlayersHouse_ItemBall_5
GatewayIsland_PlayersHouse_ItemBall_4:
	setflag FLAG_SYS_POKEMON_GET
	release
	end

GatewayIsland_PlayersHouse_ItemBall_2:
	release
	end

GatewayIsland_PlayersHouse_ItemBall_5:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GatewayIsland_PlayersHouse_ItemBall_4


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


GatewayIsland_PlayersHouse_EventScript_Grandma_Text_0:
	.string "GRANDMA: Ah, {PLAYER}!\n"
	.string "Finally got yourself out of bed, eh?\p"
	.string "I left you a very special present on the\n"
	.string "table.\l"
	.string "Did you pick it up yet?\p"
	.string "Oh, that's right!\n"
	.string "I have something else important\l"
	.string "for a new TRAINER like yourself.$"

GatewayIsland_PlayersHouse_EventScript_Grandma_Text_1:
	.string "{PLAYER} received the POKéNAV!$"

GatewayIsland_PlayersHouse_EventScript_Grandma_Text_2:
	.string "This will help you navigate when you're\n"
	.string "out exploring.\l"
	.string "Don't go and get yourself lost, now!$"

GatewayIsland_PlayersHouse_EventScript_Grandma_Text_3:
	.string "So she gave you a POKéDEX, eh?\p"
	.string "Now you're really prepared to start\n"
	.string "your journey!\p"
	.string "But before you go, I have one more gift\n"
	.string "for you.\p"
	.string "Go on, take it.$"

GatewayIsland_PlayersHouse_EventScript_Grandma_Text_4:
	.string "This odd charm has been passed down in\n"
	.string "my family for generations.\p"
	.string "I hope it will keep you safe and bring\n"
	.string "you good fortune on your adventure.\p"
	.string "Don't forget, if you grow weary from\n"
	.string "your travels, you can always come back\l"
	.string "here and rest in your bed.\p"
	.string "There's no shame in taking a break when\n"
	.string "you need it!\p"
	.string "Now, what are you waiting for?\n"
	.string "Get out there and have fun!$"

GatewayIsland_PlayersHouse_EventScript_Grandma_Text_5:
	.string "All this talk of adventure has me\n"
	.string "thinking about my youth.\p"
	.string "You might inspire me to go out and have\n"
	.string "an adventure of my own!\l"
	.string "Wouldn't that be something?$"

GatewayIsland_PlayersHouse_ItemBall_Text_0:
	.string "It's a gift from GRANDMA.\n"
	.string "Take it?$"

GatewayIsland_PlayersHouse_ItemBall_Text_1:
	.string "{PLAYER} received PLAKOMASK!$"

GatewayIsland_PlayersHouse_ItemBall_Text_2:
	.string "Would you like to give a\n"
	.string "nickname to your PLAKOMASK?$"

GatewayIsland_PlayersHouse_EventScript_PlayersBed_Text_0:
	.string "Would you like to take\n"
	.string "a rest?$"

GatewayIsland_PlayersHouse_EventScript_PlayersBed_Text_1:
	.string "You and your POKéMON\n"
	.string "are feeling refreshed!$"

GatewayIsland_PlayersHouse_EventScript_GrandmasBed_Text_0:
	.string "GRANDMA's bed.\n"
	.string "Better not mess with it!$"

GatewayIsland_PlayersHouse_Text_GrandmaComeBackLater::
	.string "There's a nice lady nextdoor who wants\n"
	.string "to see you, too.\l"
	.string "Why don't you pay her a visit?\p"
	.string "Oh, and I left some more supplies for\n"
	.string "you in the PC.\p"
	.string "Don't forget to check the PC before you\n"
	.string "leave!\p"
	.string "Come speak with me again once you've\n"
	.string "done all that.$"
