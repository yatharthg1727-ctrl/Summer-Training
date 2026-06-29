// Write a program to print Student Record using pair.

#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> student;

    student.first = 101;
    student.second = "Yatharth";

    cout << "Roll No: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    return 0;
}