NortheastSea_MapScripts::
	.byte 0


NortheastSea_EventScript_BattleGrottoSign::
	msgbox NortheastSea_EventScript_BattleGrottoSign_Text_0, MSGBOX_SIGN
	end


NortheastSea_EventScript_MinusIslandSign::
	msgbox NortheastSea_EventScript_MinusIslandSign_Text_0, MSGBOX_SIGN
	end


NortheastSea_EventScript_RouteSign::
	msgbox NortheastSea_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	return


NortheastSea_EventScript_Boy::
	msgbox NortheastSea_EventScript_Boy_Text_0, MSGBOX_NPC
	end


NortheastSea_EventScript_Ronaldo::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_RONALDO, 0, NortheastSea_EventScript_Ronaldo_Text_0, NortheastSea_EventScript_Ronaldo_Text_1
	msgbox NortheastSea_EventScript_Ronaldo_Text_2, MSGBOX_NPC
	return


NortheastSea_EventScript_Lukas::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LUKAS, 0, NortheastSea_EventScript_Lukas_Text_0, NortheastSea_EventScript_Lukas_Text_1
	msgbox NortheastSea_EventScript_Lukas_Text_2, MSGBOX_NPC
	return


NortheastSea_EventScript_Lissy::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_LISSY, 0, NortheastSea_EventScript_Lissy_Text_0, NortheastSea_EventScript_Lissy_Text_1
	msgbox NortheastSea_EventScript_Lissy_Text_2, MSGBOX_NPC
	return


NortheastSea_EventScript_ItemHeartScale::
	finditem ITEM_HEART_SCALE
	end


NortheastSea_EventScript_ItemWaterStone::
	finditem ITEM_WATER_STONE
	end


NortheastSea_EventScript_BattleGrottoSign_Text_0:
	.string "BATTLE GROTTO\n"
	.string "Reach new depths in your training!$"

NortheastSea_EventScript_MinusIslandSign_Text_0:
	.string "MINUS ISLAND$"

NortheastSea_EventScript_RouteSign_Text_0:
	.string "NORTHEAST SEA\n"
	.string "{LEFT_ARROW} KAPOK ISLAND\l"
	.string "BATTLE GROTTO {RIGHT_ARROW}$"

NortheastSea_EventScript_Boy_Text_0:
	.string "What an oddly-shaped island. Whose idea\n"
	.string "was this?$"

NortheastSea_EventScript_Ronaldo_Text_0:
	.string "I've collected bird POKéMON from all\n"
	.string "over the region! Check them out!$"

NortheastSea_EventScript_Ronaldo_Text_1:
	.string "Crash and burn!$"

NortheastSea_EventScript_Ronaldo_Text_2:
	.string "I wonder if there are more birds out\n"
	.string "there I haven't found yet?$"

NortheastSea_EventScript_Lukas_Text_0:
	.string "Out of the way! I sense a big catch\n"
	.string "coming!$"

NortheastSea_EventScript_Lukas_Text_1:
	.string "Ack, just missed it!$"

NortheastSea_EventScript_Lukas_Text_2:
	.string "Some ocean-dwelling POKéMON can be\n"
	.string "quite fearsome.$"

NortheastSea_EventScript_Lissy_Text_0:
	.string "What a cute TRAINER! Why don't you let\n"
	.string "your POKéMON out to play?$"

NortheastSea_EventScript_Lissy_Text_1:
	.string "Adorable!$"

NortheastSea_EventScript_Lissy_Text_2:
	.string "I think every POKéMON is cute. Yes, even\n"
	.string "the big scary ones!$"
