# hid_listenerより先に呼ばせるため、zephyr_libraryではなくappに追加する
if(CONFIG_SHIELD_ROBA_R)
  target_sources(app PRIVATE ${CMAKE_CURRENT_LIST_DIR}/src/implicit_mods_listener.c)
endif()
