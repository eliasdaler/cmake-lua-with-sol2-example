add_library(lua
  lua/lparser.c
  lua/lfunc.c
  lua/loslib.c
  lua/lutf8lib.c
  lua/lmathlib.c
  lua/lobject.c
  lua/linit.c
  lua/lopcodes.c
  lua/lstate.c
  lua/ltm.c
  lua/lzio.c
  lua/lctype.c
  lua/lstrlib.c
  lua/lundump.c
  lua/ltablib.c
  lua/lcode.c
  lua/ldo.c
  lua/lstring.c
  lua/lapi.c
  lua/ltable.c
  lua/llex.c
  lua/lmem.c
  lua/lgc.c
  lua/lbaselib.c
  lua/ldblib.c
  lua/lcorolib.c
  lua/loadlib.c
  lua/lauxlib.c
  lua/lua.c
  lua/ldebug.c
  lua/lvm.c
  lua/ltests.c
  lua/ldump.c
  lua/liolib.c
)
add_library(lua::lua ALIAS lua)

if (WIN32)
  target_compile_definitions(lua PRIVATE LUA_USE_WINDOWS)
endif()

target_include_directories(lua PUBLIC lua)
if (UNIX)
  target_compile_definitions(lua PRIVATE LUA_USE_LINUX)
  target_link_libraries(lua PRIVATE dl)
endif()

add_subdirectory(sol2)
