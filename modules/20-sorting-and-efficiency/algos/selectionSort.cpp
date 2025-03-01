#include <iostream>

using namespace std;

class selectionSort
{
    private:
        int counter = 0;

        void addToCounter(int val)
        { counter += val; }
    public:
        int getCounter() const
        { return counter; }

        void resetCounter()
        { counter = 0; }
        
        template <class ItemType>
        void printArr(ItemType arr[], int) const;

        template <class ItemType>
        void sort(ItemType arr[], int);
};

template <class ItemType>
void selectionSort::printArr(ItemType arr[], int size) const
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

template <class ItemType>
void selectionSort::sort(ItemType arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            addToCounter(2);  // read arr[j], read arr[minIdx]
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            addToCounter(2);  // read arr[i], read arr[minIdx]
            addToCounter(2);  // write arr[i], write arr[minIdx]
            swap(arr[i], arr[minIdx]);
        }
    }
}
