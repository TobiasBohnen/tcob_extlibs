MESSAGE(STATUS "----------------")
MESSAGE(STATUS "entering extlibs")
MESSAGE(STATUS "----------------")

set(TCOB_EXTLIBS_SRCFILES "")
set(TCOB_EXTLIBS_DEFINES "")
set(TCOB_EXTLIBS_INCDIRS "")
set(TCOB_EXTLIBS_LIBS "")

# ##########################################################################
set(CMAKE_DISABLE_FIND_PACKAGE_ZLIB ON)
set(CMAKE_DISABLE_FIND_PACKAGE_PNG ON)
set(CMAKE_DISABLE_FIND_PACKAGE_JPEG ON)
set(CMAKE_DISABLE_FIND_PACKAGE_TIFF ON)
set(CMAKE_DISABLE_FIND_PACKAGE_GIF ON)

# ##########################################################################
include(FetchContent)

# ##########################################################################
# #required
# physfs @3.2.0
MESSAGE(STATUS "physfs:")

FetchContent_Declare(
  physfs
  GIT_REPOSITORY https://github.com/icculus/physfs
  GIT_TAG release-3.2.0
)

if(NOT BUILD_SHARED_LIBS)
  set(PHYSFS_BUILD_STATIC ON CACHE BOOL "" FORCE)
  set(PHYSFS_BUILD_SHARED OFF CACHE BOOL "" FORCE)
endif()

set(PHYSFS_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(PHYSFS_BUILD_TEST OFF CACHE BOOL "" FORCE)
set(PHYSFS_DISABLE_INSTALL ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(physfs)

if(TARGET physfs-static)
  target_compile_options(physfs-static PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/w>
    $<$<CXX_COMPILER_ID:Clang>:-Wno-everything>
    $<$<CXX_COMPILER_ID:GNU>:-w>
  )
endif()

list(APPEND TCOB_EXTLIBS_INCDIRS ${physfs_SOURCE_DIR}/src/)
list(APPEND TCOB_EXTLIBS_DEFINES PHYSFS_STATIC)
list(APPEND TCOB_EXTLIBS_LIBS physfs-static)

# mojoal
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/AL/mojoal.c)
list(APPEND TCOB_EXTLIBS_DEFINES AL_LIBTYPE_STATIC)

# miniz @2.2.0
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/miniz/miniz.c)
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/miniz/)

# dr_libs @dr_flac: 0.12.39 @dr_mp3: 0.6.34 @dr_wav: 0.13.7
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/dr_libs/dr_libs.c)

# stb @stb_vorbis: 1.22
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/stb/stb_vorbis.c)
list(APPEND TCOB_EXTLIBS_DEFINES STB_VORBIS_NO_PUSHDATA_API)

# SDL2 @2.24.0
MESSAGE(STATUS "SDL2:")

FetchContent_Declare(
  SDL2
  GIT_REPOSITORY https://github.com/libsdl-org/SDL
  GIT_TAG release-2.26.1
)

set(SDL_RENDER OFF CACHE BOOL "" FORCE)
set(SDL_SENSOR OFF CACHE BOOL "" FORCE)
set(SDL_POWER OFF CACHE BOOL "" FORCE)
set(SDL_FILESYSTEM OFF CACHE BOOL "" FORCE)
set(SDL_LIBC ON CACHE BOOL "" FORCE)
set(SDL2_DISABLE_SDL2MAIN ON CACHE BOOL "" FORCE)
set(SDL2_DISABLE_INSTALL ON CACHE BOOL "" FORCE)
set(SDL2_DISABLE_UNINSTALL ON CACHE BOOL "" FORCE)

if(NOT BUILD_SHARED_LIBS)
  set(SDL_SHARED_ENABLED_BY_DEFAULT OFF CACHE BOOL "" FORCE)
  set(SDL_SHARED OFF CACHE BOOL "" FORCE)
  set(SDL_STATIC ON CACHE BOOL "" FORCE)
endif()

FetchContent_MakeAvailable(SDL2)

if(TARGET SDL2-static)
  target_compile_options(SDL2-static PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/w>
    $<$<CXX_COMPILER_ID:Clang>:-Wno-everything>
    $<$<CXX_COMPILER_ID:GNU>:-w>
  )
endif()

list(APPEND TCOB_EXTLIBS_INCDIRS ${SDL2_SOURCE_DIR}/include/)
list(APPEND TCOB_EXTLIBS_DEFINES SDL_MAIN_HANDLED)
list(APPEND TCOB_EXTLIBS_LIBS SDL2-static)

# stb @stb_truetype: 1.26
if(TCOB_TTF_BACKEND_STB)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/stb/stb_truetype.c)
endif()

# libschrift @0.10.2
if(TCOB_TTF_BACKEND_LIBSCHRIFT)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/libschrift/schrift.c)
endif()

# #optional
# Lua @5.4.4
if(TCOB_ENABLE_LUA)
  file(GLOB LUA_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/lua/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LUA_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/lua/)
endif()

