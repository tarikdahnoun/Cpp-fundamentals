#include <iostream>

using namespace std;

int main()
{
    int var = 10;
    cout << "Size of int " << var << " is " << sizeof(var) << "\n";

    int vars[10];
    cout << "Size of array of 10 ints is " << sizeof(vars) << "\n";

    int cards[10] = {7, 4, 7, 5, 7};
    cout << "Size of array of 10 ints is " << sizeof(cards) << "\n";
    
    return 0;
}

/* SAMPLE OUTPUT
./a.out                                     
Size of int 10 is 4
Size of array of 10 ints is 40
Size of array of 10 ints is 40
*/
