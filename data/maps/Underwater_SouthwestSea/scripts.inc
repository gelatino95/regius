Underwater_SouthwestSea_MapScripts::
	.byte 0


Underwater_SouthwestSea_EventScript_Diver::
	msgbox Underwater_SouthwestSea_EventScript_Diver_Text_0, MSGBOX_NPC
	end


Underwater_SouthwestSea_EventScript_ItemDeepSeaTooth::
	finditem ITEM_DEEP_SEA_TOOTH
	end


Underwater_SouthwestSea_EventScript_ItemTM26::
	finditem ITEM_TM26
	end


Underwater_SouthwestSea_EventScript_Diver_Text_0:
	.string "Be careful in this cave system.\p"
	.string "It's like a maze, and there aren't many\n"
	.string "places to surface.$"
