#include <iostream>
#include "Rectangle.h"

using namespace std;

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
