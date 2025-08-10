// ===============================================
//   FOR Loop and WHILE Loop in C++
// ===============================================

#include <iostream> 
using namespace std;

int main() {

    // ==============================
    // 1️⃣ FOR LOOP
    // ==============================
    /*
        📌 Definition:
        A FOR loop repeats a block of code a fixed number of times.
        It has 3 parts all in one line: 
        1. Initialization → Set starting value (runs only once at the start)
        2. Condition → Checked before each iteration; loop continues while TRUE
        3. Update → Changes the loop variable after each run

        🔹 Syntax:
            for (initialization; condition; update) {
                // loop body
            }
        
        🔹 Example: Print numbers 1 to 5
    */
    cout << "For Loop Output:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << " "; // Prints: 1 2 3 4 5
    }
    cout << endl; // Goes to the next line after loop finishes


    // ==============================
    // 2️⃣ WHILE LOOP
    // ==============================
    /*
        📌 Definition:
        A WHILE loop keeps running **as long as** its condition is TRUE.
        You must handle initialization and update **separately**.

        🔹 Steps:
        1. Initialization → Do it before the loop
        2. Condition → Checked first; if false, loop never runs
        3. Loop body → Executes if condition is true
        4. Update → Change loop variable inside the loop body

        🔹 Syntax:
            while (condition) {
                // loop body
            }

        🔹 Example: Print numbers 1 to 5
    */
    cout << "While Loop Output:" << endl;

    int j = 1; // Initialization
    while (j <= 5) { // Condition checked before each run
        cout << j << " "; // Prints: 1 2 3 4 5
        j++; // Update step
    }
    cout << endl;


    // ==============================
    // 3️⃣ KEY DIFFERENCES
    // ==============================
    /*
        ✅ FOR loop:
           - Use when you know EXACTLY how many times to run
           - All parts (init, condition, update) are in one line

        ✅ WHILE loop:
           - Use when you DON'T know how many times to run
           - You only know the condition for stopping
           - Initialization & update happen separately
    */

    return 0;
}


// ===============================================
// 📦 MEMORY TRICKS
// ===============================================

/*
1. 🎯 FOR loop = "Fixed Count" → F for Fixed
   - Good when count is PRE-DECIDED

2. 🔄 WHILE loop = "Watch Condition"
   - Keeps running WHILE condition is true

3. 🧠 Think of it like:
   - FOR = “Start to End in Steps” → like counting 1 to 10
   - WHILE = “Keep Going Until Told to Stop” → like waiting until rain stops

4. Formula to Remember:
   FOR → All in ONE line (Init; Check; Change)
   WHILE → Spread OUT (Init, Check, Body, Change)
*/
