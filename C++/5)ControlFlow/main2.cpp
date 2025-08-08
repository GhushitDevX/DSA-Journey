#include <iostream>
using namespace std;

int main() {

    // -------------------------------------------
    // Example 1: Switch-Case with Integer Choice
    // -------------------------------------------

    int choice; // Stores the user's numeric choice

    cout << "Enter your choice (1-3): ";
    cin >> choice; // Takes number input from the user

    // Switch-Case starts here
    switch (choice) {
        case 1: // Runs if choice == 1
            cout << "You chose option 1." << endl;
            break; // Ends this case, avoids running others
        case 2: // Runs if choice == 2
            cout << "You chose option 2." << endl;
            break;
        case 3: // Runs if choice == 3
            cout << "You chose option 3." << endl;
            break;
        default: // Runs if none of the above cases match
            cout << "Invalid choice. Please choose between 1 and 3." << endl;
            break;
    }

    // -------------------------------------------
    // Example 2: Switch-Case with Character Input
    // -------------------------------------------

    char grade; // Stores a letter grade (A–F)

    cout << "Enter your grade (A-F): ";
    cin >> grade; // Takes character input

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
