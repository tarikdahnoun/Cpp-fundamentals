#include <iostream>

using namespace std;


class Solution {
public:
    int longestPalindrome(string s)
    {
        const int TOTAL_CHARS = 52;
        const int LOWER_START = 0;
        const int UPPER_START = 26;

        int charCount[TOTAL_CHARS] = {0};

        for (char c: s)
        {
            if (c >= 'a' && c <= 'z')
            {
                charCount[LOWER_START + c - 'a']++;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                charCount[UPPER_START + c - 'A']++;
            }
            else
            {
                cout << "WARNING: The character '" << c << "' is out of range. " << endl;
            }
        }

        int length = 0;
        bool oddExists = false;

        for (int count: charCount)
        {            
            if (count % 2 == 0)
            {
                length += count;
            }
            else
            {
                length += count - 1;
                oddExists = true;
            }
        }

        if (oddExists)
        {
            length++;
        }

        return length;
    }
};


int main() {
    Solution S;
    string s = "abcccabccccddcdd";

    cout << "The longest palindrome in "
         << s 
         << " is: "
         << S.longestPalindrome(s)
         << endl;

    return 0;
}