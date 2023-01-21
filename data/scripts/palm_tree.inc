@ Interact with palm tree
EventScript_PalmTree::
	lockall
	msgbox Text_WantToShakeTree, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelShakeTree
	closemessage
	playse SE_M_POISON_POWDER
	waitse
	playse SE_M_POISON_POWDER
	waitse
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndShakeTree
	waitstate
	releaseall
	end
	
EventScript_CancelShakeTree::
	closemessage
	releaseall
	end
	
EventScript_EndShakeTree::
	msgbox Text_NothingHappened MSGBOX_DEFAULT
	releaseall
	end
	
Text_WantToShakeTree:
	.string "A tall palm tree.\n"
	.string "Want to shake it?$"
	
Text_NothingHappened:
	.string "Nothing happened…$"
