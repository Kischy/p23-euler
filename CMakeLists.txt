cmake_minimum_required(VERSION 3.19) 

project(p23-euler-test) 

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/googletest/include) # this is so we can #include <gtest/gtest.h>
include_directories(googletest/googlemock/include) # this is so we can #include <gmock/gmock.h>

add_executable(mytests 
    p23-euler-test.cpp
    p23-euler-test2.cpp
) # add this executable

target_link_libraries(mytests PRIVATE gtest) # link google test to this executable

