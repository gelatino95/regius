SoutheastSea_FishingClub_MapScripts::
	.byte 0


SoutheastSea_FishingClub_EventScript_Healer::
	lock
	faceplayer
	msgbox SoutheastSea_FishingClub_EventScript_Healer_Text_0, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne SoutheastSea_FishingClub_EventScript_Healer_2
SoutheastSea_FishingClub_EventScript_Healer_1:
	release
	end

SoutheastSea_FishingClub_EventScript_Healer_2:
	fadescreen 1
	playfanfare MUS_HEAL
	special HealPlayerParty
	waitfanfare
	fadescreen 0
	msgbox SoutheastSea_FishingClub_EventScript_Healer_Text_1, MSGBOX_AUTOCLOSE
	goto SoutheastSea_FishingClub_EventScript_Healer_1


SoutheastSea_EventScript_Felix::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_FELIX, 0, SoutheastSea_EventScript_Felix_Text_0, SoutheastSea_EventScript_Felix_Text_1
	msgbox SoutheastSea_EventScript_Felix_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Anton::
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_ANTON, 0, SoutheastSea_EventScript_Anton_Text_0, SoutheastSea_EventScript_Anton_Text_1
	msgbox SoutheastSea_EventScript_Anton_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Sanders::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_SANDERS, 0, SoutheastSea_EventScript_Sanders_Text_0, SoutheastSea_EventScript_Sanders_Text_1, SoutheastSea_EventScript_Sanders_PostBattle
	msgbox SoutheastSea_EventScript_Sanders_Text_2, MSGBOX_NPC
	return


SoutheastSea_EventScript_Sanders_PostBattle::
	msgbox SoutheastSea_EventScript_Sanders_PostBattle_Text_0, MSGBOX_AUTOCLOSE
	giveitem ITEM_SUPER_ROD, 1
	closemessage
	release
	end


SoutheastSea_FishingClub_EventScript_Healer_Text_0:
	.string "We keep supplies around for\n"
	.string "visiting TRAINERS.\l"
	.string "Do you need to rest up?$"

SoutheastSea_FishingClub_EventScript_Healer_Text_1:
	.string "Take care out there.$"

SoutheastSea_EventScript_Felix_Text_0:
	.string "You think you got what it\n"
	.string "takes to be one of us?$"

SoutheastSea_EventScript_Felix_Text_1:
	.string "You have the FISHER's spirit!$"

SoutheastSea_EventScript_Felix_Text_2:
	.string "We're real serious about FISHING\n"
	.string "here in this club.$"

SoutheastSea_EventScript_Anton_Text_0:
	.string "The club president need not be\n"
	.string "troubled by the likes of you!$"

SoutheastSea_EventScript_Anton_Text_1:
	.string "Welp.$"

SoutheastSea_EventScript_Anton_Text_2:
	.string "Our president is the most\n"
	.string "experienced FISHER on the islands!$"

SoutheastSea_EventScript_Sanders_Text_0:
	.string "What's this? An up-and-coming\n"
	.string "FISHER wants to join our club?\p"
	.string "You've done well to beat\n"
	.string "my pals, but you'll still have to\l"
	.string "prove your might if you want to\l"
	.string "earn your ROD.\p"
	.string "That's right, you have to face\n"
	.string "me, the club president!$"

SoutheastSea_EventScript_Sanders_Text_1:
	.string "Incredible!$"

SoutheastSea_EventScript_Sanders_Text_2:
	.string "There are countless wonders\n"
	.string "out there in the sea!\p"
	.string "Never stop fishing, kid, and maybe\n"
	.string "you'll see some of them.$"

SoutheastSea_EventScript_Sanders_PostBattle_Text_0:
	.string "Wow! I shouldn't have\n"
	.string "underestimated you for a second.\p"
	.string "I've seen enough!\n"
	.string "Welcome to the REGIUS FISHING CLUB,\l"
	.string "kid!\p"
	.string "We provide only the best RODS\n"
	.string "for our members.\l"
	.string "Go on, you've earned it.$"
