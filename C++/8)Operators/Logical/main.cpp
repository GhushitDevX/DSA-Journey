#include <iostream> // For input/output
using namespace std;

int main() {
    // ============================================
    // 1️⃣ What are Logical Operators?
    // ============================================
    /*
        📌 Definition:
        Logical operators let you combine, compare, or invert boolean values (true / false).

        ✅ Common Logical Operators in C++:
        1. Logical AND (&&) → true if BOTH operands are true
        2. Logical OR  (||) → true if AT LEAST ONE operand is true
        3. Logical NOT (!)  → inverts the truth value

        ⚠️ Key Notes:
        - Used in conditions: if, while, for loops, etc.
        - Non-boolean values are auto-converted:
              0 → false
              non-zero → true
    */

    cout << "=== Logical Operators Output ===" << endl;

    bool a = true, b = false; // Example boolean values

    // --------------------------------------------
    // AND Operator (&&)
    // --------------------------------------------
    cout << "AND (a && b): " << (a && b) << endl; // Output: 0
    /*
        a = true, b = false
        AND → both must be true → result = false
    */

    // --------------------------------------------
    // OR Operator (||)
    // --------------------------------------------
    cout << "OR (a || b): " << (a || b) << endl; // Output: 1
    /*
        a = true, b = false
        OR → at least one must be true → result = true
    */

    // --------------------------------------------
    // NOT Operator (!)
    // --------------------------------------------
    cout << "NOT (!a): " << (!a) << endl; // Output: 0
    /*
        a = true
        NOT → invert → result = false
    */

    cout << "NOT (!b): " << (!b) << endl; // Output: 1
    /*
        b = false
        NOT → invert → result = true
    */

    // ============================================
    // 2️⃣ Combining Logical Operators
    // ============================================
    cout << "a && !b: " << (a && !b) << endl;       // true && true → true
    cout << "a || !b: " << (a || !b) << endl;       // true || true → true
    cout << "!a || b: " << (!a || b) << endl;       // false || false → false
    cout << "!a && !b: " << (!a && !b) << endl;     // false && true → false
    cout << "a && b || !b: " << (a && b || !b) << endl; // false || true → true
    cout << "a || b && !a: " << (a || b && !a) << endl; // true || false → true

    // ============================================
    // 3️⃣ Precedence & Short-Circuiting
    // ============================================
    /*
        Precedence (highest → lowest):
        1. !   (NOT)
        2. &&  (AND)
        3. ||  (OR)

        Example: a || b && !a
        - Step 1: !a
        - Step 2: b && !a
        - Step 3: a || (result)

        ⚡ Short-Circuiting:
        - AND (&&) → stops early if the first operand is false
        - OR  (||) → stops early if the first operand is true
    */

    // ============================================
    // 4️⃣ MEMORY TRICKS 🧠
    // ============================================
    /*
        🔹 AND (&&) → "All must Agree" → if one is false, whole thing is false.
        🔹 OR  (||) → "Only one Required" → if one is true, whole thing is true.
        🔹 NOT (!)  → "Flip it!" → true → false, false → true.

        🎯 Shortcut to remember precedence:
        N → A → O   (NOT, AND, OR)
        Think: "No Apples Oranges" 🍏🍊
    */

    return 0;
}
