NorthwestSea_House2_MapScripts::
	.byte 0


NorthwestSea_House2_EventScript_ShardSign::
	msgbox NorthwestSea_House2_EventScript_ShardSign_Text_0, MSGBOX_SIGN
	end


NorthwestSea_House2_EventScript_ShardTrader::
	lock
	faceplayer
	msgbox NorthwestSea_House2_EventScript_ShardTrader_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq NorthwestSea_House2_EventScript_ShardTrader_2
NorthwestSea_House2_EventScript_ShardTrader_1:
	checkitem ITEM_RED_SHARD, 5
	compare VAR_RESULT, 0
	goto_if_ne NorthwestSea_House2_EventScript_ShardTrader_5
NorthwestSea_House2_EventScript_ShardTrader_4:
	checkitem ITEM_YELLOW_SHARD, 5
	compare VAR_RESULT, 0
	goto_if_ne NorthwestSea_House2_EventScript_ShardTrader_8
NorthwestSea_House2_EventScript_ShardTrader_7:
	checkitem ITEM_BLUE_SHARD, 5
	compare VAR_RESULT, 0
	goto_if_ne NorthwestSea_House2_EventScript_ShardTrader_11
NorthwestSea_House2_EventScript_ShardTrader_10:
	checkitem ITEM_GREEN_SHARD, 5
	compare VAR_RESULT, 0
	goto_if_ne NorthwestSea_House2_EventScript_ShardTrader_14
NorthwestSea_House2_EventScript_ShardTrader_13:
	msgbox NorthwestSea_House2_EventScript_ShardTrader_Text_1, MSGBOX_DEFAULT
	goto NorthwestSea_House2_EventScript_ShardTrader_ComeAgain
	return

NorthwestSea_House2_EventScript_ShardTrader_2:
	goto NorthwestSea_House2_EventScript_ShardTrader_ComeAgain
	goto NorthwestSea_House2_EventScript_ShardTrader_1

NorthwestSea_House2_EventScript_ShardTrader_5:
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard
	goto NorthwestSea_House2_EventScript_ShardTrader_4

NorthwestSea_House2_EventScript_ShardTrader_8:
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard
	goto NorthwestSea_House2_EventScript_ShardTrader_7

NorthwestSea_House2_EventScript_ShardTrader_11:
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard
	goto NorthwestSea_House2_EventScript_ShardTrader_10

NorthwestSea_House2_EventScript_ShardTrader_14:
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard
	goto NorthwestSea_House2_EventScript_ShardTrader_13


NorthwestSea_House2_EventScript_ShardTrader_ChooseShard::
	chooseitem TREASURES_POCKET
	bufferitemname STR_VAR_1, VAR_ITEM_ID
	switch VAR_ITEM_ID
	case ITEM_RED_SHARD, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_3
	case ITEM_YELLOW_SHARD, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_4
	case ITEM_BLUE_SHARD, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_5
	case ITEM_GREEN_SHARD, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_6
	case ITEM_NONE, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_7
	msgbox NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_Text_0, MSGBOX_DEFAULT
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard
NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_1:
	checkitem VAR_ITEM_ID, 5
	compare VAR_RESULT, 0
	goto_if_eq NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_10
NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_9:
	msgbox NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_13
NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_12:
	removeitem VAR_ITEM_ID, 5
	switch VAR_ITEM_ID
	case ITEM_RED_SHARD, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_17
	case ITEM_YELLOW_SHARD, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_18
	case ITEM_BLUE_SHARD, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_19
	case ITEM_GREEN_SHARD, NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_20
NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_15:
	msgbox NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_Text_3, MSGBOX_DEFAULT
	release
	end

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_3:
	bufferitemname STR_VAR_2, ITEM_TM35
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_1

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_4:
	bufferitemname STR_VAR_2, ITEM_TM24
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_1

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_5:
	bufferitemname STR_VAR_2, ITEM_TM13
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_1

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_6:
	bufferitemname STR_VAR_2, ITEM_TM19
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_1

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_7:
	goto NorthwestSea_House2_EventScript_ShardTrader_ComeAgain
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_1

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_10:
	msgbox NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_Text_1, MSGBOX_DEFAULT
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_9

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_13:
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_12

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_17:
	giveitem ITEM_TM35
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_15

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_18:
	giveitem ITEM_TM24
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_15

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_19:
	giveitem ITEM_TM13
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_15

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_20:
	giveitem ITEM_TM19
	goto NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_15


NorthwestSea_House2_EventScript_ShardTrader_ComeAgain::
	msgbox NorthwestSea_House2_EventScript_ShardTrader_ComeAgain_Text_0, MSGBOX_DEFAULT
	release
	end


NorthwestSea_House2_EventScript_ShardSign_Text_0:
	.string "SHARD TRADING GUIDE\p"
	.string "5 RED SHARDS {RIGHT_ARROW} TM35 FLAMETHROWER\n"
	.string "5 YELLOW SHARDS {RIGHT_ARROW} TM24 THUNDERBOLT\p"
	.string "5 BLUE SHARDS {RIGHT_ARROW} TM13 ICE BEAM\n"
	.string "5 GREEN SHARDS {RIGHT_ARROW} TM19 GIGA DRAIN$"

NorthwestSea_House2_EventScript_ShardTrader_Text_0:
	.string "Do you have any colored SHARDS?\n"
	.string "I collect them.\p"
	.string "If you have five of any one color, I'll\n"
	.string "trade you a good TM for them.\p"
	.string "Would you like to trade in some SHARDS?$"

NorthwestSea_House2_EventScript_ShardTrader_Text_1:
	.string "Hmm… I don't think you have enough\n"
	.string "SHARDS. I'll only trade five matching\l"
	.string "ones at a time.$"

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_Text_0:
	.string "That's not what I'm looking for.\n"
	.string "Please show me a SHARD.$"

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_Text_1:
	.string "Hmm… This isn't enough SHARDS. I'll only\n"
	.string "trade five matching ones at a time.$"

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_Text_2:
	.string "Would you like to trade five\n"
	.string "{STR_VAR_1}S for a {STR_VAR_2}?$"

NorthwestSea_House2_EventScript_ShardTrader_ChooseShard_Text_3:
	.string "Thanks very much!\p"
	.string "If you find more SHARDS, you know where\n"
	.string "to find me.$"

NorthwestSea_House2_EventScript_ShardTrader_ComeAgain_Text_0:
	.string "SHARDS can be found by smashing rocks.\n"
	.string "If you find enough, please consider\l"
	.string "trading with me.$"
