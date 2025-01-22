#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int count = 0;
        for (const int num : nums)
        {
            if (count == 0)
            {
                ans = num;
            }

            count += num == ans ? 1 : -1;
        }
        return ans;
    }
};

int main() {
    Solution S;
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << "The majority element is: " << S.majorityElement(nums) << endl;

    return 0;
}

/*
The majority element is: 2
*/
