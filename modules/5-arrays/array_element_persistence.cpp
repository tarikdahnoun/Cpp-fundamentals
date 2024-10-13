// Demonstrate that variable changes within methods do not persist outside of the method

#include <iostream>
#include <fstream>

using namespace std;

void functionVars(int nums[], int size, int someInt, string someStr);

void functionVars(int nums[], int size, int someInt, string someStr)
{
    for(int i = 0; i < size; i++)
    {
        nums[i] = 0;
    }

    someInt = 0;
    someStr = "zzz";

    cout << "--- Inside method ---\n";
    cout << "{";
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << "}\n";
    cout << someInt << "\n";
    cout << someStr << "\n";
    cout << endl;
}

int main()
{
    // Givens
    const int SIZE = 5;
    int nums[SIZE] = {5, 10, 2, 16, 3};
    int someInt = 42;
    string someStr = "aaa";

    cout << "--- Before method (outside) ---\n";
    cout << "{";
    for(int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << "}\n";
    cout << someInt << "\n";
    cout << someStr << "\n";
    cout << endl; 

    functionVars(nums, SIZE, someInt, someStr);

    cout << "--- After method (outside) ---\n";
    cout << "{";
    for(int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << "}\n";
    cout << someInt << "\n";
    cout << someStr << "\n";
    cout << endl;
    return 0;
}

/* SAMPLE OUTPUT
./a.out                                     
--- Before method (outside) ---
{5, 10, 2, 16, 3, }
42
aaa

--- Inside method ---
{0, 0, 0, 0, 0, }
0
zzz

--- After method (outside) ---
{0, 0, 0, 0, 0, }
42
aaa
*/
