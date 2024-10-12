#include <iostream>
using namespace std;
int main()
{
    int prevRead, currRead;
    cout << "Enter Previous Reading: ";
    cin >> prevRead;
    cout << "Enter Current Reading: ";
    cin >> currRead;
    int totalUnits = currRead - prevRead;
    cout << "Total Units: " << totalUnits << endl;
    if (totalUnits > 1 && totalUnits <= 100)
    {
        float unitPrice, totalAmount;
        unitPrice = 4.86;
        totalAmount = unitPrice * totalUnits;
        cout << "Unit Price According to Units Consumed: " << unitPrice << "\nTotal Amount: " << totalAmount;
    }
    else if (totalUnits > 100 && totalUnits <= 200)
    {
        float unitPrice, totalAmount;
        unitPrice = 6.57;
        totalAmount = unitPrice * totalUnits;
        cout << "Unit Price According to Units Consumed: " << unitPrice << "\nTotal Amount: " << totalAmount;
    }
    else if (totalUnits > 200 && totalUnits <= 350)
    {
        float unitPrice, totalAmount;
        unitPrice = 9.21;
        totalAmount = unitPrice * totalUnits;
        cout << "Unit Price According to Units Consumed: " << unitPrice << "\nTotal Amount: " << totalAmount;
    }
    else if (totalUnits > 350 && totalUnits <= 800)
    {
        float unitPrice, totalAmount;
        unitPrice = 14.81;
        totalAmount = unitPrice * totalUnits;
        cout << "Unit Price According to Units Consumed: " << unitPrice << "\nTotal Amount: " << totalAmount;
    }
    else if (totalUnits > 800 && totalUnits <= 999)
    {
        float unitPrice, totalAmount;
        unitPrice = 19.25;
        totalAmount = unitPrice * totalUnits;
        cout << "Unit Price According to Units Consumed: " << unitPrice << "\nTotal Amount: " << totalAmount;
    }
    else if (totalUnits > 999 && totalUnits <= 2500)
    {
        float unitPrice, totalAmount;
        unitPrice = 24.58;
        totalAmount = unitPrice * totalUnits;
        cout << "Unit Price According to Units Consumed: " << unitPrice << "\nTotal Amount: " << totalAmount;
    }
    else if (totalUnits > 2500)
    {
        float unitPrice, totalAmount;
        unitPrice = 34.12;
        totalAmount = unitPrice * totalUnits;
        cout << "Unit Price According to Units Consumed: " << unitPrice << "\nTotal Amount: " << totalAmount;
    }
    else
    {
        cout << "Invalid Input";
    }
}