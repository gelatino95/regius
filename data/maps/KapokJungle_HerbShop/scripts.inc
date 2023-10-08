KapokJungle_HerbShop_MapScripts::
	.byte 0


KapokJungle_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message KapokJungle_HerbShop_EventScript_Clerk_Text_0
	waitmessage
	pokemart KapokJungle_Mart_HerbShop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
KapokJungle_Mart_HerbShop:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_CHARCOAL
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_NONE

KapokJungle_HerbShop_EventScript_AromaLady::
	msgbox KapokJungle_HerbShop_EventScript_AromaLady_Text_0, MSGBOX_NPC
	end


KapokJungle_HerbShop_EventScript_Clerk_Text_0:
	.string "Looking for medicinal herbs?$"

KapokJungle_HerbShop_EventScript_AromaLady_Text_0:
	.string "This jungle is rich with plant life.\n"
	.string "Some of it has beneficial properties\l"
	.string "for POKéMON.$"
