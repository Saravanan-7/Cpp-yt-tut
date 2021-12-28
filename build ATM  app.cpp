#include <iostream>
using namespace std;

void showMenu() {
    cout << "*****MENU*****" << endl;
    cout << " 1.Check balance " << endl;
    cout << " 2.Deposit " << endl;
    cout << " 3.Withdrawal " << endl;
    cout << " 4.Exit " << endl;
    cout << "**************" << endl;
}

int main()
{
    int option;
    double balance = 500;

    do {
        showMenu();
        cout << "option : ";
        cin >> option;
        system("cls");
        switch (option) {
        case 1: cout << "Balance is " << balance << " Rupees" << endl;
            break;
        case 2: cout << "deposit amount : ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            cout << "current balance : " << balance << " Rupees " << endl;
            break;
        case 3: cout << "Withdraw Amount : ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "not enough money" << endl; break;
        default: cout << " Enter a valid option " << endl;
            break;
        }
    } while (option != 4);
    cout << " THank You, Welcome " << endl;
    
    system("pause>0");
}

