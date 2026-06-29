// Write a program to print Maximum of Two numbers.

#include <iostream>
using namespace std;

// Function Declaration
int maximum(int a, int b);

// Function Definition
int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Maximum Number = " << maximum(x, y);

    return 0;
}