#include <iostream>

using namespace std;

int main() 
{
    const int MAX = 100;
    for(int i = 0; i < MAX + 1; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << ", ";
        }
    }
    cout << endl;
    return 0;
}

/* SAMPLE OUTPUT
./a.out                                              
0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
*/
