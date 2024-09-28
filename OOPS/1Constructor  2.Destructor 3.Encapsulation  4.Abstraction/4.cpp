#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount account(12345, 1000.0);
    account.deposit(500.0);
    account.withdraw(300.0);
    account.withdraw(1500.0);
    return 0;
}

