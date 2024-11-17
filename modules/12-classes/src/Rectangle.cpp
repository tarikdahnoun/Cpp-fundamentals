#include <iostream>
#include "Rectangle.h"
using namespace std;

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
