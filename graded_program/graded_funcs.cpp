#include <string>
#include "graded_funcs.hpp"


std::string get_grade(int& score)
{
    if (score == 100)
    {
        return "P";
    }
    return "U";
}
