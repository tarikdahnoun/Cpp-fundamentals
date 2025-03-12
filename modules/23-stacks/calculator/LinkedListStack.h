#ifndef _LINKED_LIST_STACK
#define _LINKED_LIST_STACK

#include "StackInterface.h"
#include <stdexcept>

template<class ItemType>
class LinkedListStack : public StackInterface<ItemType> {
private:
    struct Node {
        ItemType data;
        Node* next;
    };
    Node* topNode;

public:
    LinkedListStack();
    ~LinkedListStack();
    bool isEmpty() const override;
    bool push(const ItemType& newEntry) override;
    bool pop() override;
    ItemType peek() const override;
};

#include "LinkedListStack.cpp"
#endif
