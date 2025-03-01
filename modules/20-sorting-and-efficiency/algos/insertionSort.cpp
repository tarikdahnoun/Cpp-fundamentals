#include <iostream>

using namespace std;

class insertionSort
{
    private:
        int counter = 0;

        void addToCounter(int val)
        { counter += val; }
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
void insertionSort::printArr(ItemType arr[], int first, int last) const
{
    for (int i = first; i < last; i++)
    {
        cout << arr[i];
        if (i != last - 1)
        {
            cout << ", ";
        }
    }
}

template <class ItemType>
void insertionSort::sort(ItemType arr[], int first, int last)
{
    for (int unsorted = first + 1; unsorted <= last; unsorted++)
    {
        addToCounter(1);  
        ItemType nextItem = arr[unsorted];

        int loc = unsorted;
        while (loc > first)
        {
            addToCounter(1);
            if (arr[loc - 1] < nextItem)
            {
                break;
            }
            addToCounter(1);
            addToCounter(1);
            arr[loc] = arr[loc - 1];
            loc--;
        }
        addToCounter(1);
        arr[loc] = nextItem;
    }
}
