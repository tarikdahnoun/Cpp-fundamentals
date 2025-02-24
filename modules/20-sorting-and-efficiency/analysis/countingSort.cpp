#include <iostream>

using namespace std;

class countingSort
{
    private:
        int counter = 0;
        int countArr[100] = {0};

        void addToCounter(int val)
        {counter += val;}
    public:
        int getCounter() const
        { return counter; }
        
        void resetCounter()
        { counter = 0; }

        void resetCounterArr()
        {
            for (int i = 0; i < 100; i++)
            {
                countArr[i] = 0;
            }
            
        }

        template <class ItemType>
        void printArr(ItemType arr[], int) const;

        template <class ItemType>
        void sort(ItemType arr[], int);
};

template <class ItemType>
void countingSort::printArr(ItemType arr[], int size) const
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i];
        if (i != size)
        {
            cout << ", ";
        }
    }
}

template <class ItemType>
void countingSort::sort(ItemType arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        addToCounter(1);  // read arr[i]
        countArr[arr[i]]++;
    }
    int loc = 0;
    for (int i = 0; i < 100; i++)
    {
        if (countArr[i] > 0)
        {
            for (int j = 0; j < countArr[i]; j++)
            {
                addToCounter(1);  // write arr[loc]
                arr[loc] = i;
                loc++;
            }            
        }
    }
    loc = 0;
    resetCounterArr();
}
