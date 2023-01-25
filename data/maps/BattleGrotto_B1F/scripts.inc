BattleGrotto_B1F_MapScripts::
	.byte 0


BattleGrotto_B1F_EventScript_Declan::
	trainerbattle_detect TRAINER_DECLAN, BattleGrotto_B1F_EventScript_Declan_Text_0, BattleGrotto_B1F_EventScript_Declan_Text_1, BattleGrotto_B1F_EventScript_Give1BP
	msgbox BattleGrotto_B1F_EventScript_Declan_Text_2, MSGBOX_AUTOCLOSE
	return


BattleGrotto_B1F_EventScript_Give1BP::
	buffernumberstring STR_VAR_1, 1
	setvar VAR_0x8004, 1
	special GiveFrontierBattlePoints
	msgbox BattleGrotto_B1F_EventScript_Give1BP_Text_0, MSGBOX_GETPOINTS
	return


BattleGrotto_B1F_EventScript_Declan_Text_0:
	.string "You won't get past me\n"
	.string "that easily!$"

BattleGrotto_B1F_EventScript_Declan_Text_1:
	.string "Drat...$"

BattleGrotto_B1F_EventScript_Declan_Text_2:
	.string "Well fought, TRAINER.$"

BattleGrotto_B1F_EventScript_Give1BP_Text_0:
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Point(s).$"
