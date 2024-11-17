#include <iostream>

using namespace std;

int main()
{
    int cards[3];
    cards[0] = 2;
    cards[1] = 4;
    cards[2] = 7;

    for (int i = 0; i < 3; i++)
    {
        cout << cards[i] << ", ";
    }

    return 0;
}

/* SAMPLE OUTPUT
./a.out                                     
2, 4, 7,
*/
