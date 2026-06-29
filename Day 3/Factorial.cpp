// Write a program to evaluate the Factorial of given integer n.

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    cout << "Factorial = " << factorial;

    return 0;
}