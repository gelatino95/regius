KapokIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_KAPOK_ISLAND
	clearflag FLAG_HIDE_KAPOK_ISLAND_FLY_GUY
	goto_if_unset FLAG_DEFEATED_ARID_ISLAND_FLY_GUY, KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto_if_set FLAG_DEFEATED_KAPOK_ISLAND_FLY_GUY, KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto KapokIsland_EventScript_TryMoveDayCareMan
	return

KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_HIDE_KAPOK_ISLAND_FLY_GUY
	removeobject 14
	goto KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	goto_if_set FLAG_VISITED_IGNEOUS_ISLAND, KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto KapokIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


KapokIsland_EventScript_TryMoveDayCareMan::
	goto_if_set FLAG_PENDING_DAYCARE_EGG, KapokIsland_EventScript_TryMoveDayCareMan_2
KapokIsland_EventScript_TryMoveDayCareMan_1:
	end

KapokIsland_EventScript_TryMoveDayCareMan_2:
	applymovement 1, KapokIsland_Movement_MoveDayCareMan
	goto KapokIsland_EventScript_TryMoveDayCareMan_1


KapokIsland_EventScript_FlyGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_KAPOK_ISLAND_FLY_GUY, KapokIsland_EventScript_FlyGuy_2
	msgbox KapokIsland_EventScript_FlyGuy_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq KapokIsland_EventScript_FlyGuy_5
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DETECT_NO_MUSIC, TRAINER_LESTER_2, 0, KapokIsland_EventScript_FlyGuy_Text_2, KapokIsland_EventScript_FlyGuy_Text_3, KapokIsland_EventScript_FlyGuy_PostBattle
	release
	end

KapokIsland_EventScript_FlyGuy_2:
	msgbox KapokIsland_EventScript_FlyGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_EventScript_FlyGuy_8
	msgbox AridIsland_Text_FlyGuyComeBack, MSGBOX_DEFAULT
KapokIsland_EventScript_FlyGuy_7:
	release
	end

KapokIsland_EventScript_FlyGuy_5:
	msgbox AridIsland_Text_FlyGuyIllBeHere, MSGBOX_DEFAULT
	release
	end

KapokIsland_EventScript_FlyGuy_8:
	setvar VAR_0x800A, LAST_TALKED_TO_FLYING_TAXI
	special FieldLoadFlyMap
	goto KapokIsland_EventScript_FlyGuy_7


KapokIsland_EventScript_FlyGuy_PostBattle::
	setflag FLAG_DEFEATED_KAPOK_ISLAND_FLY_GUY
	msgbox KapokIsland_EventScript_FlyGuy_PostBattle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_EventScript_FlyGuy_PostBattle_2
	msgbox AridIsland_Text_FlyGuyComeBack, MSGBOX_DEFAULT
KapokIsland_EventScript_FlyGuy_PostBattle_1:
	release
	end

KapokIsland_EventScript_FlyGuy_PostBattle_2:
	setvar VAR_0x800A, LAST_TALKED_TO_FLYING_TAXI
	special FieldLoadFlyMap
	goto KapokIsland_EventScript_FlyGuy_PostBattle_1


KapokIsland_EventScript_DefenseCurlTutor::
	lock
	faceplayer
	msgbox KapokIsland_EventScript_DefenseCurlTutor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_EventScript_DefenseCurlTutor_1
	goto KapokIsland_EventScript_DefenseCurlDeclined
	return

KapokIsland_EventScript_DefenseCurlTutor_1:
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_EventScript_DefenseCurlTutor_4
	msgbox KapokIsland_EventScript_DefenseCurlTutor_Text_3, MSGBOX_DEFAULT
	release
	end

KapokIsland_EventScript_DefenseCurlTutor_4:
	msgbox KapokIsland_EventScript_DefenseCurlTutor_Text_1, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_DEFENSE_CURL
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq KapokIsland_EventScript_DefenseCurlTutor_8
KapokIsland_EventScript_DefenseCurlTutor_7:
	msgbox KapokIsland_EventScript_DefenseCurlTutor_Text_2, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	release
	end

KapokIsland_EventScript_DefenseCurlTutor_8:
	goto KapokIsland_EventScript_DefenseCurlDeclined
	goto KapokIsland_EventScript_DefenseCurlTutor_7


KapokIsland_EventScript_DefenseCurlDeclined::
	msgbox KapokIsland_EventScript_DefenseCurlDeclined_Text_0, MSGBOX_DEFAULT
	release
	end


KapokIsland_EventScript_RolloutTutor::
	lock
	faceplayer
	msgbox KapokIsland_EventScript_RolloutTutor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_EventScript_RolloutTutor_1
	goto KapokIsland_EventScript_RolloutDeclined
	return

