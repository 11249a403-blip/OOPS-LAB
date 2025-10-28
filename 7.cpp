/* 
--------------------------------------------
Experiment No: 7
AIM:
To implement a C++ program that demonstrates the use of an array
of objects using a class.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Include the necessary header files: <iostream> and <string>.
3. Define a class named 'Student' with:
   a) Data members - 'name' (string) and 'rollNumber' (integer).
   b) A member function 'displayInfo()' to display student details.
4. In the main() function:
   a) Declare an array of 3 Student objects.
   b) Assign values to each student's name and roll number.
   c) Use a loop to display all student records by calling 'displayInfo()'.
5. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    void displayInfo() {
        cout << "Name: " << name << ", Roll No: " << rollNumber << endl;
    }
};

int main() {
    Student students[3]; // Array of 3 Student objects

    // Initializing data for students
    students[0].name = "Alice";
    students[0].rollNumber = 101;

    students[1].name = "Bob";
    students[1].rollNumber = 102;

    students[2].name = "Charlie";
    students[2].rollNumber = 103;

    // Displaying information for all students
    cout << "Student Records:" << endl;
    for (int i = 0; i < 3; ++i) {
        students[i].displayInfo();
    }

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Student Records:
Name: Alice, Roll No: 101
Name: Bob, Roll No: 102
Name: Charlie, Roll No: 103
--------------------------------------------
RESULT:
Thus, the program to demonstrate the use of an array of objects
using a class in C++ was successfully executed.
--------------------------------------------
*/
