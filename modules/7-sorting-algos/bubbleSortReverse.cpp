#include <iostream>

using namespace std;

void printArr(int nums[], int size);
void bubbleSort(int nums[], int size);

void printArr(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
}

void bubbleSort(int nums[], int size)
{
    cout << "Unsorted array: ";
    printArr(nums, size);

    int currentVal;
    bool swap = true;
    while (swap == true)
    {
        swap = false; 
        for(int i = 0; i < size - 1; i++)
        {
            currentVal = nums[i];

            if(currentVal < nums[i + 1])
            {
               cout << "currentVal: "
                     << currentVal
                     << " is less than the next value: "
                     << nums[i + 1]
                     << ". Proper order, continue...\n";

                nums[i] = nums[i + 1];
                nums[i + 1] = currentVal;
                swap = true;
            }
            else
            {
                cout << "currentVal: "
                     << currentVal
                     << " is more than the next value: "
                     << nums[i + 1]
                     <<". Swapping the two values.\n";
            }
            cout << "Current array: ";
            printArr(nums, size);
        }
    }

    cout << "Sorted array: ";
    printArr(nums, size);
}


int main()
{
    const int SIZE = 10;
    int nums[SIZE] = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    bubbleSort(nums, SIZE);
    return 0;
}
