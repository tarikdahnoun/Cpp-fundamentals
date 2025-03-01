#include <iostream>

using namespace std;

class quickSort
{
    private:
        int counter = 0;

        void addToCounter(int val)
        {counter += val;}

        template <class ItemType>
        int partition(ItemType arr[], int, int);

        template <class ItemType>
        int medianOfThree(ItemType arr[], int, int);
    public:
        int getCounter()
        { return counter; }

        void resetCounter()
        { counter = 0; }

        template <class ItemType>
        void printArr(ItemType arr[], int) const;

        template <class ItemType>
        void sort(ItemType arr[], int, int);
};

template <class ItemType>
void quickSort::printArr(ItemType arr[], int size) const
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

template <class ItemType>
int quickSort::medianOfThree(ItemType arr[], int first, int last)
{
    int mid = (first + last) / 2;

    addToCounter(2);  // read arr[first], read arr[mid]
    if(arr[first] > arr[mid])
    {
        addToCounter(2);  // read arr[first], read arr[mid]
        addToCounter(2);  // write arr[first], write arr[mid]
        swap(arr[first], arr[mid]);
    }


    addToCounter(2);  // read arr[first], read arr[last]
    if(arr[first] > arr[last])
    {
        addToCounter(2);  // read arr[first], read arr[last]
        addToCounter(2);  // write arr[first], write arr[last]
        swap(arr[first], arr[last]);
    }
    
    addToCounter(2);  // read arr[mid], read arr[last]
    if(arr[mid] > arr[last])
    {
        addToCounter(2);  // read arr[mid], read arr[last]
        addToCounter(2);  // write arr[mid], write arr[last]
        swap(arr[mid], arr[last]);
    }

    return mid;
}

template <class ItemType>
int quickSort::partition(ItemType arr[], int first, int last)
{
    int pivotIndex = medianOfThree(arr, first, last);

    addToCounter(2);  // read arr[pivotIndex], read arr[last]
    addToCounter(2);  // write arr[pivotIndex], write arr[last]
    swap(arr[pivotIndex], arr[last]);
    
    addToCounter(1);  // read arr[last]
    ItemType pivot = arr[last];

    int indexFromLeft = first;
    int indexFromRight = last - 1;
    
    bool done = false;
    while (!done)
    {
        addToCounter(1);  // read arr[indexFromLeft]
        while (arr[indexFromLeft] < pivot)
        {
            indexFromLeft = indexFromLeft + 1;
        }

        addToCounter(1);  // read arr[indexFromRight]
        while (arr[indexFromRight] > pivot)
        {
            indexFromRight = indexFromRight - 1;
        }

        if (indexFromLeft < indexFromRight)
        {
            addToCounter(2);  // read arr[indexFromLeft], read arr[indexFromRight]
            addToCounter(2);  // write arr[indexFromLeft], write arr[indexFromRight]
            swap(arr[indexFromLeft], arr[indexFromRight]);
            indexFromLeft = indexFromLeft + 1;
            indexFromRight = indexFromRight - 1;
        }
        else
        {
            done = true;
        }
    }
    addToCounter(2);  // read arr[indexFromLeft], read arr[last]
    addToCounter(2);  // write arr[indexFromLeft], write arr[last]
    swap(arr[indexFromLeft], arr[last]);
    pivotIndex = indexFromLeft;

    return pivotIndex;
}

template <class ItemType>
void quickSort::sort(ItemType arr[], int first, int last)
{
    if (first <= last)
    {
        int pivotIndex = partition(arr, first, last);
        sort(arr, first, pivotIndex - 1);
        sort(arr, pivotIndex + 1, last);
    }
}
