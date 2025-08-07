#include <iostream>
using namespace std;

int main() {

    /*
    👉 What is a Variable?
    A variable is like a *named container* in memory where we can store values.
    Think of it like a labeled box that holds a value.

    📌 Syntax to Declare a Variable:
        DataType variableName = value;  // 'value' is optional

    Example:
        int age = 25; // creates an integer variable named 'age' and stores 25 in it
    */

    // 1️⃣ DECLARATION (without value)
    int number;  // Declare an integer variable named 'number'
    number = 10; // Assign the value 10 to 'number'
    cout << "Number: " << number << endl; // Prints: Number: 10

    // 2️⃣ UNINITIALIZED VARIABLE
    int marks; // No value assigned yet — it may contain a garbage (random) value
    cout << "Marks: " << marks << endl; // Prints an unknown value (not safe to rely on)

    // 3️⃣ DEFINITION + INITIALIZATION
    int score = 100; // Declare and assign value at the same time
    cout << "Score: " << score << endl; // Prints: Score: 100

    // 4️⃣ UPDATING OR MANIPULATION OF A VARIABLE
    number = 20; // Now 'number' is updated from 10 to 20
    cout << "Updated Number: " << number << endl; // Prints: Updated Number: 20

    return 0;
}
