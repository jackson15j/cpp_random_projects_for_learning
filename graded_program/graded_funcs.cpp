#include <array>
#include <iostream>
#include <string>
#include "graded_funcs.hpp"

using namespace std;


string get_grade(int& score)
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


bool grade_printer(string& grade, int& score)
{
    array<string, 6> grades = {{"A", "B", "C", "D", "F", "U"}};
    if (grade == "X")
    {
        cout << score << ", is not between: 0-100." << endl;
        return false;
    }
    if (grade == "P")
    {
        cout << "You got a perfect score" << endl;
        cout << "A score of: " << score << ", gets you a grade of: A" << endl;
    }
    for (int i = 0; i < int(grades.size()); ++i)
    {
        if (grade == grades[i])
        {
            cout << "A score of: " << score << ", gets you a grade of: " << grade << endl;
        }
    }
    if (grade == "U")
    {
        cout << "We don't give marks below 50." << endl;
    }
    return true;
}
