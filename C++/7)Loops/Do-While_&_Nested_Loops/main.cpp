// =============================
// Do-While Loop and Nested Loops in C++
// =============================

#include <iostream> 
using namespace std;

int main() {

    // ============================================
    // 1️⃣ Do-While Loop Example
    // ============================================
    /*
        Syntax:
        do {
            // Code to execute
        } while (condition);

        Key Points:
        - The "do" block ALWAYS runs at least once (even if condition is false initially).
        - Condition is checked AFTER executing the block.
    */

    cout << "Do-While Loop Output:" << endl;

    int i = 1; // Loop counter, starting at 1
    do {
        cout << i << " ";  // Print current value of i
        i++;               // Increment counter by 1
    } while (i <= 5);      // Continue looping as long as i <= 5

    cout << endl << endl;

    // ============================================
    // 2️⃣ Nested Loops Example
    // ============================================
    /*
        Syntax:
        for (initialization; condition; update) {    // Outer loop
            for (initialization; condition; update) { // Inner loop
                // Code that runs in each inner loop iteration
            }
        }

        Key Points:
        - A "nested loop" is a loop inside another loop.
        - The inner loop runs completely for EACH iteration of the outer loop.
        - Commonly used for grids, tables, and pattern printing.
    */

    cout << "Nested Loops Output:" << endl;

    for (int outer = 1; outer <= 3; outer++) { // Outer loop: runs 3 times
        for (int inner = 1; inner <= 2; inner++) { // Inner loop: runs 2 times per outer loop
            cout << "Outer: " << outer << ", Inner: " << inner << endl;
        }
    }

    return 0;
}
