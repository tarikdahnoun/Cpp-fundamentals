#include <iostream>
#include "Sort.cpp"

using namespace std;

int main()
{
    Sort sorter;

    int nums[] = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    int sizeNums = sizeof(nums) / sizeof(nums[0]);
    // sorter.mergeSort(nums, 0, sizeNums - 1);
    // sorter.insertionSortInc(nums, 0, sizeNums - 1);
    sorter.quickSort(nums, 0, sizeNums - 1);

    cout << "Sorted array: ";
    sorter.printArr(nums, 0, sizeNums);
    cout << endl;

    string strs[] = {"apple", "orange", "banana", "grape", "cherry"};
    int sizeStrs = sizeof(strs) / sizeof(strs[0]);
    // sorter.mergeSort(strs, 0, sizeStrs - 1);
    // sorter.insertionSortInc(strs, 0, sizeStrs - 1);
    sorter.quickSort(strs, 0, sizeStrs - 1);

    cout << "Sorted array: ";
    sorter.printArr(strs, 0, sizeStrs);
    cout << endl;

    return 0;
}

/* SAMPLE OUTPUT
Sorted array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 
Sorted array: apple, banana, cherry, grape, orange,
*/