KapokIsland_PokemonDayCare_MapScripts::
	.byte 0


KapokIsland_PokemonDayCare_EventScript_LuckyEggMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LUCKY_EGG, KapokIsland_PokemonDayCare_EventScript_LuckyEggMan_2
	msgbox KapokIsland_PokemonDayCare_EventScript_LuckyEggMan_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_LUCKY_EGG
	setflag FLAG_RECEIVED_LUCKY_EGG
KapokIsland_PokemonDayCare_EventScript_LuckyEggMan_1:
	release
	end

KapokIsland_PokemonDayCare_EventScript_LuckyEggMan_2:
	msgbox KapokIsland_PokemonDayCare_EventScript_LuckyEggMan_Text_0, MSGBOX_DEFAULT
	goto KapokIsland_PokemonDayCare_EventScript_LuckyEggMan_1


KapokIsland_PokemonDayCare_EventScript_LuckyEggMan_Text_0:
	.string "Sometimes EGGS go unclaimed by their\n"
	.string "TRAINERS.\p"
	.string "I wonder what happens to them?$"

KapokIsland_PokemonDayCare_EventScript_LuckyEggMan_Text_1:
	.string "I found an EGG, but I don't think it's a\n"
	.string "POKéMON egg.\p"
	.string "Maybe you'll know what to do with this?$"
