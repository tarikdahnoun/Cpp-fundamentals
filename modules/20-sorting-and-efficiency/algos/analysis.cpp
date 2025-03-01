#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bubbleSort.cpp"
#include "selectionSort.cpp"
#include "insertionSort.cpp"
#include "countingSort.cpp"
#include "mergeSort.cpp"
#include "quickSort.cpp"

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

    void printTableStart();
    void printRowsBubble();
    void printRowsSelection();
    void printRowsInsertion();
    void printRowsCounting();
    void printRowsMerge();
    void printRowsQuick();
    void display();
};

Analysis::Analysis()
{
    srand(time(nullptr));
}

Analysis::~Analysis() {}

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

void Analysis::printRowsBubble()
{
    bubbleSort Bubble;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* arr3 = new int[size3];

    cout << "Bubble\t\t" << size1 << "\t";
    int sum = 0;
    Bubble.resetCounter();
    for (int k = 0; k < 3; k++)
    {
        arr1 = genArrRand(size1);
        Bubble.sort(arr1, size1);
        cout << Bubble.getCounter() << "\t";
        sum += Bubble.getCounter();
        Bubble.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Bubble\t\t" << size2 << "\t";
    sum = 0;
    Bubble.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr2 = genArrRand(size2);
        Bubble.sort(arr2, size2);
        cout << Bubble.getCounter() << "\t";
        sum += Bubble.getCounter();
        Bubble.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Bubble\t\t" << size3 << "\t";
    sum = 0;
    Bubble.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr3 = genArrRand(size3);
        Bubble.sort(arr3, size3);
        cout << Bubble.getCounter() << "\t";
        sum += Bubble.getCounter();
        Bubble.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}

void Analysis::printRowsSelection()
{
    selectionSort Selection;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* arr3 = new int[size3];

    cout << "Selection\t" << size1 << "\t";
    int sum = 0;
    Selection.resetCounter();
    for (int k = 0; k < 3; k++)
    {
        arr1 = genArrRand(size1);
        Selection.sort(arr1, size1);
        cout << Selection.getCounter() << "\t";
        sum += Selection.getCounter();
        Selection.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Selection\t" << size2 << "\t";
    sum = 0;
    Selection.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr2 = genArrRand(size2);
        Selection.sort(arr2, size2);
        cout << Selection.getCounter() << "\t";
        sum += Selection.getCounter();
        Selection.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Selection\t" << size3 << "\t";
    sum = 0;
    Selection.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr3 = genArrRand(size3);
        Selection.sort(arr3, size3);
        cout << Selection.getCounter() << "\t";
        sum += Selection.getCounter();
        Selection.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
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

void Analysis::printRowsQuick()
{
    quickSort Quick;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* arr3 = new int[size3];

    cout << "Quick\t\t" << size1 << "\t";
    int sum = 0;
    Quick.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr1 = genArrRand(size1);
        Quick.sort(arr1, 0, size1 - 1);
        cout << Quick.getCounter() << "\t";
        sum += Quick.getCounter();
        Quick.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Quick\t\t" << size2 << "\t";
    sum = 0;
    Quick.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr2 = genArrRand(size2);
        Quick.sort(arr2, 0, size2 - 1);
        cout << Quick.getCounter() << "\t";
        sum += Quick.getCounter();
        Quick.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    cout << "Quick\t\t" << size3 << "\t";
    sum = 0;
    Quick.resetCounter();
    for (int i = 0; i < NUM_PASSES; i++)
    {
        arr3 = genArrRand(size3);
        Quick.sort(arr3, 0, size3 - 1);
        cout << Quick.getCounter() << "\t";
        sum += Quick.getCounter();
        Quick.resetCounter();
    }
    cout << sum / NUM_PASSES << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}

void Analysis::display()
{
    printTableStart();
    printRowsBubble();
    printRowsSelection();
    printRowsInsertion();
    printRowsCounting();
    printRowsMerge();
    printRowsQuick();
}
