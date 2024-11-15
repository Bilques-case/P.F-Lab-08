#include <iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int choice;
    double amount;

    do {
        // Display the menu
        cout << "\nBank Menu:\n";
        cout<< "\t\tGo through every step KINDLY\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Deposit
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully.\n";
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;

            case 2:
                // Withdraw
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > 0) {
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Amount withdrawn successfully.\n";
                    } else {
                        cout << "Insufficient balance.\n";
                    }
                } else {
                    cout << "Invalid amount. Please enter a positive value.\n";
                }
                break;

            case 3:
                // Check Balance
                cout << "Current balance: $" << balance << endl;
                break;

            case 4:
                // Exit
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
