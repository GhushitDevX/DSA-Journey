#include <iostream>
using namespace std;

int main() { 
    int age;  
    cout << "Enter your age: ";  

    // =====================================================
    // 3️⃣ TAKING INPUT FROM THE USER
    // =====================================================
    cin >> age;  
    /*
       📌 cin → "character input" → takes data from the input stream (keyboard).
       📌 '>>' → stream extraction operator → extracts data from the stream into a variable.
       📌 Here, whatever the user types will be stored in the memory location of 'age'.

       Steps:
         1. Program waits for user to type a number and press Enter.
         2. That number travels from the input stream → into the variable 'age'.
    */

    cout << "Your age is: " << age << endl;  

    return 0;  
}
