// https://github.com/philsquared/Catch
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../graded_funcs.hpp"


TEST_CASE("Test get_grade function.")
{
    REQUIRE(1 == 1);
    int score = 100;
    REQUIRE(get_grade(score) == "P");
    REQUIRE(get_grade(score) != "X");

    for (int i=90; i < 100; i++)
        REQUIRE(get_grade(i) == "A");
    for (int i=80; i < 90; i++)
        REQUIRE(get_grade(i) == "B");
    for (int i=70; i < 80; i++)
        REQUIRE(get_grade(i) == "C");
    for (int i=60; i < 70; i++)
        REQUIRE(get_grade(i) == "D");
    for (int i=50; i < 60; i++)
        REQUIRE(get_grade(i) == "F");
    for (int i=0; i < 50; i++)
        REQUIRE(get_grade(i) == "U");

    // out of bounds.
    score = 101;
    REQUIRE(get_grade(score) == "X");
    score = -1;
    REQUIRE(get_grade(score) == "X");
}
