#include <iostream>
#include <vector>

using namespace std;

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

int main() {
    Solution S;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    cout << "Target was found in index (-1 means not found): "
         << S.search(nums, target) << endl;

    return 0;
}

/*
Target was found in index (-1 means not found): 4
*/