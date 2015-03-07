if (NOT PLGIN_BUILD_MODE)
    set (PLGIN_BUILD_MODE STATIC)
endif ()

include(pile_support)
pileInclude (PlgIn)
plginInit(${PLGIN_BUILD_MODE})