# wren @0.4.0
if(TCOB_ENABLE_WREN)
  file(GLOB WREN_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/vm/*.c ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/optional/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${WREN_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/vm/
    ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/optional/
  )
endif()

# box2d @v2.4.1
if(TCOB_ENABLE_BOX2D)
  file(GLOB_RECURSE BOX2D_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/box2d/src/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${BOX2D_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/box2d/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/box2d/src/
  )
endif()

# Chipmunk2D @7.0.3
if(TCOB_ENABLE_CHIPMUNK2D)
  file(GLOB_RECURSE CHIPMUNK2D_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/chipmunk2d/src/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CHIPMUNK2D_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/chipmunk2d/include/)
  list(APPEND TCOB_EXTLIBS_DEFINES CP_USE_DOUBLES=0)
endif()

# glad
if(TCOB_RENDER_BACKEND_OPENGL45)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/glad/gl45.c)

  if(MSVC AND TCOB_RENDER_BACKEND_IS_OPENGL)
    list(APPEND TCOB_EXTLIBS_LIBS opengl32)
  endif()
endif()

# spng @v0.7.2
if(TCOB_ENABLE_SPNG)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/spng/spng.c)
  list(APPEND TCOB_EXTLIBS_DEFINES SPNG_USE_MINIZ SPNG_STATIC)
endif()

# TinySoundFont @e763bd93badbd390945a3d0ee25d75e54e4fb8eb
if(TCOB_ENABLE_TINYSOUNDFONT)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/TinySoundFont/TinySoundFont.c)
endif()

# libxmp-lite @4.5.0
if(TCOB_ENABLE_LIBXMP)
  file(GLOB_RECURSE LIBXMP_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/src/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LIBXMP_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/include/libxmp-lite/
    ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/src/
  )
  list(APPEND TCOB_EXTLIBS_DEFINES LIBXMP_CORE_PLAYER LIBXMP_NO_DEPACKERS)
endif()

# cjson @1.7.15
if(TCOB_ENABLE_CJSON)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/cJSON/cJSON.c)
  list(APPEND TCOB_EXTLIBS_DEFINES CJSON_HIDE_SYMBOLS)
endif()

# sqlite @3.39.4
if(TCOB_ENABLE_SQLITE)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/sqlite3/sqlite3.c)
endif()

# WebP @v1.2.4
if(TCOB_ENABLE_WEBP)
  MESSAGE(STATUS "WebP:")

  FetchContent_Declare(
    webp
    GIT_REPOSITORY https://chromium.googlesource.com/webm/libwebp
    GIT_TAG v1.2.4
  )

  set(WEBP_BUILD_ANIM_UTILS OFF CACHE BOOL "Build animation utilities." FORCE)
  set(WEBP_BUILD_CWEBP OFF CACHE BOOL "Build the cwebp command line tool." FORCE)
  set(WEBP_BUILD_DWEBP OFF CACHE BOOL "Build the dwebp command line tool." FORCE)
  set(WEBP_BUILD_GIF2WEBP OFF CACHE BOOL "Build the gif2webp conversion tool." FORCE)
  set(WEBP_BUILD_IMG2WEBP OFF CACHE BOOL "Build the img2webp animation tool." FORCE)
  set(WEBP_BUILD_VWEBP OFF CACHE BOOL "Build the vwebp viewer tool." FORCE)
  set(WEBP_BUILD_WEBPINFO OFF CACHE BOOL "Build the webpinfo command line tool." FORCE)
  set(WEBP_BUILD_WEBPMUX OFF CACHE BOOL "Build the webpmux command line tool." FORCE)
  set(WEBP_BUILD_EXTRAS OFF CACHE BOOL "Build extras." FORCE)
  set(WEBP_ENABLE_SIMD ON CACHE BOOL "Enable any SIMD optimization." FORCE)
  set(WEBP_NEAR_LOSSLESS ON CACHE BOOL "Enable near-lossless encoding" FORCE)

  if(NOT BUILD_SHARED_LIBS)
    set(WEBP_LINK_STATIC ON CACHE BOOL "" FORCE)
  endif()

  FetchContent_MakeAvailable(webp)

  list(APPEND TCOB_EXTLIBS_INCDIRS ${webp_SOURCE_DIR}/src/)
  list(APPEND TCOB_EXTLIBS_LIBS webpdemux)
endif()

# litehtml
if(TCOB_ENABLE_LITEHTML)
  file(GLOB_RECURSE LITEHTML_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/litehtml/src/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LITEHTML_SRC_FILES})
  file(GLOB_RECURSE GUMBO_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/litehtml/src/gumbo/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${GUMBO_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/litehtml/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/litehtml/include/litehtml/
    ${CMAKE_CURRENT_SOURCE_DIR}/litehtml/src/gumbo/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/litehtml/src/gumbo/include/gumbo/
  )

  if(MSVC)
    list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/litehtml/src/gumbo/visualc/include/)
  endif()

  list(APPEND TCOB_EXTLIBS_DEFINES LITEHTML_UTF8)
endif()

# ##########################################################################
add_library(tcob_extlibs STATIC)

target_sources(tcob_extlibs PRIVATE ${TCOB_EXTLIBS_SRCFILES})
target_compile_definitions(tcob_extlibs PUBLIC ${TCOB_EXTLIBS_DEFINES})
target_include_directories(tcob_extlibs SYSTEM PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${TCOB_EXTLIBS_INCDIRS})
target_link_libraries(tcob_extlibs PRIVATE ${TCOB_EXTLIBS_LIBS})
target_compile_options(tcob_extlibs PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/w>
  $<$<CXX_COMPILER_ID:Clang>:-Wno-everything>
  $<$<CXX_COMPILER_ID:GNU>:-w>
)

if(MSVC)
  set_target_properties(tcob_extlibs PROPERTIES
    DEBUG_POSTFIX "_d"
  )
endif()

MESSAGE(STATUS "----------------")
MESSAGE(STATUS "exiting extlibs")
MESSAGE(STATUS "----------------")
