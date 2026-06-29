// Write a code of the program of Sum funtion.

#include <iostream>
using namespace std;

// Function Declaration
int sum(int a, int b);

// Function Definition
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Sum = " << sum(num1, num2);

    return 0;
}