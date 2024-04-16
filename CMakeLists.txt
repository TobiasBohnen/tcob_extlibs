MESSAGE(STATUS "----------------")
MESSAGE(STATUS "entering extlibs")
MESSAGE(STATUS "----------------")

set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE)

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
tcob_mark_all_as_advanced("^PHYSFS_")

if(TARGET physfs-static)
  tcob_disable_warnings(physfs-static)
endif()

list(APPEND TCOB_EXTLIBS_INCDIRS ${physfs_SOURCE_DIR}/src/)
list(APPEND TCOB_EXTLIBS_DEFINES PHYSFS_STATIC)
list(APPEND TCOB_EXTLIBS_LIBS physfs-static)

# mojoal
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/AL/mojoal.c)
list(APPEND TCOB_EXTLIBS_DEFINES AL_LIBTYPE_STATIC)

# miniz @3.0.2
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/miniz/miniz.c)
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/miniz/)

# utfcpp @4.0.2
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/utf8/)

# SDL2 @2.30.2
MESSAGE(STATUS "SDL2:")

FetchContent_Declare(
  SDL2
  GIT_REPOSITORY https://github.com/libsdl-org/SDL
  GIT_TAG release-2.30.2
)

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
tcob_mark_all_as_advanced("^SDL2_")
tcob_mark_all_as_advanced("^SDL_")

if(TARGET SDL2-static)
  tcob_disable_warnings(SDL2-static)
endif()

list(APPEND TCOB_EXTLIBS_INCDIRS ${SDL2_SOURCE_DIR}/include/)
list(APPEND TCOB_EXTLIBS_DEFINES SDL_MAIN_HANDLED)
list(APPEND TCOB_EXTLIBS_LIBS SDL2-static)

# FreeType @2.13.2
MESSAGE(STATUS "FreeType:")

FetchContent_Declare(
  freetype
  GIT_REPOSITORY https://github.com/freetype/freetype
  GIT_TAG VER-2-13-2
)

