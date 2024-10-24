#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    system("Color FC");
    const int racks = 5;
    const int shelves = 4;
    string libraryRack[racks][shelves];

    for (int i = 0; i < racks; i++)
    {
        for (int j = 0; j < shelves; j++)
        {
            libraryRack[i][j] = "Empty";
        }
    }

    char choice;
    do
    {
        cout << "\nCurrent Library Rack Contents:\n";
        for (int i = 0; i < racks; i++)
        {
            for (int j = 0; j < shelves; j++)
            {
                if (libraryRack[i][j] != "Empty")
                {
                    cout << "Rack " << i + 1 << ", Shelf " << j + 1 << ": " << libraryRack[i][j] << endl;
                }
            }
        }

        cout << "\nDo you want to place a book in the library? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            int rackNumber, shelfNumber;
            string bookTitle;

            cout << "Enter the rack number (1-5): ";
            cin >> rackNumber;
            cout << "Enter the shelf number (1-4): ";
            cin >> shelfNumber;

            cout << "Enter the title of the book: ";
            cin >> bookTitle;

            if (rackNumber >= 1 && rackNumber <= racks && shelfNumber >= 1 && shelfNumber <= shelves)
            {
                libraryRack[rackNumber - 1][shelfNumber - 1] = bookTitle;
            }
            else
            {
                cout << "Invalid rack or shelf number. Please try again.\n";
            }
        }

    } while (choice == 'y' || choice == 'Y');

    cout << "\nFinal Library Rack Contents:\n";
    for (int i = 0; i < racks; i++)
    {
        for (int j = 0; j < shelves; j++)
        {
            if (libraryRack[i][j] != "Empty")
            {
                cout << "Rack " << i + 1 << ", Shelf " << j + 1 << ": " << libraryRack[i][j] << endl;
            }
        }
    }

    string searchTitle;
    cout << "\nEnter the title of the book you want to find: ";
    cin >> searchTitle;

    bool found = false;
    for (int i = 0; i < racks; i++)
    {
        for (int j = 0; j < shelves; j++)
        {
            if (libraryRack[i][j] == searchTitle)
            {
                cout << "Book '" << searchTitle << "' found at Rack " << i + 1 << ", Shelf " << j + 1 << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        cout << "Book '" << searchTitle << "' not found in the library.\n";
    }

    cout << "\n-----------------------------\nThank You for Using Raffey's Library\n-----------------------------\n";
    return 0;
}
