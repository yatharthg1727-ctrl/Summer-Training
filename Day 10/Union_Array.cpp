// Write a program to print union of array.

#include <iostream>
#include <set>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    set<int> unionSet;

    for(int i = 0; i < 4; i++)
        unionSet.insert(a[i]);

    for(int i = 0; i < 4; i++)
        unionSet.insert(b[i]);

    cout << "Union: ";

    for(int x : unionSet)
        cout << x << " ";

    return 0;
}