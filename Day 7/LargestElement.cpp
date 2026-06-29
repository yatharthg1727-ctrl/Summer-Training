// Write a program to print largest element using pointer.

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

    int largest = *ptr;

    for(int i = 1; i < 5; i++)
    {
        if(*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    cout << "Largest Element = " << largest;

    return 0;
}