KapokIsland_EventScript_RolloutTutor_1:
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, 0
	goto_if_ne KapokIsland_EventScript_RolloutTutor_4
	msgbox KapokIsland_EventScript_RolloutTutor_Text_1, MSGBOX_DEFAULT
	release
	end

KapokIsland_EventScript_RolloutTutor_4:
	msgbox KapokIsland_EventScript_DefenseCurlTutor_Text_1, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ROLLOUT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq KapokIsland_EventScript_RolloutTutor_8
KapokIsland_EventScript_RolloutTutor_7:
	msgbox KapokIsland_EventScript_DefenseCurlTutor_Text_2, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	release
	end

KapokIsland_EventScript_RolloutTutor_8:
	goto KapokIsland_EventScript_RolloutDeclined
	goto KapokIsland_EventScript_RolloutTutor_7


KapokIsland_EventScript_RolloutDeclined::
	msgbox KapokIsland_EventScript_RolloutDeclined_Text_0, MSGBOX_DEFAULT
	release
	end


KapokIsland_EventScript_ItemFinderMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ITEMFINDER, KapokIsland_EventScript_ItemFinderMan_2
	msgbox KapokIsland_EventScript_ItemFinderMan_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_ITEMFINDER
	setflag FLAG_RECEIVED_ITEMFINDER
	msgbox KapokIsland_EventScript_ItemFinderMan_Text_2, MSGBOX_DEFAULT
KapokIsland_EventScript_ItemFinderMan_1:
	release
	end

KapokIsland_EventScript_ItemFinderMan_2:
	msgbox KapokIsland_EventScript_ItemFinderMan_Text_0, MSGBOX_DEFAULT
	goto KapokIsland_EventScript_ItemFinderMan_1


KapokIsland_EventScript_Scientist::
	msgbox KapokIsland_EventScript_Scientist_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_Boy::
	msgbox KapokIsland_EventScript_Boy_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_Mom::
	msgbox KapokIsland_EventScript_Mom_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_PalmTreeGirl::
	msgbox KapokIsland_EventScript_PalmTreeGirl_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_PalmTreeBoy::
	msgbox KapokIsland_EventScript_PalmTreeBoy_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_Woman1::
	msgbox KapokIsland_EventScript_Woman1_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_Woman2::
	msgbox KapokIsland_EventScript_Woman2_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_Tuber::
	msgbox KapokIsland_EventScript_Tuber_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_Swimmer::
	msgbox KapokIsland_EventScript_Swimmer_Text_0, MSGBOX_NPC
	return


KapokIsland_EventScript_CitySign::
	msgbox KapokIsland_EventScript_CitySign_Text_0, MSGBOX_SIGN
	return


KapokIsland_EventScript_MoveTutorSign::
	msgbox KapokIsland_EventScript_MoveTutorSign_Text_0, MSGBOX_SIGN
	return


KapokIsland_EventScript_KapokJungleSign::
	msgbox KapokIsland_EventScript_KapokJungleSign_Text_0, MSGBOX_SIGN
	return


KapokIsland_EventScript_DayCareSign::
	msgbox KapokIsland_EventScript_DayCareSign_Text_0, MSGBOX_SIGN
	return


KapokIsland_Movement_MoveDayCareMan:
	face_down
	step_end

KapokIsland_EventScript_FlyGuy_Text_0:
	.string "Hey, it's you again!\p"
	.string "My birds can take you to any island\n"
	.string "you've visited before.\p"
	.string "What do you say, want a lift?$"

KapokIsland_EventScript_FlyGuy_Text_1:
	.string "Oh, it's you again!\p"
	.string "Remember me?\n"
	.string "The bird guy?\p"
	.string "Funny how we keep running into each\n"
	.string "other.\p"
	.string "My birds have been itching for a\n"
	.string "rematch with you!\p"
	.string "What do you say? Want to battle?$"

KapokIsland_EventScript_FlyGuy_Text_2:
	.string "Let's do it!$"

KapokIsland_EventScript_FlyGuy_Text_3:
	.string "Amazing!$"

KapokIsland_EventScript_FlyGuy_PostBattle_Text_0:
	.string "Wow! You never fail to impress.\n"
	.string "My birds are all pumped up now!\p"
	.string "We could take you on another ride, if\n"
	.string "you need it.\p"
	.string "What do you say, want a lift?$"

KapokIsland_EventScript_DefenseCurlTutor_Text_0:
	.string "Curl up! Roll out! The ultimate strategy\n"
	.string "that cannot be beat!\p"
	.string "Would you like me to teach DEFENSE CURL\n"
	.string "to your POKéMON? I'll do it for one\l"
	.string "HEART SCALE!$"

