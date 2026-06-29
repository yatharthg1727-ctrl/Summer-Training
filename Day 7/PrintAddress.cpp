// Write a program to print address.

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << ptr << endl;

    return 0;
}