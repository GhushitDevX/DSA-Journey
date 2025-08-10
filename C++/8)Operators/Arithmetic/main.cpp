#include <iostream> // Required for input (cin) and output (cout)
using namespace std;

int main() {

    // =====================================================
    // 1️⃣ INTRODUCTION: What are Arithmetic Operators?
    // =====================================================
    /*
        📖 Definition:
        Arithmetic operators in C++ are special symbols
        that perform basic math operations between numeric values
        like integers, floats, and doubles.

        ✅ MAIN OPERATORS:
        1. ➕ Addition (+)       → Adds two numbers
        2. ➖ Subtraction (-)    → Subtracts one number from another
        3. ✖ Multiplication (*)  → Multiplies two numbers
        4. ➗ Division (/)       → Divides one number by another
        5. 🪙 Modulus (%)        → Gives remainder of integer division

        ---------------------------------------------------
        📌 KEY RULES TO REMEMBER:
        1. **Integer Division**
            - If both numbers are integers → result is integer.
            - Decimal part is discarded (NOT rounded!).
              Example: 5 / 2 → 2   (0.5 is thrown away)

        2. **Floating-Point Division**
            - If at least one number is float/double → result keeps decimals.
              Example: 5.0 / 2 → 2.5

        3. **Modulus Rules**
            - Works ONLY with integers.
              Example: 10 % 3 → 1
            - ❌ Not valid for float/double (10.5 % 3 → ERROR)
    */

    cout << "=== Arithmetic Operators Demonstration ===\n\n";

    int a = 10, b = 3; // Example integers

    // ----------------------------------------
    // ➕ 1. ADDITION (+)
    // ----------------------------------------
    cout << "Addition (a + b): " << (a + b) << endl;
    // 10 + 3 = 13

    // ----------------------------------------
    // ➖ 2. SUBTRACTION (-)
    // ----------------------------------------
    cout << "Subtraction (a - b): " << (a - b) << endl;
    // 10 - 3 = 7

    // ----------------------------------------
    // ✖ 3. MULTIPLICATION (*)
    // ----------------------------------------
    cout << "Multiplication (a * b): " << (a * b) << endl;
    // 10 * 3 = 30

    // ----------------------------------------
    // ➗ 4. DIVISION (Integer Division)
    // ----------------------------------------
    cout << "Division (a / b): " << (a / b) << endl;
    /*
        10 / 3 = 3
        Reason:
        - Both operands are integers.
        - Decimal part 0.333... is discarded.
    */

    // ----------------------------------------
    // 🪙 5. MODULUS (%)
    // ----------------------------------------
    cout << "Modulus (a % b): " << (a % b) << endl;
    /*
        10 % 3 = 1
        Reason:
        - 3 fits into 10 → 3 times (3×3 = 9)
        - Remainder: 10 - 9 = 1
    */

    // =====================================================
    // 2️⃣ FLOATING-POINT DIVISION
    // =====================================================
    double x = 10, y = 3; // Using double for decimal values
    cout << "\nFloating-point Division (x / y): " << (x / y) << endl;
    /*
        10.0 / 3.0 = 3.33333...
        Reason:
        - At least one operand is double.
        - Decimal accuracy is preserved.
    */

    return 0;
}

/*
==========================================================
🧠 MEMORY TRICKS:
----------------------------------------------------------
1. "All Smart Maths Divides Modestly"
   ➡ A S M D M → Addition, Subtraction, Multiplication, Division, Modulus.

2. INTEGER Division → "Cut off the tail" (decimal part is chopped off).
3. FLOAT Division → "Float keeps the tail" (decimal part stays).
4. MODULUS → Think of "leftover pizza slices" after equal sharing.

----------------------------------------------------------
✅ QUICK TABLE:
Operator   | Symbol | Works With   | Example  | Result
-----------|--------|--------------|----------|--------
Addition   | +      | All numbers  | 5 + 2    | 7
Subtraction| -      | All numbers  | 5 - 2    | 3
Multiply   | *      | All numbers  | 5 * 2    | 10
Division   | /      | All numbers  | 5 / 2    | 2 (int) / 2.5 (float)
Modulus    | %      | Integers only| 5 % 2    | 1
==========================================================
*/
