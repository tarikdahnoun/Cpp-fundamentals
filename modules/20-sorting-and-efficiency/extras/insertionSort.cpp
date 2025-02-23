// Tarik Dahnoun
// Discussion 4
// Efficiency of Operations

#include <iostream>

using namespace std;

class Sort
{
    private:
    public:
        template <class ItemType>
        void printArr(ItemType arr[], int, int) const;

        template <class ItemType>
        void insertionSortArrDec(ItemType arr[], int, int);
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
            if (!(arr[loc - 1] < nextItem))
            {
                break;
            }
            counter++;
            counter++;
            arr[loc] = arr[loc - 1];
            loc--;
        }
        counter++;
        arr[loc] = nextItem;
    }
    cout << "Total accesses to sort: " << counter;
}

int main()
{
    cout << "Insertion Sort Array Decreasing: O(n^2) \n";
    cout << "------------------------------- \n";

    Sort sorter;

    cout << "numArr1 unsorted (random): ";
    int numArr1[] = {32, 64, 4, 256, 1, 512, 8, 128, 2, 16};
    const int FIRST1 = 0;
    const int LAST1 = (sizeof(numArr1) / sizeof(numArr1[0]));
    sorter.printArr(numArr1, FIRST1, LAST1);
    cout << " -> ";
    sorter.insertionSortArrDec(numArr1, FIRST1, LAST1 - 1);
    cout << endl << "Sorted: ";
    sorter.printArr(numArr1, FIRST1, LAST1);
    cout << endl << endl;

    cout << "numArr2 unsorted (worst case): ";
    int numArr2[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    const int FIRST2 = 0;
    const int LAST2 = (sizeof(numArr2) / sizeof(numArr2[0]));
    sorter.printArr(numArr2, FIRST2, LAST2);
    cout << " -> ";
    sorter.insertionSortArrDec(numArr2, FIRST2, LAST2 - 1);
    cout << endl << "Sorted: ";
    sorter.printArr(numArr2, FIRST2, LAST2);
    cout << endl << endl;

    cout << "numArr3 unsorted (best case): ";
    int numArr3[] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    const int FIRST3 = 0;
    const int LAST3 = (sizeof(numArr3) / sizeof(numArr3[0]));
    sorter.printArr(numArr3, FIRST3, LAST3);
    cout << " -> ";
    sorter.insertionSortArrDec(numArr3, FIRST3, LAST3 - 1);
    cout << endl << "Sorted: ";
    sorter.printArr(numArr3, FIRST3, LAST3);
    cout << endl << endl;

    cout << "numArr4 single element: ";
    int numArr4[] = {42};
    const int FIRST4 = 0;
    const int LAST4 = (sizeof(numArr4) / sizeof(numArr4[0]));
    sorter.printArr(numArr4, FIRST4, LAST4);
    cout << " -> ";
    sorter.insertionSortArrDec(numArr4, FIRST4, LAST4 - 1);
    cout << endl << "Sorted: ";
    sorter.printArr(numArr4, FIRST4, LAST4);
    cout << endl << endl;

    cout << "numArr5 two elements (worst case): ";
    int numArr5[] = {24, 42};
    const int FIRST5 = 0;
    const int LAST5 = (sizeof(numArr5) / sizeof(numArr5[0]));
    sorter.printArr(numArr5, FIRST5, LAST5);
    cout << " -> ";
    sorter.insertionSortArrDec(numArr5, FIRST5, LAST5 - 1);
    cout << endl << "Sorted: ";
    sorter.printArr(numArr5, FIRST5, LAST5);
    cout << endl << endl;

    cout << "numArr6 unsorted (random): ";
    int numArr6[] = {32, 64, 2048, 4, 256, 1, 512, 8, 4096, 128, 2, 1024, 16};
    const int FIRST6 = 0;
    const int LAST6 = (sizeof(numArr6) / sizeof(numArr6[0]));
    sorter.printArr(numArr6, FIRST6, LAST6);
    cout << " -> ";
    sorter.insertionSortArrDec(numArr6, FIRST6, LAST6 - 1);
    cout << endl << "Sorted: ";
    sorter.printArr(numArr6, FIRST6, LAST6);
    cout << endl << endl;

    return 0;
}

/* SAMPLE OUTPUT.
Insertion Sort Array Decreasing: O(n^2) 
------------------------------- 
numArr1 unsorted (random): 32, 64, 4, 256, 1, 512, 8, 128, 2, 16 -> Total accesses to sort: 87
Sorted: 512, 256, 128, 64, 32, 16, 8, 4, 2, 1

numArr2 unsorted (worst case): 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 -> Total accesses to sort: 153
Sorted: 512, 256, 128, 64, 32, 16, 8, 4, 2, 1

numArr3 unsorted (best case): 512, 256, 128, 64, 32, 16, 8, 4, 2, 1 -> Total accesses to sort: 27
Sorted: 512, 256, 128, 64, 32, 16, 8, 4, 2, 1

numArr4 single element: 42 -> Total accesses to sort: 0
Sorted: 42

numArr5 two elements (worst case): 24, 42 -> Total accesses to sort: 5
Sorted: 42, 24

numArr6 unsorted (random): 32, 64, 2048, 4, 256, 1, 512, 8, 4096, 128, 2, 1024, 16 -> Total accesses to sort: 153
Sorted: 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1

*/