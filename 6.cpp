/*
--------------------------------------------
Experiment No: 6
AIM:
To implement a program that demonstrates the use of static data
members in a class in C++.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class named 'Car' with:
   a) A static data member 'carCount' to keep track of the number of Car objects.
   b) A constructor that increments 'carCount' each time an object is created.
   c) A function 'displayCarInfo()' to display information about the car.
3. Initialize the static data member outside the class.
4. In the main() function:
   a) Create multiple objects of the class 'Car'.
   b) Display the total number of cars created using the static variable.
5. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

class Car {
public:
    static int carCount; // Static data member to count cars

    // Constructor increments count when a new object is created
    Car() {
        carCount++;
    }

    void displayCarInfo() {
        cout << "This is a car object." << endl;
    }
};

// Initialize static data member
int Car::carCount = 0;

int main() {
    Car car1;
    Car car2;
    Car car3;

    cout << "Total cars created: " << Car::carCount << endl;

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Total cars created: 3
--------------------------------------------
RESULT:
Thus, the program to demonstrate the use of static data members
in a class was successfully executed.
--------------------------------------------
*/
