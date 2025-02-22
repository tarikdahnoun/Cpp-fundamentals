#include <iostream>
#include <vector>

using namespace std;

class Sort
{
    private:
        template <class ItemType>
        void mergeInc(ItemType arr[], int, int, int);

        template <class ItemType>
        void mergeDec(ItemType arr[], int, int, int);
    public:
        template <class ItemType>
        void printArr(ItemType arr[], int, int) const;

        template <class ItemType>
        void printVec(vector<ItemType>&, int, int) const;

        template <class ItemType>
        void mergeSortInc(ItemType arr[], int, int);

        template <class ItemType>
        void mergeSortDec(ItemType arr[], int, int);
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
void Sort::mergeInc(ItemType arr[], int first, int mid, int last)
{
    int MAX_SIZE = 10000;
    ItemType tempArr[MAX_SIZE];

    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;

    int index = first1;
    while ((first1 <= last1) && (first2 <= last2))
    {
        if (arr[first1] <= arr[first2])
        {
            tempArr[index] = arr[first1];
            first1++;
        }
        else
        {
            tempArr[index] = arr[first2];
            first2++;
        }
        index++;
    }

    while (first1 <= last1)
    {
        tempArr[index] = arr[first1];
        first1++;
        index++;
    }

    while (first2 <= last2)
    {
        tempArr[index] = arr[first2];
        first2++;
        index++;
    }

    for (index = first; index <= last; index++)
    {
        arr[index] = tempArr[index];
    }
}

template <class ItemType>
void Sort::mergeSortInc(ItemType arr[], int first, int last)
{
    if (first < last)
    {
        int mid = (first + last) / 2;

        mergeSortInc(arr, first, mid);
        mergeSortInc(arr, mid + 1, last);
        
        mergeInc(arr, first, mid, last);
    }
}


template <class ItemType>
void Sort::mergeDec(ItemType arr[], int first, int mid, int last)
{
    int MAX_SIZE = 10000;
    ItemType tempArr[MAX_SIZE];

    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;

    int index = first;
    while ((first1 <= last1) && (first2 <= last2))
    {
        if (arr[first1] >= arr[first2])
        {
            tempArr[index] = arr[first1];
            first1++;
        }
        else
        {
            tempArr[index] = arr[first2];
            first2++;
        }
        index++;
    }

    while (first1 <= last1)
    {
        tempArr[index] = arr[first1];
        first1++;
        index++;
    }

    while (first2 <= last2)
    {
        tempArr[index] = arr[first2];
        first2++;
        index++;
    }

    for (index = first; index <= last; index++)
    {
        arr[index] = tempArr[index];
    }
}

template <class ItemType>
void Sort::mergeSortDec(ItemType arr[], int first, int last)
{
    if (first < last)
    {
        int mid = (first + last) / 2;

        mergeSortDec(arr, first, mid);
        mergeSortDec(arr, mid + 1, last);
        
        mergeDec(arr, first, mid, last);
    }
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

    cout << "Merge Sort Array Increasing \n";
    cout << "------------------------------- \n";
    sorter.mergeSortInc(numArr, FIRST, LAST - 1);
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    sorter.mergeSortInc(strArr, FIRST, sizeStrs - 1);
    sorter.printArr(strArr, FIRST, sizeStrs);
    cout << endl << endl;


    cout << "Merge Sort Array Decreasing \n";
    cout << "------------------------------- \n";
    sorter.mergeSortDec(numArr, FIRST, LAST - 1);
    sorter.printArr(numArr, FIRST, LAST);
    cout << endl;
    sorter.mergeSortDec(strArr, FIRST, sizeStrs - 1);
    sorter.printArr(strArr, FIRST, sizeStrs);
    cout << endl << endl;

    return 0;
}

/*
Unsorted Array 
------------------------------- 
0, 201, 150, 180, 210, 49, 8, 543, 4, 9
apple, orange, banana, grape, cherry

Merge Sort Array Increasing 
------------------------------- 
0, 4, 8, 9, 49, 150, 180, 201, 210, 543
apple, banana, cherry, grape, orange
*/
