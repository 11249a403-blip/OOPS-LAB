/*
--------------------------------------------
Experiment No: 3
AIM:
To demonstrate the concept of Function Overloading applied to
the member functions in C++ using integers and strings.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class named 'Calculator'.
3. Overload the 'add()' function to handle:
   a) Addition of two integers.
   b) Addition of three integers.
   c) Concatenation of two strings.
4. Create an object of the class in main().
5. Call the overloaded 'add()' functions with different argument types.
6. Display the results.
7. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to concatenate two strings
    string add(string s1, string s2) {
        return s1 + " " + s2;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 integers: " << calc.add(5, 10) << endl;
    cout << "Sum of 3 integers: " << calc.add(3, 4, 7) << endl;
    cout << "Concatenation of 2 strings: " << calc.add("Hello", "World") << endl;

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Sum of 2 integers: 15
Sum of 3 integers: 14
Concatenation of 2 strings: Hello World
--------------------------------------------
RESULT:
Thus, the program to demonstrate the concept of Function Overloading
applied to member functions using integers and strings was successfully executed.
--------------------------------------------
*/
