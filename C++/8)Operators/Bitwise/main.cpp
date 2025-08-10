#include <iostream>
#include <bitset> // Needed for binary representation display
using namespace std;

int main() {
    // =====================================================
    // 🧩 BITWISE OPERATORS IN C++
    // =====================================================
    /*
        📖 WHAT ARE BITWISE OPERATORS?
        --------------------------------
        Bitwise operators perform operations directly 
        on the binary representation of integers.
        They process each bit (0 or 1) separately.

        ✅ Common Uses:
        - Hardware programming (e.g., microcontrollers)
        - Low-level optimizations (fast calculations)
        - Data compression & encryption
        - Flags & bit masking for settings
    */

    int a = 6;   // Binary: 00000110
    int b = 3;   // Binary: 00000011

    cout << "a = " << a << " (" << bitset<8>(a) << " in binary)\n";
    cout << "b = " << b << " (" << bitset<8>(b) << " in binary)\n";

    // -----------------------------------------------------
    // 1️⃣ BITWISE AND (&)
    // -----------------------------------------------------
    int andResult = a & b; // 00000110 & 00000011 = 00000010 (2)
    cout << "\n1. Bitwise AND (a & b) = " << andResult
         << " (" << bitset<8>(andResult) << ")\n";
    // Rule: 1 & 1 → 1, else → 0

    // -----------------------------------------------------
    // 2️⃣ BITWISE OR (|)
    // -----------------------------------------------------
    int orResult = a | b; // 00000110 | 00000011 = 00000111 (7)
    cout << "2. Bitwise OR  (a | b) = " << orResult
         << " (" << bitset<8>(orResult) << ")\n";
    // Rule: 1 | 0 → 1, 0 | 1 → 1, 1 | 1 → 1, else → 0

    // -----------------------------------------------------
    // 3️⃣ BITWISE XOR (^)
    // -----------------------------------------------------
    int xorResult = a ^ b; // 00000110 ^ 00000011 = 00000101 (5)
    cout << "3. Bitwise XOR (a ^ b) = " << xorResult
         << " (" << bitset<8>(xorResult) << ")\n";
    // Rule: 1 ^ 0 → 1, 0 ^ 1 → 1, 1 ^ 1 → 0, 0 ^ 0 → 0

    // -----------------------------------------------------
    // 4️⃣ BITWISE NOT (~)
    // -----------------------------------------------------
    int notResult = ~a; // Inverts all bits
    cout << "4. Bitwise NOT (~a)    = " << notResult
         << " (" << bitset<8>(notResult) << ")\n";
    // Rule: 0 → 1, 1 → 0 (two's complement affects value)

    // -----------------------------------------------------
    // 5️⃣ LEFT SHIFT (<<)
    // -----------------------------------------------------
    int leftShift = a << 1; // Shifts bits left → multiply by 2
    cout << "5. Left Shift  (a << 1) = " << leftShift
         << " (" << bitset<8>(leftShift) << ")\n";

    // -----------------------------------------------------
    // 6️⃣ RIGHT SHIFT (>>)
    // -----------------------------------------------------
    int rightShift = a >> 1; // Shifts bits right → divide by 2
    cout << "6. Right Shift (a >> 1) = " << rightShift
         << " (" << bitset<8>(rightShift) << ")\n";

    // -----------------------------------------------------
    // BITWISE TRUTH TABLE (for AND, OR, XOR)
    // -----------------------------------------------------
    /*
        A   B   A & B   A | B   A ^ B
        ------------------------------
        0   0     0       0       0
        0   1     0       1       1
        1   0     0       1       1
        1   1     1       1       0
    */

    // -----------------------------------------------------
    // BONUS: BIT MASKING EXAMPLE
    // -----------------------------------------------------
    /*
        Check if the 2nd bit (from right, index 1) in 'a' is 1.
    */
    int mask = 1 << 1; // 00000010
    bool isSecondBitSet = (a & mask) != 0;
    cout << "\nIs 2nd bit set in 'a'? "
         << (isSecondBitSet ? "Yes" : "No") << "\n";

    // =====================================================
    // 🧠 MEMORY TRICKS:
    // =====================================================
    /*
        📌 Quick Phrase: "All Old Xylophones Need Loud Rhythms"
         A   O     X     N     L     R
        (&) (|)   (^)   (~)  (<<)  (>>)

        ➡️ AND (&) → Both must be 1
        ➡️ OR  (|) → At least one 1
        ➡️ XOR (^) → Exactly one 1
        ➡️ NOT (~) → Flip all bits
        ➡️ << Left Shift → Multiply by 2
        ➡️ >> Right Shift → Divide by 2

        🔑 Key Rules:
        - Works only with integers
        - Operates on each bit separately
        - Shifts move bits, filling empty spaces with 0s (unsigned)
    */

    return 0;
}
