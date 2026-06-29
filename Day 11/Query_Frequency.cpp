// Write a program to print Query frequency 

#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    map<int, int> freq;
    int x;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    int q;

    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int num;
        cout << "Enter query element: ";
        cin >> num;

        cout << "Frequency = " << freq[num] << endl;
    }

    return 0;
}