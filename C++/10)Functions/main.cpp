#include <iostream>
#include <cmath> // For built-in math functions like sqrt()
using namespace std;

// =====================================================
// 1️⃣ INTRODUCTION — WHAT ARE FUNCTIONS?
// =====================================================
/*
📌 DEFINITION:
A function is a reusable block of code that performs a specific task.

🎯 WHY USE FUNCTIONS?
1. Break large problems into smaller, manageable tasks
2. Avoid repeating the same code (reduces redundancy)
3. Improve readability & maintainability
4. Allow easier debugging and testing 

🧠 ANALOGY:
Think of a function like a vending machine:
- You give it input (money, selection)
- It processes the request
- It gives output (snack)
*/

// =====================================================
// 2️⃣ TYPES OF FUNCTIONS
// =====================================================
/*
1. Built-in Functions:
   ➡ Already available in C++ (e.g., cout, cin, sqrt, pow)
   Example: sqrt(16) → 4

2. User-defined Functions:
   ➡ Written by the programmer to solve specific problems
   Types:
      a. Void Functions (no return value)
      b. Value-returning Functions (return a value)

📌 Syntax:
returnType functionName(parameterType param1, parameterType param2, ...) {
    // function body
    return value; // if returnType is NOT void
}
*/

// =====================================================
// 3️⃣ FUNCTION DECLARATION, DEFINITION & CALLING
// =====================================================
/*
📌 Declaration (Prototype) — tells the compiler about the function before use
📌 Definition — actual code that runs
📌 Call — request the function to execute
*/

// ===== Example Functions =====

// Function Declaration (Prototype) — optional if defined before main()
int add(int a, int b); 

// Function that returns nothing
void greet() {
    cout << "Hello, welcome to the C++ Functions tutorial!" << endl;
}

// Function that returns an integer
int multiply(int a, int b) {
    return a * b;
}

// =====================================================
// 4️⃣ MAIN FUNCTION
// =====================================================
int main() {

    // Calling a void function
    greet();  
    // Output: Hello, welcome to the C++ Functions tutorial!

    // Calling a value-returning function
    int sum = add(5, 10);
    cout << "Sum of 5 and 10 is: " << sum << endl;
    // Output: Sum of 5 and 10 is: 15

    // Inline function call in cout
    cout << "Product of 4 and 6 is: " << multiply(4, 6) << endl;
    // Output: Product of 4 and 6 is: 24

    // Built-in function usage
    cout << "Square root of 25 is: " << sqrt(25) << endl;
    // Output: Square root of 25 is: 5

    return 0;
}

// =====================================================
// 5️⃣ FUNCTION DEFINITION (AFTER MAIN)
// =====================================================
int add(int a, int b) {
    return a + b;
}

// =====================================================
// 6️⃣ EXTRA TOPICS
// =====================================================
/*
✅ Function Parameters:
   - Pass by Value → Function gets a copy of the variable (changes don't affect original)
   - Pass by Reference → Function gets the actual variable (changes affect original)

✅ Default Arguments:
   You can assign default values to parameters.
   Example:
   int power(int base, int exp = 2) { return pow(base, exp); }
   power(5); // returns 25 (exp defaults to 2)

✅ Function Overloading:
   Multiple functions can have the same name but different parameter lists.
   Example:
   int sum(int a, int b) { return a + b; }
   double sum(double a, double b) { return a + b; }
*/

// =====================================================
// 🧠 MEMORY TRICKS
// =====================================================
/*
1. "DDD" → **D**eclare, **D**efine, **D**o (Call)
2. Void = No return; Value-returning = Returns something
3. Think "Vending Machine":
   - Input = Parameters
   - Process = Function Body
   - Output = Return Value
4. Built-in = From C++ itself, User-defined = From YOU
*/
