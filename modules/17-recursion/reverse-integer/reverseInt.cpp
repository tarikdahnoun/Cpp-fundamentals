#include <iostream>

using namespace std;

class ReverseInt{
private:
public:
    void reverse(int n)
    {
        if (n >= 10)
        {
            cout << n % 10;
            reverse(n / 10);
        }
        else
        {
            cout << n;
        }
    }
};


int main() {
    ReverseInt R;
    int n = 2015;

    R.reverse(n);
    cout << endl;

    return 0;
}