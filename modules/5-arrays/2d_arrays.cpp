#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    const int NUM_PLAYERS = 6;
    const int NUM_CARDS = 3;
    int cards[NUM_PLAYERS][NUM_CARDS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        for (int j = 0; j < NUM_CARDS; j++)
        {
            cout << total << " + " << cards[i][j] << " = ";
            total += cards[i][j];
            cout << total << "\n";
        }
    }

    return 0;
}

/* SAMPLE OUTPUT
./a.out                                     
0 + 1 = 1
1 + 2 = 3
3 + 3 = 6
6 + 4 = 10
10 + 5 = 15
15 + 6 = 21
21 + 7 = 28
28 + 8 = 36
36 + 9 = 45
45 + 10 = 55
55 + 11 = 66
66 + 12 = 78
78 + 13 = 91
91 + 14 = 105
105 + 15 = 120
120 + 16 = 136
136 + 17 = 153
153 + 18 = 171
*/
