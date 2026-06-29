// Implement deposit() and withdraw() methods. Display final balance.

#include <iostream>
using namespace std;

class BankAccount {
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    void display() {
        cout << "Final Balance = " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    float dep, wit;

    cout << "Enter Deposit Amount: ";
    cin >> dep;

    acc.deposit(dep);

    cout << "Enter Withdraw Amount: ";
    cin >> wit;

    acc.withdraw(wit);

    acc.display();

    return 0;
}