set(FT_DISABLE_ZLIB ON CACHE BOOL "" FORCE)
set(FT_DISABLE_BZIP2 ON CACHE BOOL "" FORCE)
set(FT_DISABLE_PNG ON CACHE BOOL "" FORCE)
set(FT_DISABLE_HARFBUZZ ON CACHE BOOL "" FORCE)
set(FT_DISABLE_BROTLI ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(freetype)
tcob_mark_all_as_advanced("^FT_")

list(APPEND TCOB_EXTLIBS_INCDIRS ${freetype_SOURCE_DIR}/include/)
list(APPEND TCOB_EXTLIBS_LIBS freetype)

# ##########################################################################
# #optional

# libogg @1.3.5
if(TCOB_ENABLE_FILETYPES_GFX_THEORA OR TCOB_ENABLE_FILETYPES_AUDIO_OPUS OR TCOB_ENABLE_FILETYPES_AUDIO_VORBIS)
  file(GLOB_RECURSE OGG_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/ogg/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${OGG_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/ogg/)
endif()

# libtheora @1.1.1
if(TCOB_ENABLE_FILETYPES_GFX_THEORA)
  file(GLOB_RECURSE OGGTHEORA_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/theora/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${OGGTHEORA_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/theora/)
endif()

# opus @libopus: 1.4 @opusfile: 0.12 @libopusenc: 0.2.1
if(TCOB_ENABLE_FILETYPES_AUDIO_OPUS)
  MESSAGE(STATUS "libopus:")

  FetchContent_Declare(
    libopus
    GIT_REPOSITORY https://github.com/xiph/opus
    GIT_TAG v1.4
  )

  set(OPUS_BUILD_TESTING OFF CACHE BOOL "" FORCE)
  set(OPUS_INSTALL_PKG_CONFIG_MODULE OFF CACHE BOOL "" FORCE)
  set(OPUS_INSTALL_CMAKE_CONFIG_MODULE OFF CACHE BOOL "" FORCE)

  FetchContent_MakeAvailable(libopus)
  tcob_mark_all_as_advanced("^OPUS_")

  tcob_disable_warnings(opus)

  list(APPEND TCOB_EXTLIBS_INCDIRS ${libopus_SOURCE_DIR}/include/)
  list(APPEND TCOB_EXTLIBS_LIBS opus)

  # libopusenc
  file(GLOB_RECURSE OPUSENC_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/libopusenc/src/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${OPUSENC_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/libopusenc/src/)
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/libopusenc/include/)
  list(APPEND TCOB_EXTLIBS_DEFINES OUTSIDE_SPEEX RANDOM_PREFIX=tcob)

  # opusfile
  file(GLOB_RECURSE OGGOPUS_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/opusfile/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${OGGOPUS_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/opusfile/)
endif()

# vorbis @1.3.7
if(TCOB_ENABLE_FILETYPES_AUDIO_VORBIS)
  file(GLOB_RECURSE VORBIS_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/vorbis/src/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${VORBIS_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/vorbis/src)
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/XiphOrg/vorbis/include)
endif()

# dr_libs @dr_flac: 0.12.41 @dr_mp3: 0.6.37 @dr_wav: 0.13.12
if(TCOB_ENABLE_FILETYPES_AUDIO_DRLIBS)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/dr_libs/dr_libs.c)
endif()

# Lua @5.4.6
if(TCOB_ENABLE_ADDON_SCRIPTING_LUA)
  file(GLOB LUA_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/lua/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LUA_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/lua/)
endif()

# Squirrel @3.2 -> 1c1fd9a3709a8b46f64e52fa10bd87e896c0b502
if(TCOB_ENABLE_ADDON_SCRIPTING_SQUIRREL)
  MESSAGE(STATUS "Squirrel:")

  FetchContent_Declare(
    squirrel
    GIT_REPOSITORY https://github.com/albertodemichelis/squirrel
    GIT_TAG 1c1fd9a3709a8b46f64e52fa10bd87e896c0b502
  )

  set(SQ_DISABLE_INTERPRETER ON CACHE BOOL "" FORCE)
  set(SQ_DISABLE_INSTALLER ON CACHE BOOL "" FORCE)
  set(SQ_DISABLE_CMAKE_INSTALLER ON CACHE BOOL "" FORCE)
  set(SQ_DISABLE_HEADER_INSTALLER ON CACHE BOOL "" FORCE)

  if(BUILD_SHARED_LIBS)
    set(DISABLE_STATIC ON CACHE BOOL "" FORCE)
    set(DISABLE_DYNAMIC OFF CACHE BOOL "" FORCE)
    list(APPEND TCOB_EXTLIBS_LIBS squirrel sqstdlib)
  else()
    set(DISABLE_STATIC OFF CACHE BOOL "" FORCE)
    set(DISABLE_DYNAMIC ON CACHE BOOL "" FORCE)
    list(APPEND TCOB_EXTLIBS_LIBS squirrel_static sqstdlib_static)
  endif()

  FetchContent_MakeAvailable(squirrel)
  tcob_mark_all_as_advanced("^SQ_")
  tcob_mark_all_as_advanced("^DISABLE_")

  if(TARGET squirrel_static)
    tcob_disable_warnings(squirrel_static)
  endif()

  if(TARGET sqstdlib_static)
    tcob_disable_warnings(sqstdlib_static)
  endif()

  list(APPEND TCOB_EXTLIBS_INCDIRS ${squirrel_SOURCE_DIR}/include/)
endif()

# box2d @2.4.1
if(TCOB_ENABLE_ADDON_PHYSICS_BOX2D)
  MESSAGE(STATUS "box2d:")

  FetchContent_Declare(
    box2d
    GIT_REPOSITORY https://github.com/erincatto/box2d
    GIT_TAG v2.4.1
  )

  set(BOX2D_BUILD_UNIT_TESTS OFF CACHE BOOL "" FORCE)
  set(BOX2D_BUILD_TESTBED OFF CACHE BOOL "" FORCE)
  set(BOX2D_BUILD_DOCS OFF CACHE BOOL "" FORCE)
  set(BOX2D_USER_SETTINGS OFF CACHE BOOL "" FORCE)

  FetchContent_MakeAvailable(box2d)
  tcob_mark_all_as_advanced("^BOX2D_")
  tcob_disable_warnings(box2d)

  list(APPEND TCOB_EXTLIBS_INCDIRS ${box2d_SOURCE_DIR}/include/)
  list(APPEND TCOB_EXTLIBS_LIBS box2d)
endif()

# Chipmunk2D @7.0.3
if(TCOB_ENABLE_ADDON_PHYSICS_CHIPMUNK2D)
  file(GLOB_RECURSE CHIPMUNK2D_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/chipmunk2d/src/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CHIPMUNK2D_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/chipmunk2d/include/)
  list(APPEND TCOB_EXTLIBS_DEFINES CP_USE_DOUBLES=0)
endif()

# glad
if(TCOB_ENABLE_RENDERER_OPENGL45) # gl 4.5
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/glad/gl45.c)
endif()

if(TCOB_ENABLE_RENDERER_OPENGLES30) # gles 3.0
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/glad/gles30.c)
endif()

if(TCOB_ENABLE_RENDERER_OPENGL45 OR TCOB_ENABLE_RENDERER_OPENGLES30)
  if(WIN32)
    list(APPEND TCOB_EXTLIBS_LIBS opengl32)
  endif()
endif()

# TinySoundFont @92a8f0e9fe3c98358be7d8564db21fc4b1142d04 @stb_vorbis: 1.22
if(TCOB_ENABLE_ADDON_AUDIO_TINYSOUNDFONT)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/TinySoundFont/TinySoundFont.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/TinySoundFont/stb_vorbis.c)
  list(APPEND TCOB_EXTLIBS_DEFINES STB_VORBIS_NO_PUSHDATA_API)
