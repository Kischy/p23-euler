cmake_minimum_required(VERSION 3.19) 

project(p23-euler) 

if ( CMAKE_COMPILER_IS_GNUCC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
endif()
if ( MSVC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /W4 /WX")
endif()

add_subdirectory(test) # add googletest subdirectory


add_executable(p23-euler 
    p23-euler.cpp
) # add this executable


