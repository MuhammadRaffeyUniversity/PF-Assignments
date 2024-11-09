#include <iostream>
#include <string>
using namespace std;

int main()
{
    string items[4] = {
        "1. Hamburger: $4.50", "2. Cheeseburger: $5.00", "3. French fries: $2.50", "4. Soft drink: $1.50"};
    int count = 0;
    int order = 0;
    int quantity = 0;
    float total = 0;

    do
    {
        if (count == 0)
        {
            cout << "Welcome to the restaurant! Here is the menu: " << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << items[i] << endl;
            }
            cout << "Please enter the number of the item you would like to order: ";
            cin >> order;
            cout << "Enter the quantity: ";
            cin >> quantity;
            switch (order)
            {
            case 1:
                total += 4.50 * quantity;
                cout << "You have ordered " << quantity << " Hamburger(s). " << endl;
                break;
            case 2:
                total += 5.00 * quantity;
                cout << "You have ordered " << quantity << " Cheeseburger(s). " << endl;
                break;
            case 3:
                total += 2.50 * quantity;
                cout << "You have ordered " << quantity << " French fries. " << endl;
                break;
            case 4:
                total += 1.50 * quantity;
                cout << "You have ordered " << quantity << " Soft drink(s). " << endl;
                break;
            default:
                cout << "Invalid input. Please enter a number between 1 and 4." << endl;
                continue;
            }
            cout << "Current total: $" << total << endl;
            count++;
        }
        else
        {
            cout << "Would you like to order more items? (y/n): ";
            string answer;
            cin >> answer;
            if (answer == "n" || answer == "N")
            {
                cout << "Thank you for your order! Here is your total: $" << total << endl;
                break;
            }
            else if (answer == "y" || answer == "Y")
            {
                cout << "Here is the menu: " << endl;
                for (int i = 0; i < 4; i++)
                {
                    cout << items[i] << endl;
                }
                cout << "Please enter the number of the item you would like to order: ";
                cin >> order;
                cout << "Enter the quantity: ";
                cin >> quantity;
                switch (order)
                {
                case 1:
                    total += 4.50 * quantity;
                    cout << "You have ordered " << quantity << " Hamburger(s). " << endl;
                    break;
                case 2:
                    total += 5.00 * quantity;
                    cout << "You have ordered " << quantity << " Cheeseburger(s). " << endl;
                    break;
                case 3:
                    total += 2.50 * quantity;
                    cout << "You have ordered " << quantity << " French fries. " << endl;
                    break;
                case 4:
                    total += 1.50 * quantity;
                    cout << "You have ordered " << quantity << " Soft drink(s). " << endl;
                    break;
                default:
                    cout << "Invalid input. Please enter a number between 1 and 4." << endl;
                    continue;
                }
                cout << "Current total: $" << total << endl;
            }
            else
            {
                cout << "Invalid input. Please enter y or n." << endl;
            }
        }
    } while (true);

    return 0;
}
