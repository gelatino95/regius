

static const u16 sKapokIsland_RockSmashItems[] =
{
	ITEM_SITRUS_BERRY,
	ITEM_LEPPA_BERRY,
	ITEM_CHERI_BERRY,
	ITEM_PECHA_BERRY,
	ITEM_CHESTO_BERRY,
	ITEM_RAWST_BERRY,
	ITEM_ASPEAR_BERRY,
	ITEM_PERSIM_BERRY,
	ITEM_LUM_BERRY,
	ITEM_LEFTOVERS,
};

static const u16 sKapokJungle_RockSmashItems[] =
{
	ITEM_GREEN_SHARD,
	ITEM_HEART_SCALE,
	ITEM_PEARL,
	ITEM_STARDUST,
	ITEM_LEAF_STONE,
	ITEM_HARD_STONE,
	ITEM_OLD_AMBER,
	ITEM_CLAW_FOSSIL,
	ITEM_NUGGET,
	ITEM_STAR_PIECE,
};

const struct RockSmashItemHeader gRockSmashItemHeaders[] =
{
	{
        .mapGroup = MAP_GROUP(KAPOK_ISLAND),
        .mapNum = MAP_NUM(KAPOK_ISLAND),
        .itemTable = sKapokIsland_RockSmashItems,
    },
	{
        .mapGroup = MAP_GROUP(KAPOK_JUNGLE),
        .mapNum = MAP_NUM(KAPOK_JUNGLE),
        .itemTable = sKapokJungle_RockSmashItems,
    },
	{
        .mapGroup = MAP_GROUP(UNDEFINED),
        .mapNum = MAP_NUM(UNDEFINED),
        .itemTable = NULL,
    },
};