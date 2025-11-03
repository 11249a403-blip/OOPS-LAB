/*
--------------------------------------------
Experiment No: 11
AIM:
To implement a C++ program to demonstrate binary operator
overloading using the '+' operator.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class named 'Distance' with data members:
   - feet
   - inch
3. Create two constructors:
   a) Default constructor to initialize values to 0.
   b) Parameterized constructor to initialize with given values.
4. Overload the '+' operator to add two Distance objects by:
   - Adding feet and inch of both objects.
   - Returning the resultant object.
5. In the main() function:
   a) Create two Distance objects with initial values.
   b) Use the overloaded '+' operator to add them.
   c) Display the result.
6. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Default constructor
    Distance() {
        this->feet = 0;
        this->inch = 0;
    }

    // Parameterized constructor
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (+) operator to perform addition of two Distance objects
    Distance operator+(Distance& d2) {
        Distance d3; // object to store result
        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;
        return d3;
    }
};

int main() {
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;

    // Use overloaded operator
    d3 = d1 + d2;

    cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch << endl;

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Total Feet & Inches: 18'11
--------------------------------------------
RESULT:
Thus, the program to demonstrate binary operator overloading using
the '+' operator was successfully executed.
--------------------------------------------
*/
