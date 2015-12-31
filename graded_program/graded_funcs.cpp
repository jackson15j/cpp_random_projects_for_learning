#include <string>
#include "graded_funcs.hpp"


std::string get_grade(int& score)
{
    if (score == 100)
    {
        return "P";
    }
    if ((score >= 90) && (score <= 100))
    {
        return "A";
    }
    if ((score >= 80) && (score <= 89))
    {
        return "B";
    }
    if ((score >= 70) && (score <= 79))
    {
        return "C";
    }
    if ((score >= 60) && (score <= 69))
    {
        return "D";
    }
    if ((score >= 50) && (score <= 59))
    {
        return "F";
    }
    if ((score >= 0) && (score < 50))
    {
        return "U";
    }
    return "X";
}
