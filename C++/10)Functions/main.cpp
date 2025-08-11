// Functions in C++

#include <iostream>
using namespace std;

int main() {

    // =====================================================
    // 1️⃣ INTRODUCTION: What are Functions?
    // =====================================================
    /*
        📌 DEFINITION:
        Functions are reusable blocks of code that perform a specific task.
        They help organize code, reduce redundancy, and improve readability.

        🎯 WHY USE FUNCTIONS?
        - To break down complex problems into smaller, manageable pieces
        - To avoid code duplication
        - To enhance code maintainability and readability
        - To allow for easier debugging and testing

        🧠 THINK OF IT LIKE:
        A function is like a recipe in a cookbook. You can follow the recipe 
        whenever you need to make that dish without rewriting the instructions.
    */

    // =====================================================
    // 2️⃣ FUNCTION SYNTAX
    // =====================================================
    /*
        returnType functionName(parameterType parameterName) {
            // Function body
            return value;  // Optional, if returnType is not void
        }
    */

    // =====================================================
    // 3️⃣ EXAMPLE 1: Simple Function with No Parameters
    // =====================================================
    void greet() {
        cout << "Hello, World!" << endl;
    }

    greet();  // Call the function

    // =====================================================
    // 4️⃣ EXAMPLE 2: Function with Parameters
    // =====================================================
    void add(int a, int b) {
        cout << "Sum: " << (a + b) << endl;
    }

    add(5, 10);  // Call the function with arguments

    // =====================================================
    // 5️⃣ EXAMPLE 3: Function with Return Value
    // =====================================================
    int multiply(int x, int y) {
        return x * y;  // Return the product
    }

    int result = multiply(4, 5);
    cout << "Product: " << result << endl;

    return 0;
}