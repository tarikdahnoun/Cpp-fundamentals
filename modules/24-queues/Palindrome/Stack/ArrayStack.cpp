/** @file ArrayStack.cpp */
#include "ArrayStack.h"

template<class ItemType>
ArrayStack<ItemType>::ArrayStack() : top(-1) {}

template<class ItemType>
bool ArrayStack<ItemType>::isEmpty() const {
    return top < 0;
}

template<class ItemType>
bool ArrayStack<ItemType>::push(const ItemType& newEntry) {
    if (top < DEFAULT_CAPACITY - 1) { 
        items[++top] = newEntry;
        return true;
    }
    return false; // Stack overflow
}

template<class ItemType>
bool ArrayStack<ItemType>::pop() {
    if (!isEmpty()) {
        --top;
        return true;
    }
    return false; // Stack underflow
}

template<class ItemType>
ItemType ArrayStack<ItemType>::peek() const {
    if (!isEmpty()) {
        return items[top];
    }
    throw std::runtime_error("Stack is empty");
}
