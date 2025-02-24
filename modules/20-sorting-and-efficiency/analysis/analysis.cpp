#include <iostream>
#include <cstdlib>
#include <ctime>
#include "insertionSort.cpp"
#include "mergeSort.cpp"
#include "countingSort.cpp"


using namespace std;

class Analysis
{
private:
    const int NUM_PASSES = 3;
    const int size1 = 8;
    const int size2 = 32;
    const int size3 = 128;
public:
    Analysis();
    ~Analysis();
    
    int* genArrRand(int);

    template <class ItemType>
    void printArr(ItemType arr[], int) const;

    void printTableStart();
    void printRowsInsertion();
    void printRowsMerge();
    void printRowsCounting();
    void display();
};

Analysis::Analysis()
{
    srand(time(nullptr));
}

Analysis::~Analysis() {}

template <class ItemType>
void Analysis::printArr(ItemType arr[], int size) const
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
}

int* Analysis::genArrRand(int size)
{
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
    
    return arr;
}

void Analysis::printTableStart()
{
    cout << "Sorting Analysis: \n\n" ;
    cout << "Algorithm\tLength\tPass1\tPass2\tPass3\tAvg Accesses \n";
    cout << "---------------------------------------------------- \n";
}


void Analysis::printRowsInsertion()
{
    insertionSort Insertion;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* arr3 = new int[size3];

    cout << "Insertion\t" << size1 << "\t";
    int sum = 0;
    Insertion.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr1 = genArrRand(size1);
        Insertion.sort(arr1, 0, size1 - 1);
        cout << Insertion.getCounter() << "\t";
        sum += Insertion.getCounter();
        Insertion.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Insertion\t" << size2 << "\t";
    sum = 0;
    Insertion.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr2 = genArrRand(size2);
        Insertion.sort(arr2, 0, size2 - 1);
        cout << Insertion.getCounter() << "\t";
        sum += Insertion.getCounter();
        Insertion.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Insertion\t" << size3 << "\t";
    sum = 0;
    Insertion.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr3 = genArrRand(size3);
        Insertion.sort(arr3, 0, size3 - 1);
        cout << Insertion.getCounter() << "\t";
        sum += Insertion.getCounter();
        Insertion.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

}


void Analysis::printRowsMerge()
{
    mergeSort Merge;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* arr3 = new int[size3];

    cout << "Merge\t\t" << size1 << "\t";
    int sum = 0;
    Merge.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr1 = genArrRand(size1);
        Merge.sort(arr1, 0, size1 - 1);
        cout << Merge.getCounter() << "\t";
        sum += Merge.getCounter();
        Merge.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Merge\t\t" << size2 << "\t";
    sum = 0;
    Merge.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr2 = genArrRand(size2);
        Merge.sort(arr2, 0, size2 - 1);
        cout << Merge.getCounter() << "\t";
        sum += Merge.getCounter();
        Merge.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Merge\t\t" << size3 << "\t";
    sum = 0;
    Merge.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr3 = genArrRand(size3);
        Merge.sort(arr3, 0, size3 - 1);
        cout << Merge.getCounter() << "\t";
        sum += Merge.getCounter();
        Merge.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}


void Analysis::printRowsCounting()
{
    countingSort Counting;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* arr3 = new int[size3];

    cout << "Counting\t" << size1 << "\t";
    int sum = 0;
    Counting.resetCounter();
    for (int k = 0; k < 3; k++)
    {
        arr1 = genArrRand(size1);
        Counting.sort(arr1, size1);
        cout << Counting.getCounter() << "\t";
        sum += Counting.getCounter();
        Counting.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Counting\t" << size2 << "\t";
    sum = 0;
    Counting.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr2 = genArrRand(size2);
        Counting.sort(arr2, size2);
        cout << Counting.getCounter() << "\t";
        sum += Counting.getCounter();
        Counting.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Counting\t" << size3 << "\t";
    sum = 0;
    Counting.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr3 = genArrRand(size3);
        Counting.sort(arr3, size3);
        cout << Counting.getCounter() << "\t";
        sum += Counting.getCounter();
        Counting.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

}

void Analysis::display()
{
    printTableStart();
    printRowsInsertion();
    printRowsMerge();
    printRowsCounting();
}
