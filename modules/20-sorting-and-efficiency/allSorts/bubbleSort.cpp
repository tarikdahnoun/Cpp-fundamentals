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
        void bubbleSortArrDec(ItemType arr[], int, int);
        
        template <class ItemType>
        void bubbleSortVecDec(vector<ItemType>&, int, int);

        template <class ItemType>
        void bubbleSortArrInc(ItemType arr[], int, int);
        
        template <class ItemType>
        void bubbleSortVecInc(vector<ItemType>&, int, int);
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
void Sort::bubbleSortArrDec(ItemType arr[], int first, int last)
{
    int counter = 0;
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = first; i < last; i++)
        {
            counter++;
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
                counter += 3;
            }
        }
    }
    cout << "Total accesses using array: " << counter << endl;
}

template <class ItemType>
void Sort::bubbleSortVecDec(vector<ItemType>& arr, int first, int last)
{
    int counter = 0;
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = first; i < last; i++)
        {
            counter++;
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
                counter += 3;
            }
        }
    }
    cout << "Total accesses using vector: " << counter << endl;
}

template <class ItemType>
void Sort::bubbleSortArrInc(ItemType arr[], int first, int last)
{
    int counter = 0;
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = first; i < last; i++)
        {
            counter++;
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
                counter += 3;
            }
        }
    }
    cout << "Total accesses using array: " << counter << endl;
}

template <class ItemType>
void Sort::bubbleSortVecInc(vector<ItemType>& arr, int first, int last)
{
    int counter = 0;
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = first; i < last; i++)
        {
            counter++;
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
                counter += 3;
            }
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

    cout << "Bubble Sort Array Decreasing \n";
    cout << "------------------------------- \n";
    sorter.bubbleSortArrDec(numArr, FIRST, LAST - 1);
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    sorter.bubbleSortArrDec(strArr, FIRST, sizeStrs - 1);
    sorter.printArr(strArr, FIRST, sizeStrs);
    cout << endl << endl;

    cout << "Bubble Sort Array Increasing \n";
    cout << "------------------------------- \n";
    sorter.bubbleSortArrInc(numArr, FIRST, LAST - 1);
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    sorter.bubbleSortArrInc(strArr, FIRST, sizeStrs - 1);
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

    cout << "Bubble Sort Vector Decreasing \n";
    cout << "------------------------------- \n";
    sorter.bubbleSortVecDec(numVec, FIRST, numVec.size() - 1);
    sorter.printVec(numVec, FIRST, numVec.size());
    cout << endl;
    sorter.bubbleSortVecDec(strVec, FIRST, strVec.size() - 1);
    sorter.printVec(strVec, FIRST, strVec.size());
    cout << endl << endl;

    cout << "Bubble Sort Vector Increasing \n";
    cout << "------------------------------- \n";
    sorter.bubbleSortVecInc(numVec, FIRST, numVec.size() - 1);
    sorter.printVec(numVec, FIRST, numVec.size());
    cout << endl;
    sorter.bubbleSortVecInc(strVec, FIRST, strVec.size() - 1);
    sorter.printVec(strVec, FIRST, strVec.size());
    cout << endl << endl;

    return 0;
}

/*
Unsorted Array 
------------------------------- 
0, 201, 150, 180, 210, 49, 8, 543, 4, 9
apple, orange, banana, grape, cherry

Bubble Sort Array Decreasing 
------------------------------- 
Total accesses using array: 135
543, 210, 201, 180, 150, 49, 9, 8, 4, 0
Total accesses using array: 30
orange, grape, cherry, banana, apple

Bubble Sort Array Increasing 
------------------------------- 
Total accesses using array: 225
0, 4, 8, 9, 49, 150, 180, 201, 210, 543
Total accesses using array: 50
apple, banana, cherry, grape, orange

Unsorted Vector 
------------------------------- 
0, 201, 150, 180, 210, 49, 8, 543, 4, 9
apple, orange, banana, grape, cherry

Bubble Sort Vector Decreasing 
------------------------------- 
Total accesses using vector: 135
543, 210, 201, 180, 150, 49, 9, 8, 4, 0
Total accesses using vector: 30
orange, grape, cherry, banana, apple

Bubble Sort Vector Increasing 
------------------------------- 
Total accesses using vector: 225
0, 4, 8, 9, 49, 150, 180, 201, 210, 543
Total accesses using vector: 50
apple, banana, cherry, grape, orange
*/
