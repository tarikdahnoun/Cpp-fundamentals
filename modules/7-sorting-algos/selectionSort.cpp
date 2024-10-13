#include <iostream>

using namespace std;

void printArray(int arr[], int size) 
{
    cout << "{";
    for(int i = 0; i < size; i++)
    {   
        cout << arr[i] << ", ";
    }
    cout << "}" << endl;
}

void selectionSort(int arr[], int size)
{
    int minIndex;
    int minValue;
    cout << "-----------------------\n"
         << "    Selection Sort     \n"
         << "-----------------------\n";
    cout << "INFO: Unsorted array: ";
    printArray(arr, size);
    cout << endl;

    for(int i = 0; i < (size - 1); i++)
    {
        minIndex = i;
        minValue = arr[minIndex];
        
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
                minValue = arr[minIndex];
				cout << "INFO: Found new min: " << arr[j] << " in position: " << j << ". \n";
            }
        }
        cout << "INFO: Swapping current (index, value): (" << i << ", " << arr[i] << ") with minimum (index, value): (" << minIndex << ", " << minValue << "). " << "\n";
        arr[minIndex] = arr[i];
        arr[i] = minValue;

        cout << "New Array: ";
        printArray(arr, size);
        cout << endl;
    }

    cout << "INFO: Sorted array: ";
	printArray(arr, size);
}

int main()
{
    const int LEN_NUMS = 10;
    int nums[LEN_NUMS] = {0, 1012, 173, 18, 2210, 49, 48, 543, 999, 101};
    selectionSort(nums, LEN_NUMS);
    return 0;
}
