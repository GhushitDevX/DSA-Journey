#include <iostream>
using namespace std;

int main() {

    // =====================================================
    // 1️⃣ INTRODUCTION: What is the Ternary Operator?
    // =====================================================
    /*
        📌 Definition:
        The ternary operator (? :) is a **short-hand if-else** statement.
        It has three parts:
        
        (condition) ? value_if_true : value_if_false;

        ✔ If the condition is TRUE → the first value is chosen.
        ❌ If the condition is FALSE → the second value is chosen.

        Think of it like:
        "If this is true, take this; otherwise, take that."
    */

    // =====================================================
    // 2️⃣ Example 1: Finding the Maximum of Two Numbers
    // =====================================================

    int a = 10, b = 20; // Two numbers

    // Using ternary to find the bigger number
    int max = (a > b) ? a : b;  
    /*
        Step-by-step:
        1. Check: Is a > b?  → 10 > 20 → FALSE
        2. Since FALSE → choose the second value → b (20)
        3. Store 20 in 'max'
    */

    cout << "The maximum value is: " << max << endl; 
    // Expected Output: 20

    // =====================================================
    // 3️⃣ Example 2: Checking Voting Eligibility
    // =====================================================

    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Using ternary to decide the eligibility message
    string eligibility = (age >= 18) 
                         ? "Eligible to vote" 
                         : "Not eligible to vote";
    /*
        Step-by-step:
        1. Check: Is age >= 18?
        2. If TRUE → store "Eligible to vote" in 'eligibility'
        3. If FALSE → store "Not eligible to vote" in 'eligibility'
    */

    cout << eligibility << endl;

    // =====================================================
    // 4️⃣ Why Use Ternary?
    // =====================================================
    /*
        ✔ Saves space (shorter than if-else)
        ✔ Improves readability for small decisions
        ❌ Avoid for complex logic — use if-else instead
    */

    return 0;
}
