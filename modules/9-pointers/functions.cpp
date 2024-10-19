#include <iostream>

using namespace std;

// Only return a pointer from a function when memory is dynamically allocated, or
// when a pointer was passed as a function argument
int *createHand()
{
    int *handptr = NULL;
    int numCards;

    cout << "How many cards in your hand? ";
    cin >> numCards;
    cout << endl;

    handptr = new int[numCards];

    for (int i = 0; i < numCards; i++)
    {
        handptr[i] = 0;
        cout << handptr[i];
    }
    
    return handptr;
}

int main() {
    int *handptr;
    handptr = createHand();
    // Memory leak when the below is not used
    delete [] handptr;
    handptr = NULL;

    return 0;
}