cmake_minimum_required(VERSION 3.5.1)
project(AlgorithmInAction)

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

set(CMAKE_CXX_STANDARD 11)

set(INC_DIR /usr/local/include)
set(LINK_DIR /usr/local/lib)

include_directories(${INC_DIR})
link_directories(${LINK_DIR})

add_executable(Chapter1Bin Chapter1/test.cpp)
add_executable(Exe2_1_1 Chapter2/Array/Exe2_1_1.cc)
add_executable(Exe2_1_2 Chapter2/Array/Exe2_1_2.cc)

