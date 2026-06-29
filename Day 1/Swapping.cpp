// write a program to print swap of two numbers.

#include <iostream>
using namespace std;

int main() 
{
    int a, b, temp;

    cout << "Enter first numbers: ";
    cin >> a ;

    cout << "Enter second numbers: ";
    cin >> b ;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}