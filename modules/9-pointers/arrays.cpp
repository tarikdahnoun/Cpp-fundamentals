#include <iostream>

using namespace std;

int main() {
    cout << "------- Array pointers -------" << endl;
    int cards[4] = {7, 4, 3, 8};
    cout << "First card is: " << *cards << endl;
    cout << "Second card is: " << *(cards + 1) << endl;  // cards[1]
    cout << "Third card is: " << *(cards + 2) << endl;  // cards[2]

    cout << "------- Inputs -------" << endl;
    const int NUM = 4;
    int cards2[NUM];
    cout << "Enter " << NUM << " cards: \n";
    for (int i = 0; i < NUM; i++)
    {
        cin >> *(cards2 + i); 
    }

    cout << "Here are the cards (pointer arithmetic): " << endl;
    for (int i = 0; i < NUM; i++)
    {
        cout << *(cards2 + i) << endl; 
    }

    cout << "Here are the cards (pointer iteration): " << endl;
    int *ptr = NULL;
    ptr = cards2;
    for (int i = 0; i < NUM; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    cout << "Here are the cards in reverse: " << endl;
    int *ptr2 = NULL;
    ptr2 = &(cards2[3]);
    for (int i = 0; i < NUM; i++)
    {
        cout << *ptr2 << endl;
        ptr2--;
    } 

    return 0;
}
