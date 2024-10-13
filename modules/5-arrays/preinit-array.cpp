#include <iostream>

using namespace std;

int main()
{
    int cards[128] = {7, 4, 7, 5, 7};

    cout << "cards[1] = " << cards[1] << "\n";
    cout << "cards[8] = " << cards[8] << "\n";
    
    return 0;
}

/* SAMPLE OUTPUT
./a.out                                     
cards[1] = 4
cards[8] = 0
*/
