// Write a program to print unique elements using set .

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(20);

    cout << "Unique Elements: ";

    for(int x : s) {
        cout << x << " ";
    }

    return 0;
}