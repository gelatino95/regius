SouthwestSea_House1_MapScripts::
	.byte 0


SouthwestSea_House1_EventScript_Man::
	goto_if_set FLAG_TEMP_1, SouthwestSea_House1_EventScript_Man_2
	msgbox SouthwestSea_House1_EventScript_Man_Text_1, MSGBOX_NPC
	setflag FLAG_TEMP_1
	end

SouthwestSea_House1_EventScript_Man_2:
	msgbox SouthwestSea_House1_EventScript_Man_Text_0, MSGBOX_NPC
	end


SouthwestSea_House1_EventScript_TMGenerator::
	lock
	playse SE_PC_LOGIN
	msgbox SouthwestSea_House1_EventScript_TMGenerator_Text_0, MSGBOX_DEFAULT
	showmoneybox 0, 0
	msgbox SouthwestSea_House1_EventScript_TMGenerator_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_House1_EventScript_TMGenerator_2
	checkmoney 5000
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_House1_EventScript_TMGenerator_5
	removemoney 5000
	updatemoneybox
	playse SE_SHOP
	msgbox SouthwestSea_House1_EventScript_TMGenerator_Text_4, MSGBOX_DEFAULT
	hidemoneybox
	msgbox SouthwestSea_House1_EventScript_TMGenerator_Text_5, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_ELEVATOR
	delay 60
	playse SE_SUCCESS
	delay 30
	fadescreen FADE_FROM_BLACK
	random 50
	addvar VAR_RESULT, ITEM_TM01
	giveitem VAR_RESULT
	release
	end

SouthwestSea_House1_EventScript_TMGenerator_2:
	hidemoneybox
	playse SE_PC_OFF
	msgbox SouthwestSea_House1_EventScript_TMGenerator_Text_2, MSGBOX_DEFAULT
	release
	end

SouthwestSea_House1_EventScript_TMGenerator_5:
	msgbox SouthwestSea_House1_EventScript_TMGenerator_Text_3, MSGBOX_DEFAULT
	hidemoneybox
	release
	end


SouthwestSea_House1_EventScript_Journal::
	lock
	msgbox SouthwestSea_House1_EventScript_Journal_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_House1_EventScript_Journal_2
	msgbox SouthwestSea_House1_EventScript_Journal_Text_1, MSGBOX_DEFAULT
	msgbox SouthwestSea_House1_Text_KeepReading, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_House1_EventScript_Journal_5
	msgbox SouthwestSea_House1_EventScript_Journal_Text_2, MSGBOX_DEFAULT
	msgbox SouthwestSea_House1_Text_KeepReading, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_House1_EventScript_Journal_8
	msgbox SouthwestSea_House1_EventScript_Journal_Text_3, MSGBOX_DEFAULT
	msgbox SouthwestSea_House1_Text_KeepReading, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_House1_EventScript_Journal_11
	msgbox SouthwestSea_House1_EventScript_Journal_Text_4, MSGBOX_DEFAULT
	msgbox SouthwestSea_House1_Text_KeepReading, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SouthwestSea_House1_EventScript_Journal_14
	msgbox SouthwestSea_House1_EventScript_Journal_Text_5, MSGBOX_DEFAULT
	release
	end

SouthwestSea_House1_EventScript_Journal_2:
	release
	end

SouthwestSea_House1_EventScript_Journal_5:
	release
	end

SouthwestSea_House1_EventScript_Journal_8:
	release
	end

SouthwestSea_House1_EventScript_Journal_11:
	release
	end

SouthwestSea_House1_EventScript_Journal_14:
	release
	end


SouthwestSea_House1_EventScript_Man_Text_0:
	.string "If you want to try creating your own TM,\n"
	.string "feel free to use the computer in the\l"
	.string "corner back there.\p"
	.string "I haven't been able to isolate the data\n"
	.string "for each TM yet, so there's no telling\l"
	.string "which one you'll get.$"

