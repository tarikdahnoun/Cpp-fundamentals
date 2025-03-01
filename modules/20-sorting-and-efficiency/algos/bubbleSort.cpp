#include <iostream>

using namespace std;

class bubbleSort
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
void bubbleSort::printArr(ItemType arr[], int size) const
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
void bubbleSort::sort(ItemType arr[], int size)
{
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = 0; i < size - 1; i++)
        {
            addToCounter(2);  // read arr[i], read arr[i + 1]
            if (arr[i] > arr[i + 1])
            {
                addToCounter(2);  // read arr[i], read arr[i + 1]
                addToCounter(2);  // write arr[i], read arr[i + 1]
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
    }
}
