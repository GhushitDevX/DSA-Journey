#include <iostream>  // Required for input/output (cout, cin)
using namespace std;

int main() {

    // =====================================================
    // 1️⃣ INTRODUCTION TO C++ DATA TYPES
    // =====================================================
    /*
        📌 DEFINITION:
        A Data Type tells the computer:
            1. What kind of value will be stored (numbers, letters, true/false, etc.)
            2. How much memory to reserve for it.
            3. How that value can be used (math, text operations, logical checks, etc.).

        💡 THINK OF IT LIKE:
        - Labels on storage boxes: 
          Each label (data type) decides what kind of stuff (data) you can put inside 
          and how big the box will be.
    */

    // =====================================================
    // 2️⃣ DATA TYPE CLASSIFICATION IN C++
    // =====================================================
    /*
        C++ Data Types
          |
          ├── Built-in / Primitive Types  ✅ Given by the language itself
          │       ├── Integer Types
          │       │     ├── int     → Whole numbers
          │       │     └── char    → Single characters (stores ASCII value internally)
          │       ├── Floating Point Types
          │       │     ├── float   → Decimal numbers (single precision)
          │       │     └── double  → Decimal numbers (double precision)
          │       └── void → "Nothing" (used in functions that return nothing)
          │
          ├── Derived Types  ➡ Built using primitive types
          │       ├── Arrays   → Sequence of same type values
          │       ├── Pointers → Stores memory addresses
          │       ├── Functions→ Perform actions, may return data
          │       └── References→ Alternate names for variables
          │
          └── User-Defined Types  ➡ Created by the programmer
                  ├── struct  → Groups related variables
                  ├── class   → Object-oriented blueprint
                  ├── union   → Stores different types in the same memory space
                  └── enum    → Named constants
    */

    // =====================================================
    // 3️⃣ BUILT-IN (PRIMITIVE) DATA TYPES — WITH EXAMPLES
    // =====================================================

    int age = 25;              // Integer → stores whole numbers
    char grade = 'A';          // Character → stores one letter or symbol
    float height = 5.9f;       // Floating point (single precision)
    double weight = 55.69887;  // Floating point (double precision, more accurate)
    bool isActive = true;      // Boolean → stores true (1) or false (0)
    bool isAvailable = 1;      // Boolean → 1 for true
    bool isEmpty = false;      // Boolean → 0 for false
    bool isValid = 0;          // Boolean → false

    // =====================================================
    // 4️⃣ OUTPUT VALUES
    // =====================================================
    cout << "Age: " << age << endl;          
    cout << "Grade: " << grade << endl;      
    cout << "Height: " << height << endl;    
    cout << "Weight: " << weight << endl;    
    cout << "Is Active: " << isActive << endl;        
    cout << "Is Available: " << isAvailable << endl;  
    cout << "Is Empty: " << isEmpty << endl;          
    cout << "Is Valid: " << isValid << endl;          

    // =====================================================
    // 5️⃣ DERIVED DATA TYPES — QUICK VIEW
    // =====================================================
    /*
        int marks[5];        // Array of integers
        int* ptr;            // Pointer to an integer
        void greet();        // Function declaration
        int& ref = age;      // Reference to variable age
    */

    // =====================================================
    // 6️⃣ USER-DEFINED DATA TYPES — QUICK VIEW
    // =====================================================
    /*
        struct Student {
            string name;
            int roll;
        };

        class Car {
            string brand;
            void drive() { ... }
        };

        union Data {
            int intVal;
            float floatVal;
        };

        enum Days { MON, TUE, WED, THU, FRI, SAT, SUN };
    */

    return 0;
}

/*
===========================================================
🧠 MEMORY TRICKS TO REMEMBER C++ DATA TYPES
===========================================================

1. **Primitive Types (IF-C-Bool-Void)**
   👉 "I Found Cats Baking Vanilla"
   I → int       (Whole numbers)
   F → float     (Decimals, less precise)
   C → char      (Characters)
   B → bool      (True/False)
   V → void      (Nothing)

2. **Floating Point Precision**
   👉 "Float is light, Double is heavy"
   Float → less precision
   Double → more precision

3. **Three Main Categories**
   👉 "Buy Delicious Unicorns"
   B → Built-in
   D → Derived
   U → User-defined

4. **ASCII for char**
   👉 Each character secretly hides a number inside (ASCII code).
*/
