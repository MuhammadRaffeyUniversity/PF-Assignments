#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    bool isPalindrome = true;
    cout << "Enter a word: ";
    cin >> word;
    int length = word.length();
    for (int i = 0; i < length / 2; ++i)
    {
        char leftChar = (word[i] >= 'A' && word[i] <= 'Z') ? word[i] + 32 : word[i];
        char rightChar = (word[length - 1 - i] >= 'A' && word[length - 1 - i] <= 'Z') ? word[length - 1 - i] + 32 : word[length - 1 - i];

        if (leftChar != rightChar)
        {
            isPalindrome = false;
            break;
        }
    }

    cout << ((isPalindrome) ? "Congratulations! The word is a palindrome." : "Try again! The word is not a palindrome.") << endl;

    return 0;
}
