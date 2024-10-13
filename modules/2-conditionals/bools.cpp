#include <iostream>

using namespace std;

bool isPair = false;

int main() 
{
    if (isPair)
    {
        cout << "a1" << endl;
    }
    else
    {
        cout << "b1" << endl;
    }

    if(isPair == true)
    {
        cout << "a2" << endl;
    }
    else
    {
        cout << "b2" << endl;
    }
}

/* SAMPLE OUTPUT
./a.out
a1
a2

./a.out
b1
b2

*/
