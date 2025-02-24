#include <iostream>

using namespace std;

class mergeSort
{
    private:
        int counter = 0;

        template <class ItemType>
        void merge(ItemType arr[], int, int, int);

        void addToCounter(int val)
        {counter += val;}
    public:
        int getCounter()
        { return counter; }

        void resetCounter()
        { counter = 0; }

        template <class ItemType>
        void printArr(ItemType arr[], int, int) const;

        template <class ItemType>
        void sort(ItemType arr[], int, int);

};

template <class ItemType>
void mergeSort::printArr(ItemType arr[], int first, int last) const
{
    for (int i = first; i <= last; i++)
    {
        cout << arr[i];
        if (i != last)
        {
            cout << ", ";
        }
    }
}

template <class ItemType>
void mergeSort::merge(ItemType arr[], int first, int mid, int last)
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
        addToCounter(2);  // read arr[first1, read arr[first2]
        if (arr[first1] <= arr[first2])
        {
            addToCounter(1);  // read arr[first1]
            tempArr[index] = arr[first1];
            first1++;
        }
        else
        {
            addToCounter(1);  // read arr[first2]
            tempArr[index] = arr[first2];
            first2++;
        }
        index++;
    }

    while (first1 <= last1)
    {
        addToCounter(1);  // read arr[first1]
        tempArr[index] = arr[first1];
        first1++;
        index++;
    }

    while (first2 <= last2)
    {
        addToCounter(1);  // read arr[first2]
        tempArr[index] = arr[first2];
        first2++;
        index++;
    }

    for (index = first; index <= last; index++)
    {
        addToCounter(1);  // write arr[index]
        arr[index] = tempArr[index];
    }
}

template <class ItemType>
void mergeSort::sort(ItemType arr[], int first, int last)
{
    if (first < last)
    {
        int mid = (first + last) / 2;

        sort(arr, first, mid);
        sort(arr, mid + 1, last);

        merge(arr, first, mid, last);
    }
}
