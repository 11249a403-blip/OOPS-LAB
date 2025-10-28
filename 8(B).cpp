/* 
--------------------------------------------
Experiment No: 8(b)
AIM:
To implement a C++ program that demonstrates dynamic memory
allocation for an array using the 'new' and 'delete[]' operators.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Declare a variable 'size' to store the number of elements.
3. Ask the user to enter the size of the array.
4. Dynamically allocate memory for an integer array using 'new'.
5. Input elements into the array using a loop.
6. Display the entered elements.
7. Deallocate the dynamically allocated array using 'delete[]'.
8. Set the pointer to nullptr after deletion (best practice).
9. Stop the program.
--------------------------------------------
CODE:
*/
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements for the dynamic array: ";
    cin >> size;

    // Dynamically allocate memory for an array of integers
    int* dynamic_array = new int[size];

    // Read values into the array
    cout << "Enter " << size << " integer values:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> dynamic_array[i];
    }

    // Print the array elements
    cout << "The elements of the dynamic array are: ";
    for (int i = 0; i < size; i++) {
        cout << dynamic_array[i] << " ";
    }
    cout << endl;

    // Deallocate the entire array
    delete[] dynamic_array;
    dynamic_array = nullptr;

    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT:
Enter the number of elements for the dynamic array: 5
Enter 5 integer values:
10 20 30 40 50
The elements of the dynamic array are: 10 20 30 40 50
--------------------------------------------
RESULT:
Thus, the program successfully demonstrates dynamic memory
allocation and deallocation for an array using 'new' and 'delete[]'
operators in C++.
--------------------------------------------
*/
