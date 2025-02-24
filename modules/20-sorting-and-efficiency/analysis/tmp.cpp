#include <iostream>

using namespace std;

template <class ItemType>
void insertionSort(ItemType theArray[], int n)
{
// unsorted = first index of the unsorted region,
// loc = index of insertion in the sorted region,
// nextItem = next item in the unsorted region.
// Initially, sorted region is theArray[0],
// unsorted region is theArray[1..n-1].
// In general, sorted region is theArray[0..unsorted-1],
// unsorted region theArray[unsorted..n-1]
    for (int unsorted = 1; unsorted < n; unsorted++)
    {
        // At this point, theArray[0..unsorted-1] is sorted.
        // Find the right position (loc) in theArray[0..unsorted]
        // for theArray[unsorted], which is the first entry in the
        // unsorted region; shift, if necessary, to make room
        ItemType nextItem = theArray[unsorted];
        int loc = unsorted;
        while ((loc > 0) && (theArray[loc - 1] > nextItem))
        {
            // Shift theArray[loc - 1] to the right
            theArray[loc] = theArray[loc - 1];
            loc--;
        } // end for
        // At this point, theArray[loc] is where nextItem belongs
        theArray[loc] = nextItem; // Insert nextItem into sorted region
    } // end while
} // end insertionSort

int main() {
    int numArr[] = {32, 64, 4, 256, 1, 512, 8, 128, 2, 16};
    int size = sizeof(numArr) / sizeof(numArr[0]);
    insertionSort(numArr, size);
    for (int i = 0; i < size; i++)
    {
        cout << numArr[i] << ", ";
    }
    cout << endl;
        
    return 0;
}