cmake_minimum_required(VERSION 3.10)

# set the project name
project(DynamicProgramming)

# locate googletest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# add the executable
add_executable(RodCutter RodCutterGtest.cpp RodCutter.cpp)

# link executable with googletest and pthread library
target_link_libraries(RodCutter ${GTEST_LIBRARIES} pthread gtest_main)

add_test(test_rodcutter RodCutter)
