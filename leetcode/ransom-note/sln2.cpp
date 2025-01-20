#include <iostream>
#include <algorithm>

using namespace std;

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
