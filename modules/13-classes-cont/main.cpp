#include <iostream>
#include <cstring>
using namespace std;

class Rectangle
{
    private:
        double width;
        double length;
        char *name;
    public:
        Rectangle(double, double, char *name);
        void setWidth(double);
        void setLength(double);
        void printName() const;
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

Rectangle::Rectangle(double w, double l, char *n)
{
    cout << "In the constructor!" << endl;
    width = w;
    length = l;
    name = new char[128];
    strcpy(name, n);   
}

double Rectangle::getWidth() const
{   return width;  }

void Rectangle::printName() const
{   cout << name;   }

int main()
{
    const double initialW = 10.0;
    const double initialL = 12.0;
    char name[] = "Kitchen";

    Rectangle r1(initialW, initialL, name);
    cout << "Welcome!" << endl;
    cout << r1.getWidth() << endl;
    cout << "Bye!" << endl;

    cout << "Welcome!" << endl;
    Rectangle *r2 = nullptr;  // notice this doesnt instantiate Rectangle
    cout << "Bye!" << endl;

    cout << "Welcome!" << endl;
    Rectangle *r3 = nullptr;
    r3 = new Rectangle[3]{{initialW, initialL, name}, {initialW, 8, name}, {9, initialL, name}};  // with no args in constructor, this can just be Rectangle[3]
    cout << "Bye!" << endl;


    cout << "My name is: ";
    r1.printName();
    cout << endl << "and" << endl;
    
    r3->printName();
    cout << endl;
    delete [] r3;
    r3 = nullptr;

    return 0;
}