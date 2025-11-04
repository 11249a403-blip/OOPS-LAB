/*
--------------------------------------------
Experiment No: 24
AIM:
To demonstrate the use of file pointers in C++ using seekg(), seekp(), tellg(), and tellp().
--------------------------------------------
THEORY:
File pointers are used to manipulate file reading and writing positions.
- seekg(): Moves the input file pointer.
- seekp(): Moves the output file pointer.
- tellg() / tellp(): Return current positions of the file pointers.
These functions allow random file access and modification.
--------------------------------------------
ALGORITHM:
1. Create a file and write data using ofstream.
2. Open the file for reading using ifstream.
3. Use seekg() to move the file pointer.
4. Use tellg() to display the current position.
5. Read data and display the output.
--------------------------------------------
CODE:
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("sample.txt");
    fout << "Hello, this is a file pointer example.";
    fout.close();

    ifstream fin("sample.txt");
    fin.seekg(0, ios::end);
    cout << "End position: " << fin.tellg() << endl;

    fin.seekg(7, ios::beg);
    cout << "Moved to position 7" << endl;

    string word;
    fin >> word;
    cout << "Word after position 7: " << word << endl;

    fin.close();
    return 0;
}

/*
--------------------------------------------
SAMPLE OUTPUT:
End position: 39
Moved to position 7
Word after position 7: this
--------------------------------------------
RESULT:
Thus, file pointer operations were successfully demonstrated
using seekg(), seekp(), tellg(), and tellp().
--------------------------------------------
*/
