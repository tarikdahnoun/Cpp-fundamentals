#include "ArrayStack.h"
#include <iostream>

int main() {
    ArrayStack<int> stack;

    std::cout << "Pushing 10, 20, 30...\n";
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top of stack: " << stack.peek() << std::endl;

    std::cout << "Popping top element...\n";
    stack.pop();
    std::cout << "New top: " << stack.peek() << std::endl;

    return 0;
}
