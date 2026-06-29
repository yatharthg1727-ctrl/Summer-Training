// Write a program to print Intersection of arrays.

#include <iostream>
#include <set>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    set<int> s(a, a + 4);

    cout << "Intersection: ";

    for(int i = 0; i < 4; i++) {
        if(s.find(b[i]) != s.end())
            cout << b[i] << " ";
    }

    return 0;
}