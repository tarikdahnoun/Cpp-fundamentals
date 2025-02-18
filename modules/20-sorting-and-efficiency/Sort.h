#include <vector>
#include <iostream>
using namespace std;

#ifndef SORT_H
#define SORT_H

class Sort
{
    public:
        Sort() = default;
        ~Sort() = default;
    
        template <typename T>
        void printArr(const vector<T>& arr) const;
    
        template <typename T>
        void bubbleSort(vector<T>& arr);
    
        template <typename T>
        void selectionSort(vector<T>& arr);
};

template <typename T>
void Sort::printArr(const vector<T>& arr) const
{
    for (const T& elem : arr)
    {
        cout << elem << ", ";
    }
    cout << endl;
}

template <typename T>
void Sort::bubbleSort(vector<T>& arr)
{
    cout << "-----------------------\n"
         << "      Bubble Sort      \n"
         << "-----------------------\n";
    cout << "INFO: Unsorted array: ";
    printArr(arr);
    cout << endl;

    bool swapped = true;
    while (swapped)
    {
        swapped = false; 
        for (size_t i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "INFO: Indices " << i << ", " << i + 1 
                     << " values are " << arr[i] << " > " << arr[i + 1]
                     << ". Swapping the two values. New array: ";
                swap(arr[i], arr[i + 1]);
                swapped = true;
                printArr(arr);
            }
        }
    }
    cout << endl << "INFO: Sorted array: ";
    printArr(arr);
}

template <typename T>
void Sort::selectionSort(vector<T>& arr)
{
    cout << "-----------------------\n"
         << "    Selection Sort     \n"
         << "-----------------------\n";
    cout << "INFO: Unsorted array: ";
    printArr(arr);
    cout << endl;

    for (size_t i = 0; i < arr.size() - 1; i++)
    {
        size_t minIndex = i;
        for (size_t j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
                cout << "INFO: Found new min: " << arr[j] << " in position: " << j << ". \n";
            }
        }
        cout << "INFO: Swapping current (index, value): (" << i << ", " << arr[i]
             << ") with minimum (index, value): (" << minIndex << ", " << arr[minIndex] << ").\n";
        swap(arr[minIndex], arr[i]);
        cout << "INFO: New Array: ";
        printArr(arr);
    }
    cout << endl << "INFO: Sorted array: ";
    printArr(arr);
}

#endif
