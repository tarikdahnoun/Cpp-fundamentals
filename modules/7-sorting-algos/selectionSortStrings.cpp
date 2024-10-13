#include <iostream>

using namespace std;

void printArray(string arr[], int size) 
{
    cout << "{";
    for(int i = 0; i < size; i++)
    {   
        cout << arr[i] << ", ";
    }
    cout << "}" << endl;
}

void selectionSort(string arr[], int size)
{
    int minIndex;
    string minValue;

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
    const int LEN_STRS = 10;
    string strs[LEN_STRS] = {"a", "z", "abc", "aaa", "abb", "abz", "baa", "cds", "cad", "zzz"};
    selectionSort(strs, LEN_STRS);
    return 0;
}
