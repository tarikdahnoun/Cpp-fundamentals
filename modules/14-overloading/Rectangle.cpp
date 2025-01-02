#include <iostream>
#include <cstring>

using namespace std;

class Rectangle
{
    private:
        double width;
        double length;
        char *name;
        void initName(char *n);
    public:
        Rectangle();
        Rectangle(double, double, char*);
        // Copy Constructor
        Rectangle(Rectangle &);
        ~Rectangle();
        Rectangle& operator=(const Rectangle &);
        Rectangle& operator+(const Rectangle &);
};

void Rectangle::initName(char *n)
{
    const int MAX_CHARS = 100;
    name = new char[MAX_CHARS];
    strcpy(name, n);
}

Rectangle::Rectangle()
{
    width = length = 0;
    initName("Default");
}

Rectangle::Rectangle(double w, double l, char *n)
{
    width = w;
    length = l;
    initName(n);
}

Rectangle::Rectangle(Rectangle &r)
{
    // This exists because instantiating Rectangle with r1 and r2, then saying r1 = r2, r1 will undesirable point to the memory address of r2.
    // Using copy constructor sets all values when making 2 vars equal to each other, but keeps the original memory address
    width = r.width;
    length = r.length;
    initName(r.name);
}

Rectangle::~Rectangle(){};

Rectangle& Rectangle::operator=(const Rectangle &r)
{
    // This overwrites the equal operator to have mroe desired behavior
    width = r.width;
    length = r.length;
    strcpy(name, r.name);

    return *this;  // returning this is good practice to allow a=b=c type
}

Rectangle& Rectangle::operator+(const Rectangle &r)
{
    // This overwrites the equal operator to have mroe desired behavior
    Rectangle newRect;
    newRect.width = width + r.width;
    newRect.length = length + r.length;
    newRect.initName(name);
    return newRect;
}

int main() {

    Rectangle r1(10, 10, "Kitchen");
    Rectangle r2(5, 5, "Annex");
    Rectangle r3;

    // Test overloading equals (=)
    r3 = r2 = r1;

    // Test overloading plus (+)
    r3 = r1 + r2;

    return 0;
}