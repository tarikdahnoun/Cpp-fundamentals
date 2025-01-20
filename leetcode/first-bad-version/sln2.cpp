#include <iostream>

using namespace std;

// The API isBadVersion is defined for you, this is a example implementation to test
bool isBadVersion(int version)
{  return version >= 2;  }

class Solution {
public:
    int firstBadVersion(int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (isBadVersion(i))
            {
                return i;
            }
        }

        return n;
    }
};

int main() {
    Solution s;
    cout << "The first bad version is: "
         << s.firstBadVersion(10) << endl;

    return 0;
}
