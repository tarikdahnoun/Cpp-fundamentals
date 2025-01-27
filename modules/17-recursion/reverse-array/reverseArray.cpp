#include <iostream>

using namespace std;

class ReverseArray{
private:
public:
    void reverse1(int a[], int firstI, int lastI)
    {
        if (firstI <= lastI)
        {
            cout << a[lastI] << ", ";
            reverse1(a, firstI, lastI - 1);
        }
    }

    void reverse2(int a[], int firstI, int lastI)
    {
        if (firstI <= lastI)
        {
            reverse2(a, firstI + 1, lastI);
            cout << a[firstI] << ", ";
        }
        
    }
};


int main() {
    ReverseArray S;
    int a[] = {2, 4, 6, 8};

    S.reverse1(a, 0, 3);
    cout << endl;

    S.reverse2(a, 0, 3);
    cout << endl;

    return 0;
}