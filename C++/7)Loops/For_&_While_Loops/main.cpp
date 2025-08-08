// ===============================================
//   For Loop and While Loop in C++
// ===============================================

#include <iostream> 
using namespace std;

int main() {

    // ==============================
    // 1️⃣ FOR LOOP
    // ==============================
    // Syntax:
    // for (initialization; condition; update) {
    //      // loop body
    // }
    //
    // Meaning:
    // - Initialization: Runs once before the loop starts (e.g., int i = 1)
    // - Condition: Loop runs while this is true (e.g., i <= 5)
    // - Update: Runs after each loop iteration (e.g., i++)
    //
    // Example: Print numbers from 1 to 5
    cout << "For Loop Output:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << " "; // Prints numbers 1 2 3 4 5
    }
    cout << endl; // Move to the next line after loop ends


    // ==============================
    // 2️⃣ WHILE LOOP
    // ==============================
    // Syntax:
    // while (condition) {
    //      // loop body
    // }
    //
    // Meaning:
    // - Condition is checked first.
    // - If true → loop body runs, then condition is checked again.
    // - If false → loop stops immediately.
    //
    // Example: Print numbers from 1 to 5
    cout << "While Loop Output:" << endl;

    int j = 1; // Initialization is done separately
    while (j <= 5) { // Loop runs while j is less than or equal to 5
        cout << j << " "; // Prints numbers 1 2 3 4 5
        j++; // Increment j by 1 (update step)
    }
    cout << endl; // Move to the next line after loop ends


    // ==============================
    // Key Difference:
    // - FOR loop → Best when number of iterations is known.
    // - WHILE loop → Best when you only know the condition to stop.
    // ==============================

    return 0;
}
