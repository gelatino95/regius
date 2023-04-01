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


GatewayIsland_House1_EventScript_OldLady_Text_0:
	.string "You're setting out on a journey?\n"
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
