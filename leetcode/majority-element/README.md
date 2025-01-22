# Majority Element

## Solution 1: Hashmap
Time: `O(n)`
Space: `O(n)`

``` c++
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
```


## Solution 2: Boyer-Moore Voting Algorithm
Time: `O(n)`
Space: `O(1)`

``` c++
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
```
