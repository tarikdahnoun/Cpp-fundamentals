#include <iostream>
#include "Sort.h"

using namespace std;

template <class ItemType>
void Sort::printArr(ItemType arr[], int first, int last) const
{
    for (int i = first; i < last; i++)
    {
        cout << arr[i] << ", ";
    }
}

template <class ItemType>
void Sort::insertionSortInc(ItemType arr[], int first, int last)
{
    for (int unsorted = first + 1; unsorted <= last; unsorted++)
    {
        ItemType nextItem = arr[unsorted];
        int loc = unsorted;
        while ((loc > first) && (arr[loc - 1] > nextItem))
        {
            arr[loc] = arr[loc - 1];
            loc--;
        }
        arr[loc] = nextItem;
    }
}

template <class ItemType>
void Sort::merge(ItemType arr[], int first, int mid, int last)
{
    int MAX_SIZE = 10000;
    ItemType tempArr[MAX_SIZE];

    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;

    int index = first1;
    while ((first1 <= last1) && (first2 <= last2))
    {
        if (arr[first1] <= arr[first2])
        {
            tempArr[index] = arr[first1];
            first1++;
        }
        else
        {
            tempArr[index] = arr[first2];
            first2++;
        }
        index++;
    }

    while (first1 <= last1)
    {
        tempArr[index] = arr[first1];
        first1++;
        index++;
    }

    while (first2 <= last2)
    {
        tempArr[index] = arr[first2];
        first2++;
        index++;
    }

    for (index = first; index <= last; index++)
    {
        arr[index] = tempArr[index];
    }
}

template <class ItemType>
void Sort::mergeSort(ItemType arr[], int first, int last)
{
    if (first < last)
    {
        int mid = (first + last) / 2;

        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        
        merge(arr, first, mid, last);
    }
}

template <class ItemType>
int Sort::medianOfThree(ItemType arr[], int first, int last)
{
    int mid = (first + last) / 2;

    if(arr[first] > arr[mid])
    {
        swap(arr[first], arr[mid]);
    }
    if(arr[first] > arr[last])
    {
        swap(arr[first], arr[last]);
    }
    if(arr[mid] > arr[last])
    {
        swap(arr[mid], arr[last]);
    }

    return mid;
}

template <class ItemType>
int Sort::partition(ItemType arr[], int first, int last)
{
    int pivotIndex = medianOfThree(arr, first, last);

    swap(arr[pivotIndex], arr[last]);
    ItemType pivot = arr[last];

    int indexFromLeft = first;
    int indexFromRight = last - 1;
    
    bool done = false;
    while (!done)
    {
        while (arr[indexFromLeft] < pivot)
        {
            indexFromLeft = indexFromLeft + 1;
        }

        while (arr[indexFromRight] > pivot)
        {
            indexFromRight = indexFromRight - 1;
        }

        if (indexFromLeft < indexFromRight)
        {
            swap(arr[indexFromLeft], arr[indexFromRight]);
            indexFromLeft = indexFromLeft + 1;
            indexFromRight = indexFromRight - 1;
        }
        else
        {
            done = true;
        }
    }

    swap(arr[indexFromLeft], arr[last]);
    pivotIndex = indexFromLeft;

    return pivotIndex;
}

template <class ItemType>
void Sort::quickSort(ItemType arr[], int first, int last)
{
    int MIN_SIZE = 3;

    if (last - first + 1 < MIN_SIZE)
    {
        insertionSortInc(arr, first, last);
    }
    else
    {
        int pivotIndex = partition(arr, first, last);

        quickSort(arr, first, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, last);
    }
}
