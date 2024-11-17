#include <iostream>

using namespace std;

int main() 
{
    int x = -1;
	cout << "x: " << x << endl;

	if (x < 0)
	{
		x--;
	}
	else
	{
		x++; 
	}

	cout << "x: " << x << endl;;
    return 0;
}

/* SAMPLE OUTPUT
x: 10
x: 11

x: 0
x: 1


x: -1
x: -2
*/
