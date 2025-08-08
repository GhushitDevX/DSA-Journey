#include <iostream>
using namespace std;

int main() { 

    // 4️⃣ Variable Declaration
    int age; 

    // 5️⃣ Asking the user for input
    cout << "Enter your age: ";  // Prints text to the console (output)
                                 // '<<' is the stream insertion operator — sends data to output stream

    // 6️⃣ Taking input from the user
    cin >> age;       // Waits for the user to type a number and press Enter
                      // '>>' is the stream extraction operator — takes data from input stream into variable
                      // The entered value is stored in the memory location of 'age'

    // 7️⃣ Displaying the result
    cout << "Your age is: " << age << endl;  
                      // Prints the text and the value stored in 'age'
                      // 'endl' moves the cursor to the next line (like pressing Enter)

    return 0; 
}
