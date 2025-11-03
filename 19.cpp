/*
--------------------------------------------
Experiment No: 19
AIM:
To implement the use of Function Template in C++.
--------------------------------------------
THEORY:
A function template allows the creation of a single function 
that can work with different data types. 
Templates promote code reusability and reduce redundancy.
They are declared using the keyword 'template' followed by a type parameter.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a function template `add()` that takes two parameters of any type.
3. Inside the function, return the sum of both parameters.
4. In the main function:
   - Call the function with different data types (int, float, double, etc.).
   - Display the results.
5. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

// Function Template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition using Function Template\n" << endl;

    cout << "Integers: 10 + 20 = " << add(10, 20) << endl;
    cout << "Floats: 2.5 + 3.7 = " << add(2.5f, 3.7f) << endl;
    cout << "Doubles: 5.5 + 6.9 = " << add(5.5, 6.9) << endl;
    cout << "Strings: 'Hello' + ' World' = " << add(string("Hello"), string(" World")) << endl;

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Addition using Function Template

Integers: 10 + 20 = 30
Floats: 2.5 + 3.7 = 6.2
Doubles: 5.5 + 6.9 = 12.4
Strings: 'Hello' + ' World' = Hello World
--------------------------------------------
RESULT:
Thus, the program to implement function templates 
in C++ was successfully executed.
--------------------------------------------
*/
