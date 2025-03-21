#include "LinkedListStack.h"

template<class ItemType>
LinkedListStack<ItemType>::LinkedListStack() : topNode(nullptr) {}

template<class ItemType>
LinkedListStack<ItemType>::~LinkedListStack() {
    while (!isEmpty()) {
        pop();
    }
}

template<class ItemType>
bool LinkedListStack<ItemType>::isEmpty() const {
    return topNode == nullptr;
}

template<class ItemType>
bool LinkedListStack<ItemType>::push(const ItemType& newEntry) {
    Node* newNode = new Node{newEntry, topNode};
    topNode = newNode;
    return true;
}

template<class ItemType>
bool LinkedListStack<ItemType>::pop() {
    if (isEmpty()) {
        return false;
    }
    Node* nodeToDelete = topNode;
    topNode = topNode->next;
    delete nodeToDelete;
    return true;
}

template<class ItemType>
ItemType LinkedListStack<ItemType>::peek() const {
    if (isEmpty()) {
        throw std::runtime_error("Stack is empty");
    }
    return topNode->data;
}
