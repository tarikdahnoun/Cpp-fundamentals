#include <iostream>

using namespace std;

int main()
{
    cout << "------- Variable pointers -------" << endl;
    int score = 15;
    cout << "Score: " << score << endl;
    cout << "Score memory address: " << &score << endl;
    cout << "Score memory size: " << sizeof(score) << endl;

    cout << "------ declare and assign -------" << endl;
    int *ptr = NULL;  // declare pointer to an int, no memory address set yet
    ptr = &score;  // assign memory address of score to pointer
    cout << "Score using pointer: " << *ptr << endl;
    cout << "Score memory address using pointer: " << ptr << endl;
    cout << "Score memory size using pointer: " << sizeof(*ptr) << endl;

    cout << "------ dereference the pointer: use ptr to manipulate score -------" << endl;
    *ptr = 30;
    cout << "Score after dereferencing pointer: " << *ptr << endl;
    cout << "Score memory address after dereferencing pointer: " << ptr << endl;
    cout << "Score memory size after dereferencing pointer: " << sizeof(*ptr) << endl;

    cout << "------ do some math -------" << endl;
    int score1 = 15;
    int score2 = 30;
    int *scorePtr = NULL;
    
    scorePtr = &score1;
    *scorePtr += 15;

    scorePtr = &score2;
    *scorePtr -= 10;

    cout << "score1 is: " << score1 << endl;
    cout << "score2 is: " << score2 << endl;

    cout << "-------------------------------------------------------------------" << endl;

    return 0;
}

/* SAMPLE OUTPUT
Score: 15
Score memory address: 0x7fffffffd8e4
Score memory size: 4
*/