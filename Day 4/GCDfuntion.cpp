// Write a code for GCD( Greatest common divisor) funtion.

#include <iostream>
using namespace std;

// Function Declaration
int gcd(int a, int b);

// Function Definition
int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD = " << gcd(num1, num2);

    return 0;
}