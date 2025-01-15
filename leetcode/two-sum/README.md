# Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Solution 1: Brute force
### Time: O(n<sup>2</sup>), Space O(1)
``` c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        for (int i=0; i < nums.size(); i++)
        {
            cout << nums[i];
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
```

## Solution 2: Two pass hash table
### Time: O(n), Space: O(n)

``` c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (hash.find(complement) != hash.end() && hash[complement] != i)
            {
                return {i, hash[complement]};
            }
        }

        return {};
    }
};
```

## Solution 3: One pass hash table
### Time: O(1) - O(n), Space: O(n)

``` c++
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
```
