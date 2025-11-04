/*
--------------------------------------------
Experiment No: 23
AIM:
To implement virtual base classes to avoid ambiguity in multiple inheritance.
--------------------------------------------
THEORY:
When a class is derived from two base classes that have a common ancestor,
it creates ambiguity while accessing members of the top base class.
Virtual base classes ensure that only one copy of the base class is inherited,
solving the "diamond problem" in C++.
--------------------------------------------
ALGORITHM:
1. Create a base class Person.
2. Derive Student and Employee from Person using virtual inheritance.
3. Derive Manager from both Student and Employee.
4. Demonstrate access to common base class members.
--------------------------------------------
CODE:
*/

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : virtual public Person {
public:
    int marks;
    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Employee : virtual public Person {
public:
    int salary;
    void getSalary() {
        cout << "Enter salary: ";
        cin >> salary;
    }
};

class Manager : public Student, public Employee {
public:
    void display() {
        cout << "Name: " << name << ", Marks: " << marks << ", Salary: " << salary << endl;
    }
};

int main() {
    Manager m;
    m.getName();
    m.getMarks();
    m.getSalary();
    m.display();
    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT:
Enter name: Bob
Enter marks: 90
Enter salary: 50000
Name: Bob, Marks: 90, Salary: 50000
--------------------------------------------
RESULT:
Thus, the concept of virtual base class was successfully
implemented to avoid ambiguity in multiple inheritance.
--------------------------------------------
*/
