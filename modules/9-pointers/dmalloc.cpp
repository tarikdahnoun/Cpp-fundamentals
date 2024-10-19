#include <iostream>

using namespace std;

int main() {
    // Instead of int cards[4], what if we dont know the number of elements?
    int *handptr = NULL;
    int numCards;

    cout << "How many cards in your hand? ";
    cin >> numCards;
    cout << endl;

    handptr = new int[numCards];

    for (int i = 0; i < numCards; i++)
    {
        cout << *(handptr + i) << endl;
    }
    
    // Memory leak when the below is not used
    delete [] handptr;
    handptr = NULL;

    return 0;
}
/* SAMPLE OUTPUT
How many cards in your hand? 5

0
0
0
0
0
*/