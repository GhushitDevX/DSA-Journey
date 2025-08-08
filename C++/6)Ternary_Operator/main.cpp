#include <iostream>
using namespace std;

int main() {

    // -------------------------------------------
    // Example 1: Finding Maximum of Two Numbers
    // -------------------------------------------

    int a = 10, b = 20; // Initial values

    // (condition) ? value_if_true : value_if_false
    int max = (a > b) ? a : b; 
    // If a > b is true → max = a
    // If a > b is false → max = b

    cout << "The maximum value is: " << max << endl; 
    // Output: 20

    // -------------------------------------------
    // Example 2: Checking Voting Eligibility
    // -------------------------------------------

    int age;
    cout << "Enter your age: ";
    cin >> age; // Takes user input

    string eligibility = (age >= 18) 
                         ? "Eligible to vote" 
                         : "Not eligible to vote";
    // If age >= 18 → "Eligible to vote"
    // If not → "Not eligible to vote"

    cout << eligibility << endl;

    return 0;
}
