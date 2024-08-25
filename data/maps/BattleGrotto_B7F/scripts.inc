BattleGrotto_B7F_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleGrotto_B7F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_TRANSITION, BattleGrotto_B7F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BattleGrotto_B7F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_1, 0, BattleGrotto_B1F_EventScript_PlayerFaceNorth
	end

BattleGrotto_B7F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	cleartrainerflag TRAINER_SUZAKU
	cleartrainerflag TRAINER_PATRICK
	cleartrainerflag TRAINER_HITOMI
	cleartrainerflag TRAINER_GULLIVER
	cleartrainerflag TRAINER_FAITH
	cleartrainerflag TRAINER_DARRIN
	cleartrainerflag TRAINER_MIRANDA
	end


BattleGrotto_B7F_EventScript_StartAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B7F_EventScript_StartAttendant_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BattleGrotto_B7F_EventScript_StartAttendant_1
	msgbox BattleGrotto_B7F_EventScript_StartAttendant_Text_1, MSGBOX_AUTOCLOSE
	return

BattleGrotto_B7F_EventScript_StartAttendant_1:
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return


BattleGrotto_B7F_EventScript_EndAttendant::
	lock
	faceplayer
	msgbox BattleGrotto_B7F_EventScript_EndAttendant_Text_0, MSGBOX_DEFAULT
	goto_if_unset FLAG_GROTTO_FLOOR_7_COMPLETE, BattleGrotto_B7F_EventScript_EndAttendant_2
BattleGrotto_B7F_EventScript_EndAttendant_1:
	msgbox BattleGrotto_B7F_EventScript_EndAttendant_Text_2, MSGBOX_AUTOCLOSE
	warp MAP_BATTLE_GROTTO_ENTRANCE, 10, 7
	return

BattleGrotto_B7F_EventScript_EndAttendant_2:
	msgbox BattleGrotto_B7F_EventScript_EndAttendant_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_PP_MAX
	setflag FLAG_GROTTO_FLOOR_7_COMPLETE
	goto BattleGrotto_B7F_EventScript_EndAttendant_1


BattleGrotto_B7F_EventScript_Suzaku::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_SUZAKU, 0, BattleGrotto_B7F_EventScript_Suzaku_Text_0, BattleGrotto_B7F_EventScript_Suzaku_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B7F_EventScript_Suzaku_Text_2, MSGBOX_NPC
	return


BattleGrotto_B7F_EventScript_Patrick::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_PATRICK, 0, BattleGrotto_B7F_EventScript_Patrick_Text_0, BattleGrotto_B7F_EventScript_Patrick_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B7F_EventScript_Patrick_Text_2, MSGBOX_NPC
	return


BattleGrotto_B7F_EventScript_Hitomi::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_HITOMI, 0, BattleGrotto_B7F_EventScript_Hitomi_Text_0, BattleGrotto_B7F_EventScript_Hitomi_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B7F_EventScript_Hitomi_Text_2, MSGBOX_NPC
	return


BattleGrotto_B7F_EventScript_Gulliver::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_GULLIVER, 0, BattleGrotto_B7F_EventScript_Gulliver_Text_0, BattleGrotto_B7F_EventScript_Gulliver_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B7F_EventScript_Gulliver_Text_2, MSGBOX_NPC
	return


BattleGrotto_B7F_EventScript_Faith::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_FAITH, 0, BattleGrotto_B7F_EventScript_Faith_Text_0, BattleGrotto_B7F_EventScript_Faith_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B7F_EventScript_Faith_Text_2, MSGBOX_NPC
	return


BattleGrotto_B7F_EventScript_Darrin::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_DARRIN, 0, BattleGrotto_B7F_EventScript_Darrin_Text_0, BattleGrotto_B7F_EventScript_Darrin_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B7F_EventScript_Darrin_Text_2, MSGBOX_NPC
	return


BattleGrotto_B7F_EventScript_Miranda::
	trainerbattle TRAINER_BATTLE_GROTTO, TRAINER_MIRANDA, 0, BattleGrotto_B7F_EventScript_Miranda_Text_0, BattleGrotto_B7F_EventScript_Miranda_Text_1, BattleGrotto_B4F_EventScript_PostBattle
	msgbox BattleGrotto_B7F_EventScript_Miranda_Text_2, MSGBOX_NPC
	return


