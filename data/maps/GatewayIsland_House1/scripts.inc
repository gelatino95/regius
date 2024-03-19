GatewayIsland_House1_MapScripts::
	.byte 0


GatewayIsland_House1_EventScript_OldLady::
	goto_if_unset FLAG_RECEIVED_MYSTIC_WATER, GatewayIsland_House1_EventScript_OldLady_1
	msgbox GatewayIsland_House1_EventScript_OldLady_Text_1, MSGBOX_NPC
	end

GatewayIsland_House1_EventScript_OldLady_1:
	lock
	faceplayer
	msgbox GatewayIsland_House1_EventScript_OldLady_Text_0, MSGBOX_AUTOCLOSE
	giveitem ITEM_MYSTIC_WATER, 1
	setflag FLAG_RECEIVED_MYSTIC_WATER
	closemessage
	release
	end


GatewayIsland_House1_EventScript_PokedexWoman::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEMON_GET, GatewayIsland_House1_EventScript_PokedexWoman_2
	goto_if_set FLAG_RECEIVED_PRIZE_MASTER_BALL, GatewayIsland_House1_EventScript_PokedexWoman_5
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, GatewayIsland_House1_EventScript_PokedexWoman_8
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	copyvar VAR_0x8008, VAR_0x8005
	copyvar VAR_0x8009, VAR_0x8006
	copyvar VAR_0x800A, VAR_RESULT
	buffernumberstring STR_VAR_1, VAR_0x8008
	buffernumberstring STR_VAR_2, VAR_0x8009
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_5, MSGBOX_DEFAULT
	goto_if_set FLAG_RECEIVED_PRIZE_TM_EARTHQUAKE, GatewayIsland_House1_EventScript_PokedexWoman_11
	goto_if_set FLAG_RECEIVED_PRIZE_TM_RETURN, GatewayIsland_House1_EventScript_PokedexWoman_12
	goto_if_set FLAG_RECEIVED_PRIZE_AMULET_COIN, GatewayIsland_House1_EventScript_PokedexWoman_13
	goto_if_set FLAG_RECEIVED_PRIZE_SUN_STONE, GatewayIsland_House1_EventScript_PokedexWoman_14
	goto_if_set FLAG_RECEIVED_PRIZE_QUICK_CLAW, GatewayIsland_House1_EventScript_PokedexWoman_15
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_11, MSGBOX_DEFAULT
	setvar VAR_0x800B, 10
GatewayIsland_House1_EventScript_PokedexWoman_10:
	compare VAR_0x8009, VAR_0x800B
	goto_if_ge GatewayIsland_House1_EventScript_PokedexWoman_23
GatewayIsland_House1_EventScript_PokedexWoman_22:
	buffernumberstring STR_VAR_3, VAR_0x800B
	msgbox GatewayIsland_House1_Text_ComeBack, MSGBOX_DEFAULT
	release
	end

GatewayIsland_House1_EventScript_PokedexWoman_2:
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_0, MSGBOX_DEFAULT
	release
	end

GatewayIsland_House1_EventScript_PokedexWoman_5:
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_1, MSGBOX_DEFAULT
	release
	end

GatewayIsland_House1_EventScript_PokedexWoman_8:
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_2, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message GatewayIsland_House1_EventScript_PokedexWoman_Text_3
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	waitfanfare
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_4, MSGBOX_DEFAULT
	release
	end

GatewayIsland_House1_EventScript_PokedexWoman_11:
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_6, MSGBOX_DEFAULT
	setvar VAR_0x800B, 145
	goto GatewayIsland_House1_EventScript_PokedexWoman_10

GatewayIsland_House1_EventScript_PokedexWoman_12:
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_7, MSGBOX_DEFAULT
	setvar VAR_0x800B, 100
	goto GatewayIsland_House1_EventScript_PokedexWoman_10

GatewayIsland_House1_EventScript_PokedexWoman_13:
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_8, MSGBOX_DEFAULT
	setvar VAR_0x800B, 60
	goto GatewayIsland_House1_EventScript_PokedexWoman_10

