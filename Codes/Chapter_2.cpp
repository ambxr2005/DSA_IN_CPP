#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello World" << endl;

    cout << "Aman Kumar\nfrom\nAmity University!" << endl;

    // Variables in C++

    int age = 10;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = true;
    double price = 100.99;

    int value = grade; // Conversion [implicit]

    int newPrice = (int)price; // Type Casitng [explicit]

    // Input in C++

    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number is: " << num << endl;

    // Operators
    // Arithmetic Operators

    int a = 10, b = 5;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    int ans = (5 / (double)2);
    cout << "Answer: " << ans << endl;
    cout << (5 / (double)2);

    // Relational Operators

    cout << (3 < 5) << endl;
    cout << (3 > 5) << endl;
    cout << (3 <= 3) << endl;
    cout << (3 != 5) << endl;

    // Relational Operators

    cout << ((3 < 1) || (3 < 1)) << endl;

    // Q1. WAP to print the sum of two numbers.

    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    int sum = x + y;

    cout << "The sum is: " << sum << endl;

    // Unary Operator

    int z = 5;
    cout << "The value of z is: " << z << endl;
    int f = z++;
    cout << "f: " << f << endl;
    cout << "z: " << z << endl;
    f = ++z;
    cout << "f: " << f << endl;
    cout << "z: " << z << endl;

    return 0;
}
