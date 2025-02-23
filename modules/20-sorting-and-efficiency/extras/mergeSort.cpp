#include <iostream>

using namespace std;

class Sort
{
    private:
        int counter = 0;

        template <class ItemType>
        void merge(ItemType arr[], int, int, int);

        void addToCounter(int val)
        {counter += val;}
    public:
        int getCounter()
        { return counter; }

        template <class ItemType>
        void printArr(ItemType arr[], int, int) const;

        template <class ItemType>
        void mergeSort(ItemType arr[], int, int);
};

template <class ItemType>
void Sort::printArr(ItemType arr[], int first, int last) const
{
    for (int i = first; i <= last; i++)
    {
        cout << arr[i];
        if (i != last)
        {
            cout << ", ";
        }
    }
}

template <class ItemType>
void Sort::merge(ItemType arr[], int first, int mid, int last)
{
    cout<< "IN MERGE" << endl;
    int MAX_SIZE = 10000;
    ItemType tempArr[MAX_SIZE];

    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;

    int index = first1;
    while ((first1 <= last1) && (first2 <= last2))
    {
        addToCounter(2);  // read arr[first1, read arr[first2]
        if (arr[first1] <= arr[first2])
        {
            addToCounter(1);  // read arr[first1]
            tempArr[index] = arr[first1];
            first1++;
        }
        else
        {
            addToCounter(1);  // read arr[first2]
            tempArr[index] = arr[first2];
            first2++;
        }
        index++;
    }

    while (first1 <= last1)
    {
        addToCounter(1);  // read arr[first1]
        tempArr[index] = arr[first1];
        first1++;
        index++;
    }

    while (first2 <= last2)
    {
        addToCounter(1);  // read arr[first2]
        tempArr[index] = arr[first2];
        first2++;
        index++;
    }

    for (index = first; index <= last; index++)
    {
        addToCounter(1);  // write arr[index]
        arr[index] = tempArr[index];
    }
}

template <class ItemType>
void Sort::mergeSort(ItemType arr[], int first, int last)
{
    if (first < last)
    {
        int mid = (first + last) / 2;

        cout << "mergeSort1([";
        printArr(arr, first, mid);
        cout << "], " << first << ", " << mid << ")" << endl;
        mergeSort(arr, first, mid);
        cout << "Sorted half 1: ";
        printArr(arr, first, mid);
        cout << endl;
        
        cout << "mergeSort2([";
        printArr(arr, mid + 1, last);
        cout << "], " << mid + 1 << ", " << last << ")" << endl;
        mergeSort(arr, mid + 1, last);
        cout << "Sorted half 2: ";
        printArr(arr, mid + 1, last);
        cout << endl;

        cout << "merge([";
        printArr(arr, first, last);
        cout << "], " << first << ", " << mid << ", " << last << ")" << endl;
        merge(arr, first, mid, last);
        cout << "Merged arr:  ";
        printArr(arr, first, last);
        cout << endl << endl;
    }
}

int main()
{
    Sort sorter;

    // int numArr[] = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    // int numArr[] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    // int numArr[] = {512, 1, 256, 2, 128, 4, 64, 8, 32, 16};
    int numArr[] = {1, 2, 8, 4, 5, 6};

    const int FIRST = 0;
    const int LAST = (sizeof(numArr) / sizeof(numArr[0]));

    cout << "Unsorted Array \n";
    cout << "------------------------------- \n";
    sorter.printArr(numArr, FIRST, LAST - 1);
    cout << endl << endl;

    cout << "Merge Sort Array Increasing \n";
    cout << "------------------------------- \n";
    sorter.mergeSort(numArr, FIRST, LAST - 1);
    cout << endl << "Sorted: ";
    sorter.printArr(numArr, FIRST, LAST - 1);
    cout << endl << endl;

    cout << "Counter: " << sorter.getCounter() << endl;

    return 0;
}

/*

*/
