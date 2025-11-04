/*
--------------------------------------------
Experiment No: 22
AIM:
To overload the insertion (<<) and extraction (>>) operators in C++.
--------------------------------------------
THEORY:
Operator overloading allows redefining the meaning of operators 
for user-defined types. The insertion (<<) operator is used for output, 
and the extraction (>>) operator is used for input.
By overloading these operators, objects can be read and displayed 
in a natural, intuitive way.
--------------------------------------------
ALGORITHM:
1. Define a class with data members.
2. Overload the extraction (>>) operator to input object data.
3. Overload the insertion (<<) operator to display object data.
4. Create an object and demonstrate both operations in main().
--------------------------------------------
CODE:
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
public:
    friend istream& operator>>(istream& in, Student& s);
    friend ostream& operator<<(ostream& out, const Student& s);
};

istream& operator>>(istream& in, Student& s) {
    cout << "Enter name: ";
    in >> s.name;
    cout << "Enter age: ";
    in >> s.age;
    return in;
}

ostream& operator<<(ostream& out, const Student& s) {
    out << "Name: " << s.name << ", Age: " << s.age;
    return out;
}

int main() {
    Student s1;
    cin >> s1;
    cout << s1 << endl;
    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT:
Enter name: Alice
Enter age: 20
Name: Alice, Age: 20
--------------------------------------------
RESULT:
Thus, the insertion and extraction operators were successfully
overloaded and implemented.
--------------------------------------------
*/
