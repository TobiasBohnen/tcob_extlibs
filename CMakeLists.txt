MESSAGE(STATUS "----------------")
MESSAGE(STATUS "entering extlibs")
MESSAGE(STATUS "----------------")

set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE)
set(CMAKE_POLICY_DEFAULT_CMP0069 NEW)

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

# set(FETCHCONTENT_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/_deps)

# ##########################################################################
# #required

# physfs @3.2.0 https://github.com/icculus/physfs
MESSAGE(STATUS "physfs:")

FetchContent_Declare(
  physfs
  GIT_REPOSITORY https://github.com/icculus/physfs
  GIT_TAG release-3.2.0
  EXCLUDE_FROM_ALL
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

# mojoal https://github.com/icculus/mojoAL
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/req/AL/mojoal.c)
list(APPEND TCOB_EXTLIBS_DEFINES AL_LIBTYPE_STATIC)

# miniz @3.0.2 https://github.com/richgel999/miniz
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/req/miniz/miniz.c)
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/req/miniz/)

# utfcpp @4.0.6 https://github.com/nemtrif/utfcpp
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/req/utf8/)

# earcut https://github.com/mapbox/earcut.hpp
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/req/earcut/)

# clipper2 @1.4.0 https://github.com/AngusJohnson/Clipper2
file(GLOB_RECURSE CLIPPER_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/req/Clipper2Lib/src/*.cpp)
list(APPEND TCOB_EXTLIBS_SRCFILES ${CLIPPER_SRC_FILES})
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/req/Clipper2Lib/include)

# speech
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/req/speech/speech.c)

# SDL2 @2.30.10 https://github.com/libsdl-org/SDL
MESSAGE(STATUS "SDL2:")

FetchContent_Declare(
  SDL2
  GIT_REPOSITORY https://github.com/libsdl-org/SDL
  GIT_TAG release-2.30.10
  EXCLUDE_FROM_ALL
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

# FreeType @2.13.3 https://github.com/freetype/freetype
MESSAGE(STATUS "FreeType:")

FetchContent_Declare(
  freetype
  GIT_REPOSITORY https://github.com/freetype/freetype
  GIT_TAG VER-2-13-3
  EXCLUDE_FROM_ALL
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

# libogg @1.3.5 https://github.com/xiph/ogg
if(TCOB_ENABLE_FILETYPES_GFX_THEORA OR TCOB_ENABLE_FILETYPES_AUDIO_OPUS OR TCOB_ENABLE_FILETYPES_AUDIO_VORBIS)
  file(GLOB_RECURSE OGG_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/ogg/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${OGG_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/ogg/)
endif()

# libtheora @1.1.1 https://github.com/xiph/theora
if(TCOB_ENABLE_FILETYPES_GFX_THEORA)
  file(GLOB_RECURSE OGGTHEORA_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/theora/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${OGGTHEORA_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/theora/)
endif()

# opus @libopus: 1.5.2 @opusfile: 0.12 @libopusenc: 0.2.1 https://github.com/xiph/opus
if(TCOB_ENABLE_FILETYPES_AUDIO_OPUS)
  MESSAGE(STATUS "libopus:")

  FetchContent_Declare(
    libopus
    GIT_REPOSITORY https://github.com/xiph/opus
    GIT_TAG v1.5.2
    EXCLUDE_FROM_ALL
  )

  if(MSVC AND TCOB_USE_DEFAULT_MSVC_OPTIONS AND NOT TCOB_IS_CI)
    set(OPUS_STATIC_RUNTIME ON CACHE BOOL "" FORCE)
  endif()

  set(OPUS_BUILD_TESTING OFF CACHE BOOL "" FORCE)
  set(OPUS_INSTALL_PKG_CONFIG_MODULE OFF CACHE BOOL "" FORCE)
  set(OPUS_INSTALL_CMAKE_CONFIG_MODULE OFF CACHE BOOL "" FORCE)

  FetchContent_MakeAvailable(libopus)
  tcob_mark_all_as_advanced("^OPUS_")

  tcob_disable_warnings(opus)

  list(APPEND TCOB_EXTLIBS_INCDIRS ${libopus_SOURCE_DIR}/include/)
  list(APPEND TCOB_EXTLIBS_LIBS opus)

  # libopusenc https://github.com/xiph/libopusenc
  file(GLOB_RECURSE OPUSENC_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/libopusenc/src/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${OPUSENC_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/libopusenc/src/)
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/libopusenc/include/)
  list(APPEND TCOB_EXTLIBS_DEFINES OUTSIDE_SPEEX RANDOM_PREFIX=tcob)

  # opusfile https://github.com/xiph/opusfile/
  file(GLOB_RECURSE OGGOPUS_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/opusfile/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${OGGOPUS_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/opusfile/)
endif()

# vorbis @1.3.7 https://github.com/xiph/vorbis
if(TCOB_ENABLE_FILETYPES_AUDIO_VORBIS)
  file(GLOB_RECURSE VORBIS_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/vorbis/src/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${VORBIS_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/vorbis/src)
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/XiphOrg/vorbis/include)
endif()

# dr_libs @dr_flac: 0.12.43 @dr_mp3: 0.6.40 @dr_wav: 0.13.17 https://github.com/mackron/dr_libs
if(TCOB_ENABLE_FILETYPES_AUDIO_DRLIBS)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/dr_libs/dr_libs.c)
endif()

# Lua @5.4.7 https://github.com/lua/lua
if(TCOB_ENABLE_ADDON_SCRIPTING_LUA)
  file(GLOB LUA_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/lua/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LUA_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/lua/)
endif()

# Squirrel @3.2 -> 1c1fd9a3709a8b46f64e52fa10bd87e896c0b502 https://github.com/albertodemichelis/squirrel
if(TCOB_ENABLE_ADDON_SCRIPTING_SQUIRREL)
  MESSAGE(STATUS "Squirrel:")

  FetchContent_Declare(
    squirrel
    GIT_REPOSITORY https://github.com/albertodemichelis/squirrel
    GIT_TAG 1c1fd9a3709a8b46f64e52fa10bd87e896c0b502
    EXCLUDE_FROM_ALL
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

# box2d @3.0.0 https://github.com/erincatto/box2d
if(TCOB_ENABLE_ADDON_PHYSICS_BOX2D)
  MESSAGE(STATUS "box2d:")

  FetchContent_Declare(
    box2d
    GIT_REPOSITORY https://github.com/erincatto/box2d
    GIT_TAG v3.0.0
    EXCLUDE_FROM_ALL
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

# glad 2.0.6 https://github.com/Dav1dde/glad
if(TCOB_ENABLE_RENDERER_OPENGL45) # gl 4.5
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/glad/gl45.c)
endif()

if(TCOB_ENABLE_RENDERER_OPENGLES30) # gles 3.0
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/glad/gles30.c)
endif()

if(TCOB_ENABLE_RENDERER_OPENGLES20) # gles 2.0
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/glad/gles20.c)
endif()

if(TCOB_ENABLE_RENDERER_OPENGL45 OR TCOB_ENABLE_RENDERER_OPENGLES30 OR TCOB_ENABLE_RENDERER_OPENGLES20)
  if(WIN32)
    list(APPEND TCOB_EXTLIBS_LIBS opengl32)
  endif()
endif()

# TinySoundFont @cd82859 @stb_vorbis: 1.22 https://github.com/schellingb/TinySoundFont
if(TCOB_ENABLE_ADDON_AUDIO_TINYSOUNDFONT)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/TinySoundFont/TinySoundFont.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/TinySoundFont/stb_vorbis.c)
  list(APPEND TCOB_EXTLIBS_DEFINES STB_VORBIS_NO_PUSHDATA_API)
endif()

# libxmp-lite @4.6.1 https://github.com/libxmp/libxmp
if(TCOB_ENABLE_FILETYPES_AUDIO_LIBXMP)
  file(GLOB_RECURSE LIBXMP_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/libxmp-lite/src/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LIBXMP_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/opt/libxmp-lite/include/libxmp-lite/
    ${CMAKE_CURRENT_SOURCE_DIR}/opt/libxmp-lite/src/
  )
  list(APPEND TCOB_EXTLIBS_DEFINES LIBXMP_CORE_PLAYER LIBXMP_NO_DEPACKERS LIBXMP_STATIC)
endif()

# sqlite @3.47.2 https://www.sqlite.org/
if(TCOB_ENABLE_ADDON_DATA_SQLITE)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/sqlite3/sqlite3.c)
endif()

# QOI https://github.com/phoboslab/qoi
if(TCOB_ENABLE_FILETYPES_GFX_QOI)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/qoi/qoi.c)
endif()

# WebP @1.5.0 https://chromium.googlesource.com/webm/libwebp
if(TCOB_ENABLE_FILETYPES_GFX_WEBP)
  MESSAGE(STATUS "WebP:")

  FetchContent_Declare(
    webp
    GIT_REPOSITORY https://chromium.googlesource.com/webm/libwebp
    GIT_TAG v1.5.0
    EXCLUDE_FROM_ALL
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

# litehtml @26d7b7e https://github.com/litehtml/litehtml
if(TCOB_ENABLE_ADDON_GFX_LITEHTML)
  file(GLOB_RECURSE LITEHTML_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/litehtml/src/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LITEHTML_SRC_FILES})
  file(GLOB_RECURSE GUMBO_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/opt/litehtml/src/gumbo/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${GUMBO_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/opt/litehtml/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/opt/litehtml/include/litehtml/
    ${CMAKE_CURRENT_SOURCE_DIR}/opt/litehtml/src/gumbo/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/opt/litehtml/src/gumbo/include/gumbo/
  )

  if(WIN32)
    list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/opt/litehtml/src/gumbo/visualc/include/)
  endif()

  list(APPEND TCOB_EXTLIBS_DEFINES LITEHTML_UTF8)
endif()

# ##########################################################################
add_library(tcob_extlibs STATIC)

target_sources(tcob_extlibs PRIVATE ${TCOB_EXTLIBS_SRCFILES})
target_compile_definitions(tcob_extlibs PUBLIC ${TCOB_EXTLIBS_DEFINES})
target_include_directories(tcob_extlibs SYSTEM PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/opt/
  ${CMAKE_CURRENT_SOURCE_DIR}/req/
  ${TCOB_EXTLIBS_INCDIRS}
)
target_link_libraries(tcob_extlibs PRIVATE ${TCOB_EXTLIBS_LIBS})
tcob_disable_warnings(tcob_extlibs)
set_target_properties(tcob_extlibs PROPERTIES
  DEBUG_POSTFIX "_d"
  CXX_STANDARD 20
  CXX_STANDARD_REQUIRED TRUE)

MESSAGE(STATUS "----------------")
MESSAGE(STATUS "exiting extlibs")
MESSAGE(STATUS "----------------")

# #########################################################################
if(EMSCRIPTEN)
  target_compile_options(physfs-static PRIVATE -pthread)
  target_link_options(physfs-static PRIVATE -pthread)

  target_compile_options(SDL2-static PRIVATE -pthread)
  target_link_options(SDL2-static PRIVATE -pthread)

  target_compile_options(freetype PRIVATE -pthread)
  target_link_options(freetype PRIVATE -pthread)

  target_compile_options(box2d PRIVATE -pthread)
  target_link_options(box2d PRIVATE -pthread)

  target_compile_options(tcob_extlibs PRIVATE -pthread)
  target_link_options(tcob_extlibs PRIVATE -pthread)
endif()