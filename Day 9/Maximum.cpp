// Write a program to print maximum element.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int maxElement = v[0];

    for(int i = 1; i < n; i++)
    {
        if(v[i] > maxElement)
        {
            maxElement = v[i];
        }
    }

    cout << "Maximum Element = " << maxElement;

    return 0;
}