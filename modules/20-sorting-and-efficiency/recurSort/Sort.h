#include <iostream>
#include <vector>

using namespace std;

#ifndef SORT_H
#define SORT_H

class Sort
{
    private:
        template <class ItemType>
        void merge(ItemType arr[], int, int, int);

        template <class ItemType>
        int partition(ItemType arr[], int, int);

        template <class ItemType>
        int medianOfThree(ItemType arr[], int, int);
    public:
        Sort() = default;
        ~Sort() = default;

        template <class ItemType>
        void printArr(ItemType arr[], int, int) const;

        template <class ItemType>
        void insertionSortInc(ItemType arr[], int, int);

        template <class ItemType>
        void mergeSort(ItemType arr[], int, int);

        template <class ItemType>
        void quickSort(ItemType arr[], int, int);
};

#endif
