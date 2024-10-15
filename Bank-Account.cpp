#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string holder, int number, double initialBalance) {
        accountHolder = holder;
        accountNumber = number;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
        else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    // Function to check the balance
    double checkBalance() {
        return balance;
    }

    // Function to display account details
    void displayAccountInfo() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount account("John Doe", 123456, 500.0);

    // Displaying initial account information
    account.displayAccountInfo();

    // Depositing money
    account.deposit(150.0);

    // Checking balance
    cout << "Current Balance: $" << account.checkBalance() << endl;

    // Withdrawing money
    account.withdraw(100.0);

    // Checking balance after withdrawal
    cout << "Current Balance: $" << account.checkBalance() << endl;

    // Displaying final account information
    account.displayAccountInfo();

    return 0;
}
