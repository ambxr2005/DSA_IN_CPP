#include <iostream>

using namespace std;

// Q1. WAF to check if a number is prime or not.
bool ifPrime(int x) {

    bool isPrime = true;
    for (int i = 2; i < (x - 1); i++)
    {
        if (x % i == 0) // non prime
        {
            isPrime = false;
            return isPrime;
        }
    }
    return isPrime;
}

// Q2. WAF to print all the prime numbers from 2 to N.
void printPrime(int n) {

    cout << "Prime numbers till " << n << " are: ";
    
    for (int i = 2; i <= n; i++) {
        if (ifPrime(i)) {
            cout << i << " ";
        }
    }
    cout << '.' << endl;
}

// Q3. WAF to print nth Fibonacci.
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci (n - 2);
}


int main(int argc, char const *argv[])
{
    int z;
    cout << "Enter a number: ";
    cin >> z;

    bool pr = ifPrime(z);

    if (pr == true)
    {
        cout << z << " is prime." << endl;
    }
    else
    {
        cout << z << " is not prime." << endl;
    }

    printPrime(z);
    cout << "The nth term in series is: " << fibonacci(z) << "." << endl;

    return 0;
}
