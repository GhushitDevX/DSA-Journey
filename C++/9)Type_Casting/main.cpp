#include <iostream>
using namespace std;

int main() {

    // =====================================================
    // 1️⃣ INTRODUCTION: What is Type Casting?
    // =====================================================
    /*
        📌 DEFINITION:
        Type casting is the process of converting a variable 
        from one data type to another.

        🎯 WHY USE TYPE CASTING?
        - To match data types when performing calculations
        - To store a value in a different type of variable
        - To avoid unexpected results due to type mismatches
        - To interact with libraries/functions that require a specific type

        🧠 THINK OF IT LIKE:
        Changing the "label" on a box so you can store it 
        in a different shelf — but the contents might be trimmed 
        or reinterpreted in the process.
    */

    // =====================================================
    // 2️⃣ TYPES OF TYPE CASTING
    // =====================================================
    /*
        1. Implicit Casting (Type Conversion / Type Promotion)
           - Done automatically by the compiler
           - Usually from smaller → larger type (to prevent data loss)
           - Example: int → double, char → int

        2. Explicit Casting (Type Casting / Type Demotion)
           - Done manually by the programmer
           - Can be from larger → smaller type or between unrelated types
           - May cause data loss (be careful!)
           - Uses syntax like: (type)value or static_cast<type>(value)
    */

    // =====================================================
    // 3️⃣ EXAMPLE 1: Implicit Type Casting (Type Promotion)
    // =====================================================
    int intValue = 10;         // Integer (4 bytes)
    double doubleValue = 5.5;  // Double (8 bytes)

    // int automatically promoted to double before addition
    double result1 = intValue + doubleValue;

    cout << "Implicit Casting Result: " << result1 << endl;  
    // Output: 15.5

    // =====================================================
    // 4️⃣ EXAMPLE 2: Implicit Casting with char → int
    // =====================================================
    char letter = 'A';  // ASCII value of 'A' = 65
    int asciiValue = letter;  // char promoted to int

    cout << "ASCII value of 'A': " << asciiValue << endl;
    // Output: 65

    // =====================================================
    // 5️⃣ EXAMPLE 3: Explicit Casting (Type Demotion)
    // =====================================================
    double largeValue = 9.99;

    // Manually cast double → int (fractional part is lost)
    int truncatedValue = static_cast<int>(largeValue);

    cout << "Explicit Casting Result: " << truncatedValue << endl;  
    // Output: 9

    // =====================================================
    // 6️⃣ EXAMPLE 4: Old-Style Casting (Not Recommended)
    // =====================================================
    double pi = 3.14159;

    int oldStyle = (int)pi;  // C-style cast (works, but less safe)
    cout << "Old-Style Casting Result: " << oldStyle << endl;  
    // Output: 3

    // =====================================================
    // 7️⃣ EXAMPLE 5: Narrowing Conversion (Loss of Data)
    // =====================================================
    int bigNumber = 300;
    char smallChar = static_cast<char>(bigNumber);  
    // May cause wrap-around (ASCII only stores 0–255)

    cout << "Narrowing Conversion (int → char): " << (int)smallChar << endl;

    // =====================================================
    // 8️⃣ EXAMPLE 6: float → int in Division
    // =====================================================
    float a = 7.5;
    float b = 2.0;

    // Cast to int before division
    int divisionResult = static_cast<int>(a) / static_cast<int>(b);
    cout << "Float to Int Division Result: " << divisionResult << endl;  
    // Output: 3  (not 3.75)

    return 0;
}

/* =====================================================
   🧠 MEMORY TRICKS:
   =====================================================
   1. "Implicit is automatic, Explicit is on-purpose."
      → Implicit: Compiler does it for you
      → Explicit: YOU tell the compiler to do it

   2. "Small → Big = Safe, Big → Small = Risky"
      → Converting to a bigger type usually safe
      → Converting to a smaller type may cause data loss

   3. "Promotion prevents loss, Demotion may toss"
      → Type promotion keeps info intact
      → Type demotion can throw away data

   4. static_cast<Type>(value) → Modern & Safe
      (type)value → Old C-style, avoid unless necessary
===================================================== */
