cmake_minimum_required (VERSION 2.8.1)
project (symRay)
cmake_policy(VERSION 2.8.1)

#set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules/")
set(CMAKE_CXX_FLAGS "-g -Wall")
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

find_package(GINAC REQUIRED)
include_directories(${GINAC_INCLUDE_DIR})

# MAIN PROGRAM
#FILE (GLOB_RECURSE CPPFILES src/*.cpp)
set(CPPFILES
   src/main.cpp
)

#link_directories(".")

add_executable(
   symRay
   ${CPPFILES}
)
target_link_libraries(symRay ${GINAC_LIBRARY})
#target_link_libraries(MCECTL-REPL MCECTL)

