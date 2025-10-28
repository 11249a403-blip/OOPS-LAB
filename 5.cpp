/*
--------------------------------------------
Experiment No: 5
AIM:
To implement a program that demonstrates different types of constructors
(default, parameterized, and copy constructors) and a destructor in C++.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Create a class named 'MyClass' with one data member 'value'.
3. Define:
   a) Default Constructor – initializes value to 0.
   b) Parameterized Constructor – initializes value to a given integer.
   c) Copy Constructor – creates a copy of another object.
   d) Destructor – displays a message when an object is destroyed.
4. In main(), create objects using different constructors.
5. Observe and display when each constructor and destructor is called.
6. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    // Default Constructor
    MyClass() {
        value = 0;
        cout << "Default Constructor Called. Value: " << value << endl;
    }

    // Parameterized Constructor
    MyClass(int val) {
        value = val;
        cout << "Parameterized Constructor Called. Value: " << value << endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        value = other.value;
        cout << "Copy Constructor Called. Value: " << value << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor Called for object with value: " << value << endl;
    }
};

int main() {
    // Calling Default Constructor
    MyClass obj1;

    // Calling Parameterized Constructor
    MyClass obj2(10);

    // Calling Copy Constructor
    MyClass obj3 = obj2; // or MyClass obj3(obj2);

    return 0; // Destructors will be called automatically
}

/*
--------------------------------------------
OUTPUT:
Default Constructor Called. Value: 0
Parameterized Constructor Called. Value: 10
Copy Constructor Called. Value: 10
Destructor Called for object with value: 10
Destructor Called for object with value: 10
Destructor Called for object with value: 0
--------------------------------------------
RESULT:
Thus, the program to demonstrate various types of constructors
and destructor in C++ was successfully executed.
--------------------------------------------
*/
