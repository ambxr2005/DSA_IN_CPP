#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 1. Sum of all numbers from 1 to N which are divisible by 3.
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of all numbers from 1 to " << n << " which are divisible by 3 is: " << sum << endl;

    // 2. Print factorial of a number N.
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "The factorial of " << n << " is: " << factorial << endl;

    return 0;
}
