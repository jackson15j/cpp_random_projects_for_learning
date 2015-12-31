/* Grading Program
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that allows the user to enter the grade scored in a programming
class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90-100 it informs the user
that they scored an A

★★ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
*/
#include <iostream>

using namespace std;


//TODO: how would I test this? I think I need to do the following:
// - break functional code into a class.
// - separate out the cin call, so I can mock this by setting a variable on
//   the class.
// - Use something like cppunit/gtest to create a test file that imports that
//   class (seems like they work off the class definition in a header file.
// - Either do string matching (yuck) or have the grade/state output, with the
//   cout line generated later on.
// - random links:
// http://www.comp.nus.edu.sg/~cs3214s/tools/cppunitSol.html
// http://www.yolinux.com/TUTORIALS/Cpp-GoogleTest.html
// https://github.com/google/googletest
// http://cppunit.sourceforge.net/doc/lastest/index.html
int main()
{
    int score;
    cout << "Enter a score (0-100): ";
    cin >> score;
    if ((score > 100) || (score < 0))
    {
        cout << score << ", is not between: 0-100." << endl;
        return 1;
    }
    if (score == 100)
    {
        cout << "You got a perfect score" << endl;
    }
    if ((score >= 90) && (score <= 100))
    {
        cout << "A score of: " << score << ", gets you an: A" << endl;
    }
    if ((score >= 80) && (score <= 89))
    {
        cout << "A score of: " << score << ", gets you a: B" << endl;
    }
    if ((score >= 70) && (score <= 79))
    {
        cout << "A score of: " << score << ", gets you a: C" << endl;
    }
    if ((score >= 60) && (score <= 69))
    {
        cout << "A score of: " << score << ", gets you a: D" << endl;
    }
    if ((score >= 50) && (score <= 59))
    {
        cout << "A score of: " << score << ", gets you an: F" << endl;
    }
    if (score < 50)
    {
        cout << "We don't give marks below 50." << endl;
    }
}
