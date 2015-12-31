// https://github.com/philsquared/Catch
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../graded_funcs.hpp"


TEST_CASE("Test get_grade function.")
{
    REQUIRE(1 == 1);
    int score = 100;
    REQUIRE(get_grade(score) == "P");
    REQUIRE(get_grade(score) != "U");
    score = 101;
    REQUIRE(get_grade(score) == "U");
}
