#include <iostream>

using namespace std;

int reverse(int x) {
    int rev = 0;
    while (x != 0)
    {
        int rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }

    return rev;
}

int main(int argc, char const *argv[])
{
    /*
        Q1. Solve for:
            a) 6 & 10
            b) 6 | 10
            c) 6 ^ 10
            d) 10 << 2
            e) 10 >> 1
    */
    int a = 6 & 10;
    int b = 6 | 10;
    int c = 6 ^ 10;
    int d = 10 << 2;
    int e = 10 >> 1;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    /*
         Q2. Figure out how to find if a number is power of two without any loop.
         Q3. WAF to reverse an Integer n.
    */

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The reverse of " << n << " is: " << reverse(n) << "." << endl;
    

    return 0;
}
