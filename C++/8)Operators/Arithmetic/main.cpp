#include <iostream> // Required for cout, cin
using namespace std;

int main() {
    // ============================================
    // 1️⃣ What are Arithmetic Operators?
    // ============================================
    /*
        📌 Definition:
        Arithmetic operators are used to perform mathematical
        calculations between numerical values.

        ✅ Common Arithmetic Operators in C++:
        1. Addition (+)       → Adds two numbers
        2. Subtraction (-)    → Subtracts one number from another
        3. Multiplication (*) → Multiplies two numbers
        4. Division (/)       → Divides one number by another
        5. Modulus (%)        → Finds the remainder after division

        --------------------------------------------
        ⚠️ Important Notes:
        - Integer Division:
            If BOTH operands are integers → result is an integer
            Example: 5 / 2 = 2 (decimal part is discarded)
        - Floating-point Division:
            If ANY operand is float/double → result will be decimal
            Example: 5.0 / 2 = 2.5
        - Modulus (%) works ONLY with integers (not float/double).
    */

    cout << "=== Arithmetic Operators Output ===" << endl;

    int a = 10, b = 3; // Example numbers

    // --------------------------------------------
    // Addition
    // --------------------------------------------
    cout << "Addition (a + b): " << (a + b) << endl;
    /*
        10 + 3 = 13
    */

    // --------------------------------------------
    // Subtraction
    // --------------------------------------------
    cout << "Subtraction (a - b): " << (a - b) << endl;
    /*
        10 - 3 = 7
    */

    // --------------------------------------------
    // Multiplication
    // --------------------------------------------
    cout << "Multiplication (a * b): " << (a * b) << endl;
    /*
        10 * 3 = 30
    */

    // --------------------------------------------
    // Division (Integer Division)
    // --------------------------------------------
    cout << "Division (a / b): " << (a / b) << endl;
    /*
        10 / 3 = 3
        (Decimal part 0.333 is discarded because a & b are integers)
    */

    // --------------------------------------------
    // Modulus (Remainder)
    // --------------------------------------------
    cout << "Modulus (a % b): " << (a % b) << endl;
    /*
        10 % 3 → Remainder is 1
    */

    // ============================================
    // 2️⃣ Example of Floating-Point Division
    // ============================================
    double x = 10, y = 3;
    cout << "Floating-point Division (x / y): " << (x / y) << endl;
    /*
        10.0 / 3.0 = 3.33333 (accurate decimal result)
    */

    return 0;
}
