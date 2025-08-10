#include <iostream>  // Required for input/output (cout, cin)
using namespace std;

int main() {
    // ============================================
    // 1️⃣ What are Unary Operators?
    // ============================================
    /*
        Definition:
        - Unary operators are operators that work on ONLY ONE operand.
          Example:  ++a,  --b,  -c,  !flag,  ~num

        ✅ Common Unary Operators in C++:
        1. Increment (++): Increase value by 1
        2. Decrement (--): Decrease value by 1
        3. Logical NOT (!): Flips true ↔ false
        4. Bitwise NOT (~): Inverts all bits (0 → 1, 1 → 0)
        5. Unary Plus (+): Indicates a positive number (rarely used explicitly)
        6. Unary Minus (-): Negates a number (changes sign)

        ⚠️ Special Note on ++ and --:
        - **Prefix form** (++a / --a): Changes the value first, then uses it.
        - **Postfix form** (a++ / a--): Uses the value first, then changes it.
    */

    cout << "=== Unary Operators Output ===" << endl;

    int a = 5;
    cout << "Original value of a: " << a << endl;

    // --------------------------------------------
    // Prefix Increment (++a)
    // --------------------------------------------
    cout << "Prefix Increment (++a): " << ++a << endl;
    /*
        Step-by-step:
        1. a = 5
        2. ++a → a becomes 6
        3. Value (6) is used in this statement
    */

    // --------------------------------------------
    // Postfix Increment (a++)
    // --------------------------------------------
    cout << "Postfix Increment (a++): " << a++ << endl;
    /*
        Step-by-step:
        1. a is currently 6
        2. The current value (6) is used FIRST
        3. After using, a becomes 7
    */

    cout << "Value of a now: " << a << endl;  // a is 7

    // --------------------------------------------
    // Prefix Decrement (--a)
    // --------------------------------------------
    cout << "Prefix Decrement (--a): " << --a << endl;
    /*
        Step-by-step:
        1. a = 7
        2. --a → a becomes 6
        3. Value (6) is used in this statement
    */

    // --------------------------------------------
    // Postfix Decrement (a--)
    // --------------------------------------------
    cout << "Postfix Decrement (a--): " << a-- << endl;
    /*
        Step-by-step:
        1. a = 6
        2. The current value (6) is used FIRST
        3. After using, a becomes 5
    */

    cout << "Value of a now: " << a << endl;  // a is 5

    // ============================================
    // 2️⃣ Extra Examples of Other Unary Operators
    // ============================================
    bool flag = true;
    cout << "Logical NOT (!flag): " << !flag << endl; // true → false (prints 0)

    int num = 5;
    cout << "Unary Minus (-num): " << -num << endl;   // Negates → -5

    int bits = 5; // binary: 0000 0101
    cout << "Bitwise NOT (~bits): " << ~bits << endl; // flips bits (result depends on system's int size)

    return 0;
}
