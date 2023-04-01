SoutheastSea_MapScripts::
	.byte 0


SoutheastSea_EventScript_ItemRareCandy::
	finditem ITEM_HM01
	setflag FLAG_RECEIVED_HM01
	end


SoutheastSea_EventScript_ItemRepel::
	finditem ITEM_REPEL
	end


SoutheastSea_EventScript_SurfNPC::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_HM03, SoutheastSea_EventScript_SurfNPC_2
SoutheastSea_EventScript_SurfNPC_1:
	msgbox SoutheastSea_EventScript_SurfNPC_Text_1, MSGBOX_AUTOCLOSE
	release
	end

SoutheastSea_EventScript_SurfNPC_2:
	msgbox SoutheastSea_EventScript_SurfNPC_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_HM03, 1
	setflag FLAG_RECEIVED_HM03
	goto SoutheastSea_EventScript_SurfNPC_1


SoutheastSea_EventScript_Alberto::
	trainerbattle_single TRAINER_ALBERTO, SoutheastSea_EventScript_Alberto_Text_0, SoutheastSea_EventScript_Alberto_Text_1
	goto_if_set FLAG_USED_REPEL, SoutheastSea_EventScript_Alberto_1
	msgbox SoutheastSea_EventScript_Alberto_Text_3, MSGBOX_AUTOCLOSE
	return

SoutheastSea_EventScript_Alberto_1:
	msgbox SoutheastSea_EventScript_Alberto_Text_2, MSGBOX_AUTOCLOSE
	return


SoutheastSea_EventScript_Ed::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ED, 0, SoutheastSea_EventScript_Ed_Text_0, SoutheastSea_EventScript_Alberto_Text_1
	msgbox SoutheastSea_EventScript_Alberto_Text_3, MSGBOX_AUTOCLOSE
	return


SoutheastSea_EventScript_Declan::
	trainerbattle_single TRAINER_DECLAN, SoutheastSea_EventScript_Declan_Text_0, SoutheastSea_EventScript_Declan_Text_1
	msgbox SoutheastSea_EventScript_Declan_Text_2, MSGBOX_AUTOCLOSE
	return


SoutheastSea_EventScript_SurfNPC_Text_0:
	.string "Ah, {PLAYER}!\n"
	.string "Finally setting off on your own?\p"
	.string "If you want to travel between\n"
	.string "the islands, you'll need this.$"

SoutheastSea_EventScript_SurfNPC_Text_1:
	.string "That HM contains SURF.\p"
	.string "Not only will it let your POKéMON\n"
	.string "carry you across the ocean,\l"
	.string "but it's also great in battle!\p"
	.string "Oh! But teaching the move isn't\n"
	.string "necessary to use it in the field.\p"
	.string "As long as your POKéMON is\n"
	.string "capable of learning it,\l"
	.string "just owning the HM is good enough!\p"
	.string "Go on, just face the water\n"
	.string "and give it a try!$"

SoutheastSea_EventScript_Alberto_Text_0:
	.string "Ho there, trainer! Care for a battle?$"

SoutheastSea_EventScript_Alberto_Text_1:
	.string "Drat...$"

SoutheastSea_EventScript_Alberto_Text_2:
	.string "Sniff...\n"
	.string "Uh, you smell like REPEL.$"

SoutheastSea_EventScript_Alberto_Text_3:
	.string "Well fought, TRAINER.$"

SoutheastSea_EventScript_Ed_Text_0:
	.string "Hey! I see you!$"

SoutheastSea_EventScript_Declan_Text_0:
	.string "You got your first POKéMON?\n"
	.string "So did I!$"

SoutheastSea_EventScript_Declan_Text_1:
	.string "Drat…$"

SoutheastSea_EventScript_Declan_Text_2:
	.string "All the trainers around here\n"
	.string "like double battles.\l"
	.string "But I only have one POKéMON…$"
