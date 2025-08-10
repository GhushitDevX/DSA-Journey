#include <iostream>
using namespace std;

int main() {

    int budget;  
    cout << "Enter your budget: "; 
    cin >> budget; 

    // ======================================================
    // 3️⃣ IF-ELSE IF-ELSE LADDER
    // ======================================================
    // This checks multiple conditions in sequence.
    // Once a condition is TRUE, its block runs and the rest are skipped.

    if (budget > 10000000) { // If budget is more than 10 million
        cout << "You can buy a luxury car." << endl;
    } 
    else if (budget > 5000000) { // If budget is between 5M and 10M
        cout << "You can buy a mid-range car." << endl;
    } 
    else if (budget > 1000000) { // If budget is between 1M and 5M
        cout << "You can buy an economy car." << endl;
    } 
    else { // If budget is 1M or less
        cout << "You might consider public transport or saving more." << endl;
    }

    // ======================================================
    // 4️⃣ NESTED IF-ELSE STATEMENTS
    // ======================================================
    // Here, decisions are made inside other decisions.
    // Useful when one condition leads to more specific checks.

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

    // ======================================================
    // 5️⃣ MORE DETAILED OPTIONS
    // ======================================================
    // Here, based on the budget range, we show specific car brands.

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

    return 0; 
}
