#include <iostream>
using namespace std;
int main()
{
    int balance = 1000;
    while (true)
    {

        int uInp;
        cout << "1.Check Balance\n2.Deposit Money\n3.Withdraw Money\n4.Exit ";
        cin >> uInp;
        if (uInp == 1)
        {
            cout << "Balance: " << balance << endl;
        }
        else if (uInp == 2)
        {
            int amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
        }
        else if (uInp == 3)
        {
            int amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
        }
    }
}