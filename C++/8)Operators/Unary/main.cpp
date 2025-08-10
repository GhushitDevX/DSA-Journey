#include <iostream>  // Required for input/output (cout, cin)
using namespace std;

int main() {
    // ============================================
    // 1️⃣ What are Unary Operators?
    // ============================================
    /*
        📌 Definition:
        Unary operators are operators that work on ONLY ONE operand.
        They either modify the value, test it, or change its form.

        ✅ Common Unary Operators in C++:
        1. Increment (++): Increase value by 1
        2. Decrement (--): Decrease value by 1
        3. Logical NOT (!): Flips boolean value → true ↔ false
        4. Bitwise NOT (~): Inverts every bit (0 → 1, 1 → 0)
        5. Unary Plus (+): States a positive number (rarely used explicitly)
        6. Unary Minus (-): Negates a number (changes its sign)

        ⚠️ Special Note on ++ and --:
        - **Prefix form** (++a / --a): Change value FIRST, then use it.
        - **Postfix form** (a++ / a--): Use value FIRST, then change it.
    */

    cout << "=== Unary Operators Output ===" << endl;

    int a = 5;
    cout << "Original value of a: " << a << endl;

    // --------------------------------------------
    // Prefix Increment (++a)
    // --------------------------------------------
    cout << "Prefix Increment (++a): " << ++a << endl;
    /*
        Steps:
        1. a = 5
        2. ++a → a becomes 6
        3. Statement uses 6
    */

    // --------------------------------------------
    // Postfix Increment (a++)
    // --------------------------------------------
    cout << "Postfix Increment (a++): " << a++ << endl;
    /*
        Steps:
        1. a = 6
        2. Statement uses 6
        3. After use, a becomes 7
    */

    cout << "Value of a now: " << a << endl;  // a is 7

    // --------------------------------------------
    // Prefix Decrement (--a)
    // --------------------------------------------
    cout << "Prefix Decrement (--a): " << --a << endl;
    /*
        Steps:
        1. a = 7
        2. --a → a becomes 6
        3. Statement uses 6
    */

    // --------------------------------------------
    // Postfix Decrement (a--)
    // --------------------------------------------
    cout << "Postfix Decrement (a--): " << a-- << endl;
    /*
        Steps:
        1. a = 6
        2. Statement uses 6
        3. After use, a becomes 5
    */

    cout << "Value of a now: " << a << endl;  // a is 5

    // ============================================
    // 2️⃣ Extra Examples of Other Unary Operators
    // ============================================
    bool flag = true;
    cout << "Logical NOT (!flag): " << !flag << endl; // true → false (prints 0)

    int num = 5;
    cout << "Unary Minus (-num): " << -num << endl;   // 5 → -5

    int bits = 5; // Binary: 0000 0101
    cout << "Bitwise NOT (~bits): " << ~bits << endl; // Inverts all bits

    // ============================================
    // 3️⃣ MEMORY TRICKS 🧠
    // ============================================
    /*
        🔹 ++ → "Add one more"
        🔹 -- → "Take one away"
        🔹 !  → "Flip the truth" (true ↔ false)
        🔹 ~  → "Flip the bits" (0 ↔ 1)
        🔹 +  → "Keep it positive"
        🔹 -  → "Make it the opposite sign"

        🎯 Prefix vs Postfix:
        - PREfix → "PREpare first" (change before using)
        - POSTfix → "POSTpone change" (use first, change later)

        💡 Think:
        PREfix = PREpare value before use
        POSTfix = Use now, fix later
    */

    return 0;
}
