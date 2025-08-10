#include <iostream>
using namespace std;

int main() {

    // ============================================================
    // 1️⃣ Example 1: SWITCH-CASE with INTEGER choice
    // ============================================================

    /*
        📌 Concept:
        A switch statement is like a multiple-choice control structure.
        - It checks the value of a single variable/expression.
        - Matches it against "case" labels.
        - Runs the code inside the matching case.
        - If no match is found, the "default" case runs.

        ✅ Why use switch instead of multiple if-else?
           - Cleaner, easier to read when comparing the SAME variable
           - Often faster for fixed choices
    */

    int choice;

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Switch starts here
    switch (choice) {
        case 1: // If choice == 1
            cout << "You chose option 1." << endl;
            break; // Stops here, prevents going into next case

        case 2: // If choice == 2
            cout << "You chose option 2." << endl;
            break;

        case 3: // If choice == 3
            cout << "You chose option 3." << endl;
            break;

        default: // If choice is NOT 1, 2, or 3
            cout << "Invalid choice. Please choose between 1 and 3." << endl;
            break;
    }

    // ============================================================
    // 2️⃣ Example 2: SWITCH-CASE with CHARACTER input
    // ============================================================

    /*
        📌 Note:
        Switch also works with characters ('A', 'B', etc.).
        It compares the exact ASCII/Unicode value of the character.
    */

    char grade;

    cout << "Enter your grade (A-F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;

        case 'B':
            cout << "Good job!" << endl;
            break;

        case 'C':
            cout << "You passed." << endl;
            break;

        case 'D':
            cout << "You need to improve." << endl;
            break;

        case 'F':
            cout << "Failed. Better luck next time." << endl;
            break;

        default:
            cout << "Invalid grade. Please enter a grade between A and F." << endl;
            break;
    }

    return 0;
}
