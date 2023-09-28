KapokIsland_House1_MapScripts::
	.byte 0


KapokIsland_House1_EventScript_Beauty::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM44, KapokIsland_House1_EventScript_Beauty_2
	msgbox KapokIsland_House1_EventScript_Beauty_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_TM44
	setflag FLAG_RECEIVED_TM44
	msgbox KapokIsland_House1_EventScript_Beauty_Text_2, MSGBOX_DEFAULT
KapokIsland_House1_EventScript_Beauty_1:
	release
	end

KapokIsland_House1_EventScript_Beauty_2:
	msgbox KapokIsland_House1_EventScript_Beauty_Text_0, MSGBOX_DEFAULT
	goto KapokIsland_House1_EventScript_Beauty_1


KapokIsland_House1_EventScript_Beauty_Text_0:
	.string "Do you ever wonder how POKéMON find\n"
	.string "time to nap in the middle of a battle?$"

KapokIsland_House1_EventScript_Beauty_Text_1:
	.string "You traveled all the way from GATEWAY\n"
	.string "ISLAND? You must be tired.\l"
	.string "Your POKéMON, too.\p"
	.string "Here, I'm sure your team could use this.$"

KapokIsland_House1_EventScript_Beauty_Text_2:
	.string "TM44 contains REST.\p"
	.string "Even the middle of a battle is a fine\n"
	.string "place to take a break.$"