KapokIsland_EventScript_DefenseCurlTutor_Text_1:
	.string "Okay! Which one should learn it?$"

KapokIsland_EventScript_DefenseCurlTutor_Text_2:
	.string "{PLAYER} handed over one HEART\n"
	.string "SCALE.$"

KapokIsland_EventScript_DefenseCurlTutor_Text_3:
	.string "You don't even have a single HEART\n"
	.string "SCALE? Uh oh!$"

KapokIsland_EventScript_DefenseCurlDeclined_Text_0:
	.string "Aw… I guess I'll just curl up here, then…$"

KapokIsland_EventScript_RolloutTutor_Text_0:
	.string "Curl up! Roll out! Do it, and your power\n"
	.string "will double just like that!\p"
	.string "Would you like me to teach ROLLOUT to\n"
	.string "your POKéMON? I'll do it for one HEART\l"
	.string "SCALE!$"

KapokIsland_EventScript_RolloutTutor_Text_1:
	.string "Hey, you don't have a HEART SCALE!\n"
	.string "That's too bad.$"

KapokIsland_EventScript_RolloutDeclined_Text_0:
	.string "Aw… I'll just roll away, then…$"

KapokIsland_EventScript_ItemFinderMan_Text_0:
	.string "Beaches like this are chock full of\n"
	.string "hidden treasure. I trust you'll have no\l"
	.string "problem sniffing it out with your\l"
	.string "ITEMFINDER!$"

KapokIsland_EventScript_ItemFinderMan_Text_1:
	.string "Fufufu… do you ever think about all the\n"
	.string "stuff that gets lost on beaches like\l"
	.string "this? All the things that wash up on\l"
	.string "shore?\p"
	.string "I used to be quite the treasure hunter\n"
	.string "back in my day.\l"
	.string "You'd be surprised how much treasure\l"
	.string "you can find just laying around, if\l"
	.string "you're thorough.\p"
	.string "You look to be a bit of a treasure\n"
	.string "hunter yourself. Perhaps you'd like to\l"
	.string "be my apprentice?\l"
	.string "Hohoho! Just a little joke.\p"
	.string "Listen to me ramble on! For keeping me\n"
	.string "company, I think you've earned this.$"

KapokIsland_EventScript_ItemFinderMan_Text_2:
	.string "Good luck on your treasure hunt! Leave\n"
	.string "nothing to waste, I always say.$"

KapokIsland_EventScript_Scientist_Text_0:
	.string "KAPOK JUNGLE is a hotbed of\n"
	.string "biodiversity. You'll find lots of\l"
	.string "wildlife researchers doing field work in\l"
	.string "there.$"

KapokIsland_EventScript_Boy_Text_0:
	.string "This island is the most populated in the\n"
	.string "REGIUS ARCHIPELAGO.\l"
	.string "It's also the only one with a modern\l"
	.string "POKéMON CENTER and POKéMART.$"

KapokIsland_EventScript_Mom_Text_0:
	.string "I'm letting my kids run free while I\n"
	.string "relax.\l"
	.string "Make sure they don't get in any trouble,\l"
	.string "okay?$"

KapokIsland_EventScript_PalmTreeGirl_Text_0:
	.string "Yum! If you shake trees, you might get\n"
	.string "BERRIES!$"

KapokIsland_EventScript_PalmTreeBoy_Text_0:
	.string "Waaah! A POKéMON fell out of the tree!$"

KapokIsland_EventScript_Woman1_Text_0:
	.string "Would you mind not blocking our sun?\p"
	.string "…Actually, I kinda like the shade.\n"
	.string "Can you stand there all day for me?$"

KapokIsland_EventScript_Woman2_Text_0:
	.string "We're on vacation. We couldn't have\n"
	.string "picked a better beach!$"

KapokIsland_EventScript_Tuber_Text_0:
	.string "I want to see that POKéMON! The big,\n"
	.string "lumpy one with the grassy back… Do you\l"
	.string "know what I'm talking about?$"

KapokIsland_EventScript_Swimmer_Text_0:
	.string "Eep! A POKéMON brushed past my feet!$"

KapokIsland_EventScript_CitySign_Text_0:
	.string "KAPOK ISLAND\n"
	.string "A verdant slice of paradise.$"

KapokIsland_EventScript_MoveTutorSign_Text_0:
	.string "POKéMON MOVES SOCIETY\n"
	.string "We know moves better than anyone!$"

KapokIsland_EventScript_KapokJungleSign_Text_0:
	.string "KAPOK JUNGLE ahead.$"

KapokIsland_EventScript_DayCareSign_Text_0:
	.string "POKéMON DAY CARE$"
