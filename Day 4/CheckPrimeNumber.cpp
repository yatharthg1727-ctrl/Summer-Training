// Write a funtion to check Prime number.

#include <iostream>
using namespace std;

// Function Declaration
bool isPrime(int n);

// Function Definition
bool isPrime(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPrime(num))
        cout << num << " is a Prime Number.";
    else
        cout << num << " is Not a Prime Number.";

    return 0;
}