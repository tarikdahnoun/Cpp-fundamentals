# Binary Search
Time: `O(log n)`
Space: `O(1)`

``` c++
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = (low + high) / 2;
        int valueIndex = -1;

        while (valueIndex == -1 && low <= high)
        {
            mid = (low + high) / 2;
            
            if (nums[mid] == target)
            { return mid; }
            else if (nums[mid] < target)
            { low = mid + 1; }
            else if (nums[mid] > target)
            { high = mid - 1; }
            else
            { cout << "Unexpected error" << endl; }   
        }

        return valueIndex;
    }
};
```
