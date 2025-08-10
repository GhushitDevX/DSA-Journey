#include <iostream> 
// 📚 iostream = "Input Output Stream"
// -> A built-in C++ library that lets us use input (cin) and output (cout).
// -> Without including this, we cannot use cout, cin, endl, etc.
// Think of it as adding a "speaker + microphone" to your program.

// ---------------------------------------------------------------

using namespace std; 
// 🏷 "Namespace" is like a surname for functions/objects.
// -> The standard library (std) contains cout, cin, endl, etc.
// -> Normally, you’d have to write: std::cout << "Hello";
// -> This line says: "Hey compiler, from now on, assume std is the default."
// -> Now you can just write cout instead of std::cout.

// ---------------------------------------------------------------

int main() 
// 🏁 "main" is the entry point of every C++ program.
// -> Execution starts here, line by line.
// -> int means it will return an integer (status code) when the program ends.
{
    // 📝 All the code inside these curly braces { } runs when the program starts.
    
    cout << "Hello, World!" << endl;
    /*
       🔹 cout → "Character Output" → prints data to console
       🔹 <<   → "Stream Insertion Operator"
                 (pushes data INTO the output stream)
       🔹 "Hello, World!" → The text (string literal) we want to print.
       🔹 endl → End Line → moves the cursor to a new line.
                 (Also flushes the output buffer — ensures text is shown immediately)
       
       💡 Example:
         cout << "Hello";
         cout << "World!";
         → Output: HelloWorld!  (No space, no line break)
         
         cout << "Hello" << endl;
         cout << "World!";
         → Output:
           Hello
           World!
    */

    return 0;
    /*
       ✅ return 0 means:
          → The program ended successfully with no errors.
       ❌ return 1 or other values:
          → Usually means there was an error or a specific exit code.
          
       💡 The operating system uses this value to know if your program worked.
    */
}

// ---------------------------------------------------------------
// 📌 MEMORY TRICKS
// ---------------------------------------------------------------

/*
1️⃣ iostream = I/O STREAM = Input/Output Pipeline
   (Imagine water pipes: data flows in & out)

2️⃣ using namespace std:
   std = STandarD library → saves you from writing std:: again and again.

3️⃣ main = Main gate of the program
   → Everything starts from here.

4️⃣ cout → "See Out" (Print to screen)
   cin  → "See In" (Take input)

5️⃣ << = Push data to output stream (think of an arrow sending data to the screen)
   >> = Pull data from input stream (arrow pointing toward variable)

6️⃣ endl = End Line → like pressing the Enter key.

7️⃣ return 0 → "Mission Success"
*/

// ---------------------------------------------------------------
// 🧠 FUN ANALOGY:
// ---------------------------------------------------------------
// Imagine you’re a radio DJ:
//
// #include <iostream>  → Turning on your mic & speakers
// using namespace std; → Calling your equipment by nickname
// int main() {         → Your show starts here
// cout << "Hello";     → You speak into the mic
// endl;                → You take a breath/new line
// return 0;            → Show ends successfully
// ---------------------------------------------------------------
