#include <iostream>

using namespace std;


// Conversion of decimal to binary.
int decToBinary(int decNum) {
    int ans = 0;
    int pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    
    return ans;
}

// Conversion of binary to decimal.
int binToDec(int binNum) {
    int ans = 0;
    int pow = 1;
    while (binNum > 0) {
        int rem = binNum % 10;
        binNum /= 10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int dec;

    cout << "Enter the decimal number: ";
    cin >> dec;

    cout << "The number in binary is: " << decToBinary(dec) << endl;

    int bin;

    cout << "Enter the binary number: ";
    cin >> bin;

    cout << "The number in decimal is: " << binToDec(bin) << endl;
    return 0;
}
