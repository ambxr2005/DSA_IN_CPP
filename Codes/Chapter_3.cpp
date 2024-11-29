#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Conditional Statements:

    // if-else syntax

    // Example 1:
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n >= 0)
    {
        cout << "n is positive." << endl;
    }
    else
    {
        cout << "n is negative." << endl;
    }

    // Example 2:
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote." << endl;
    }
    else
    {
        cout << "You cannot vote." << endl;
    }

    // Example 3:
    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "x is even." << endl;
    }
    else
    {
        cout << "x is odd." << endl;
    }

    // if-else-if:

    // Example 1:
    int grade;

    cout << "Enter yoyr percentage: ";
    cin >> grade;
    if (grade >= 90)
    {
        cout << 'A' << endl;
    }
    else if (grade >= 80 && grade < 90)
    {
        cout << 'B' << endl;
    }
    else
    {
        cout << 'C' << endl;
    }

    // Example 2:
    char alpha;
    cout << "Enter a character: ";
    cin >> alpha;

    if (alpha >= 'a' && alpha <= 'z')
    {
        cout << "The character is in uppercase." << endl;
    }
    else if (alpha >= 'A' && alpha <= 'Z')
    {
        cout << "The character is in lowercase." << endl;
    }
    else
    {
        cout << "Not an alphabet." << endl;
    }

    int value;
    cout << "Enter a value: ";

    // Ternary Statement:
    cout << (value >= 0 ? "Positive" : "Negative") << endl;

    // Loops:

    // 1. While loops:
    // Example 1: Print numbers 1 to 5.
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    // 2. For loops:
    // Example 1: Print numbers 1 to 5.
    for (int i = 1; i <= 5; i++)
    {
        cout << i;
    }

    // Example 2: Print the sum of numbers from 1 to n.
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "The sum is: " << sum << endl;

    // Example 3: Print the sum of all the odd numbers from 1 to n.
    int sum_odd = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum_odd = sum_odd + i;
        }
    }

    cout << "The sum of all odd numbers till n is: " << sum_odd << endl;

    // do-while loops:
    // Example 1:
    do
    {
        cout << "Amritanshu weds Archana!";
    } while (3 > 5);

    // IMPORTANT EXAMPLE: Check if a number is prime or not.
    int z;
    cout << "Enter a number: ";
    cin >> z;
    bool isPrime = true;
    for (int i = 2; i < z - 1; i++)
    {
        if (n % i == 0) // non prime
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "The number is prime.";
    }
    else
    {
        cout << "The number is not prime.";
    }

    return 0;
}