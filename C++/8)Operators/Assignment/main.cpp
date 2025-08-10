#include <iostream> // Needed for input (cin) and output (cout)
using namespace std;

int main() {

    // =====================================================
    // 1️⃣ Introduction: What are Arithmetic Operators?
    // =====================================================
    /*
        📖 Definition:
        Arithmetic operators in C++ are symbols used to perform
        basic mathematical calculations between numeric values
        (integers, floats, doubles).

        ✅ List of Arithmetic Operators:
        1. Addition (+)        → Adds two numbers
        2. Subtraction (-)     → Subtracts one number from another
        3. Multiplication (*)  → Multiplies two numbers
        4. Division (/)        → Divides one number by another
        5. Modulus (%)         → Gives the remainder after integer division

        ----------------------------------------
        ⚠️ Important Rules:
        - Integer Division:
            If BOTH numbers are integers → result is an integer
            (The decimal part is removed/truncated)
            Example: 5 / 2 → 2  (0.5 is discarded)

        - Floating-point Division:
            If at least ONE number is a float/double → result keeps decimals
            Example: 5.0 / 2 → 2.5

        - Modulus Operator:
            % works only with integers (int, long, etc.)
            It cannot be used directly with float/double values.
    */

    cout << "=== Arithmetic Operators Demonstration ===\n\n";

    int a = 10, b = 3; // Example integer values

    // ----------------------------------------
    // ➕ 1. Addition
    // ----------------------------------------
    cout << "Addition (a + b): " << (a + b) << endl;
    // Example: 10 + 3 = 13

    // ----------------------------------------
    // ➖ 2. Subtraction
    // ----------------------------------------
    cout << "Subtraction (a - b): " << (a - b) << endl;
    // Example: 10 - 3 = 7

    // ----------------------------------------
    // ✖️ 3. Multiplication
    // ----------------------------------------
    cout << "Multiplication (a * b): " << (a * b) << endl;
    // Example: 10 * 3 = 30

    // ----------------------------------------
    // ➗ 4. Division (Integer Division)
    // ----------------------------------------
    cout << "Division (a / b): " << (a / b) << endl;
    /*
        Example:
        10 / 3 = 3
        Reason:
            - Both a and b are integers
            - Decimal part (0.333...) is discarded
    */

    // ----------------------------------------
    // 🪙 5. Modulus (Remainder)
    // ----------------------------------------
    cout << "Modulus (a % b): " << (a % b) << endl;
    /*
        Example:
        10 % 3 = 1
        Reason:
            - 3 fits into 10 three times (3×3 = 9)
            - Remainder left: 10 - 9 = 1
    */

    // =====================================================
    // 2️⃣ Floating-Point Division Example
    // =====================================================
    double x = 10, y = 3; // Using double to store decimal values
    cout << "\nFloating-point Division (x / y): " << (x / y) << endl;
    /*
        Example:
        10.0 / 3.0 = 3.33333...
        Reason:
            - At least one operand is double
            - Result keeps decimal accuracy
    */

    // =====================================================
    // 🧠 MEMORY TRICKS:
    // =====================================================
    /*
        📌 Quick way to remember:
        "All Smart Maths Don’t Mislead"
         A   S     M     D     M
        (+) (-)   (*)   (/)   (%)

        ➕ Addition → Combine values
        ➖ Subtraction → Take away
        ✖️ Multiplication → Repeat addition
        ➗ Division → Share equally
        🪙 Modulus → Leftover after sharing

        🔑 Key Rules:
        - int ÷ int → int (decimal cut off)
        - float/double involved → decimal kept
        - % works only with integers
    */

    return 0;
}
