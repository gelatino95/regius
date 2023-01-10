KapokIsland_PokemonDayCare_MapScripts::
	.byte 0


KapokIsland_PokemonDayCare_EventScript_ItemBall::
	givemon SPECIES_TERRISLA, 50, ITEM_NONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox KapokIsland_PokemonDayCare_EventScript_ItemBall_Text_0
	waitfanfare
	givemon SPECIES_DITTO, 50, ITEM_NONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox KapokIsland_PokemonDayCare_EventScript_ItemBall_Text_1
	waitfanfare
	givemon SPECIES_SHUCKLE, 50, ITEM_PECHA_BERRY
	playfanfare MUS_OBTAIN_ITEM
	msgbox KapokIsland_PokemonDayCare_EventScript_ItemBall_Text_2
	waitfanfare
	release
	end


KapokIsland_PokemonDayCare_EventScript_ItemBall_Text_0:
	.string "{PLAYER} received TERRISLA!$"

KapokIsland_PokemonDayCare_EventScript_ItemBall_Text_1:
	.string "{PLAYER} received DITTO!$"

KapokIsland_PokemonDayCare_EventScript_ItemBall_Text_2:
	.string "{PLAYER} received SHUCKLE!$"
