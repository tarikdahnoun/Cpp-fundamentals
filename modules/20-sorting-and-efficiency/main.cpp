#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
    Sort sorter;

    vector<int> numArr = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.bubbleSortInc(numArr);
    numArr = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.bubbleSortDec(numArr);
    numArr = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.selectionSortInc(numArr);
    numArr = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.selectionSortDec(numArr);

    vector<string> strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.bubbleSortInc(strArr);
    strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.bubbleSortDec(strArr);
    strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.selectionSortInc(strArr);
    strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.selectionSortDec(strArr);

    return 0;
}

/* SAMPLE OUTPUT
-----------------------
      Bubble Sort      
-----------------------
INFO: Unsorted array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 

INFO: Indices 1, 2 values are 201 > 150. Swapping the two values. New array: 0, 150, 201, 180, 210, 49, 8, 543, 4, 9, 
INFO: Indices 2, 3 values are 201 > 180. Swapping the two values. New array: 0, 150, 180, 201, 210, 49, 8, 543, 4, 9, 
INFO: Indices 4, 5 values are 210 > 49. Swapping the two values. New array: 0, 150, 180, 201, 49, 210, 8, 543, 4, 9, 
INFO: Indices 5, 6 values are 210 > 8. Swapping the two values. New array: 0, 150, 180, 201, 49, 8, 210, 543, 4, 9, 
INFO: Indices 7, 8 values are 543 > 4. Swapping the two values. New array: 0, 150, 180, 201, 49, 8, 210, 4, 543, 9, 
INFO: Indices 8, 9 values are 543 > 9. Swapping the two values. New array: 0, 150, 180, 201, 49, 8, 210, 4, 9, 543, 
INFO: Indices 3, 4 values are 201 > 49. Swapping the two values. New array: 0, 150, 180, 49, 201, 8, 210, 4, 9, 543, 
INFO: Indices 4, 5 values are 201 > 8. Swapping the two values. New array: 0, 150, 180, 49, 8, 201, 210, 4, 9, 543, 
INFO: Indices 6, 7 values are 210 > 4. Swapping the two values. New array: 0, 150, 180, 49, 8, 201, 4, 210, 9, 543, 
INFO: Indices 7, 8 values are 210 > 9. Swapping the two values. New array: 0, 150, 180, 49, 8, 201, 4, 9, 210, 543, 
INFO: Indices 2, 3 values are 180 > 49. Swapping the two values. New array: 0, 150, 49, 180, 8, 201, 4, 9, 210, 543, 
INFO: Indices 3, 4 values are 180 > 8. Swapping the two values. New array: 0, 150, 49, 8, 180, 201, 4, 9, 210, 543, 
INFO: Indices 5, 6 values are 201 > 4. Swapping the two values. New array: 0, 150, 49, 8, 180, 4, 201, 9, 210, 543, 
INFO: Indices 6, 7 values are 201 > 9. Swapping the two values. New array: 0, 150, 49, 8, 180, 4, 9, 201, 210, 543, 
INFO: Indices 1, 2 values are 150 > 49. Swapping the two values. New array: 0, 49, 150, 8, 180, 4, 9, 201, 210, 543, 
INFO: Indices 2, 3 values are 150 > 8. Swapping the two values. New array: 0, 49, 8, 150, 180, 4, 9, 201, 210, 543, 
INFO: Indices 4, 5 values are 180 > 4. Swapping the two values. New array: 0, 49, 8, 150, 4, 180, 9, 201, 210, 543, 
INFO: Indices 5, 6 values are 180 > 9. Swapping the two values. New array: 0, 49, 8, 150, 4, 9, 180, 201, 210, 543, 
INFO: Indices 1, 2 values are 49 > 8. Swapping the two values. New array: 0, 8, 49, 150, 4, 9, 180, 201, 210, 543, 
INFO: Indices 3, 4 values are 150 > 4. Swapping the two values. New array: 0, 8, 49, 4, 150, 9, 180, 201, 210, 543, 
INFO: Indices 4, 5 values are 150 > 9. Swapping the two values. New array: 0, 8, 49, 4, 9, 150, 180, 201, 210, 543, 
INFO: Indices 2, 3 values are 49 > 4. Swapping the two values. New array: 0, 8, 4, 49, 9, 150, 180, 201, 210, 543, 
INFO: Indices 3, 4 values are 49 > 9. Swapping the two values. New array: 0, 8, 4, 9, 49, 150, 180, 201, 210, 543, 
INFO: Indices 1, 2 values are 8 > 4. Swapping the two values. New array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 

INFO: Sorted array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 
-----------------------
    Selection Sort     
-----------------------
INFO: Unsorted array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 

INFO: Swapping current (index, value): (0, 0) with minimum (index, value): (0, 0).
INFO: New Array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 
INFO: Found new min: 150 in position: 2. 
INFO: Found new min: 49 in position: 5. 
INFO: Found new min: 8 in position: 6. 
INFO: Found new min: 4 in position: 8. 
INFO: Swapping current (index, value): (1, 201) with minimum (index, value): (8, 4).
INFO: New Array: 0, 4, 150, 180, 210, 49, 8, 543, 201, 9, 
INFO: Found new min: 49 in position: 5. 
INFO: Found new min: 8 in position: 6. 
INFO: Swapping current (index, value): (2, 150) with minimum (index, value): (6, 8).
INFO: New Array: 0, 4, 8, 180, 210, 49, 150, 543, 201, 9, 
INFO: Found new min: 49 in position: 5. 
INFO: Found new min: 9 in position: 9. 
INFO: Swapping current (index, value): (3, 180) with minimum (index, value): (9, 9).
INFO: New Array: 0, 4, 8, 9, 210, 49, 150, 543, 201, 180, 
INFO: Found new min: 49 in position: 5. 
INFO: Swapping current (index, value): (4, 210) with minimum (index, value): (5, 49).
INFO: New Array: 0, 4, 8, 9, 49, 210, 150, 543, 201, 180, 
INFO: Found new min: 150 in position: 6. 
INFO: Swapping current (index, value): (5, 210) with minimum (index, value): (6, 150).
INFO: New Array: 0, 4, 8, 9, 49, 150, 210, 543, 201, 180, 
INFO: Found new min: 201 in position: 8. 
INFO: Found new min: 180 in position: 9. 
INFO: Swapping current (index, value): (6, 210) with minimum (index, value): (9, 180).
INFO: New Array: 0, 4, 8, 9, 49, 150, 180, 543, 201, 210, 
INFO: Found new min: 201 in position: 8. 
INFO: Swapping current (index, value): (7, 543) with minimum (index, value): (8, 201).
INFO: New Array: 0, 4, 8, 9, 49, 150, 180, 201, 543, 210, 
INFO: Found new min: 210 in position: 9. 
INFO: Swapping current (index, value): (8, 543) with minimum (index, value): (9, 210).
INFO: New Array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 

INFO: Sorted array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 
-----------------------
      Bubble Sort      
-----------------------
INFO: Unsorted array: apple, orange, banana, grape, cherry, 

INFO: Indices 1, 2 values are orange > banana. Swapping the two values. New array: apple, banana, orange, grape, cherry, 
INFO: Indices 2, 3 values are orange > grape. Swapping the two values. New array: apple, banana, grape, orange, cherry, 
INFO: Indices 3, 4 values are orange > cherry. Swapping the two values. New array: apple, banana, grape, cherry, orange, 
INFO: Indices 2, 3 values are grape > cherry. Swapping the two values. New array: apple, banana, cherry, grape, orange, 

INFO: Sorted array: apple, banana, cherry, grape, orange, 
-----------------------
    Selection Sort     
-----------------------
INFO: Unsorted array: apple, orange, banana, grape, cherry, 

INFO: Swapping current (index, value): (0, apple) with minimum (index, value): (0, apple).
INFO: New Array: apple, orange, banana, grape, cherry, 
INFO: Found new min: banana in position: 2. 
INFO: Swapping current (index, value): (1, orange) with minimum (index, value): (2, banana).
INFO: New Array: apple, banana, orange, grape, cherry, 
INFO: Found new min: grape in position: 3. 
INFO: Found new min: cherry in position: 4. 
INFO: Swapping current (index, value): (2, orange) with minimum (index, value): (4, cherry).
INFO: New Array: apple, banana, cherry, grape, orange, 
INFO: Swapping current (index, value): (3, grape) with minimum (index, value): (3, grape).
INFO: New Array: apple, banana, cherry, grape, orange, 

INFO: Sorted array: apple, banana, cherry, grape, orange,
*/