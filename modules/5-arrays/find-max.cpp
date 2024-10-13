#include <iostream>

using namespace std;

int findMax(const int array[], int size);

int findMax(const int array[], int size)
{
    int currentMax = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > currentMax)
        {
            currentMax = array[i];
        }
    }

    return currentMax;
}

int main()
{
    int SIZE = 7;
    const int nums[SIZE] = {9, 7, 4, 7, 5, 7, 100};
    int max;

    max = findMax(nums, SIZE);
    cout << "Max: " << max << "\n";

    return 0;
}

/* SAMPLE OUTPUT
./a.out                                     
Max: 100
*/
