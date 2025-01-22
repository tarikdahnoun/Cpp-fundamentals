#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> numCounts;
        
        for (int i = 0; i < nums.size(); i++)
        {
            numCounts[nums[i]]++;
        }

        for (const int num : numCounts)
        {
            if (num.second > nums.size() / 2)
            {
                return num.first;
            }
        }

        return -1;
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
