// Write a program to remove Duplicates of array using set.

#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    set<int> s;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << "After Removing Duplicates: ";

    for(int x : s)
        cout << x << " ";

    return 0;
}