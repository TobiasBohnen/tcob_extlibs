MESSAGE(STATUS "----------------")
MESSAGE(STATUS "entering extlibs")
MESSAGE(STATUS "----------------")

# ##########################################################################
set(CMAKE_DISABLE_FIND_PACKAGE_ZLIB ON)
set(CMAKE_DISABLE_FIND_PACKAGE_PNG ON)
set(CMAKE_DISABLE_FIND_PACKAGE_JPEG ON)
set(CMAKE_DISABLE_FIND_PACKAGE_TIFF ON)
set(CMAKE_DISABLE_FIND_PACKAGE_GIF ON)

# ##########################################################################
include(FetchContent)

# SDL2
MESSAGE(STATUS "++++++++++++++++")
MESSAGE(STATUS "SDL2:")

FetchContent_Declare(SDL2
  GIT_REPOSITORY https://github.com/libsdl-org/SDL
  GIT_TAG release-2.0.22
)

set(SDL_RENDER OFF CACHE BOOL "" FORCE)
set(SDL_SENSOR OFF CACHE BOOL "" FORCE)
set(SDL_POWER OFF CACHE BOOL "" FORCE)
set(SDL_FILESYSTEM OFF CACHE BOOL "" FORCE)
set(SDL_SHARED_ENABLED_BY_DEFAULT OFF CACHE BOOL "" FORCE)
set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_STATIC ON CACHE BOOL "" FORCE)
set(SDL_LIBC ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(SDL2)

list(APPEND TCOB_EXTLIBS_INCDIRS ${SDL2_SOURCE_DIR}/include/)
list(APPEND TCOB_EXTLIBS_DEFINES SDL_MAIN_HANDLED)
list(APPEND TCOB_EXTLIBS_LIBS SDL2-static)
list(APPEND TCOB_EXTLIBS_INSTALLS sdl-build-options SDL2-static)

# WebP
MESSAGE(STATUS "++++++++++++++++")
MESSAGE(STATUS "WebP:")

FetchContent_Declare(webp
  GIT_REPOSITORY https://chromium.googlesource.com/webm/libwebp
  GIT_TAG v1.2.3
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
set(WEBP_LINK_STATIC ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(webp)

list(APPEND TCOB_EXTLIBS_INCDIRS ${webp_SOURCE_DIR}/src/)
list(APPEND TCOB_EXTLIBS_LIBS webpdemux)
list(APPEND TCOB_EXTLIBS_INSTALLS webp webpdemux)

# ##########################################################################
MESSAGE(STATUS "++++++++++++++++")

# ##########################################################################
# Lua
if(TCOB_ENABLE_LUA)
  file(GLOB LUA_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/lua/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LUA_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/lua/)
endif()

# wren
if(TCOB_ENABLE_WREN)
  file(GLOB WREN_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/vm/*.c ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/optional/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${WREN_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/vm/
    ${CMAKE_CURRENT_SOURCE_DIR}/wren/src/optional/
  )
endif()

# physfs
file(GLOB PHYSFS_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/physfs/*.c)
list(APPEND TCOB_EXTLIBS_SRCFILES ${PHYSFS_SRC_FILES})
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/physfs/)

# box2d
if(TCOB_ENABLE_BOX2D)
  file(GLOB_RECURSE BOX2D_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/box2d/src/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${BOX2D_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/box2d/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/box2d/src/
  )
endif()

# Chipmunk2D
if(TCOB_ENABLE_CHIPMUNK2D)
  file(GLOB_RECURSE CHIPMUNK2D_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/chipmunk2d/src/*.cpp)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CHIPMUNK2D_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/chipmunk2d/include/)
  list(APPEND TCOB_EXTLIBS_DEFINES CP_USE_DOUBLES=0)
endif()

# mojoal
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/AL/mojoal.c)
list(APPEND TCOB_EXTLIBS_DEFINES AL_LIBTYPE_STATIC)

# glad
if(TCOB_BACKEND_OPENGL45)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/glad/gl45.c)
endif()

# spng
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/spng/spng.c)
list(APPEND TCOB_EXTLIBS_DEFINES SPNG_USE_MINIZ SPNG_STATIC)

# miniz
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/miniz/miniz.c)
list(APPEND TCOB_EXTLIBS_INCDIRS ${CMAKE_CURRENT_SOURCE_DIR}/miniz/)

# dr_libs
list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/dr_libs/dr_libs.c)

# stb
list(APPEND TCOB_EXTLIBS_SRCFILES
  ${CMAKE_CURRENT_SOURCE_DIR}/stb/stb_truetype.c
  ${CMAKE_CURRENT_SOURCE_DIR}/stb/stb_vorbis.c
)
list(APPEND TCOB_EXTLIBS_DEFINES STB_VORBIS_NO_PUSHDATA_API)

# TinySoundFont
if(TCOB_ENABLE_SOUNDFONT)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/TinySoundFont/TinySoundFont.c)
endif()

# libxmp-lite
if(TCOB_ENABLE_LIBXMP)
  file(GLOB_RECURSE LIBXMP_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/src/*.c)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${LIBXMP_SRC_FILES})
  list(APPEND TCOB_EXTLIBS_INCDIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/include/libxmp-lite/
    ${CMAKE_CURRENT_SOURCE_DIR}/libxmp-lite/src/
  )
  list(APPEND TCOB_EXTLIBS_DEFINES LIBXMP_CORE_PLAYER LIBXMP_NO_DEPACKERS)
endif()

# cjson
if(TCOB_ENABLE_JSON)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/cJSON/cJSON.c)
  list(APPEND TCOB_EXTLIBS_DEFINES CJSON_HIDE_SYMBOLS)
endif()

# sqlite
if(TCOB_ENABLE_SQLITE)
  list(APPEND TCOB_EXTLIBS_SRCFILES ${CMAKE_CURRENT_SOURCE_DIR}/sqlite3/sqlite3.c)
endif()

# ##########################################################################
add_library(tcob_extlibs OBJECT)
target_sources(tcob_extlibs PUBLIC ${TCOB_EXTLIBS_SRCFILES})
target_compile_definitions(tcob_extlibs PUBLIC ${TCOB_EXTLIBS_DEFINES})
target_include_directories(tcob_extlibs SYSTEM PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${TCOB_EXTLIBS_INCDIRS})
target_link_libraries(tcob_extlibs
  PRIVATE ${TCOB_EXTLIBS_LIBS}
  $<$<AND:$<CXX_COMPILER_ID:MSVC>,$<BOOL:TCOB_BACKEND_IS_OPENGL>>:opengl32>
)

install(TARGETS ${TCOB_EXTLIBS_INSTALLS} tcob_extlibs EXPORT tcob)

MESSAGE(STATUS "----------------")
MESSAGE(STATUS "exiting extlibs")
MESSAGE(STATUS "----------------")
