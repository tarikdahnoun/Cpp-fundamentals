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
    numArr = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.insertionSortInc(numArr);
    numArr = {0, 201, 150, 180, 210, 49, 8, 543, 4, 9};
    sorter.insertionSortDec(numArr);

    vector<string> strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.bubbleSortInc(strArr);
    strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.bubbleSortDec(strArr);
    strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.selectionSortInc(strArr);
    strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.selectionSortDec(strArr);
    strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.insertionSortInc(strArr);
    strArr = {"apple", "orange", "banana", "grape", "cherry"};
    sorter.insertionSortDec(strArr);
    
    return 0;
}

/* SAMPLE OUTPUT
-----------------------
    Bubble Sort Inc    
-----------------------
INFO: Unsorted array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 

DEBUG: Indices 1, 2 values are 201 > 150. Swapping the two values. New array: 0, 150, 201, 180, 210, 49, 8, 543, 4, 9, 
DEBUG: Indices 2, 3 values are 201 > 180. Swapping the two values. New array: 0, 150, 180, 201, 210, 49, 8, 543, 4, 9, 
DEBUG: Indices 4, 5 values are 210 > 49. Swapping the two values. New array: 0, 150, 180, 201, 49, 210, 8, 543, 4, 9, 
DEBUG: Indices 5, 6 values are 210 > 8. Swapping the two values. New array: 0, 150, 180, 201, 49, 8, 210, 543, 4, 9, 
DEBUG: Indices 7, 8 values are 543 > 4. Swapping the two values. New array: 0, 150, 180, 201, 49, 8, 210, 4, 543, 9, 
DEBUG: Indices 8, 9 values are 543 > 9. Swapping the two values. New array: 0, 150, 180, 201, 49, 8, 210, 4, 9, 543, 
DEBUG: Indices 3, 4 values are 201 > 49. Swapping the two values. New array: 0, 150, 180, 49, 201, 8, 210, 4, 9, 543, 
DEBUG: Indices 4, 5 values are 201 > 8. Swapping the two values. New array: 0, 150, 180, 49, 8, 201, 210, 4, 9, 543, 
DEBUG: Indices 6, 7 values are 210 > 4. Swapping the two values. New array: 0, 150, 180, 49, 8, 201, 4, 210, 9, 543, 
DEBUG: Indices 7, 8 values are 210 > 9. Swapping the two values. New array: 0, 150, 180, 49, 8, 201, 4, 9, 210, 543, 
DEBUG: Indices 2, 3 values are 180 > 49. Swapping the two values. New array: 0, 150, 49, 180, 8, 201, 4, 9, 210, 543, 
DEBUG: Indices 3, 4 values are 180 > 8. Swapping the two values. New array: 0, 150, 49, 8, 180, 201, 4, 9, 210, 543, 
DEBUG: Indices 5, 6 values are 201 > 4. Swapping the two values. New array: 0, 150, 49, 8, 180, 4, 201, 9, 210, 543, 
DEBUG: Indices 6, 7 values are 201 > 9. Swapping the two values. New array: 0, 150, 49, 8, 180, 4, 9, 201, 210, 543, 
DEBUG: Indices 1, 2 values are 150 > 49. Swapping the two values. New array: 0, 49, 150, 8, 180, 4, 9, 201, 210, 543, 
DEBUG: Indices 2, 3 values are 150 > 8. Swapping the two values. New array: 0, 49, 8, 150, 180, 4, 9, 201, 210, 543, 
DEBUG: Indices 4, 5 values are 180 > 4. Swapping the two values. New array: 0, 49, 8, 150, 4, 180, 9, 201, 210, 543, 
DEBUG: Indices 5, 6 values are 180 > 9. Swapping the two values. New array: 0, 49, 8, 150, 4, 9, 180, 201, 210, 543, 
DEBUG: Indices 1, 2 values are 49 > 8. Swapping the two values. New array: 0, 8, 49, 150, 4, 9, 180, 201, 210, 543, 
DEBUG: Indices 3, 4 values are 150 > 4. Swapping the two values. New array: 0, 8, 49, 4, 150, 9, 180, 201, 210, 543, 
DEBUG: Indices 4, 5 values are 150 > 9. Swapping the two values. New array: 0, 8, 49, 4, 9, 150, 180, 201, 210, 543, 
DEBUG: Indices 2, 3 values are 49 > 4. Swapping the two values. New array: 0, 8, 4, 49, 9, 150, 180, 201, 210, 543, 
DEBUG: Indices 3, 4 values are 49 > 9. Swapping the two values. New array: 0, 8, 4, 9, 49, 150, 180, 201, 210, 543, 
DEBUG: Indices 1, 2 values are 8 > 4. Swapping the two values. New array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 

INFO: Sorted array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 
-----------------------
    Bubble Sort Dec    
-----------------------
INFO: Unsorted array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 

DEBUG: Indices 0, 1 values are 0 < 201. Swapping the two values. New array: 201, 0, 150, 180, 210, 49, 8, 543, 4, 9, 
DEBUG: Indices 1, 2 values are 0 < 150. Swapping the two values. New array: 201, 150, 0, 180, 210, 49, 8, 543, 4, 9, 
DEBUG: Indices 2, 3 values are 0 < 180. Swapping the two values. New array: 201, 150, 180, 0, 210, 49, 8, 543, 4, 9, 
DEBUG: Indices 3, 4 values are 0 < 210. Swapping the two values. New array: 201, 150, 180, 210, 0, 49, 8, 543, 4, 9, 
DEBUG: Indices 4, 5 values are 0 < 49. Swapping the two values. New array: 201, 150, 180, 210, 49, 0, 8, 543, 4, 9, 
DEBUG: Indices 5, 6 values are 0 < 8. Swapping the two values. New array: 201, 150, 180, 210, 49, 8, 0, 543, 4, 9, 
DEBUG: Indices 6, 7 values are 0 < 543. Swapping the two values. New array: 201, 150, 180, 210, 49, 8, 543, 0, 4, 9, 
DEBUG: Indices 7, 8 values are 0 < 4. Swapping the two values. New array: 201, 150, 180, 210, 49, 8, 543, 4, 0, 9, 
DEBUG: Indices 8, 9 values are 0 < 9. Swapping the two values. New array: 201, 150, 180, 210, 49, 8, 543, 4, 9, 0, 
DEBUG: Indices 1, 2 values are 150 < 180. Swapping the two values. New array: 201, 180, 150, 210, 49, 8, 543, 4, 9, 0, 
DEBUG: Indices 2, 3 values are 150 < 210. Swapping the two values. New array: 201, 180, 210, 150, 49, 8, 543, 4, 9, 0, 
DEBUG: Indices 5, 6 values are 8 < 543. Swapping the two values. New array: 201, 180, 210, 150, 49, 543, 8, 4, 9, 0, 
DEBUG: Indices 7, 8 values are 4 < 9. Swapping the two values. New array: 201, 180, 210, 150, 49, 543, 8, 9, 4, 0, 
DEBUG: Indices 1, 2 values are 180 < 210. Swapping the two values. New array: 201, 210, 180, 150, 49, 543, 8, 9, 4, 0, 
DEBUG: Indices 4, 5 values are 49 < 543. Swapping the two values. New array: 201, 210, 180, 150, 543, 49, 8, 9, 4, 0, 
DEBUG: Indices 6, 7 values are 8 < 9. Swapping the two values. New array: 201, 210, 180, 150, 543, 49, 9, 8, 4, 0, 
DEBUG: Indices 0, 1 values are 201 < 210. Swapping the two values. New array: 210, 201, 180, 150, 543, 49, 9, 8, 4, 0, 
DEBUG: Indices 3, 4 values are 150 < 543. Swapping the two values. New array: 210, 201, 180, 543, 150, 49, 9, 8, 4, 0, 
DEBUG: Indices 2, 3 values are 180 < 543. Swapping the two values. New array: 210, 201, 543, 180, 150, 49, 9, 8, 4, 0, 
DEBUG: Indices 1, 2 values are 201 < 543. Swapping the two values. New array: 210, 543, 201, 180, 150, 49, 9, 8, 4, 0, 
DEBUG: Indices 0, 1 values are 210 < 543. Swapping the two values. New array: 543, 210, 201, 180, 150, 49, 9, 8, 4, 0, 

INFO: Sorted array: 543, 210, 201, 180, 150, 49, 9, 8, 4, 0, 
-----------------------
  Selection Sort Inc   
-----------------------
INFO: Unsorted array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 

DEBUG: Swapping current (index, value): (0, 0) with minimum (index, value): (0, 0).
DEBUG: New Array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 
DEBUG: Found new min: 150 in position: 2. 
DEBUG: Found new min: 49 in position: 5. 
DEBUG: Found new min: 8 in position: 6. 
DEBUG: Found new min: 4 in position: 8. 
DEBUG: Swapping current (index, value): (1, 201) with minimum (index, value): (8, 4).
DEBUG: New Array: 0, 4, 150, 180, 210, 49, 8, 543, 201, 9, 
DEBUG: Found new min: 49 in position: 5. 
DEBUG: Found new min: 8 in position: 6. 
DEBUG: Swapping current (index, value): (2, 150) with minimum (index, value): (6, 8).
DEBUG: New Array: 0, 4, 8, 180, 210, 49, 150, 543, 201, 9, 
DEBUG: Found new min: 49 in position: 5. 
DEBUG: Found new min: 9 in position: 9. 
DEBUG: Swapping current (index, value): (3, 180) with minimum (index, value): (9, 9).
DEBUG: New Array: 0, 4, 8, 9, 210, 49, 150, 543, 201, 180, 
DEBUG: Found new min: 49 in position: 5. 
DEBUG: Swapping current (index, value): (4, 210) with minimum (index, value): (5, 49).
DEBUG: New Array: 0, 4, 8, 9, 49, 210, 150, 543, 201, 180, 
DEBUG: Found new min: 150 in position: 6. 
DEBUG: Swapping current (index, value): (5, 210) with minimum (index, value): (6, 150).
DEBUG: New Array: 0, 4, 8, 9, 49, 150, 210, 543, 201, 180, 
DEBUG: Found new min: 201 in position: 8. 
DEBUG: Found new min: 180 in position: 9. 
DEBUG: Swapping current (index, value): (6, 210) with minimum (index, value): (9, 180).
DEBUG: New Array: 0, 4, 8, 9, 49, 150, 180, 543, 201, 210, 
DEBUG: Found new min: 201 in position: 8. 
DEBUG: Swapping current (index, value): (7, 543) with minimum (index, value): (8, 201).
DEBUG: New Array: 0, 4, 8, 9, 49, 150, 180, 201, 543, 210, 
DEBUG: Found new min: 210 in position: 9. 
DEBUG: Swapping current (index, value): (8, 543) with minimum (index, value): (9, 210).
DEBUG: New Array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 

INFO: Sorted array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 
-----------------------
  Selection Sort Dec   
-----------------------
INFO: Unsorted array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 

DEBUG: Found new max: 201 in position: 1. 
DEBUG: Found new max: 210 in position: 4. 
DEBUG: Found new max: 543 in position: 7. 
DEBUG: Swapping current (index, value): (0, 0) with maximum (index, value): (7, 543).
DEBUG: New Array: 543, 201, 150, 180, 210, 49, 8, 0, 4, 9, 
DEBUG: Found new max: 210 in position: 4. 
DEBUG: Swapping current (index, value): (1, 201) with maximum (index, value): (4, 210).
DEBUG: New Array: 543, 210, 150, 180, 201, 49, 8, 0, 4, 9, 
DEBUG: Found new max: 180 in position: 3. 
DEBUG: Found new max: 201 in position: 4. 
DEBUG: Swapping current (index, value): (2, 150) with maximum (index, value): (4, 201).
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 8, 0, 4, 9, 
DEBUG: Swapping current (index, value): (3, 180) with maximum (index, value): (3, 180).
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 8, 0, 4, 9, 
DEBUG: Swapping current (index, value): (4, 150) with maximum (index, value): (4, 150).
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 8, 0, 4, 9, 
DEBUG: Swapping current (index, value): (5, 49) with maximum (index, value): (5, 49).
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 8, 0, 4, 9, 
DEBUG: Found new max: 9 in position: 9. 
DEBUG: Swapping current (index, value): (6, 8) with maximum (index, value): (9, 9).
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 9, 0, 4, 8, 
DEBUG: Found new max: 4 in position: 8. 
DEBUG: Found new max: 8 in position: 9. 
DEBUG: Swapping current (index, value): (7, 0) with maximum (index, value): (9, 8).
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 9, 8, 4, 0, 
DEBUG: Swapping current (index, value): (8, 4) with maximum (index, value): (8, 4).
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 9, 8, 4, 0, 

INFO: Sorted array: 543, 210, 201, 180, 150, 49, 9, 8, 4, 0, 
-----------------------
   Insertion Sort Inc   
-----------------------
INFO: Unsorted array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 

DEBUG: Moving element (index, value): (1, 201) -> (1, 201)
DEBUG: New Array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (2, 201) -> (1, 150)
DEBUG: New Array: 0, 150, 201, 180, 210, 49, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (3, 201) -> (2, 180)
DEBUG: New Array: 0, 150, 180, 201, 210, 49, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (4, 210) -> (4, 210)
DEBUG: New Array: 0, 150, 180, 201, 210, 49, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (5, 210) -> (1, 49)
DEBUG: New Array: 0, 49, 150, 180, 201, 210, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (6, 210) -> (1, 8)
DEBUG: New Array: 0, 8, 49, 150, 180, 201, 210, 543, 4, 9, 
DEBUG: Moving element (index, value): (7, 543) -> (7, 543)
DEBUG: New Array: 0, 8, 49, 150, 180, 201, 210, 543, 4, 9, 
DEBUG: Moving element (index, value): (8, 543) -> (1, 4)
DEBUG: New Array: 0, 4, 8, 49, 150, 180, 201, 210, 543, 9, 
DEBUG: Moving element (index, value): (9, 543) -> (3, 9)
DEBUG: New Array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 

INFO: Sorted array: 0, 4, 8, 9, 49, 150, 180, 201, 210, 543, 
-----------------------
   Insertion Sort Dec   
-----------------------
INFO: Unsorted array: 0, 201, 150, 180, 210, 49, 8, 543, 4, 9, 

DEBUG: Moving element (index, value): (1, 0) -> (0, 201)
DEBUG: New Array: 201, 0, 150, 180, 210, 49, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (2, 0) -> (1, 150)
DEBUG: New Array: 201, 150, 0, 180, 210, 49, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (3, 0) -> (1, 180)
DEBUG: New Array: 201, 180, 150, 0, 210, 49, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (4, 0) -> (0, 210)
DEBUG: New Array: 210, 201, 180, 150, 0, 49, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (5, 0) -> (4, 49)
DEBUG: New Array: 210, 201, 180, 150, 49, 0, 8, 543, 4, 9, 
DEBUG: Moving element (index, value): (6, 0) -> (5, 8)
DEBUG: New Array: 210, 201, 180, 150, 49, 8, 0, 543, 4, 9, 
DEBUG: Moving element (index, value): (7, 0) -> (0, 543)
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 8, 0, 4, 9, 
DEBUG: Moving element (index, value): (8, 0) -> (7, 4)
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 8, 4, 0, 9, 
DEBUG: Moving element (index, value): (9, 0) -> (6, 9)
DEBUG: New Array: 543, 210, 201, 180, 150, 49, 9, 8, 4, 0, 

INFO: Sorted array: 543, 210, 201, 180, 150, 49, 9, 8, 4, 0, 
-----------------------
    Bubble Sort Inc    
-----------------------
INFO: Unsorted array: apple, orange, banana, grape, cherry, 

DEBUG: Indices 1, 2 values are orange > banana. Swapping the two values. New array: apple, banana, orange, grape, cherry, 
DEBUG: Indices 2, 3 values are orange > grape. Swapping the two values. New array: apple, banana, grape, orange, cherry, 
DEBUG: Indices 3, 4 values are orange > cherry. Swapping the two values. New array: apple, banana, grape, cherry, orange, 
DEBUG: Indices 2, 3 values are grape > cherry. Swapping the two values. New array: apple, banana, cherry, grape, orange, 

INFO: Sorted array: apple, banana, cherry, grape, orange, 
-----------------------
    Bubble Sort Dec    
-----------------------
INFO: Unsorted array: apple, orange, banana, grape, cherry, 

DEBUG: Indices 0, 1 values are apple < orange. Swapping the two values. New array: orange, apple, banana, grape, cherry, 
DEBUG: Indices 1, 2 values are apple < banana. Swapping the two values. New array: orange, banana, apple, grape, cherry, 
DEBUG: Indices 2, 3 values are apple < grape. Swapping the two values. New array: orange, banana, grape, apple, cherry, 
DEBUG: Indices 3, 4 values are apple < cherry. Swapping the two values. New array: orange, banana, grape, cherry, apple, 
DEBUG: Indices 1, 2 values are banana < grape. Swapping the two values. New array: orange, grape, banana, cherry, apple, 
DEBUG: Indices 2, 3 values are banana < cherry. Swapping the two values. New array: orange, grape, cherry, banana, apple, 

INFO: Sorted array: orange, grape, cherry, banana, apple, 
-----------------------
  Selection Sort Inc   
-----------------------
INFO: Unsorted array: apple, orange, banana, grape, cherry, 

DEBUG: Swapping current (index, value): (0, apple) with minimum (index, value): (0, apple).
DEBUG: New Array: apple, orange, banana, grape, cherry, 
DEBUG: Found new min: banana in position: 2. 
DEBUG: Swapping current (index, value): (1, orange) with minimum (index, value): (2, banana).
DEBUG: New Array: apple, banana, orange, grape, cherry, 
DEBUG: Found new min: grape in position: 3. 
DEBUG: Found new min: cherry in position: 4. 
DEBUG: Swapping current (index, value): (2, orange) with minimum (index, value): (4, cherry).
DEBUG: New Array: apple, banana, cherry, grape, orange, 
DEBUG: Swapping current (index, value): (3, grape) with minimum (index, value): (3, grape).
DEBUG: New Array: apple, banana, cherry, grape, orange, 

INFO: Sorted array: apple, banana, cherry, grape, orange, 
-----------------------
  Selection Sort Dec   
-----------------------
INFO: Unsorted array: apple, orange, banana, grape, cherry, 

DEBUG: Found new max: orange in position: 1. 
DEBUG: Swapping current (index, value): (0, apple) with maximum (index, value): (1, orange).
DEBUG: New Array: orange, apple, banana, grape, cherry, 
DEBUG: Found new max: banana in position: 2. 
DEBUG: Found new max: grape in position: 3. 
DEBUG: Swapping current (index, value): (1, apple) with maximum (index, value): (3, grape).
DEBUG: New Array: orange, grape, banana, apple, cherry, 
DEBUG: Found new max: cherry in position: 4. 
DEBUG: Swapping current (index, value): (2, banana) with maximum (index, value): (4, cherry).
DEBUG: New Array: orange, grape, cherry, apple, banana, 
DEBUG: Found new max: banana in position: 4. 
DEBUG: Swapping current (index, value): (3, apple) with maximum (index, value): (4, banana).
DEBUG: New Array: orange, grape, cherry, banana, apple, 

INFO: Sorted array: orange, grape, cherry, banana, apple, 
-----------------------
   Insertion Sort Inc   
-----------------------
INFO: Unsorted array: apple, orange, banana, grape, cherry, 

DEBUG: Moving element (index, value): (1, orange) -> (1, orange)
DEBUG: New Array: apple, orange, banana, grape, cherry, 
DEBUG: Moving element (index, value): (2, orange) -> (1, banana)
DEBUG: New Array: apple, banana, orange, grape, cherry, 
DEBUG: Moving element (index, value): (3, orange) -> (2, grape)
DEBUG: New Array: apple, banana, grape, orange, cherry, 
DEBUG: Moving element (index, value): (4, orange) -> (2, cherry)
DEBUG: New Array: apple, banana, cherry, grape, orange, 

INFO: Sorted array: apple, banana, cherry, grape, orange, 
-----------------------
   Insertion Sort Dec   
-----------------------
INFO: Unsorted array: apple, orange, banana, grape, cherry, 

DEBUG: Moving element (index, value): (1, apple) -> (0, orange)
DEBUG: New Array: orange, apple, banana, grape, cherry, 
DEBUG: Moving element (index, value): (2, apple) -> (1, banana)
DEBUG: New Array: orange, banana, apple, grape, cherry, 
DEBUG: Moving element (index, value): (3, apple) -> (1, grape)
DEBUG: New Array: orange, grape, banana, apple, cherry, 
DEBUG: Moving element (index, value): (4, apple) -> (2, cherry)
DEBUG: New Array: orange, grape, cherry, banana, apple, 

INFO: Sorted array: orange, grape, cherry, banana, apple,
*/