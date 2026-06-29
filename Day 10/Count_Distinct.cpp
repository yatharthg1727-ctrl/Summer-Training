// Write a program to print count distinct elements.

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

    cout << "Distinct Elements Count = " << s.size();

    return 0;
}