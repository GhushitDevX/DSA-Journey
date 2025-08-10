#include <iostream> // Required for input/output (cin, cout)
using namespace std;

int main() {

    // =====================================================
    // 📌 INTRODUCTION: What are Relational Operators?
    // =====================================================
    /*
        📖 Definition:
        Relational operators are used to COMPARE two values.
        They check the relationship between the values and 
        return a BOOLEAN result → true (1) or false (0).

        ✅ Why use them?
        - They help in decision-making (if-else statements, loops)
        - They are essential for comparisons in programs

        🔹 6 Main Relational Operators in C++:
        
        1. ==   (Equal to)              → true if both values are equal
        2. !=   (Not equal to)          → true if values are different
        3. >    (Greater than)          → true if left > right
        4. <    (Less than)             → true if left < right
        5. >=   (Greater than or equal) → true if left >= right
        6. <=   (Less than or equal)    → true if left <= right

        ⚠️ KEY POINTS:
        - Result is always boolean: true(1) / false(0)
        - Works with numbers, characters, etc.
        - Comparison is NOT assignment!
          Example: "x = y" assigns, but "x == y" compares.
    */

    cout << "=== Relational Operators Demonstration ===\n\n";

    int x = 10, y = 20; // Example integer values

    // ----------------------------------------
    // 1️⃣ EQUAL TO (==)
    // ----------------------------------------
    cout << "Equal to (x == y): " << (x == y) << endl;
    // Example: 10 == 20 → false (0)

    // ----------------------------------------
    // 2️⃣ NOT EQUAL TO (!=)
    // ----------------------------------------
    cout << "Not equal to (x != y): " << (x != y) << endl;
    // Example: 10 != 20 → true (1)

    // ----------------------------------------
    // 3️⃣ GREATER THAN (>)
    // ----------------------------------------
    cout << "Greater than (x > y): " << (x > y) << endl;
    // Example: 10 > 20 → false (0)

    // ----------------------------------------
    // 4️⃣ LESS THAN (<)
    // ----------------------------------------
    cout << "Less than (x < y): " << (x < y) << endl;
    // Example: 10 < 20 → true (1)

    // ----------------------------------------
    // 5️⃣ GREATER THAN OR EQUAL TO (>=)
    // ----------------------------------------
    cout << "Greater than or equal to (x >= y): " << (x >= y) << endl;
    // Example: 10 >= 20 → false (0)

    // ----------------------------------------
    // 6️⃣ LESS THAN OR EQUAL TO (<=)
    // ----------------------------------------
    cout << "Less than or equal to (x <= y): " << (x <= y) << endl;
    // Example: 10 <= 20 → true (1)

    return 0;
}

/* 
=====================================================
🧠 MEMORY TRICKS for Relational Operators
=====================================================
1. "Equal twins ==": Two equal signs mean checking equality.
2. "NOT friends !=": If they’re different, they’re NOT equal.
3. "BIG > small": Arrow points to the bigger side.
4. "small < BIG": Arrow points to the smaller side.
5. "≥ means big OR equal": Greater or Equal.
6. "≤ means small OR equal": Less or Equal.

💡 QUICK TIP:
- Always remember: "One equals (=) assigns, Two equals (==) compares."
- Think of these as YES/NO questions that the computer answers with 1 or 0.
=====================================================
*/
