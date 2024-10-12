#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Welcome to Raffey's Coffee Shop" << endl;
    while (true)
    {
        string input = "";
        cout << "Enter 1 for Espresso\nEnter 2 to for Latte\nEnter 3 for Cappuccino\nEnter 4 to exit\n";
        cout << "\n------------------------------------------\n";
        cin >> input;
        // cout << input;
        cout << "------------------------------------------\n";
        if (input == "1")
        {
            string size = "";
            cout << "Enter 1 for small(2$)\nEnter 2 to for Medium(3$)\nEnter 3 for Large(4$)\n\t";
            cin >> size;
            cout << "\n------------------------------------------\n";
            if (size == "1")
            {
                cout << "You ordered small espresso" << endl;
                cout << "\n------------------------------------------\n";
            }
            else if (size == "2")
            {
                cout << "You ordered medium espresso" << endl;
                cout << "\n------------------------------------------\n";
            }
            else if (size == "3")
            {
                cout << "You ordered large espresso" << endl;
                cout << "\n------------------------------------------\n";
            }
            else
            {
                cout << "Invalid Size" << endl;
                cout << "\n------------------------------------------\n";
            }
        }
        else if (input == "2")
        {
            string size = "";
            cout << "Enter 1 for small(3$)\nEnter 2 to for Medium(4$)\nEnter 3 for Large(5$)\n\t";
            cin >> size;
            cout << "\n------------------------------------------\n";
            if (size == "1")
            {
                cout << "You ordered small Latte" << endl;
                cout << "\n------------------------------------------\n";
            }
            else if (size == "2")
            {
                cout << "You ordered medium Latte" << endl;
                cout << "\n------------------------------------------\n";
            }
            else if (size == "3")
            {
                cout << "You ordered large Latte" << endl;
                cout << "\n------------------------------------------\n";
            }
            else
            {
                cout << "Invalid size" << endl;
                cout << "\n------------------------------------------\n";
            }
        }
        else if (input == "3")
        {
            string size = "";
            cout << "Enter 1 for small(4$)\nEnter 2 to for Medium(5$)\nEnter 3 for Large(6$)\n\t";
            cin >> size;
            cout << "\n------------------------------------------\n";
            if (size == "1")
            {
                cout << "You ordered small Cappuccino" << endl;
                cout << "\n------------------------------------------\n";
            }
            else if (size == "2")
            {
                cout << "You ordered medium Cappuccino" << endl;
                cout << "\n------------------------------------------\n";
            }
            else if (size == "3")
            {
                cout << "You ordered large Cappuccino" << endl;
                cout << "\n------------------------------------------\n";
            }
            else
            {
                cout << "Invalid Size" << endl;
                cout << "\n------------------------------------------\n";
            }
        }
        else if (input == "4")
        {
            cout << "Thank you for using Raffey's Coffee Shop" << endl;
            cout << "\n------------------------------------------\n";
            break;
        }
        else
        {
            cout << "Invalid Type" << endl;
            cout << "\n------------------------------------------\n";
        }
    }
}