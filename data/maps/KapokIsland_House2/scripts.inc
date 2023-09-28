KapokIsland_House2_MapScripts::
	.byte 0


KapokIsland_House2_EventScript_PlateFossilMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PLATE_FOSSIL, KapokIsland_House2_EventScript_PlateFossilMan_2
	goto_if_unset FLAG_TEMP_1, KapokIsland_House2_EventScript_PlateFossilMan_6
KapokIsland_House2_EventScript_PlateFossilMan_4:
	goto_if_unset FLAG_ACCEPTED_PLATE_FOSSIL_QUEST, KapokIsland_House2_EventScript_PlateFossilMan_10
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_House2_EventScript_PlateFossilMan_16
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_Text_6, MSGBOX_DEFAULT
KapokIsland_House2_EventScript_PlateFossilMan_9:
	release
	end

KapokIsland_House2_EventScript_PlateFossilMan_2:
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_Text_0, MSGBOX_DEFAULT
	release
	end

KapokIsland_House2_EventScript_PlateFossilMan_5:
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_Text_1, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto KapokIsland_House2_EventScript_PlateFossilMan_4

KapokIsland_House2_EventScript_PlateFossilMan_6:
	goto_if_unset FLAG_ACCEPTED_PLATE_FOSSIL_QUEST, KapokIsland_House2_EventScript_PlateFossilMan_5
	goto KapokIsland_House2_EventScript_PlateFossilMan_4

KapokIsland_House2_EventScript_PlateFossilMan_10:
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_House2_EventScript_PlateFossilMan_13
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_Text_4, MSGBOX_DEFAULT
	release
	end

KapokIsland_House2_EventScript_PlateFossilMan_13:
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_Text_3, MSGBOX_DEFAULT
	setflag FLAG_ACCEPTED_PLATE_FOSSIL_QUEST
	release
	end

KapokIsland_House2_EventScript_PlateFossilMan_16:
	goto KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon
	goto KapokIsland_House2_EventScript_PlateFossilMan_9


KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon::
	setvar VAR_TEMP_1, SPECIES_SLAKOTH
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_2
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_Text_2, MSGBOX_DEFAULT
KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_1:
	release
	end

KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_2:
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_PLATE_FOSSIL
	setflag FLAG_RECEIVED_PLATE_FOSSIL
	msgbox KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_Text_1, MSGBOX_DEFAULT
	goto KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_1


KapokIsland_House2_EventScript_FrondFossilMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_FROND_FOSSIL, KapokIsland_House2_EventScript_FrondFossilMan_2
	goto_if_unset FLAG_TEMP_2, KapokIsland_House2_EventScript_FrondFossilMan_6
KapokIsland_House2_EventScript_FrondFossilMan_4:
	goto_if_unset FLAG_ACCEPTED_FROND_FOSSIL_QUEST, KapokIsland_House2_EventScript_FrondFossilMan_10
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_House2_EventScript_FrondFossilMan_16
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_Text_6, MSGBOX_DEFAULT
KapokIsland_House2_EventScript_FrondFossilMan_9:
	release
	end

KapokIsland_House2_EventScript_FrondFossilMan_2:
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_Text_0, MSGBOX_DEFAULT
	release
	end

KapokIsland_House2_EventScript_FrondFossilMan_5:
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_Text_1, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	goto KapokIsland_House2_EventScript_FrondFossilMan_4

KapokIsland_House2_EventScript_FrondFossilMan_6:
	goto_if_unset FLAG_ACCEPTED_FROND_FOSSIL_QUEST, KapokIsland_House2_EventScript_FrondFossilMan_5
	goto KapokIsland_House2_EventScript_FrondFossilMan_4

KapokIsland_House2_EventScript_FrondFossilMan_10:
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_House2_EventScript_FrondFossilMan_13
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_Text_4, MSGBOX_DEFAULT
	release
	end

KapokIsland_House2_EventScript_FrondFossilMan_13:
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_Text_3, MSGBOX_DEFAULT
	setflag FLAG_ACCEPTED_FROND_FOSSIL_QUEST
	release
	end

KapokIsland_House2_EventScript_FrondFossilMan_16:
	goto KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon
	goto KapokIsland_House2_EventScript_FrondFossilMan_9


KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon::
	setvar VAR_TEMP_1, SPECIES_EXEGGCUTE
	specialvar VAR_RESULT, GetCaughtMon
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_2
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_Text_2, MSGBOX_DEFAULT
KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_1:
	release
	end

KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_2:
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_FROND_FOSSIL
	setflag FLAG_RECEIVED_FROND_FOSSIL
	msgbox KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_Text_1, MSGBOX_DEFAULT
	goto KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_1


KapokIsland_House2_EventScript_PlateFossilMan_Text_0:
	.string "Thanks again for your help!\p"
	.string "I hope that PLATE FOSSIL helps you\n"
	.string "make some discoveries of your own.$"

KapokIsland_House2_EventScript_PlateFossilMan_Text_1:
	.string "I'm a paleontologist. I study the\n"
	.string "FOSSILS of extinct POKéMON.\p"
	.string "I have here a PLATE FOSSIL. It appears\n"
	.string "to be from an undiscovered species.\p"
	.string "If I could identify a living relative of\n"
	.string "this FOSSIL, I could learn a lot about\l"
	.string "the species it belongs to…\p"
	.string "Say, you look like a capable TRAINER.\n"
	.string "How would you like to do a little field\l"
	.string "work for me?$"

KapokIsland_House2_EventScript_PlateFossilMan_Text_2:
	.string "So, what do you say?\n"
	.string "Want to help me track down a living\l"
	.string "relative of this PLATE FOSSIL?$"

KapokIsland_House2_EventScript_PlateFossilMan_Text_3:
	.string "Fantastic! Okay, let me fill you in on\n"
	.string "the details.\p"
	.string "Based on my analysis… this POKéMON had\n"
	.string "strong limbs, so it was likely arboreal.\l"
	.string "That means it lived in trees.\p"
	.string "There is also clear evidence that it had\n"
	.string "fur and sharp claws.\p"
	.string "Finally, it's highly likely this POKéMON's\n"
	.string "descendants still live on this island.\p"
	.string "That's all I've got for you.\n"
	.string "If you find a POKéMON matching that\l"
	.string "description, please capture one and\l"
	.string "show me its POKéDEX entry.\p"
	.string "I'm counting on you!$"

KapokIsland_House2_EventScript_PlateFossilMan_Text_4:
	.string "Oh, fine then.\n"
	.string "I'll continue my analysis alone.$"

KapokIsland_House2_EventScript_PlateFossilMan_Text_5:
	.string "Hello again!\n"
	.string "Have you found a living relative to the\l"
	.string "PLATE FOSSIL yet?$"

KapokIsland_House2_EventScript_PlateFossilMan_Text_6:
	.string "Remember, I'm looking for a POKéMON\n"
	.string "that lives in trees, with fur and sharp\l"
	.string "claws.\p"
	.string "If you find one like that on KAPOK\n"
	.string "ISLAND, please show me its POKéDEX\l"
	.string "info.$"

KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_Text_0:
	.string "Oh? Let me see your POKéDEX…\p"
	.string "…SLAKOTH, hm?\n"
	.string "Let me see if it matches my analysis…\p"
	.string "It lives in trees…\n"
	.string "…has fur, and strong arms with sharp\l"
	.string "claws…\p"
	.string "Egad! I think this might be the missing\n"
	.string "link I've been looking for!\p"
	.string "Your help has been invaluable so far.\p"
	.string "I know the perfect reward for your\n"
	.string "efforts!$"

KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_Text_1:
	.string "Bring this to the lab in KAPOK JUNGLE,\n"
	.string "and they may be able to revive it into a\l"
	.string "POKéMON.\p"
	.string "As a TRAINER, you can learn about this\n"
	.string "new species through hands-on\l"
	.string "experience.\p"
	.string "Good luck with your research!$"

KapokIsland_House2_EventScript_PlateFossilMan_CheckPokemon_Text_2:
	.string "Hmm…\p"
	.string "…\p"
	.string "I'm sorry, but I don't see any POKéMON\n"
	.string "matching this FOSSIL's lineage.\p"
	.string "Remember, I'm looking for a POKéMON\n"
	.string "that lives in trees, with fur and sharp\l"
	.string "claws.\p"
	.string "If you find one like that on KAPOK\n"
	.string "ISLAND, please show me its POKéDEX\l"
	.string "info.$"

