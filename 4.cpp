/*
--------------------------------------------
Experiment No: 4
AIM:
To implement a program that demonstrates passing objects as
function arguments and returning an object from a function in C++.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class named 'Number' with one data member 'value'.
3. Create member functions to:
   a) Accept a number from the user.
   b) Display the number.
   c) Add another Number object and return the result as a new object.
4. Display the object before the function call, inside the function, and after the call.
5. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Function to input value
    void getData() {
        cout << "Enter a number: ";
        cin >> value;
    }

    // Function to display value
    void display() const {
        cout << value << endl;
    }

    // Function to add another Number object and return a new object
    Number addNumber(Number n2) {
        cout << "\nInside addNumber() function..." << endl;
        cout << "Current object value: " << value << endl;
        cout << "Parameter object value: " << n2.value << endl;

        Number temp;
        temp.value = value + n2.value;

        cout << "Returning object (sum): " << temp.value << endl;
        return temp;
    }
};

int main() {
    Number n1, n2, n3;

    cout << "Enter first number:\n";
    n1.getData();

    cout << "\nEnter second number:\n";
    n2.getData();

    cout << "\n--- Before function call ---" << endl;
    cout << "Object 1 value: ";
    n1.display();
    cout << "Object 2 value: ";
    n2.display();

    // Passing object and getting returned object
    n3 = n1.addNumber(n2);

    cout << "\n--- After function call ---" << endl;
    cout << "Resultant object value: ";
    n3.display();

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Enter first number:
5
Enter second number:
10

--- Before function call ---
Object 1 value: 5
Object 2 value: 10

Inside addNumber() function...
Current object value: 5
Parameter object value: 10
Returning object (sum): 15

--- After function call ---
Resultant object value: 15
--------------------------------------------
RESULT:
Thus, the program to demonstrate passing objects as function arguments
and returning an object from a function was successfully executed,
showing the object states before, inside, and after the function call.
--------------------------------------------
*/
