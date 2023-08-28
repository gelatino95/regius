

static const u16 sKapokIsland_RockSmashItems[] =
{
	ITEM_SITRUS_BERRY,	// 30%
	ITEM_LEPPA_BERRY,	// 30%
	ITEM_CHERI_BERRY,	// 10%
	ITEM_PECHA_BERRY,	// 10%
	ITEM_CHESTO_BERRY,	// 5%
	ITEM_RAWST_BERRY,	// 5%
	ITEM_ASPEAR_BERRY,	// 4%
	ITEM_PERSIM_BERRY,	// 4%
	ITEM_LUM_BERRY,		// 1%
	ITEM_LEFTOVERS,		// 1%
};

static const u16 sKapokJungle_RockSmashItems[] =
{
	ITEM_GREEN_SHARD,	// 30%
	ITEM_HEART_SCALE,	// 30%
	ITEM_PEARL,			// 10%
	ITEM_STARDUST,		// 10%
	ITEM_LEAF_STONE,	// 5%
	ITEM_HARD_STONE,	// 5%
	ITEM_OLD_AMBER,		// 4%
	ITEM_CLAW_FOSSIL,	// 4%
	ITEM_NUGGET,		// 1%
	ITEM_STAR_PIECE,	// 1%
};

static const u16 sAridRuins_RockSmashItems[] =
{
	ITEM_YELLOW_SHARD,	// 30%
	ITEM_HARD_STONE,	// 30%
	ITEM_HEART_SCALE,	// 10%
	ITEM_STARDUST,		// 10%
	ITEM_SUN_STONE,		// 5%
	ITEM_ANCIENT_SLAB,	// 5%
	ITEM_DOME_FOSSIL,	// 4%
	ITEM_HELIX_FOSSIL,	// 4%
	ITEM_NUGGET,		// 1%
	ITEM_STAR_PIECE,	// 1%
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
        .mapGroup = MAP_GROUP(ARID_RUINS),
        .mapNum = MAP_NUM(ARID_RUINS),
        .itemTable = sAridRuins_RockSmashItems,
    },
	{
        .mapGroup = MAP_GROUP(UNDEFINED),
        .mapNum = MAP_NUM(UNDEFINED),
        .itemTable = NULL,
    },
};