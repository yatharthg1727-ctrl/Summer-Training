// write a code for power funtion.

#include <iostream>
using namespace std;

// Function Declaration
int power(int base, int exponent);

// Function Definition
int power(int base, int exponent)
{
    int result = 1;

    for(int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << "Power = " << power(base, exponent);

    return 0;
}