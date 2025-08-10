// =======================================
// 📚 Do-While Loop & Nested Loops in C++
// =======================================

#include <iostream>
using namespace std;

int main() {

    // ============================================
    // 1️⃣ Do-While Loop Example
    // ============================================
    /*
        🔹 What is a Do-While Loop?
        - A loop that runs the code FIRST, then checks the condition.
        - This means the code block will ALWAYS run at least ONCE.

        🔹 Syntax:
            do {
                // Code to execute
            } while (condition);

        🔹 Flow:
            Step 1 → Run the code inside { }
            Step 2 → Check the condition
            Step 3 → If TRUE → repeat; If FALSE → stop
    */

    cout << "Do-While Loop Output:" << endl;

    int i = 1; // Loop counter starts at 1

    // Loop will run at least once, even if condition is false at start
    do {
        cout << i << " "; // Print current value of i
        i++;              // Increase i by 1
    } while (i <= 5);     // Repeat while i is 5 or less

    cout << endl << endl; // Line break for clarity

    // ============================================
    // 2️⃣ Nested Loops Example
    // ============================================
    /*
        🔹 What is a Nested Loop?
        - A loop inside another loop.
        - Outer loop runs → Inner loop runs completely for each outer loop iteration.

        🔹 Why use it?
        - Used for grids, tables, multiplication charts, pattern printing, etc.

        🔹 Syntax:
            for (initialization; condition; update) {    // Outer loop
                for (initialization; condition; update) { // Inner loop
                    // Code runs for each inner iteration
                }
            }

        🔹 Flow:
            - Outer loop iteration starts
            - Inner loop runs completely
            - Outer loop moves to next iteration
    */

    cout << "Nested Loops Output:" << endl;

    for (int outer = 1; outer <= 3; outer++) { // Outer loop: runs 3 times
        for (int inner = 1; inner <= 2; inner++) { // Inner loop: runs 2 times each outer loop
            cout << "Outer: " << outer << ", Inner: " << inner << endl;
        }
    }

    return 0;
}
