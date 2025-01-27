#include <iostream>

using namespace std;

class FibonacciSequence{
private:
public:
    int factorial(int givenInt)
    {
        if (givenInt == 0)
        {
            return 1;
        }
        else
        {
            return givenInt * factorial(givenInt - 1);
        }        
    }
};


int main() {
    FibonacciSequence S;
    int givenInt = 5;

    cout << S.factorial(givenInt) << endl;

    return 0;
}