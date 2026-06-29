// Write a program to store and print elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Elements are: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}