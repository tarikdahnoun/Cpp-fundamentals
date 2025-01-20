# Longest Palindrome

## Solution 1
Time: `O(n)`
Space: `O(n)`

``` c++
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
```

## Solution 2
Time: `O(n)`
Space: `O(n)`

``` c++
class Solution {
public:
    int longestPalindrome(string s)
    {
        unordered_set<char> charSet;
        int res = 0;

        for (char c : s)
        {
            if (charSet.find(c) != charSet.end())
            {
                charSet.erase(c);
                res += 2;
            }
            else
            {
                charSet.insert(c);
            }
        }

        if (!charSet.empty())
        {
            res++;
        }

        return res;
    }
};

```
## Solution 3
Time: `O(n)`
Space: `O(1)`

``` c++
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
```
