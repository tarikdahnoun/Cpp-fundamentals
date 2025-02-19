#include <iostream>

using namespace std;

// The API isBadVersion is defined for you, this is a example implementation to test
bool isBadVersion(int version)
{  return version >= 2;  }

class Solution {
public:
    int firstBadVersion(int n)
    {
        int left = 1, right = n;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
};

int main() {
    Solution s;
    cout << "The first bad version is: "
         << s.firstBadVersion(10) << endl;

    return 0;
}
