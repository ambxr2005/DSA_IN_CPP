#include <iostream>
using namespace std;

int x = 10;     // Global variable!

int main(int argc, char const *argv[])
{
    // Bitwise Operators:

    int a = 5, b = 16;      // Local Variables!

    // 1. Bitwise AND '&':
    cout << "Bitwise AND (&): " << (a & b) << endl;

    // 2. Bitwise OR '|':
    cout << "Bitwise OR (|): " << (a | b) << endl;

    // 3. Bitwise XOR '^':
    cout << "Bitwise XOR (^): " << (a ^ b) << endl;

    // 4. Bitwise Left Shift '<<':      // (a*(2^b))
    cout << "Bitwise Left Shift (<<): " << (10 << 2) << endl;
    cout << "Bitwise Left Shift (<<): " << (5 << 1) << endl;

    // 5. Bitwise Right Shift '>>':     // (a/(2^b))
    cout << "Bitwise Right Shift (>>): " << (10 >> 2) << endl;
    cout << "Bitwise Right Shift (>>): " << (8 >> 2) << endl;

    /*
        Scope of variables:
            1. Local variables
            2. Global variables
    */

   /*
        Data Type Modifiers: Change meaning of data types.
            1. long
            2. short
            3. long long
            4. signed
            5. unsigned
   */

  cout << sizeof(int) << endl;
  cout << sizeof(long int) << endl;
  cout << sizeof(short int) << endl;
  cout << sizeof(long long int) << endl;



    return 0;
}
