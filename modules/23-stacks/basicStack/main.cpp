#include "ArrayStack.h"
#include "LinkedListStack.h"
#include <iostream>

int main() {
    ArrayStack<int> arrayStack;
    LinkedListStack<int> linkedListStack;

    std::cout << "Testing ArrayStack...\n";
    arrayStack.push(10);
    arrayStack.push(20);
    arrayStack.push(30);
    std::cout << "Top of ArrayStack: " << arrayStack.peek() << std::endl;
    arrayStack.pop();
    std::cout << "New top of ArrayStack: " << arrayStack.peek() << std::endl;

    std::cout << "\nTesting LinkedListStack...\n";
    linkedListStack.push(10);
    linkedListStack.push(20);
    linkedListStack.push(30);
    std::cout << "Top of LinkedListStack: " << linkedListStack.peek() << std::endl;
    linkedListStack.pop();
    std::cout << "New top of LinkedListStack: " << linkedListStack.peek() << std::endl;

    return 0;
}
