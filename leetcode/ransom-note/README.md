# Ransom Note

Given two strings `ransomNote` and `magazine`, return `true` if `ransomNote` can be constructed by using the letters from `magazine` and `false` otherwise.

Each letter in `magazine` can only be used once in `ransomNote`.

## Solution 1:  Frequency Array
Time: `O(m + n)`, `m`: length of magazine, `n` : length of ransomNote.
Space: `O(1)` array size of 26.

``` c++
class Solution
{
	public:
		bool canConstruct(string ransomNote, string magazine)
		{
            int charCount[26] = {0};
            for (char c: magazine) charCount[c - 'a']++;
            for (char c: ransomNote) if (--charCount[c - 'a'] < 0) return false;
            return true;
		}
};
```

## Solution 2: Sorting
Time: `O(m * log m + n * log n)`.
Space: `O(1)` without the sorting.

``` c++
class Solution
{
	public:
		bool canConstruct(string ransomNote, string magazine)
		{
            sort(ransomNote.begin(), ransomNote.end());
            sort(magazine.begin(), magazine.end());
            
            int i = 0, j = 0;
            while (i < ransomNote.size() && j < magazine.size())
            {
                if (ransomNote[i] == magazine[j])
                {
                    i++;
                }
                j++;
            }
            
            return i == ransomNote.size();
		}
};
```


## Solution 3: Unordered map
Time: `O(m + n)`.
Space: `O(k)`.

``` c++
class Solution
{
	public:
		bool canConstruct(string ransomNote, string magazine)
		{
			unordered_map<char, int> charCount;
			
			for (char c : magazine)
			{
				charCount[c]++;
			}

			for (char c: ransomNote)
			{
				if (charCount[c] == 0)
				{
					return false;
				}

				if (charCount[c] > 0)
				{
					charCount[c]--;
				}
				else
				{
					return false;
				}
			}

			return true;
		}
};
```


