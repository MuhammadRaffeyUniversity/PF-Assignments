#include <iostream>
#include <string>
using namespace std;
int main()
{
    int balance = 1000;
    while (true)
    {
        string input = "";
        cout << "Enter 1 to deposit\nEnter 2 to withdraw\nEnter 3 to check balance\nEnter 4 to exit\n";
        cout << "\n------------------------------------------\n";
        cin >> input;
        cout << "------------------------------------------\n";
        if (input == "1")
        {
            int amount = 0;
            cout << "Enter amount to deposit\n";
            cin >> amount;
            cout << "You Deposited: " << amount << "$" << endl;
            balance += amount;
            cout << "Your New Balance is: " << balance << "$ " << endl;
            cout << "\n------------------------------------------\n";
        }
        else if (input == "2")
        {
            int amount = 0;
            cout << "Enter amount to withdraw\n";
            cin >> amount;
            if (amount > balance)
            {
                cout << "Insufficient balance " << balance << "$" << endl;
                cout << "\n------------------------------------------\n";
                continue;
            }
            else
            {
                cout << "You Withdrew: " << amount << "$" << endl;
                balance -= amount;
                cout << "Your New Balance is: " << balance << "$ " << endl;
                cout << "\n------------------------------------------\n";
            }
        }
        else if (input == "3")
        {
            cout << "Your Current Balance is: " << balance << "$ " << endl;
            cout << "\n------------------------------------------\n";
        }
        else if (input == "4")
        {
            cout << "Thank You For using Raffey's ATM" << endl;
            break;
        }
        else
        {
            cout << "Invalid input\n";
        }
    }
}