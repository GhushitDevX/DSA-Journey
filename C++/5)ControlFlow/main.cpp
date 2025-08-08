#include <iostream>
using namespace std;

int main() {

    // Step 1: Declare a variable for user's budget
    int budget;  // Stores whole numbers (in currency units)

    // Step 2: Ask the user for their budget
    cout << "Enter your budget: ";
    cin >> budget; // Takes input from the user

    // -------------------------------------------
    // 1️⃣ IF-ELSE IF-ELSE STATEMENTS
    // -------------------------------------------
    // Checks conditions in order — only one block runs

    if (budget > 10000000) { // 10 million+
        cout << "You can buy a luxury car." << endl;
    } 
    else if (budget > 5000000) { // 5M - 10M
        cout << "You can buy a mid-range car." << endl;
    } 
    else if (budget > 1000000) { // 1M - 5M
        cout << "You can buy an economy car." << endl;
    } 
    else { // 1M or less
        cout << "You might consider public transport or saving more." << endl;
    }

    // -------------------------------------------
    // 2️⃣ NESTED IF-ELSE STATEMENTS
    // -------------------------------------------
    // Same logic as above, but inside multiple levels
    // Used when you want finer control inside each branch

    if (budget > 10000000) {
        cout << "You can buy a luxury car." << endl;
    } 
    else {
        if (budget > 5000000) {
            cout << "You can buy a mid-range car." << endl;
        } 
        else {
            if (budget > 1000000) {
                cout << "You can buy an economy car." << endl;
            } 
            else {
                cout << "You might consider public transport or saving more." << endl;
            }
        }
    }

    // -------------------------------------------
    // 3️⃣ MORE DETAILED OPTIONS BASED ON BUDGET
    // -------------------------------------------
    if (budget > 10000000) {
        cout << "Luxury car options:" << endl;
        cout << "1. Rolls Royce" << endl;
        cout << "2. Bentley" << endl;
    } 
    else if (budget > 5000000) {
        cout << "Mid-range car options:" << endl;
        cout << "1. BMW" << endl;
        cout << "2. Audi" << endl;
    } 
    else if (budget > 1000000) {
        cout << "Economy car options:" << endl;
        cout << "1. Honda" << endl;
        cout << "2. Toyota" << endl;
    } 
    else {
        cout << "Consider saving more for a better car." << endl;
    }

    return 0; // Program ends successfully
}
