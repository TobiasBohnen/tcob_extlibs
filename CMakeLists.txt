include(FetchContent)

#SDL2
FetchContent_Declare(SDL2
  GIT_REPOSITORY  https://github.com/libsdl-org/SDL
  GIT_TAG         release-2.0.14)

set(SDL_SHARED_ENABLED_BY_DEFAULT OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(SDL2)

#WebP
FetchContent_Declare(webp
  GIT_REPOSITORY  https://chromium.googlesource.com/webm/libwebp
  GIT_TAG         v1.2.0)

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

FetchContent_MakeAvailable(webp)
set(WEBP_INCLUDE_DIR ${webp_SOURCE_DIR}/src)

#Lua
file(GLOB LUA_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/lua/*.cpp)

#physfs
file(GLOB PHYSFS_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/physfs/*.c)

#box2d
file(GLOB_RECURSE BOX2D_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/box2d/src/*.cpp)

#mojoal
set(MOJOAL_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/AL/mojoal.c)

#glad
set(GLAD_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/glad/gl.c)

#spng
set(SPNG_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/spng/spng.c)

#miniz
set(MINIZ_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/miniz/miniz.c)

#dr_libs
set(DRLIBS_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/dr_libs/dr_libs.c)

#stb
set(STB_SRC_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/stb/stb_truetype.c 
    ${CMAKE_CURRENT_SOURCE_DIR}/stb/stb_vorbis.c)

###########################################################################

add_library(tcob_extlibs OBJECT)

target_sources(tcob_extlibs PUBLIC     
    ${LUA_SRC_FILES}
    ${PHYSFS_SRC_FILES}
    ${BOX2D_SRC_FILES}
    ${MOJOAL_SRC_FILES}
    ${GLAD_SRC_FILES}
    ${SPNG_SRC_FILES}
    ${MINIZ_SRC_FILES}
    ${DRLIBS_SRC_FILES}
    ${STB_SRC_FILES}
)

target_compile_definitions(tcob_extlibs PUBLIC
    SPNG_USE_MINIZ 
    SPNG_STATIC
    AL_LIBTYPE_STATIC)

target_include_directories(tcob_extlibs PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR} 
    ${CMAKE_CURRENT_SOURCE_DIR}/lua/
    ${CMAKE_CURRENT_SOURCE_DIR}/physfs/
    ${CMAKE_CURRENT_SOURCE_DIR}/box2d/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/box2d/src/
    ${WEBP_INCLUDE_DIR})

target_link_libraries(tcob_extlibs PUBLIC
    SDL2-static 
    webpdemux)