#SDL2
find_package(SDL2 CONFIG REQUIRED)

#WebP
find_package(WebP CONFIG REQUIRED)

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

add_library(tcob_extlibs INTERFACE)

target_sources(tcob_extlibs INTERFACE     
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

target_compile_definitions(tcob_extlibs 
    INTERFACE SPNG_USE_MINIZ 
    INTERFACE SPNG_STATIC
    INTERFACE AL_LIBTYPE_STATIC)

target_include_directories(tcob_extlibs 
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} 
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/lua/
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/physfs/
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/box2d/include/
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/box2d/src/)

target_link_libraries(tcob_extlibs 
    INTERFACE SDL2::SDL2-static 
    INTERFACE WebP::webpdemux)