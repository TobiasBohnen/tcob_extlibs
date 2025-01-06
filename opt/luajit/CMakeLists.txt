cmake_minimum_required(VERSION 3.10)

option(LUAJIT_DIR "Path of LuaJIT 2.1 source dir" "")

set(LUAJIT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/LuaJIT")

if(CMAKE_COMPILER_IS_GNUCC)
  set(LUA_TARGET_SHARED ON)
endif()
if(DEFINED ENV{LUA_TARGET_SHARED})
  set(LUA_TARGET_SHARED $ENV{LUA_TARGET_SHARED})
endif()

get_directory_property(hasParent PARENT_DIRECTORY)
  project(luajit)
  include(LuaJIT.cmake)
  if (hasParent)
    set(LUA_TARGET $<TARGET_FILE:luajit> PARENT_SCOPE)
    set(LUA_LIBRARIES luajit::lib PARENT_SCOPE)
    get_target_property(LUA_INCLUDE_DIR luajit::header INCLUDE_DIRECTORIES)
    set(LUA_INCLUDE_DIR ${LUA_INCLUDE_DIR} PARENT_SCOPE)
  endif()
