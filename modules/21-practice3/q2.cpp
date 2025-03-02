#include <iostream>

using namespace std;
int maxNum = 0;

int max(int arr[], int size)
{
    if (size == 1)
    {
        return arr[0];
    }

    int maxVal = max(arr, size - 1);
    return (arr[size - 1] > maxVal) ? arr[size - 1] : maxVal;
        
}

int main() {
    int a[] = {42, 3, 16, 5, 69, 11};
    int size = 5;

    cout << max(a, size) << endl;

    return 0;
}
