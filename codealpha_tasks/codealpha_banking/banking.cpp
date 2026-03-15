#include <iostream>
using namespace std;

class Account
{
private:
    string name;
    int accNumber;
    float balance;

public:

    void createAccount()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Amount deposited successfully!\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
        else
        {
            cout << "Insufficient balance!\n";
        }
    }

    void display()
    {
        cout << "\nAccount Details:\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account user;
    int choice;

    user.createAccount();

    do
    {
        cout << "\n\n1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                user.deposit();
                break;

            case 2:
                user.withdraw();
                break;

            case 3:
                user.display();
                break;

            case 4:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 4);

    return 0;
}