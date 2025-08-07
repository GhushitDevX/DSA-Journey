#include<iostream>
using namespace std;

int main() {
    /*
                                                            C++ Data Types
                                                          |
                                    ---------------------------------------------------------
                                    |                                                       |
                        Built-in / Primitive Types                           Types created by the programmer
                                    |                                --------------------------------------------
                                    |                                |                                          |
                                    |                          Derived Data Types                   User-Defined Data Types
                                    |
                                    |
                --------------------------------------------
                |                     |                    |
             Integer            Floating Point            Void
                |                     |
        -----------           -----------------
        |         |           |               |
       int       char       float           double


        🔹 Built-in (Primitive) Data Types:
        These are the basic data types provided by C++.

        ➤ Integer:
            - `int`: Used to store whole numbers (positive or negative), e.g., 10, -5
            - `char`: Stores a single character, e.g., 'A', 'z'. Internally stores ASCII value.

        ➤ Floating Point:
            - `float`: Stores decimal numbers with less precision (e.g., 3.14)
            - `double`: Stores decimal numbers with more precision (e.g., 3.14159265)

        ➤ Void:
            - `void`: Represents "nothing" or "no value". Commonly used for functions that don’t return anything.
        */

        int age = 25; // Integer type
        char grade = 'A'; // Character type
        float height = 5.9f; // Floating point type (single precision)
        double weight = 55.69887; // Floating point type (double precision)
        bool isActive = true; // Boolean type (true or false)
        bool isAvailable = 1; // Boolean type (1 for true, 0 for false)
        bool isEmpty = false; // Boolean type (0 for false, 1 for true)
        bool isValid = 0; // Boolean type (0 for false, 1 for true)
        

        cout << "Age: " << age << endl; // Output: Age: 25
        cout << "Grade: " << grade << endl; // Output: Grade: A
        cout << "Height: " << height << endl; // Output: Height: 5.9
        cout << "Weight: " << weight << endl; // Output: Pi: 3.14159
        cout << "Is Active: " << isActive << endl; // Output: Is Active: 1
        cout << "Is Available: " << isAvailable << endl; // Output: Is Available: 1
        cout << "Is Empty: " << isEmpty << endl; // Output: Is Empty: 0
        cout << "Is Valid: " << isValid << endl; // Output: Is Valid: 0

        /*
        🔹 Derived Data Types:
        These are built from primitive types.
        ➤ Examples include:
            - Arrays (`int arr[10]`)
            - Pointers (`int* ptr`)
            - Functions (`void greet()`)
            - References (`int& ref = x`)

        🔹 User-Defined Data Types:
        These are custom types created by the programmer.
        ➤ Examples include:
            - `struct` → Used to group related variables under one name.
            - `class` → Blueprint for creating objects (object-oriented programming).
            - `union` → Special data structure to store different data types in the same memory location.
            - `enum` → Used to define named constants (like days of the week).
        */

}