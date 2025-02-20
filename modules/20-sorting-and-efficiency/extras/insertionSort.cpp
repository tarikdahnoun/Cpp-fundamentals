#include <iostream>
#include <vector>

using namespace std;

class Sort
{
    private:
    public:
        template <class ItemType>
        void printSortedArr(ItemType arr[], int, int) const;

        template <class ItemType>
        void printSortedVec(vector<ItemType>&, int, int) const;

        template <class ItemType>
        void insertionSortArrDec(ItemType arr[], int, int);
        
        template <class ItemType>
        void insertionSortVecDec(vector<ItemType>&, int, int);
};

template <class ItemType>
void Sort::printSortedArr(ItemType arr[], int first, int last) const
{
    for (int i = first; i < last; i++)
    {
        cout << arr[i] << ", ";
    }
}

template <class ItemType>
void Sort::printSortedVec(vector<ItemType>& arr, int first, int last) const
{
    for (int i = first; i < last; i++)
    {
        cout << arr[i] << ", ";
    }
}

template <class ItemType>
void Sort::insertionSortArrDec(ItemType arr[], int first, int last)
{
    for (int unsorted = first + 1; unsorted <= last; unsorted++)
    {
        ItemType nextItem = arr[unsorted];
        int loc = unsorted;
        while ((loc > first) && (arr[loc - 1] < nextItem))
        {
            arr[loc] = arr[loc - 1];
            loc--;
        }
        arr[loc] = nextItem;
    }
}

template <class ItemType>
void Sort::insertionSortVecDec(vector<ItemType>& arr, int first, int last)
{
    for (int unsorted = first + 1; unsorted <= last; unsorted++)
    {
        ItemType nextItem = arr[unsorted];
        int loc = unsorted;
        while ((loc > first) && (arr[loc - 1] < nextItem))
        {
            arr[loc] = arr[loc - 1];
            loc--;
        }
        arr[loc] = nextItem;
    }
}

int main()
{
    Sort sorter;

    int numArr[] = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    const int FIRST = 0;
    const int LAST = sizeof(numArr) / sizeof(numArr[0]) - 1;
    sorter.insertionSortArrDec(numArr, FIRST, LAST);
    sorter.printSortedArr(numArr, FIRST, LAST + 1);
    cout << endl;

    vector<int> numVec = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.insertionSortVecDec(numVec, FIRST, numVec.size());
    sorter.printSortedVec(numVec, FIRST, numVec.size());
    cout << endl;

    return 0;
}