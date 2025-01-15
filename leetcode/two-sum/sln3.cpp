#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end() && hash[complement] != i)
            {
                return {i, hash[complement]};
            }
            hash[nums[i]] = i;
        }

        return {};
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