GatewayIsland_House1_EventScript_PokedexWoman_14:
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_9, MSGBOX_DEFAULT
	setvar VAR_0x800B, 40
	goto GatewayIsland_House1_EventScript_PokedexWoman_10

GatewayIsland_House1_EventScript_PokedexWoman_15:
	msgbox GatewayIsland_House1_EventScript_PokedexWoman_Text_10, MSGBOX_DEFAULT
	setvar VAR_0x800B, 20
	goto GatewayIsland_House1_EventScript_PokedexWoman_10

GatewayIsland_House1_EventScript_PokedexWoman_23:
	goto GatewayIsland_House1_EventScript_GivePokedexPrize
	goto GatewayIsland_House1_EventScript_PokedexWoman_22


GatewayIsland_House1_EventScript_GivePokedexPrize::
	goto_if_set FLAG_RECEIVED_PRIZE_TM_EARTHQUAKE, GatewayIsland_House1_EventScript_GivePokedexPrize_2
	goto_if_set FLAG_RECEIVED_PRIZE_TM_RETURN, GatewayIsland_House1_EventScript_GivePokedexPrize_3
	goto_if_set FLAG_RECEIVED_PRIZE_AMULET_COIN, GatewayIsland_House1_EventScript_GivePokedexPrize_4
	goto_if_set FLAG_RECEIVED_PRIZE_SUN_STONE, GatewayIsland_House1_EventScript_GivePokedexPrize_5
	goto_if_set FLAG_RECEIVED_PRIZE_QUICK_CLAW, GatewayIsland_House1_EventScript_GivePokedexPrize_6
	msgbox GatewayIsland_House1_Text_AcceptPrize, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW, 1
	setflag FLAG_RECEIVED_PRIZE_QUICK_CLAW
	setvar VAR_0x800B, 20
GatewayIsland_House1_EventScript_GivePokedexPrize_1:
	buffernumberstring STR_VAR_3, VAR_0x800B
	msgbox GatewayIsland_House1_Text_ComeBack, MSGBOX_DEFAULT
	release
	end

GatewayIsland_House1_EventScript_GivePokedexPrize_2:
	msgbox GatewayIsland_House1_EventScript_GivePokedexPrize_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_MASTER_BALL, 1
	setflag FLAG_RECEIVED_PRIZE_MASTER_BALL
	release
	end

GatewayIsland_House1_EventScript_GivePokedexPrize_3:
	msgbox GatewayIsland_House1_Text_AcceptPrize, MSGBOX_DEFAULT
	giveitem ITEM_TM26, 1
	setflag FLAG_RECEIVED_PRIZE_TM_EARTHQUAKE
	setvar VAR_0x800B, 145
	goto GatewayIsland_House1_EventScript_GivePokedexPrize_1

GatewayIsland_House1_EventScript_GivePokedexPrize_4:
	msgbox GatewayIsland_House1_Text_AcceptPrize, MSGBOX_DEFAULT
	giveitem ITEM_TM27, 1
	setflag FLAG_RECEIVED_PRIZE_TM_RETURN
	setvar VAR_0x800B, 100
	goto GatewayIsland_House1_EventScript_GivePokedexPrize_1

GatewayIsland_House1_EventScript_GivePokedexPrize_5:
	msgbox GatewayIsland_House1_Text_AcceptPrize, MSGBOX_DEFAULT
	giveitem ITEM_AMULET_COIN, 1
	setflag FLAG_RECEIVED_PRIZE_AMULET_COIN
	setvar VAR_0x800B, 60
	goto GatewayIsland_House1_EventScript_GivePokedexPrize_1

GatewayIsland_House1_EventScript_GivePokedexPrize_6:
	msgbox GatewayIsland_House1_Text_AcceptPrize, MSGBOX_DEFAULT
	giveitem ITEM_SUN_STONE, 1
	setflag FLAG_RECEIVED_PRIZE_SUN_STONE
	setvar VAR_0x800B, 40
	goto GatewayIsland_House1_EventScript_GivePokedexPrize_1