KapokIsland_House2_EventScript_FrondFossilMan_Text_0:
	.string "Thanks again for your help!\p"
	.string "Have you revived that FROND FOSSIL\n"
	.string "yet?$"

KapokIsland_House2_EventScript_FrondFossilMan_Text_1:
	.string "I'm a paleontologist. I study the\n"
	.string "FOSSILS of extinct POKéMON.\p"
	.string "I have here a FROND FOSSIL. I've never\n"
	.string "seen anything like it before.\p"
	.string "I need something I can compare it to, so\n"
	.string "I can learn more about it…\l"
	.string "perhaps a living relative?\p"
	.string "Hey, is that a POKéDEX?\n"
	.string "You must be a researcher of your own!\l"
	.string "Can you help me out here?$"

KapokIsland_House2_EventScript_FrondFossilMan_Text_2:
	.string "So, what do you say?\n"
	.string "Want to help me track down a living\l"
	.string "relative of this FROND FOSSIL?$"

KapokIsland_House2_EventScript_FrondFossilMan_Text_3:
	.string "Wonderful! Okay, let me tell you what I\n"
	.string "know so far.\p"
	.string "Based on my analysis…\n"
	.string "we're looking for something plant-like.\l"
	.string "But not quite like any common plant.\p"
	.string "I estimate that this POKéMON has a hard\n"
	.string "outer shell, like a seed.\l"
	.string "In fact, it may not even need any limbs\l"
	.string "to move around.\p"
	.string "Finally, it's likely this POKéMON still\n"
	.string "thrives in the jungles of KAPOK ISLAND\l"
	.string "to this day.\p"
	.string "It's not much, but I hope that helps.\n"
	.string "If you find a POKéMON matching that\l"
	.string "description, please capture one and\l"
	.string "show me its POKéDEX entry.\p"
	.string "I'm counting on you!$"

KapokIsland_House2_EventScript_FrondFossilMan_Text_4:
	.string "Oh, fine then.\n"
	.string "I'm sure something will turn up,\l"
	.string "eventually…$"

KapokIsland_House2_EventScript_FrondFossilMan_Text_5:
	.string "Hello again!\n"
	.string "Have you found a living relative to the\l"
	.string "FROND FOSSIL yet?$"

KapokIsland_House2_EventScript_FrondFossilMan_Text_6:
	.string "Remember, I'm looking for a seed-like\n"
	.string "plant POKéMON with no limbs.\p"
	.string "It should be here on KAPOK ISLAND, so if\n"
	.string "you find one, please show me its\l"
	.string "complete POKéDEX page.$"

KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_Text_0:
	.string "Oh? Let me see your POKéDEX…\p"
	.string "…EXEGGCUTE? Fascinating…\n"
	.string "Let me see if it fits the description…\p"
	.string "It's a plant POKéMON…\n"
	.string "…with a seed-like body, and no limbs…\p"
	.string "Eureka! We've established a complete\n"
	.string "lineage for this species!\p"
	.string "I couldn't have done this without you.\p"
	.string "Now that I'm done with this, why don't\n"
	.string "you have it for your trouble?$"

KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_Text_1:
	.string "Bring this to the lab in KAPOK JUNGLE,\n"
	.string "and they may be able to revive it into a\l"
	.string "POKéMON.\p"
	.string "There's no more I can learn from\n"
	.string "studying this rock, but as a TRAINER,\l"
	.string "I'm sure you could benefit from the\l"
	.string "real thing.\p"
	.string "Please treat it with care!$"

KapokIsland_House2_EventScript_FrondFossilMan_CheckPokemon_Text_2:
	.string "Hmm…\p"
	.string "…\p"
	.string "I'm sorry, but I don't see any POKéMON\n"
	.string "matching this FOSSIL's lineage.\p"
	.string "Remember, I'm looking for a seed-like\n"
	.string "plant POKéMON with no limbs.\p"
	.string "It should be here on KAPOK ISLAND, so if\n"
	.string "you find one, please show me its\l"
	.string "complete POKéDEX page.$"
