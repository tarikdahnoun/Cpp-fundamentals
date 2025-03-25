/** @file ArrayStack.h */
#ifndef _ARRAY_STACK
#define _ARRAY_STACK

#include "StackInterface.h"
#include <iostream>
#include <stdexcept>

const int DEFAULT_CAPACITY = 50;

template<class ItemType>
class ArrayStack : public StackInterface<ItemType> {
private:
    ItemType items[DEFAULT_CAPACITY]; // Array of stack items
    int top; // Index of top item

public:
    ArrayStack(); // Constructor
    bool isEmpty() const override;
    bool push(const ItemType& newEntry) override;
    bool pop() override;
    ItemType peek() const override;
}; 

#endif
