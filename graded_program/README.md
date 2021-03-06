Grading Program
===============

Test program to cut my teeth on some C++.

Areas of learning
-----------------

- Get to grips with [CMake].
- Try out: [Github: Catch], unittest framework.

Initial Aim:
------------

Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that allows the user to enter the grade scored in a programming
class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

- Modify the program so that if the user scored a 90-100 it informs the user
that they scored an A
- Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A

How to Build
------------

See: [Root README] for Travis build status.

- Create a build folder (currently .gitignore "build/").
- cd <build_folder>
- cmake <path/to/project/root>
- make

There should be a graded\_program executable in root of <build\_folder> and a
test\_graded\_program in <build\_folder/test/>.

An easy one liner if you have created the build directory at project root.

```bash
cmake .. && make clean && make && make test
```


[CMake]: https://cmake.org
[Github: Catch]: https://github.com/catchorg/Catch2
[Root README]: ../README.md
