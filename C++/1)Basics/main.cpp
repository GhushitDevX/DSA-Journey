#include <iostream> // Includes the input-output stream library (needed for cout, cin, etc.)

using namespace std; 
/*
  -> Allows us to use standard names (like cout, endl) without writing std:: every time
  -> This namespace contains definations for standard functions and objects like cout, cin, endl etc.
*/

int main() // The main function — execution of the program starts here
{
    /*
      -> Your main program code goes inside these curly braces
      -> All code will be part of int main function
    */

    cout << "Hello, World!" << endl; 
    /*
      -> 'cout' prints the message to the console
      -> '<<' is called the stream insertion operator — it sends data to the output stream
      -> 'endl' ends the line and moves the cursor to the next line
    */

    return 0; 
    // Indicates the program ended successfully
}