#include <iostream>

using namespace std;

// Function Declaration and Initialization
void printHello() {
    cout << "Hello!" << endl;
}

int sum(int i, int j) {
    return (i + j);
}

int minOfTwo(int a, int b) {
    if (a < b)
    {
        return a;
    } else {
        return b;
    }
}

int sumN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
    return fact;
}

int sum1(int a, int b) {
    return (a + b);
}

void changeD(int x) {
    x = 2 * x;
    cout << "D = " << x << endl;
}

// Calculate the sum of digits of a number using functions:
void sumOfDigits(int x) {
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x = x/10;
    }

    cout << "The sum of digits" << " is: " << sum << "." << endl;
}

// Calculate nCr binomial coefficient for n & r.
int nCr(int n, int r) {
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n - r);
    return a / (b * c);
} 

int main(int argc, char const *argv[])
{
    // Functions:

    /*
        Function Syntax:
            returnType functionName() {
                cout << "hello";
                
                return x; (optional)
            }
    */

   /*
    Parameters in functions:
        returnType funName(type p1, type p2) {
            // to do some work!
        }
   */

//    Function Calling/Invoking
    printHello();
    int x = sum(3, 5);

    cout << "The sum of 3 and 5 is: " << x << endl;

    cout << "Min: " << minOfTwo(5, 3) << endl;

    cout << "The sum is: " << sumN(10) << endl;

    cout << "The factorial is: " << factorial(6) << endl;

    int f = 5, y = 10;

    //  Pass by value: copy of argument is passed to function.
    cout << "The sum of " << f << " and " << y << " is: " << sum1(f, y) << endl;    // This is pass by value

    int D = 10;
    changeD(D);

    cout << "The value of D is: " << D << ", which is not changed because of call by value." << endl;

    sumOfDigits(145);

    // Taking input and returning the nCr:
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "nCr binomial coefficient for " << n << " and " << r << " is: " << nCr(n, r) << "." << endl;

    return 0;
}
