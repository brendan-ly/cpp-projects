#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::string;

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do {
        cout << "*******************\n";
        cout << "Enter your choice: \n";
        cout << "*******************\n";
        cout << "1. Show Balance: \n";
        cout << "2. Deposit Money: \n";
        cout << "3. Withdraw Money: \n";
        cout << "4. Exit\n";
        cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice) {
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit(balance);
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 4: cout << "Thanks for using our bank!\n";
                break;
        default: cout << "Invalid choice.\n";
        }
    } while(choice != 4);

    return 0;
}

    void showBalance(double balance) {
        cout << "Your balance is: " << "$" << std::setprecision(2) << std::fixed << balance << '\n';
    }

    double deposit(double balance) {
        double amt = 0;
        cout << "Enter amount to deposit: \n";
        cin >> amt; 

        if (amt > 0) {
            return amt;
        } else {
            cout << "Not a valid amount!\n";
            return 0;
        } 
    }

    double withdraw(double balance) {
        double amt = 0;
        cout << "Enter amount to withdraw: \n";
        cin >> amt;

        if (amt < 0) {
            cout << "Not a valid amount!\n";
            return 0;
        } else if (amt > balance) {
            cout << "You cannot withdraw more money than you have available.\n";
            return 0;
        } else {
            return amt;
        }
    }