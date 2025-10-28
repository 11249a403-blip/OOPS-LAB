/* 
--------------------------------------------
Experiment No: 8(a)
AIM:
To implement a C++ program that demonstrates dynamic memory
allocation for an integer using the 'new' and 'delete' operators.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Declare a pointer variable of type int.
3. Dynamically allocate memory for an integer using 'new' and
   initialize it to 10.
4. Display the value stored at the dynamically allocated memory.
5. Deallocate the memory using 'delete' to avoid memory leaks.
6. Set the pointer to nullptr after deletion (best practice).
7. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an integer and initialize it to 10
    int* ptr_int = new int(10);

    // Print the value stored at the allocated address
    cout << "Value of dynamically allocated integer: " << *ptr_int << endl;

    // Deallocate the memory to prevent a memory leak
    delete ptr_int;
    ptr_int = nullptr; // Set the pointer to nullptr after deletion (best practice)

    return 0;
}

/*
--------------------------------------------
OUTPUT:
Value of dynamically allocated integer: 10
--------------------------------------------
RESULT:
Thus, the program successfully demonstrates dynamic memory
allocation and deallocation using 'new' and 'delete' operators in C++.
--------------------------------------------
*/
