#include "global.h"
#include "wild_encounter.h"
#include "pokemon.h"
#include "metatile_behavior.h"
#include "fieldmap.h"
#include "random.h"
#include "field_player_avatar.h"
#include "event_data.h"
#include "safari_zone.h"
#include "overworld.h"
#include "pokeblock.h"
#include "battle_setup.h"
#include "roamer.h"
#include "tv.h"
#include "link.h"
#include "script.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "constants/abilities.h"
#include "constants/game_stat.h"
#include "constants/items.h"
#include "constants/layouts.h"
#include "constants/weather.h"
#include "rock_smash_item.h"
#include "data/rock_smash_items.h"

static u16 GetCurrentMapItemTableId(void)
{
	u16 i;
	
	for (i = 0; ; i++)
    {
		if (gRockSmashItemHeaders[i].mapGroup == MAP_GROUP(UNDEFINED))
			break;
		
		if (gRockSmashItemHeaders[i].mapGroup == gSaveBlock1Ptr->location.mapGroup &&
            gRockSmashItemHeaders[i].mapNum == gSaveBlock1Ptr->location.mapNum)
			return i;
	}
	return HEADER_NONE;
}

static u8 ChooseRockSmashItemIndex(void)
{
	u8 rand = Random() % ITEM_CHANCE_TOTAL;
	
	if (rand < ITEM_CHANCE_SLOT_0)
        return 0;
	else if (rand >= ITEM_CHANCE_SLOT_0 && rand < ITEM_CHANCE_SLOT_1)
        return 1;
	else if (rand >= ITEM_CHANCE_SLOT_1 && rand < ITEM_CHANCE_SLOT_2)
        return 2;
	else if (rand >= ITEM_CHANCE_SLOT_2 && rand < ITEM_CHANCE_SLOT_3)
        return 3;
	else if (rand >= ITEM_CHANCE_SLOT_3 && rand < ITEM_CHANCE_SLOT_4)
        return 4;
	else if (rand >= ITEM_CHANCE_SLOT_4 && rand < ITEM_CHANCE_SLOT_5)
        return 5;
	else if (rand >= ITEM_CHANCE_SLOT_5 && rand < ITEM_CHANCE_SLOT_6)
        return 6;
	else if (rand >= ITEM_CHANCE_SLOT_6 && rand < ITEM_CHANCE_SLOT_7)
        return 7;
	else if (rand >= ITEM_CHANCE_SLOT_7 && rand < ITEM_CHANCE_SLOT_8)
        return 8;
	else
		return 9;
}

void SetRockSmashItem (void)
{
	u16 tableId = GetCurrentMapItemTableId();
	u16 item;
	u8 itemIndex;
	
	if (tableId != HEADER_NONE)
	{
		const u16 *currentMapItemTable = gRockSmashItemHeaders[tableId].itemTable;
		
		if (currentMapItemTable == NULL)
		{
			gSpecialVar_Result = FALSE;
		}
		else
		{
			itemIndex = ChooseRockSmashItemIndex();
			item = currentMapItemTable[itemIndex];
			
			VarSet(VAR_0x8000, item);
			VarSet(VAR_0x8001, 1);
			gSpecialVar_Result = TRUE;
		}
	}
	else
		gSpecialVar_Result = FALSE;
}
