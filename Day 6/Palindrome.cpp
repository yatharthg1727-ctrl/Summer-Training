// Write a program to check entered sstring is palindrome or not?

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, rev = "";

    cout << "Enter a string: ";
    cin >> str;

    for(int i = str.length() - 1; i >= 0; i--)
    {
        rev = rev + str[i];
    }

    if(str == rev)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}