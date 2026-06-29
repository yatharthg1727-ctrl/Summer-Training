// write a program to rotate vector.

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

    int first = v[0];

    for(int i = 0; i < n - 1; i++)
    {
        v[i] = v[i + 1];
    }

    v[n - 1] = first;

    cout << "Rotated Vector: ";

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}