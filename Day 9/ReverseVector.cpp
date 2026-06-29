// Write a program to print reverse vector.

#include <iostream>
#include <vector>
#include <algorithm>
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

    reverse(v.begin(), v.end());

    cout << "Reversed Vector: ";

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}