KapokIsland_House1_MapScripts::
	.byte 0


KapokIsland_House1_EventScript_Beauty::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM04, KapokIsland_House1_EventScript_Beauty_2
	msgbox KapokIsland_House1_EventScript_Beauty_Text_1
	giveitem ITEM_HM04
	giveitem ITEM_HM07
	setflag FLAG_RECEIVED_HM04
KapokIsland_House1_EventScript_Beauty_1:
	release
	end

KapokIsland_House1_EventScript_Beauty_2:
	msgbox KapokIsland_House1_EventScript_Beauty_Text_0
	goto KapokIsland_House1_EventScript_Beauty_1


KapokIsland_House1_EventScript_Beauty_Text_0:
	.string "Good luck out there.$"

KapokIsland_House1_EventScript_Beauty_Text_1:
	.string "Exploring the ICE CAVE?,\n"
	.string "You'll need these.$"
