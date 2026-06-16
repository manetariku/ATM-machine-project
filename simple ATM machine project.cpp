#include <iostream>
using namespace std;

void showMenu()
{
    cout << "\n========== ATM MENU ==========\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";
    cout << "==============================\n";
}

int main()
{
    int option;
    double balance = 500.0;

    do
    {
        showMenu();

        cout << "Enter your option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Current Balance: $" << balance << endl;
            break;

        case 2:
        {
            double depositAmount;

            cout << "Enter deposit amount: $";
            cin >> depositAmount;

            if (depositAmount > 0)
            {
                balance += depositAmount;
                cout << "Deposit successful!" << endl;
                cout << "New Balance: $" << balance << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }

            break;
        }

        case 3:
        {
            double withdrawAmount;

            cout << "Enter withdrawal amount: $";
            cin >> withdrawAmount;

            if (withdrawAmount <= 0)
            {
                cout << "Invalid withdrawal amount." << endl;
            }
            else if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
                cout << "Withdrawal successful!" << endl;
                cout << "Remaining Balance: $" << balance << endl;
            }
            else
            {
                cout << "Insufficient balance!" << endl;
            }

            break;
        }

        case 4:
            cout << "Thank you for using the ATM. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid option. Please try again." << endl;
        }

    } while (option != 4);

    return 0;
}