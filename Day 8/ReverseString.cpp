// Write a program to display the reverse string.
#include <iostream>
using namespace std;

void reverse(string str, int index)
{
    if (index < 0)
        return;

    cout << str[index];
    reverse(str, index - 1);
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reverse String: ";
    reverse(str, str.length() - 1);

    return 0;
}