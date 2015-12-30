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

int main()
{
    int score;
    cout << "Enter a score (0-100): " << endl;
    cin >> score;
    if (score == 100)
    {
        cout << "You got a perfect score" << endl;
    }
}
