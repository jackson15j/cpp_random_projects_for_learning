// https://github.com/philsquared/Catch
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <string>
#include "catch.hpp"
#include "../graded_funcs.hpp"


TEST_CASE("Test get_grade function.")
{
    REQUIRE(1 == 1);
    int score;
    SECTION("Lets check perfect score of 100.")
    {
        score = 100;
        REQUIRE(get_grade(score) == "P");
        REQUIRE(get_grade(score) != "X");
    }

    SECTION("Lets check: A, grades (90-100).")
    {
        for (int i=90; i < 100; i++)
            REQUIRE(get_grade(i) == "A");
    }
    SECTION("Lets check: A, grades (90-100).")
    {
        for (int i=80; i < 90; i++)
            REQUIRE(get_grade(i) == "B");
    }
    SECTION("Lets check: A, grades (90-100).")
    {
        for (int i=70; i < 80; i++)
            REQUIRE(get_grade(i) == "C");
    }
    SECTION("Lets check: A, grades (90-100).")
    {
        for (int i=60; i < 70; i++)
            REQUIRE(get_grade(i) == "D");
    }
    SECTION("Lets check: A, grades (90-100).")
    {
        for (int i=50; i < 60; i++)
            REQUIRE(get_grade(i) == "F");
    }
    SECTION("Lets check: A, grades (90-100).")
    {
        for (int i=0; i < 50; i++)
            REQUIRE(get_grade(i) == "U");
    }

    SECTION("Now lets check out of bounds (<0, >100).")
    {
        score = 101;
        REQUIRE(get_grade(score) == "X");
        score = -1;
        REQUIRE(get_grade(score) == "X");
    }
}

TEST_CASE("Test grade_printer.")
{
    int score = 99;
    std::string grade = "A";
    SECTION("Lets check that printer returns true for good grades")
    {
        REQUIRE(grade_printer(grade, score) == true);
    }

    SECTION("Now lets check that printer returns false for out of bounds grades.")
    {
        score = 101;
        grade = "X";
        REQUIRE(grade_printer(grade, score) == false);

        score = -1;
        grade = "X";
        REQUIRE(grade_printer(grade, score) == false);
    }
}
