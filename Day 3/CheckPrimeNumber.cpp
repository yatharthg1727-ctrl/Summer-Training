// Write a program to check entered number is Prime or Not?

#include <iostream>
using namespace std;

int main()
{
    int num, i;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1)
    {
        prime = false;
    }
    else
    {
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if(prime)
        cout << num << " is a Prime Number.";
    else
        cout << num << " is Not a Prime Number.";

    return 0;
}