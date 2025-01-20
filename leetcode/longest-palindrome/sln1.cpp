#include <iostream>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int longestPalindrome(string s)
    {
        int oddFreqCharsCount = 0;
        unordered_map<char, int> frequencyMap;

        for (char c : s)
        {
            frequencyMap[c]++;

            if ((frequencyMap[c] % 2) == 1)
            {
                oddFreqCharsCount++;
            }
            else
            {
                oddFreqCharsCount--;
            }
            
        }

        if (oddFreqCharsCount > 0)
        {
            return s.length() - oddFreqCharsCount + 1;
        }
        else
        {
            return s.length();
        }
    }
};


int main() {
    Solution S;
    string s = "abccccdd";

    cout << "The longest palindrome in "
         << s 
         << " is: "
         << S.longestPalindrome(s)
         << endl;

    return 0;
}
