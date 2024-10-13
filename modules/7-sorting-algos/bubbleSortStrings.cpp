#include <iostream>

using namespace std;

void printArr(string nums[], int size);
void bubbleSort(string nums[], int size);

void printArr(string nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
}

void bubbleSort(string nums[], int size)
{
    cout << "Unsorted array: ";
    printArr(nums, size);

    string currentVal;
    bool swap = true;
    while (swap == true)
    {
        swap = false; 
        for(int i = 0; i < size - 1; i++)
        {
            currentVal = nums[i];

            if(currentVal > nums[i + 1])
            {
               cout << "currentVal: "
                     << currentVal
                     << " is greater than the next value: "
                     << nums[i + 1]
                     <<". Swapping the two values.\n";

                nums[i] = nums[i + 1];
                nums[i + 1] = currentVal;
                swap = true;
            }
            else
            {
                cout << "currentVal: "
                     << currentVal
                     << " is less than the next value: "
                     << nums[i + 1]
                     <<". Proper order, continue...\n";
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
    string nums[SIZE] = {"a", "z", "abc", "aaa", "abb", "abz", "baa", "cds", "cad", "zzz"};
    bubbleSort(nums, SIZE);
    return 0;
}
