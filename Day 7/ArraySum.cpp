// Write a program to print Array sum using pointers.

#include <iostream>
using namespace std;

int main()
{
    int arr[5], sum = 0;
    int *ptr = arr;

    cout << "Enter 5 elements:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }

    for(int i = 0; i < 5; i++)
    {
        sum = sum + *(ptr + i);
    }

    cout << "Sum = " << sum;

    return 0;
}