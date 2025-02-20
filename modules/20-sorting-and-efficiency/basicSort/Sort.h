#include <iostream>
#include <vector>

using namespace std;

#ifndef SORT_H
#define SORT_H

class Sort
{
    public:
        Sort() = default;
        ~Sort() = default;
    
        template <typename T>
        void printArr(const vector<T>& arr) const;
    
        template <typename T>
        void bubbleSortInc(vector<T>& arr);

        template <typename T>
        void bubbleSortDec(vector<T>& arr);
    
        template <typename T>
        void selectionSortInc(vector<T>& arr);

        template <typename T>
        void selectionSortDec(vector<T>& arr);

        template <typename T>
        void insertionSortInc(vector<T>& arr);

        template <typename T>
        void insertionSortDec(vector<T>& arr);
};

#endif
