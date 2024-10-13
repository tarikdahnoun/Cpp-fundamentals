#include <iostream>

using namespace std;

void selectionSort(int arr[], int size);
void binarySearch(int arr[], int size);

void selectionSort(int arr[], int size)
{
    cout << "INFO: Unsorted: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    int minIndex;
    int minValue;

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
            }   
        }   
        arr[minIndex] = arr[i];
        arr[i] = minValue;
    }

    cout << "INFO: Selection sorted: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void binarySearch(int arr[], int size, int value)
{
    int midpointIndex;
    int valueIndex = -1;
    int counter = 0;
    int start = 0;
    int end = size - 1;
    midpointIndex = (start + end) / 2;

    while(valueIndex == -1 && start <= end)
    {
        midpointIndex = (start + end) / 2;

        if(arr[midpointIndex] == value)
        {
            valueIndex = midpointIndex;
            cout << "INFO: Found value: " 
                 << arr[valueIndex]
                 << " in position: "
                 << valueIndex
                 << "\n";
        }
        else if(arr[midpointIndex] > value)
        {
            end = midpointIndex - 1;
            counter++;
            cout << "INFO: midpoint position "
                 << midpointIndex
                 << " value is "
                 << arr[midpointIndex]
                 << " > "
                 << value
                 << ". New [start, end): ["
                 << start
                 << ", "
                 << end
                 << ")\n";
        }
        else if(arr[midpointIndex] < value)
        {
            start = midpointIndex + 1;
            counter++;
            cout << "INFO: midpoint position "
                 << midpointIndex
                 << " value is "
                 << arr[midpointIndex]
                 << " < "
                 << value
                 << ". New [start, end): ["
                 << start
                 << ", "
                 << end
                 << ")\n";
        }
        else
        {
            counter++;
        }
    }
}

int main()
{
    const int SIZE = 10;
    int nums[SIZE] = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    int value = 9;

    cout << "-----------------------\n"
         << "     Binary Search     \n"
         << "-----------------------\n";
    cout << "INFO: Value to find: " << value << ".\n";
    selectionSort(nums, SIZE);
    binarySearch(nums, SIZE, value);
    return 0;
}
