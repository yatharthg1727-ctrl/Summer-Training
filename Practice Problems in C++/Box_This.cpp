// Use this pointer in setLength() to resolve naming conflict, then display length.

#include <iostream>
using namespace std;

class Box {
    int length;

public:
    void setLength(int length) {
        this->length = length;
    }

    void display() {
        cout << "Length = " << length << endl;
    }
};

int main() {
    Box b;

    int l;

    cout << "Enter Length: ";
    cin >> l;

    b.setLength(l);

    b.display();

    return 0;
}