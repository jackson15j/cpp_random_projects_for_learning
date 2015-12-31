# Trying to duplicate:
# clang++ -ansi -pedantic-errors -Wall -o <out_file> *.cpp

cmake_minimum_required(VERSION 2.8.12)
project(graded_program)
enable_testing()
# Stricter build rules.
# can double check this with: make VERBOSE=1
add_definitions(-ansi -pedantic-errors -Wall -std=c++11)

# Build libraries.
add_library(graded_funcs graded_funcs.cpp)
# Make sure the compiler can find include files for our graded_funcs library
# when other libraries or executables link to graded_funcs
target_include_directories(graded_funcs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


# Build the main app.
add_executable(graded_program graded_program.cpp)

# Link the executable to the Graded_Funcs library. Since the Graded_Funcs library has
# public include directories we will use those link directories when building
# graded_funcsDemo
target_link_libraries (graded_program LINK_PUBLIC graded_funcs)



# Point to test directory, which has it's on CMakeLists.txt on how to build
# tests.
add_subdirectory(test)
