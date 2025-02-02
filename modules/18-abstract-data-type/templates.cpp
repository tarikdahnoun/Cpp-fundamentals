#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

template<class swapType>
void swapAnything(swapType& x, swapType& y)
{
    swapType tmp = x;
    x = y;
    y = tmp;
}

template<class ItemType>
class Box
{
    private:
        ItemType item;
    public:
        void setItem(const ItemType& i)
            {   item = i;   }

        ItemType getItem() const
            {   return item;   }
};

int main() {
    int x = 3;
    int y = 6;
    string a = "abc";
    string b = "xyz";

    cout << "x, y: " << x << ", " << y << endl;
    swap(x, y);
    cout << "x, y: " << x << ", "  << y << endl;
    swapAnything(x, y);
    cout << "x, y: " << x << ", "  << y << endl;

    cout << "a, b: " << a << ", "  << b << endl;
    swapAnything(a, b);
    cout << "a, b: " << a << ", "  << b << endl;

    Box<int> intBox;
    Box<string> stringBox;

    intBox.setItem(7);
    stringBox.setItem("seven");

    cout << intBox.getItem() << endl;
    cout << stringBox.getItem() << endl;

    return 0;
}
