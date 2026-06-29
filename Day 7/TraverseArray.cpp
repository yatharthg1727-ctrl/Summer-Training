// Write a program to print traverse array using pointer.

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr = arr;

    cout << "Enter 5 elements:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }

    cout << "Array Elements:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}