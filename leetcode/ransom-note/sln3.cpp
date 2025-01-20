#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

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


int main()
{
	Solution s;
	string r = "aa";
	string m = "aab";

	cout << "Can ransomNote be constructed by using the letters from magazine? " << s.canConstruct(r, m) << endl;

	return 0;
}

/*
If true:
Can ransomNote be constructed by using the letters from magazine? 1

If false:
Can ransomNote be constructed by using the letters from magazine? 0
*/
