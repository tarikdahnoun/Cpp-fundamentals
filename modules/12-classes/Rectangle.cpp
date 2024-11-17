#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

void Rectangle::setWidth(double w)
{
    if (w < 0)
    {
        cout << "ERROR: Invalid width!\n";
        exit(1);
    }
    
    width = w;
}

double Rectangle::getWidth() const
{   return width;   }

void Rectangle::setLength(double l)
{
    if (l < 0)
    {
        cout << "ERROR: Invalid length!\n";
        exit(1);
    }

    length = l;
}

double Rectangle::getLength() const
{   return length;  }

double Rectangle::getArea() const
{   return length * width;  }

int main()
{
    Rectangle bedroom;

    Rectangle *roomPtr = nullptr;
    roomPtr = &bedroom;

    roomPtr->setWidth(15);
    roomPtr->setLength(12);

    cout << "The bedroom area is: " << roomPtr->getArea() << " sq ft\n";
    
    return 0;
}