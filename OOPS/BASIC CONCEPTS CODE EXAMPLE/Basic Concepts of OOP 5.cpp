#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // Data members
    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

public:
    // Member function to assign values (account creation)
    void createAccount(string name, int accNo, string type, float initialBalance) {
        depositorName = name;
        accountNumber = accNo;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit amount
    void depositAmount(float amount) {
        balance += amount;
        cout << "Amount deposited successfully. Current balance: $" << balance << endl;
    }

    // Function to withdraw amount after checking balance
    void withdrawAmount(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully. Current balance: $" << balance << endl;
        }
    }

    // Function to display name and balance
    void displayDetails() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    string name;
    int accNo;
    string type;
    float initialBalance, deposit, withdraw;

    // Creating account
    cout << "Enter depositor's name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter account type (e.g., Savings/Current): ";
    cin >> type;
    cout << "Enter initial balance: $";
    cin >> initialBalance;

    account.createAccount(name, accNo, type, initialBalance);

    // Deposit money
    cout << "\nEnter amount to deposit: $";
    cin >> deposit;
    account.depositAmount(deposit);

    // Withdraw money
    cout << "\nEnter amount to withdraw: $";
    cin >> withdraw;
    account.withdrawAmount(withdraw);

    // Display account details
    cout << "\nAccount Details:" << endl;
    account.displayDetails();

    return 0;
}

