// Write a program to print all integer freom 1 to N.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    return 0;
}