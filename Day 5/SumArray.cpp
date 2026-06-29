//Write a program to calculate sum of all array elements.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}