#include <iostream>

using namespace std;

void linearSearch(int arr[], int size, int value)
{
    cout << "-----------------------\n"
         << "     Linear Search     \n"
         << "-----------------------\n";
    int valuePosition;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == value)
        {
            valuePosition = i;
            cout << "Found value " << value << " in position " << valuePosition << "\n"; 
        }
    }
}

int main()
{
    int value = 999;
    const int LEN_NUMS = 10;
    int nums[LEN_NUMS] = {0, 101, 150, 180, 210, 349, 498, 543, 999, 1000};
    linearSearch(nums, LEN_NUMS, value);
    return 0;
}