BattleGrotto_B7F_EventScript_StartAttendant_Text_0:
	.string "You're currently on sublevel 7.\p"
	.string "Would you like to quit and\n"
	.string "return to the lobby?$"

BattleGrotto_B7F_EventScript_StartAttendant_Text_1:
	.string "Good luck!$"

BattleGrotto_B7F_EventScript_EndAttendant_Text_0:
	.string "Congratulations on defeating\n"
	.string "all TRAINERS on the floor!$"

BattleGrotto_B7F_EventScript_EndAttendant_Text_1:
	.string "For clearing sublevel 7 for the first\n"
	.string "time, here is a special prize.$"

BattleGrotto_B7F_EventScript_EndAttendant_Text_2:
	.string "You've completed all the sublevels that\n"
	.string "are currently available.\p"
	.string "I will return you to the lobby.$"

BattleGrotto_B7F_EventScript_Suzaku_Text_0:
	.string "Prepare to prove yourself!$"

BattleGrotto_B7F_EventScript_Suzaku_Text_1:
	.string "You are worthy.$"

BattleGrotto_B7F_EventScript_Suzaku_Text_2:
	.string "We don't see many challengers this far\n"
	.string "in. You have done well to get here.$"

BattleGrotto_B7F_EventScript_Patrick_Text_0:
	.string "I thought there might be rare POKéMON\n"
	.string "in this tunnel…$"

BattleGrotto_B7F_EventScript_Patrick_Text_1:
	.string "My dreams, crushed!$"

BattleGrotto_B7F_EventScript_Patrick_Text_2:
	.string "This creepy tunnel has sat empty for\n"
	.string "millennia. No rare POKéMON to be seen!$"

BattleGrotto_B7F_EventScript_Hitomi_Text_0:
	.string "Getting tired yet?$"

BattleGrotto_B7F_EventScript_Hitomi_Text_1:
	.string "I see!$"

BattleGrotto_B7F_EventScript_Hitomi_Text_2:
	.string "It only gets tougher from here.\n"
	.string "Pace yourself.$"

BattleGrotto_B7F_EventScript_Gulliver_Text_0:
	.string "There's something incredible here, I can\n"
	.string "feel it!$"

BattleGrotto_B7F_EventScript_Gulliver_Text_1:
	.string "Incredible!$"

BattleGrotto_B7F_EventScript_Gulliver_Text_2:
	.string "When this tunnel is fully explored, I am\n"
	.string "certain there will be a great discovery\l"
	.string "at the end.$"

BattleGrotto_B7F_EventScript_Faith_Text_0:
	.string "If you know what's good for you, you'll\n"
	.string "turn back.$"

BattleGrotto_B7F_EventScript_Faith_Text_1:
	.string "Fool…$"

BattleGrotto_B7F_EventScript_Faith_Text_2:
	.string "These grounds weren't meant for human\n"
	.string "visitors. We shouldn't be here.$"

BattleGrotto_B7F_EventScript_Darrin_Text_0:
	.string "For the greatest TRAINER of all:\n"
	.string "the greatest challenge of all!$"

BattleGrotto_B7F_EventScript_Darrin_Text_1:
	.string "I concede defeat.$"

BattleGrotto_B7F_EventScript_Darrin_Text_2:
	.string "You thought I was the greatest\n"
	.string "challenge? Oh, no. That still lies ahead.$"

BattleGrotto_B7F_EventScript_Miranda_Text_0:
	.string "So you've made it!\p"
	.string "I've worked hard to become the\n"
	.string "strongest TRAINER in the\l"
	.string "BATTLE GROTTO, and I'm not about to let\l"
	.string "some newcomer take that from me.\p"
	.string "I'm going to defend my place with\n"
	.string "everything I've got! Get ready!$"

BattleGrotto_B7F_EventScript_Miranda_Text_1:
	.string "No… it can't be!$"

BattleGrotto_B7F_EventScript_Miranda_Text_2:
	.string "I shouldn't have underestimated you.\n"
	.string "You're the real champion around here!$"
