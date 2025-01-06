#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

bool isValidEmailEven(const char email[])
{
    bool hasAtSymbol = false;
    bool hasDotAfterAt = false;

    for (int i = 0; email[i] != '\0'; i++)
    {
        if (email[i] == '@')
        {
            hasAtSymbol = true;
        }
        if (hasAtSymbol && email[i] == '.')
        {
            hasDotAfterAt = true;
        }
    }

    return (hasAtSymbol && hasDotAfterAt);
}

bool isValidEmailOdd(const char email[])
{
    bool hasAtSymbol = false;
    bool hasUnderscore = false;

    for (int i = 0; email[i] != '\0'; i++)
    {
        if (email[i] == '@')
        {
            hasAtSymbol = true;
        }
        if (email[i] == '_')
        {
            hasUnderscore = true;
        }
    }

    return (hasAtSymbol && !hasUnderscore);
}

int main()
{
    system("Color FC");
    char sapID[20];
    char email[100];

    while (true)
    {
        cout << "Enter your SAP ID: ";
        cin >> sapID;

        if (strlen(sapID) == 0)
        {
            cout << "SAP ID cannot be empty. Please try again." << endl;
            continue;
        }

        char lastDigit = sapID[strlen(sapID) - 1];

        cout << "Enter your email address: ";
        cin >> email;

        if (lastDigit == '0' || (lastDigit >= '2' && lastDigit <= '8' && lastDigit % 2 == 0))
        {
            if (!isValidEmailEven(email))
            {
                cout << "Invalid email! The email must contain '@' and at least one '.' after '@'." << endl;
                continue;
            }
        }
        else if (lastDigit >= '1' && lastDigit <= '9' && lastDigit % 2 != 0)
        {
            if (!isValidEmailOdd(email))
            {
                cout << "Invalid email! The email must contain '@' and should not have an underscore ('_')." << endl;
                continue;
            }
        }
        else
        {
            cout << "Invalid SAP ID format. Please try again." << endl;
            continue;
        }
        cout << "Email is valid. Thank you!" << endl;
        break;
    }
    return 0;
}