Biological_Institute_1F_MapScripts::
	.byte 0


Biological_Institute_EventScript_Scientist1::
	msgbox Biological_Institute_EventScript_Scientist1_Text_0, MSGBOX_NPC
	end


Biological_Institute_EventScript_Scientist2::
	lock
	msgbox Biological_Institute_EventScript_Scientist2_Text_0, MSGBOX_DEFAULT
	faceplayer
	msgbox Biological_Institute_EventScript_Scientist2_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Biological_Institute_EventScript_Scientist2_2
Biological_Institute_EventScript_Scientist2_1:
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, 0
	goto_if_eq Biological_Institute_EventScript_Scientist2_5
	msgbox Biological_Institute_EventScript_Scientist2_Text_3, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq Biological_Institute_EventScript_Scientist2_8
Biological_Institute_EventScript_Scientist2_7:
	msgbox Biological_Institute_EventScript_Scientist2_Text_4, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	release
	end

Biological_Institute_EventScript_Scientist2_2:
	goto Biological_Institute_EventScript_SleepTalkDeclined
	goto Biological_Institute_EventScript_Scientist2_1

Biological_Institute_EventScript_Scientist2_5:
	msgbox Biological_Institute_EventScript_Scientist2_Text_2, MSGBOX_DEFAULT
	release
	end

Biological_Institute_EventScript_Scientist2_8:
	goto Biological_Institute_EventScript_SleepTalkDeclined
	goto Biological_Institute_EventScript_Scientist2_7


Biological_Institute_EventScript_SleepTalkDeclined::
	msgbox Biological_Institute_EventScript_SleepTalkDeclined_Text_0
	release
	end


Biological_Institute_EventScript_Scientist3::
	msgbox Biological_Institute_EventScript_Scientist3_Text_0, MSGBOX_NPC
	end


Biological_Institute_EventScript_Woman::
	msgbox Biological_Institute_EventScript_Woman_Text_0, MSGBOX_NPC
	end


Biological_Institute_EventScript_Girl::
	msgbox Biological_Institute_EventScript_Girl_Text_0, MSGBOX_NPC
	end


Biological_Institute_EventScript_ItemTM36::
	finditem ITEM_TM36
	end


Biological_Institute_EventScript_Scientist1_Text_0:
	.string "Here, we study the wide variety of life\n"
	.string "on the REGIUS ARCHIPELAGO.\p"
	.string "Did you visit to learn about our work?$"

Biological_Institute_EventScript_Scientist2_Text_0:
	.string "Zzzzzz…\n"
	.string "…\p"
	.string "Zzz… zzz-wha?$"

Biological_Institute_EventScript_Scientist2_Text_1:
	.string "Aah!\n"
	.string "What? Me? Snoozing? No way!\p"
	.string "It may look like I was sleeping, but I\n"
	.string "was… uh… actually getting lots of work\l"
	.string "done. Yeah!\l"
	.string "It's my special power.\p"
	.string "Want me to impart this power to your\n"
	.string "POKéMON?\p"
	.string "I'll teach SLEEP TALK to your POKéMON\n"
	.string "in exchange for one HEART SCALE.$"

Biological_Institute_EventScript_Scientist2_Text_2:
	.string "Huh? You don't have a HEART SCALE?\n"
	.string "Well, I'll just get back to work then.\p"
	.string "…\n"
	.string "…\l"
	.string "Zzz…$"

Biological_Institute_EventScript_Scientist2_Text_3:
	.string "Which POKéMON should learn SLEEP TALK?$"

Biological_Institute_EventScript_Scientist2_Text_4:
	.string "{PLAYER} handed over one HEART\n"
	.string "SCALE.$"

Biological_Institute_EventScript_SleepTalkDeclined_Text_0:
	.string "Huh, alright, if you say so.\p"
	.string "…\n"
	.string "…\l"
	.string "Zzz…$"

Biological_Institute_EventScript_Scientist3_Text_0:
	.string "I'm working on analyzing evidence about\n"
	.string "the ancient REGIUS civilization.\l"
	.string "I'm not making much progress, though…\p"
	.string "Most of what they left behind has been\n"
	.string "eroded beyond recognition.$"

Biological_Institute_EventScript_Woman_Text_0:
	.string "It's important to have an appreciation\n"
	.string "for our fellow living creatures.$"

Biological_Institute_EventScript_Girl_Text_0:
	.string "There are POKéMON downstairs!\n"
	.string "Can I go see them?$"
