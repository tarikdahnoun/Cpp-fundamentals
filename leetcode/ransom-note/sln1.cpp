#include <iostream>

using namespace std;

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


int main() {
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
