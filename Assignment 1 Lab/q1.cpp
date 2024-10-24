#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    system("Color FC");
    int matrix1[2][2], matrix2[2][2], result[2][2];
    cout << "Enter elements of the first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "The resulting matrix is:" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
