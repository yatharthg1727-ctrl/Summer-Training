// write a program to print sum of all integers from 1 to N.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the value of N: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}