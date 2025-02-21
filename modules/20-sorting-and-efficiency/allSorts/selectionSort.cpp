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
        void selectionSortArrDec(ItemType arr[], int, int);
        
        template <class ItemType>
        void selectionSortVecDec(vector<ItemType>&, int, int);

        template <class ItemType>
        void selectionSortArrInc(ItemType arr[], int, int);
        
        template <class ItemType>
        void selectionSortVecInc(vector<ItemType>&, int, int);
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
        }
    }
}

template <class ItemType>
void Sort::selectionSortArrDec(ItemType arr[], int first, int last)
{
    int counter = 0;
    for (int i = first; i < last - 1; i++)
    {
        int maxIdx = i;
        for (int j = i + 1; j < last; j++)
        {
            counter++;
            if (arr[j] > arr[maxIdx])
            {
                maxIdx = j;
            }
        }
        if (maxIdx != i)
        {
            swap(arr[i], arr[maxIdx]);
            counter += 3;
        }
    }
    cout << "Total accesses using array: " << counter << endl;
}

template <class ItemType>
void Sort::selectionSortVecDec(vector<ItemType>& arr, int first, int last)
{
    int counter = 0;
    for (int i = first; i < last - 1; i++)
    {
        int maxIdx = i;
        for (int j = i + 1; j < last; j++)
        {
            counter++;
            if (arr[j] > arr[maxIdx])
            {
                maxIdx = j;
            }
        }
        if (maxIdx != i)
        {
            swap(arr[i], arr[maxIdx]);
            counter += 3;
        }
    }
    cout << "Total accesses using vector: " << counter << endl;
}

template <class ItemType>
void Sort::selectionSortArrInc(ItemType arr[], int first, int last)
{
    int counter = 0;
    for (int i = first; i < last - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < last; j++)
        {
            counter++;
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            swap(arr[i], arr[minIdx]);
            counter += 3;
        }
    }
    cout << "Total accesses using array: " << counter << endl;
}

template <class ItemType>
void Sort::selectionSortVecInc(vector<ItemType>& arr, int first, int last)
{
    int counter = 0;
    for (int i = first; i < last - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < last; j++)
        {
            counter++;
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            swap(arr[i], arr[minIdx]);
            counter += 3;
        }
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

    cout << "Selection Sort Array Decreasing \n";
    cout << "------------------------------- \n";
    sorter.selectionSortArrDec(numArr, FIRST, LAST);
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    sorter.selectionSortArrDec(strArr, FIRST, sizeStrs);
    sorter.printArr(strArr, FIRST, sizeStrs);
    cout << endl << endl;

    cout << "Selection Sort Array Increasing \n";
    cout << "------------------------------- \n";
    sorter.selectionSortArrInc(numArr, FIRST, LAST);
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    sorter.selectionSortArrInc(strArr, FIRST, sizeStrs);
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

    cout << "Selection Sort Vector Decreasing \n";
    cout << "------------------------------- \n";
    sorter.selectionSortVecDec(numVec, FIRST, numVec.size());
    sorter.printVec(numVec, FIRST, numVec.size());
    cout << endl;
    sorter.selectionSortVecDec(strVec, FIRST, strVec.size());
    sorter.printVec(strVec, FIRST, strVec.size());
    cout << endl << endl;

    cout << "Selection Sort Vector Increasing \n";
    cout << "------------------------------- \n";
    sorter.selectionSortVecInc(numVec, FIRST, numVec.size());
    sorter.printVec(numVec, FIRST, numVec.size());
    cout << endl;
    sorter.selectionSortVecInc(strVec, FIRST, strVec.size());
    sorter.printVec(strVec, FIRST, strVec.size());
    cout << endl << endl;

    return 0;
}

/*
Unsorted Array 
------------------------------- 
0, 201, 150, 180, 210, 49, 8, 543, 4, 9
apple, orange, banana, grape, cherry

Selection Sort Array Decreasing 
------------------------------- 
Total accesses using array: 60
543, 210, 201, 180, 150, 49, 9, 8, 4, 0
Total accesses using array: 22
orange, grape, cherry, banana, apple

Selection Sort Array Increasing 
------------------------------- 
Total accesses using array: 60
0, 4, 8, 9, 49, 150, 180, 201, 210, 543
Total accesses using array: 16
apple, banana, cherry, grape, orange

Unsorted Vector 
------------------------------- 
0, 201, 150, 180, 210, 49, 8, 543, 4, 9
apple, orange, banana, grape, cherry

Selection Sort Vector Decreasing 
------------------------------- 
Total accesses using vector: 60
543, 210, 201, 180, 150, 49, 9, 8, 4, 0
Total accesses using vector: 22
orange, grape, cherry, banana, apple

Selection Sort Vector Increasing 
------------------------------- 
Total accesses using vector: 60
0, 4, 8, 9, 49, 150, 180, 201, 210, 543
Total accesses using vector: 16
apple, banana, cherry, grape, orange
*/