SouthwestSea_House1_EventScript_Man_Text_1:
	.string "Wah! Who are you?\p"
	.string "…Oh, you're just a TRAINER.\n"
	.string "Thank goodness!\l"
	.string "I don't get many visitors out here.\p"
	.string "I'm doing some sensitive research here.\n"
	.string "I'm trying to reverse engineer TMs.\p"
	.string "I'm making good headway, but the\n"
	.string "process is still… inexact. And costly.\p"
	.string "But hey, if you want to try creating\n"
	.string "your own TM, feel free to use the\l"
	.string "computer in the corner back there.\p"
	.string "I haven't been able to isolate the data\n"
	.string "for each TM yet, so there's no telling\l"
	.string "which one you'll get.$"

SouthwestSea_House1_EventScript_TMGenerator_Text_0:
	.string "Welcome to the Technical Machine\n"
	.string "generator v0.12.1.$"

SouthwestSea_House1_EventScript_TMGenerator_Text_1:
	.string "Would you like to spend ¥5000 to\n"
	.string "generate a TM?$"

SouthwestSea_House1_EventScript_TMGenerator_Text_2:
	.string "Logging off…$"

SouthwestSea_House1_EventScript_TMGenerator_Text_3:
	.string "ERROR: Insufficient funds.$"

SouthwestSea_House1_EventScript_TMGenerator_Text_4:
	.string "Payment accepted!$"

SouthwestSea_House1_EventScript_TMGenerator_Text_5:
	.string "Copying TM data…$"

SouthwestSea_House1_EventScript_Journal_Text_0:
	.string "It's a journal of research notes, full\n"
	.string "of lots of highly technical details…\p"
	.string "Read the journal?$"

SouthwestSea_House1_EventScript_Journal_Text_1:
	.string "I've dumped the data from every TM I\n"
	.string "could get my hands on.\p"
	.string "However, official ones are made with a\n"
	.string "proprietary material and advanced\l"
	.string "copy protection.\p"
	.string "I don't have the means to make\n"
	.string "functional copies yet.\l"
	.string "I will work on a solution that uses\l"
	.string "conventional materials.$"

SouthwestSea_House1_EventScript_Journal_Text_2:
	.string "Regular data discs are a no-go.\p"
	.string "There's something special about the\n"
	.string "way move data is transferred from disk\l"
	.string "to POKéMON that's only possible with\l"
	.string "unique manufacturing techniques.\p"
	.string "This is going to be harder than I\n"
	.string "thought.$"

SouthwestSea_House1_EventScript_Journal_Text_3:
	.string "I've managed to synthesize discs that\n"
	.string "mimic the composition of official TMs,\l"
	.string "but sourcing the materials is costly.\p"
	.string "Somewhere down the line I'll look into\n"
	.string "cheaper alternatives, but this will\l"
	.string "allow me to continue my work for now.$"

SouthwestSea_House1_EventScript_Journal_Text_4:
	.string "Trying to circumvent copy protection\n"
	.string "has proven fruitless.\p"
	.string "Those SILPH engineers may be good,\n"
	.string "but I'm better.\p"
	.string "I already have some ideas for how I can\n"
	.string "manipulate the data to bypass all\l"
	.string "these issues, but who knows if it will\l"
	.string "yield any results.$"

SouthwestSea_House1_EventScript_Journal_Text_5:
	.string "Success! I was able to fool copy\n"
	.string "protection.\p"
	.string "I used a quantum algorithm to combine\n"
	.string "the data of every TM in my database.\l"
	.string "The copy protection can't recognize\l"
	.string "the data any more!\p"
	.string "During the copying process, I can run\n"
	.string "the data through another algorithm to\l"
	.string "collapse it into a single TM…\p"
	.string "Unfortunately, there's no way to know\n"
	.string "which TM will be produced this way.\p"
	.string "Still, I may be the first person to\n"
	.string "successfully create a bootleg TM.\l"
	.string "I'll consider that a win.$"

SouthwestSea_House1_Text_KeepReading::
	.string "Keep reading?$"
