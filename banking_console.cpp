#include <iostream>
using namespace std;

double balance = 0;

void deposit() {
    double amount;
    cout << "Enter deposit amount: ";
    cin >> amount;
    balance += amount;
    cout << "New balance: " << balance << endl;
}

void withdraw() {
    double amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient funds." << endl;
    } else {
        balance -= amount;
        cout << "New balance: " << balance << endl;
    }
}

void checkBalance() {
    cout << "Current balance: " << balance << endl;
}

int main() {
    int choice;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: deposit(); break;
            case 2: withdraw(); break;
            case 3: checkBalance(); break;
            case 4: cout << "Goodbye!"; break;
            default: cout << "Invalid option."; break;
        }

    } while (choice != 4);

    return 0;
}