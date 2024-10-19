#include <iostream>

using namespace std;

void allTrues()
{
    int cards[3] = {15, 6, 7};

    if (&cards[1] > &cards[0])
    {
        if (&cards[2] != &cards[3])
        {
            if (cards == &cards[0])
            {
                cout << "Valid pointer comparison!" << endl;
            }
        }
    }
}

void swapper(int *card1, int *card2)
{
    int tmp = *card1;
    *card1 = *card2;
    *card2 = tmp;
}

int main() {
    int card1 = 5;
    int card2 = 6;

    cout << "Pre-swap: " << card1 << ", " << card2 << endl;
    swapper(&card1, &card2);
    cout << "Post-swap: " << card1 << ", " << card2 << endl;

    allTrues();    
    return 0;
}
