cmake_minimum_required(VERSION 3.19) 

project(p23-euler-test) 

if ( CMAKE_COMPILER_IS_GNUCC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
endif()
if ( MSVC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /W4 /WX")
endif()

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/googletest/include) # this is so we can #include <gtest/gtest.h>
include_directories(googletest/googlemock/include) # this is so we can #include <gmock/gmock.h>

add_executable(p23-euler-test 
    Divisors-test.cpp
    AbundantNumbers-test.cpp
    NonTwoAbundantSumNumber-test.cpp
) # add this executable

target_link_libraries(p23-euler-test PRIVATE gtest) # link google test to this executable

