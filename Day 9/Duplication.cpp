// Write a program to remove duplication.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> v;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        bool found = false;

        for(int j = 0; j < v.size(); j++)
        {
            if(v[j] == x)
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            v.push_back(x);
        }
    }

    cout << "After removing duplicates: ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}