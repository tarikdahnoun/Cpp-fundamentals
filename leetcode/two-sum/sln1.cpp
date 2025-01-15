#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        for (int i=0; i < nums.size(); i++)
        {
            int val = target - nums[i];
            for (int j = i+1; j < nums.size(); j++)
            {
                if (val == nums[j])
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        cout << endl;

        return res;
    }
};

int main() {
    vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15);

    Solution s;
    vector<int> result = s.twoSum(numbers, 9);

    cout << "First element: " << result[0] << endl;
    cout << "Second element: " << result[1] << endl;

    return 0;
}