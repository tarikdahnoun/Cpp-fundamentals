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
        void bubbleSortInc(vector<T>& arr);

        template <typename T>
        void bubbleSortDec(vector<T>& arr);
    
        template <typename T>
        void selectionSortInc(vector<T>& arr);

        template <typename T>
        void selectionSortDec(vector<T>& arr);
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
void Sort::bubbleSortInc(vector<T>& arr)
{
    cout << "-----------------------\n"
         << "    Bubble Sort Inc    \n"
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
void Sort::bubbleSortDec(vector<T>& arr)
{
    cout << "-----------------------\n"
         << "    Bubble Sort Dec    \n"
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
            if (arr[i] < arr[i + 1])
            {
                cout << "INFO: Indices " << i << ", " << i + 1 
                     << " values are " << arr[i] << " < " << arr[i + 1]
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
void Sort::selectionSortInc(vector<T>& arr)
{
    cout << "-----------------------\n"
         << "  Selection Sort Inc   \n"
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

template <typename T>
void Sort::selectionSortDec(vector<T>& arr)
{
    cout << "-----------------------\n"
         << "  Selection Sort Dec   \n"
         << "-----------------------\n";
    cout << "INFO: Unsorted array: ";
    printArr(arr);
    cout << endl;

    for (size_t i = 0; i < arr.size() - 1; i++)
    {
        size_t maxIndex = i;
        for (size_t j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
                cout << "INFO: Found new max: " << arr[j] << " in position: " << j << ". \n";
            }
        }
        cout << "INFO: Swapping current (index, value): (" << i << ", " << arr[i]
             << ") with maximum (index, value): (" << maxIndex << ", " << arr[maxIndex] << ").\n";
        swap(arr[maxIndex], arr[i]);
        cout << "INFO: New Array: ";
        printArr(arr);
    }
    cout << endl << "INFO: Sorted array: ";
    printArr(arr);
}

#endif