GatewayIsland_House1_EventScript_OldLady_Text_0:
	.string "You're going off on your own?\n"
	.string "That's wonderful.\p"
	.string "Here, take this charm with you.\n"
	.string "I've been saving it for a\l"
	.string "special occasion such as this.$"

GatewayIsland_House1_EventScript_OldLady_Text_1:
	.string "The ocean is dangerous.\n"
	.string "But it is not your enemy.\p"
	.string "Spend enough time on the sea,\n"
	.string "and you will form a spiritual\l"
	.string "bond with it.$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_0:
	.string "Oh? You don't have a POKéMON yet?\p"
	.string "Then I don't think you can help me.\p"
	.string "Hmm… what to do…$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_1:
	.string "There's my favorite field researcher!\p"
	.string "Enjoying your complete POKéDEX?$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_2:
	.string "Oh! You got your first POKéMON?\p"
	.string "My dream is to make a record of every\n"
	.string "beautiful and unique POKéMON native to\l"
	.string "the REGIUS ARCHIPELAGO.\p"
	.string "But I'm not much of a traveler…\p"
	.string "Please, take my POKéDEX with you!\p"
	.string "It will be an invaluable tool for you as\n"
	.string "a TRAINER, and it will help with my\l"
	.string "research.$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_3:
	.string "{PLAYER} received the POKéDEX!$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_4:
	.string "Thanks for your help! I can't tell you\n"
	.string "how much this means to me.\p"
	.string "When you've registered 10 entries in\n"
	.string "your POKéDEX, please show me!\p"
	.string "I'll reward you for your efforts.$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_5:
	.string "How is your POKéDEX coming along?\n"
	.string "Let me see…\p"
	.string "So, you've seen {STR_VAR_1} POKéMON\n"
	.string "and caught {STR_VAR_2} POKéMON!$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_6:
	.string "I'm amazed at how much you've filled the\n"
	.string "POKéDEX already!\l"
	.string "Which POKéMON are you missing?\p"
	.string "You're in the home stretch now, so don't\n"
	.string "give up!$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_7:
	.string "Most POKéMON need training in order to\n"
	.string "evolve.\l"
	.string "Have you tried leveling up your POKéMON\l"
	.string "in the BATTLE GROTTO?$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_8:
	.string "The more places you explore, the more\n"
	.string "new POKeMON you'll find.\l"
	.string "Keep seeking out new places!$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_9:
	.string "Evolving POKéMON is a great way to fill\n"
	.string "your POKeDEX.\p"
	.string "Some POKéMON evolve using ITEMS. Don't\n"
	.string "forget to check your BAG now and then!$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_10:
	.string "Have you tried fishing? There are lots\n"
	.string "of POKéMON you can only find with a\l"
	.string "ROD.\p"
	.string "Maybe the FISHING CLUB in the\n"
	.string "SOUTHEAST SEA can hook you up\l"
	.string "with one.$"

GatewayIsland_House1_EventScript_PokedexWoman_Text_11:
	.string "Want to hear my advice?\n"
	.string "Catch every new POKéMON you see!\p"
	.string "There are shops on the other islands\n"
	.string "where you can buy more BALLS for\l"
	.string "catching POKéMON.$"

GatewayIsland_House1_EventScript_GivePokedexPrize_Text_0:
	.string "Hold on… am I seeing this right?\n"
	.string "Have you really collected data on every\l"
	.string "single POKéMON in the region?\p"
	.string "I'm speechless… You've helped me\n"
	.string "achieve my dream!\p"
	.string "I can't thank you enough for all your\n"
	.string "hard work.\p"
	.string "This is the last reward I have for you.\n"
	.string "I don't know how useful it will be at\l"
	.string "this point, but… Here, you deserve it.$"

GatewayIsland_House1_Text_AcceptPrize::
	.string "…Oh! Look how much progress you've\n"
	.string "made!\p"
	.string "Here, take this as thanks for all your\n"
	.string "help so far.$"

GatewayIsland_House1_Text_ComeBack::
	.string "Come back and show me when you've\n"
	.string "caught {STR_VAR_3} POKéMON.$"
