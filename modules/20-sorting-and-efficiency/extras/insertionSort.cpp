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
    int counter = 0;
    for (int unsorted = first + 1; unsorted <= last; unsorted++)
    {
        counter++;
        ItemType nextItem = arr[unsorted];
        int loc = unsorted;
        while (loc > first)
        {
            counter++;
            if(!(arr[loc - 1] < nextItem))
            {
                break;
            }

            counter++;
            arr[loc] = arr[loc - 1];
            loc--;
        }
        counter++;
        arr[loc] = nextItem;
    }
    cout << "Total accesses using array: " << counter << endl;
}

template <class ItemType>
void Sort::insertionSortVecDec(vector<ItemType>& arr, int first, int last)
{
    int counter = 0;
    for (int unsorted = first + 1; unsorted <= last; unsorted++)
    {
        counter++;
        ItemType nextItem = arr[unsorted];
        int loc = unsorted;
        while ((loc > first))
        {
            counter++;
            if(!(arr[loc - 1] < nextItem))
            {
                break;
            }

            counter++;
            arr[loc] = arr[loc - 1];
            loc--;
        }
        counter++;
        arr[loc] = nextItem;
    }
    cout << "Total accesses using vector: " << counter << endl;
}

int main()
{
    Sort sorter;

    int numArr[] = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    const int FIRST = 0;
    const int LAST = (sizeof(numArr) / sizeof(numArr[0]));
    sorter.insertionSortArrDec(numArr, FIRST, LAST - 1);
    sorter.printSortedArr(numArr, FIRST, LAST);
    cout << endl;

    vector<int> numVec = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.insertionSortVecDec(numVec, FIRST, numVec.size() - 1);
    sorter.printSortedVec(numVec, FIRST, numVec.size());
    cout << endl;

    return 0;
}

/*
Total accesses using array: 66
543, 210, 201, 180, 150, 49, 9, 8, 4, 0, 
Total accesses using vector: 66
543, 210, 201, 180, 150, 49, 9, 8, 4, 0,
*/
