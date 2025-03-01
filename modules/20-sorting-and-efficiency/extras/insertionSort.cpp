#include <iostream>
#include <vector>

using namespace std;

class Sort
{
    private:
    public:
        template <class ItemType>
        void printArr(ItemType arr[], int, int) const;

        template <class ItemType>
        void printVec(vector<ItemType>&, int, int) const;

        template <class ItemType>
        void insertionSortArrDec(ItemType arr[], int, int);
        
        template <class ItemType>
        void insertionSortVecDec(vector<ItemType>&, int, int);

        template <class ItemType>
        void insertionSortArrInc(ItemType arr[], int, int);
        
        template <class ItemType>
        void insertionSortVecInc(vector<ItemType>&, int, int);
};

template <class ItemType>
void Sort::printArr(ItemType arr[], int first, int last) const
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
void Sort::printVec(vector<ItemType>& arr, int first, int last) const
{
    for (int i = first; i < last; i++)
    {
        cout << arr[i];
        if (i != last - 1)
        {
            cout << ", ";
        }    }
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


template <class ItemType>
void Sort::insertionSortArrInc(ItemType arr[], int first, int last)
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
            if(!(arr[loc - 1] > nextItem))
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
void Sort::insertionSortVecInc(vector<ItemType>& arr, int first, int last)
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
            if(!(arr[loc - 1] > nextItem))
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

    cout << "Unsorted Array \n";
    cout << "------------------------------- \n";
    int numArr[] = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    const int FIRST = 0;
    const int LAST = (sizeof(numArr) / sizeof(numArr[0]));
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    string strArr[] = {"apple", "orange", "banana", "grape", "cherry"};
    int sizeStrs = sizeof(strArr) / sizeof(strArr[0]);
    sorter.printArr(strArr, FIRST, sizeStrs);
    cout << endl << endl;

    cout << "Insertion Sort Array Decreasing \n";
    cout << "------------------------------- \n";
    sorter.insertionSortArrDec(numArr, FIRST, LAST - 1);
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    sorter.insertionSortArrDec(strArr, FIRST, sizeStrs - 1);
    sorter.printArr(strArr, FIRST, sizeStrs);
    cout << endl << endl;

    cout << "Insertion Sort Array Increasing \n";
    cout << "------------------------------- \n";
    sorter.insertionSortArrInc(numArr, FIRST, LAST - 1);
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    sorter.insertionSortArrInc(strArr, FIRST, sizeStrs - 1);
    sorter.printArr(strArr, FIRST, sizeStrs);
    cout << endl << endl;

    cout << "Unsorted Vector \n";
    cout << "------------------------------- \n";
    vector<int> numVec = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.printVec(numVec, FIRST, LAST);
    cout << endl;
    vector<string> strVec = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.printVec(strVec, FIRST, strVec.size());
    cout << endl << endl;

    cout << "Insertion Sort Vector Decreasing \n";
    cout << "------------------------------- \n";
    sorter.insertionSortVecDec(numVec, FIRST, numVec.size() - 1);
    sorter.printVec(numVec, FIRST, numVec.size());
    cout << endl;
    sorter.insertionSortVecDec(strVec, FIRST, strVec.size() - 1);
    sorter.printVec(strVec, FIRST, strVec.size());
    cout << endl << endl;

    cout << "Insertion Sort Vector Increasing \n";
    cout << "------------------------------- \n";
    sorter.insertionSortVecInc(numVec, FIRST, numVec.size() - 1);
    sorter.printVec(numVec, FIRST, numVec.size());
    cout << endl;
    sorter.insertionSortVecInc(strVec, FIRST, strVec.size() - 1);
    sorter.printVec(strVec, FIRST, strVec.size());
    cout << endl << endl;

    return 0;
}

/*
Unsorted Array 
------------------------------- 
0, 201, 150, 180, 210, 49, 8, 543, 4, 9
apple, orange, banana, grape, cherry

Insertion Sort Array Decreasing 
------------------------------- 
Total accesses using array: 66
543, 210, 201, 180, 150, 49, 9, 8, 4, 0
Total accesses using array: 23
orange, grape, cherry, banana, apple

Insertion Sort Array Increasing 
------------------------------- 
Total accesses using array: 108
0, 4, 8, 9, 49, 150, 180, 201, 210, 543
Total accesses using array: 28
apple, banana, cherry, grape, orange

Unsorted Vector 
------------------------------- 
0, 201, 150, 180, 210, 49, 8, 543, 4, 9
apple, orange, banana, grape, cherry

Insertion Sort Vector Decreasing 
------------------------------- 
Total accesses using vector: 66
543, 210, 201, 180, 150, 49, 9, 8, 4, 0
Total accesses using vector: 23
orange, grape, cherry, banana, apple

Insertion Sort Vector Increasing 
------------------------------- 
Total accesses using vector: 108
0, 4, 8, 9, 49, 150, 180, 201, 210, 543
Total accesses using vector: 28
apple, banana, cherry, grape, orange
*/