endif()

# libxmp-lite @4.6.0
if(TCOB_ENABLE_FILETYPES_AUDIO_LIBXMP)
  file(GLOB_RECURSE LIBXMP_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/src/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LIBXMP_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/include/libxmp-lite/
    ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/src/
  )
  list(APPEND TCOB_EXTLIBS_DEFINES LIBXMP_CORE_PLAYER LIBXMP_NO_DEPACKERS LIBXMP_STATIC)
endif()

# sqlite @3.45.1
if(TCOB_ENABLE_ADDON_DATA_SQLITE)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/sqlite3/sqlite3.c)
endif()

# QOI
if(TCOB_ENABLE_FILETYPES_GFX_QOI)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/qoi/qoi.c)
endif()

# WebP @1.4.0
if(TCOB_ENABLE_FILETYPES_GFX_WEBP)
  MESSAGE(STATUS "WebP:")

  FetchContent_Declare(
    webp
    GIT_REPOSITORY https://chromium.googlesource.com/webm/libwebp
    GIT_TAG v1.4.0
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
  tcob_mark_all_as_advanced("^WEBP_")

  list(APPEND TCOB_EXTLIBS_INCDIRS ${webp_SOURCE_DIR}/src/)
  list(APPEND TCOB_EXTLIBS_LIBS webp libwebpmux webpdemux)
endif()

# litehtml @0.7
if(TCOB_ENABLE_ADDON_GFX_LITEHTML)
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

  if(WIN32)
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
tcob_disable_warnings(tcob_extlibs)
set_target_properties(tcob_extlibs PROPERTIES DEBUG_POSTFIX "_d")

MESSAGE(STATUS "----------------")
MESSAGE(STATUS "exiting extlibs")
MESSAGE(STATUS "----------------")
