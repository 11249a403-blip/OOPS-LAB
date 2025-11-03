/*
--------------------------------------------
Experiment No: 14
AIM:
To implement a C++ program that demonstrates
the concept of multiple inheritance.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a base class `LandVehicle` with a function `drive()`.
3. Define another base class `WaterVehicle` with a function `sail()`.
4. Create a derived class `AmphibiousVehicle` that inherits
   publicly from both `LandVehicle` and `WaterVehicle`.
5. In `AmphibiousVehicle`, define a member function `operate()`
   to represent combined behavior.
6. In the `main()` function:
   - Create an object of `AmphibiousVehicle`.
   - Call `drive()`, `sail()`, and `operate()` using the object.
7. Stop the program.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

class LandVehicle {
public:
    void drive() {
        cout << "Driving on land." << endl;
    }
};

class WaterVehicle {
public:
    void sail() {
        cout << "Sailing on water." << endl;
    }
};

// AmphibiousVehicle inherits from both LandVehicle and WaterVehicle
class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
public:
    void operate() {
        cout << "Operating as an amphibious vehicle." << endl;
    }
};

int main() {
    AmphibiousVehicle myAmphibian;

    myAmphibian.drive();   // Inherited from LandVehicle
    myAmphibian.sail();    // Inherited from WaterVehicle
    myAmphibian.operate(); // Member of AmphibiousVehicle itself

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Driving on land.
Sailing on water.
Operating as an amphibious vehicle.
--------------------------------------------
RESULT:
Thus, the program demonstrating multiple inheritance in C++
was successfully executed.
--------------------------------------------
*/
