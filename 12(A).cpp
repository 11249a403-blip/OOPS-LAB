/*
--------------------------------------------
Experiment No: 12-A
AIM:
To implement a C++ program that demonstrates overloading
of the assignment operator (=) to perform a deep copy.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class named 'MyString' with:
   - A character pointer 'data' for storing string data.
   - An integer 'length' for the string length.
3. Create constructors to allocate memory dynamically for strings.
4. Define a destructor to free allocated memory.
5. Overload the assignment operator (=) to:
   a) Avoid self-assignment.
   b) Deallocate existing memory.
   c) Allocate new memory and copy the content from another object.
6. In main(), create two objects and assign one to another using (=).
7. Display both objects to confirm deep copy.
8. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* data;
    int length;

public:
    // Default constructor
    MyString() {
        length = 0;
        data = new char[1];
        data[0] = '\0';
    }

    // Parameterized constructor
    MyString(const char* str) {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }

    // Copy constructor
    MyString(const MyString& other) {
        length = other.length;
        data = new char[length + 1];
        strcpy(data, other.data);
    }

    // Assignment operator overloading
    MyString& operator=(const MyString& other) {
        if (this != &other) { // Avoid self-assignment
            delete[] data; // Free existing memory
            length = other.length;
            data = new char[length + 1];
            strcpy(data, other.data);
        }
        return *this; // Return current object reference
    }

    // Display function
    void display() const {
        cout << data << endl;
    }

    // Destructor
    ~MyString() {
        delete[] data;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("World");

    cout << "Before assignment:" << endl;
    cout << "str1 = ";
    str1.display();
    cout << "str2 = ";
    str2.display();

    // Use overloaded assignment operator
    str2 = str1;

    cout << "\nAfter assignment:" << endl;
    cout << "str1 = ";
    str1.display();
    cout << "str2 = ";
    str2.display();

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Before assignment:
str1 = Hello
str2 = World

After assignment:
str1 = Hello
str2 = Hello
--------------------------------------------
RESULT:
Thus, the program to demonstrate assignment operator overloading
for deep copy in C++ (operator=) was successfully executed.
--------------------------------------------
*/
