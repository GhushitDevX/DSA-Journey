#include <iostream>
using namespace std;

int main() {

    // =====================================================
    // 1️⃣ INTRODUCTION: What is a Variable?
    // =====================================================
    /*
        📌 DEFINITION:
        A variable is like a *named container* in your computer's memory 
        that stores data. You can put something inside it, take it out, 
        or replace it with something else later.

        💡 Think of it like a "labeled box" — the label is the variable name, 
        and the content is the value it stores.

        -----------------------------------------------------
        📌 SYNTAX to declare a variable:
            DataType variableName = value;   // 'value' is optional
        -----------------------------------------------------

        ✅ Example:
            int age = 25; // Creates an integer variable named 'age' with value 25

        📍 NOTE:
        - DataType decides what kind of value can be stored (int, float, char, etc.).
        - Variable names should be meaningful and follow rules (no spaces, no starting with numbers).
    */

    // =====================================================
    // 2️⃣ VARIABLE DECLARATION (without assigning a value)
    // =====================================================
    int number;   // Declare an integer variable named 'number'
    number = 10;  // Assign value 10 later
    cout << "Number: " << number << endl; // Output: Number: 10

    // =====================================================
    // 3️⃣ UNINITIALIZED VARIABLE
    // =====================================================
    int marks; // Declared but not given a value
    cout << "Marks: " << marks << endl; 
    // ⚠ WARNING: This will print a "garbage value" (random leftover data in memory)

    // =====================================================
    // 4️⃣ DEFINITION + INITIALIZATION (at the same time)
    // =====================================================
    int score = 100; // Declare and assign value immediately
    cout << "Score: " << score << endl; // Output: Score: 100

    // =====================================================
    // 5️⃣ UPDATING / REASSIGNING A VARIABLE
    // =====================================================
    number = 20; // Change value from 10 to 20
    cout << "Updated Number: " << number << endl; // Output: Updated Number: 20

    // =====================================================
    // 6️⃣ MULTIPLE VARIABLE DECLARATIONS
    // =====================================================
    int x = 5, y = 10, z = 15; 
    cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    return 0;
}

/*
=====================================================
🧠 MEMORY TRICKS for VARIABLES:
=====================================================
1. BOX analogy:
   - Variable name = label on the box.
   - Value = item inside the box.
   - DataType = type of box (only fits certain items).

2. GARBAGE WARNING:
   - If you don’t put anything in the box after creating it, 
     it might have random junk from before.

3. EASY FORMULA:
   DECLARE → (optional) INITIALIZE → USE → (optional) UPDATE

4. RULE to remember:
   "Type Name = Value;"
   Example: int age = 25;

=====================================================
*/
