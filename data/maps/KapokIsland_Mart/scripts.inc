KapokIsland_Mart_MapScripts::
	.byte 0


KapokIsland_Mart_EventScript_MainClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart KapokIsland_Mart_Pokemart_Main
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


KapokIsland_Mart_EventScript_BallClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart KapokIsland_Mart_Pokemart_Balls
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


KapokIsland_Mart_EventScript_Girl::
	msgbox KapokIsland_Mart_EventScript_Girl_Text_0
	return


	.align 2
KapokIsland_Mart_Pokemart_Main:
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
KapokIsland_Mart_Pokemart_Balls:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NONE

KapokIsland_Mart_EventScript_Girl_Text_0:
	.string "Since this is the only official POKéMART\n"
	.string "serving the islands, it's very well\l"
	.string "stocked!$"
