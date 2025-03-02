#include <iostream>

using namespace std;

void first(int theArray[], int size)
{
    if (size > 0)
        cout << theArray[0];
    else {
        first(theArray, size);
    }
}

int main()
{
    int a[] = {42, 3, 16, 5, 69};
    int size = 5;

    first(a, size);
    return 0;
}
