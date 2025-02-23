#include <iostream>

using namespace std;

class Sort
{
    private:
        int counter = 0;
        int countArr[100] = {};

        void addToCounter(int val)
        {counter += val;}
    public:
        int getCounter() const
        { return counter; }

        template <class ItemType>
        void printArr(ItemType arr[], int) const;

        template <class ItemType>
        void countingSort(ItemType arr[], int);
};

template <class ItemType>
void Sort::printArr(ItemType arr[], int size) const
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
void Sort::countingSort(ItemType arr[], int size)
{
    for (int i = 0; i <= size; i++)
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
}

int main()
{
    Sort sorter;

    // int numArr[] = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    int numArr[] = {99, 72, 64, 32, 16, 8, 4, 2, 1, 0};
    // int numArr[] = {51, 1, 25, 2, 12, 4, 64, 8, 32, 16};
    // int numArr[] = {1, 2, 2, 8, 4, 5, 6};

    const int SIZE = sizeof(numArr) / sizeof(numArr[0]);

    cout << "Unsorted Array \n";
    cout << "------------------------------- \n";
    sorter.printArr(numArr, SIZE - 1);
    cout << endl << endl;

    cout << "Counting Sort Array Increasing \n";
    cout << "------------------------------- \n";
    sorter.countingSort(numArr, SIZE - 1);
    sorter.printArr(numArr, SIZE - 1);
    cout << endl << endl;

    cout << "Counter: " << sorter.getCounter() << endl;

    return 0;
}

/*

*/
