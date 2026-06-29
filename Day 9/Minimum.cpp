// Write a program to print minimum element.

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

    int minElement = v[0];

    for(int i = 1; i < n; i++)
    {
        if(v[i] < minElement)
        {
            minElement = v[i];
        }
    }

    cout << "Minimum Element = " << minElement;

    return 0;
}
