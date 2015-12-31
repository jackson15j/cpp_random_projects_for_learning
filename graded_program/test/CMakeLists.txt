# Trying to duplicate:
# clang++ -ansi -pedantic-errors -Wall -o <test_out_file> graded_funcs.cpp test/*.cpp

# Build the test app.
add_executable(test_graded_program test_graded_program.cpp)

# Link the executable to the Graded_Funcs library. Since the Graded_Funcs library has
# public include directories we will use those link directories when building
# graded_funcsDemo
target_link_libraries (test_graded_program LINK_PUBLIC graded_funcs)
