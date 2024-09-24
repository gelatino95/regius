FarReachSea_House1_MapScripts::
	.byte 0


FarReachSea_House1_EventScript_Roll::
	msgbox FarReachSea_House1_EventScript_Roll_Text_0, MSGBOX_NPC
	end


FarReachSea_House1_EventScript_Ben::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_1, FarReachSea_House1_EventScript_Ben_2
	random 5
	switch VAR_RESULT
	case 0, FarReachSea_House1_EventScript_Ben_6
	case 1, FarReachSea_House1_EventScript_Ben_7
	case 2, FarReachSea_House1_EventScript_Ben_8
	case 3, FarReachSea_House1_EventScript_Ben_9
	case 4, FarReachSea_House1_EventScript_Ben_10
FarReachSea_House1_EventScript_Ben_4:
	release
	end

FarReachSea_House1_EventScript_Ben_2:
	msgbox FarReachSea_House1_EventScript_Ben_Text_0, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	release
	end

FarReachSea_House1_EventScript_Ben_6:
	msgbox FarReachSea_House1_EventScript_Ben_Text_1, MSGBOX_DEFAULT
	goto FarReachSea_House1_EventScript_Ben_4

FarReachSea_House1_EventScript_Ben_7:
	msgbox FarReachSea_House1_EventScript_Ben_Text_2, MSGBOX_DEFAULT
	goto FarReachSea_House1_EventScript_Ben_4

FarReachSea_House1_EventScript_Ben_8:
	msgbox FarReachSea_House1_EventScript_Ben_Text_3, MSGBOX_DEFAULT
	goto FarReachSea_House1_EventScript_Ben_4

FarReachSea_House1_EventScript_Ben_9:
	msgbox FarReachSea_House1_EventScript_Ben_Text_4, MSGBOX_DEFAULT
	goto FarReachSea_House1_EventScript_Ben_4

FarReachSea_House1_EventScript_Ben_10:
	goto_if_unset FLAG_TEMP_2, FarReachSea_House1_EventScript_Ben_12
FarReachSea_House1_EventScript_Ben_11:
	goto FarReachSea_House1_EventScript_Ben_PostBattle
	goto FarReachSea_House1_EventScript_Ben_4

FarReachSea_House1_EventScript_Ben_12:
	msgbox FarReachSea_House1_EventScript_Ben_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FarReachSea_House1_EventScript_Ben_15
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_BEN, 0, FarReachSea_House1_EventScript_Ben_Text_7, FarReachSea_House1_EventScript_Ben_Text_8, FarReachSea_House1_EventScript_Ben_PostBattle
	goto FarReachSea_House1_EventScript_Ben_11

FarReachSea_House1_EventScript_Ben_15:
	msgbox FarReachSea_House1_EventScript_Ben_Text_6, MSGBOX_DEFAULT
	release
	end


FarReachSea_House1_EventScript_Ben_PostBattle::
	msgbox FarReachSea_House1_EventScript_Ben_PostBattle_Text_0, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	release
	end


FarReachSea_House1_EventScript_Roll_Text_0:
	.string "Hi, I'm ROLL!\n"
	.string "I made the human character designs.\p"
	.string "I also made QUETINI!\n"
	.string "Isn't it cute?$"

FarReachSea_House1_EventScript_Ben_Text_0:
	.string "Hello! I'm BEN.\n"
	.string "I made the game you're playing!\p"
	.string "Well, technically, GAME FREAK did most\n"
	.string "of the work.\l"
	.string "I just built a new game on top of theirs.\p"
	.string "But they didn't want to come all the way\n"
	.string "out here, so you get to talk to me\l"
	.string "instead. Hooray!$"

FarReachSea_House1_EventScript_Ben_Text_1:
	.string "I've been creating new POKéMON for as\n"
	.string "long as I can remember.\p"
	.string "I hope you enjoy all the new ones!\n"
	.string "Which is your favorite?$"

FarReachSea_House1_EventScript_Ben_Text_2:
	.string "The game may not look like much yet, but\n"
	.string "I have plans to add a bunch more stuff.\l"
	.string "Look forward to it!$"

FarReachSea_House1_EventScript_Ben_Text_3:
	.string "Have you tried out the BATTLE GROTTO?\p"
	.string "It's inspired by a certain battle\n"
	.string "facility in the ORRE region.$"

FarReachSea_House1_EventScript_Ben_Text_4:
	.string "I wonder when GAME FREAK will get\n"
	.string "around to making a POKéMON and\l"
	.string "JURASSIC PARK crossover.\p"
	.string "I keep pitching the idea to them, but\n"
	.string "for some reason they stopped\l"
	.string "answering my calls.$"

FarReachSea_House1_EventScript_Ben_Text_5:
	.string "Say, would you like to have a battle?\p"
	.string "I'd love a chance to show off some of my\n"
	.string "favorite POKéMON in battle.$"

FarReachSea_House1_EventScript_Ben_Text_6:
	.string "Ha, fair enough!$"

FarReachSea_House1_EventScript_Ben_Text_7:
	.string "Alright, get ready!$"

FarReachSea_House1_EventScript_Ben_Text_8:
	.string "Beat at my own game?!$"

FarReachSea_House1_EventScript_Ben_PostBattle_Text_0:
	.string "Wow, that's a great-looking team you\n"
	.string "put together.\p"
	.string "Thanks for giving me a chance to see\n"
	.string "them in action!$"
