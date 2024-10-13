#include <iostream>

using namespace std;

int countNum(int nums[], int size, int factor);

int countNum(int nums[], int size, int factor)
{
    int total = 0;

    for(int i = 0; i < size; i++)
    {   
        if(nums[i] % factor == 0)
        {
            total += 1;
        }   
    }   

    return total;
}

int main()
{
    int total;
    const int SIZE = 4;
    int nums[SIZE] = {3, 10, 5, 6};
    int factor = 3;

    total = countNum(nums, SIZE, factor);
    cout << "Found " << total << " occurences factorable by " << factor << " in given array {";
    for(int i = 0; i < SIZE; i++)
    {   
        cout << nums[i] << ", ";
    }
    cout << "}\n";

    return 0;
}

/* SAMPLE OUTPUT
./a.out                                     
Found 1 occurences factorable by 3 in given array {2, 6, 8, }

./a.out                                     
Found 2 occurences factorable by 3 in given array {3, 10, 5, 6, }
*/
