
# enable/disable cmake debug messages related to this pile
set (PLGIN_DEBUG_MSG ON)

# make sure support code is present; no harm
# in including it twice; the user, however, should have used
# pileInclude() from pile_support.cmake module.
include(pile_support)

# initialize this module
macro    (plginInit
          ref_cnt_use_mode)

    # default name
    if (NOT PLGIN_INIT_NAME)
        set(PLGIN_INIT_NAME "PlgIn")
    endif ()

    # compose the list of headers and sources
    set(PLGIN_HEADERS
        "plgin.h")
    set(PLGIN_SOURCES
        "plgin.cc")

    pileSetSources(
        "${PLGIN_INIT_NAME}"
        "${PLGIN_HEADERS}"
        "${PLGIN_SOURCES}")

    pileSetCommon(
        "${PLGIN_INIT_NAME}"
        "0;0;1;d"
        "ON"
        "${ref_cnt_use_mode}"
        ""
        "category1"
        "tag1;tag2")

endmacro ()
