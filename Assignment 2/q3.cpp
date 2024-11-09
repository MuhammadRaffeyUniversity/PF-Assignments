#include <iostream>

using namespace std;

int collatz_sequence_length(int n)
{
    int length = 1;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        length++;
    }

    return length;
}

int main()
{
    int maxLength = 0;
    int startingNumber = 0;

    for (int i = 1; i <= 1000; ++i)
    {
        int currentLength = collatz_sequence_length(i);

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
            startingNumber = i;
        }
    }

    cout << "The starting number between 1 and 1000 that produces the longest chain is: " << startingNumber << endl;
    cout << "The length of this chain is: " << maxLength << endl;

    return 0;
}
