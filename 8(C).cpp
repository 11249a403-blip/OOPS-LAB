/* 
--------------------------------------------
Experiment No: 8(c)
AIM:
To implement a C++ program that demonstrates dynamic object
creation using constructors and destructors.
--------------------------------------------
THEORY:
When a class object is dynamically allocated using the 'new' operator,
its constructor is automatically called. Similarly, when the object is
deallocated using 'delete', the destructor is automatically invoked.
This mechanism helps manage resources such as memory, files, etc.
--------------------------------------------
ALGORITHM:
1. Start the program.
2. Define a class 'Box' with:
   a) A constructor that initializes the box length and displays a message.
   b) A destructor that displays a message when the object is destroyed.
3. In the main() function:
   a) Dynamically allocate a single object of 'Box' using 'new'.
   b) Use 'delete' to deallocate the object and trigger the destructor.
   c) Dynamic
