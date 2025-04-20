#include "ArrayMaxHeap.h"
#include <iostream>

int main()
{
    // Create an instance of ArrayMaxHeap
    ArrayMaxHeap<int> maxHeap;

    // Add elements to the heap
    maxHeap.add(10);
    maxHeap.add(20);
    maxHeap.add(5);
    maxHeap.add(30);

    // Display the top element
    std::cout << "Top element: " << maxHeap.peekTop() << std::endl;

    // Remove the top element
    maxHeap.remove();
    std::cout << "Top element after removal: " << maxHeap.peekTop() << std::endl;

    // Add more elements
    maxHeap.add(15);
    maxHeap.add(25);

    // Display all elements by repeatedly removing the top
    std::cout << "Heap elements in descending order:" << std::endl;
    while (!maxHeap.isEmpty())
    {
        std::cout << maxHeap.peekTop() << " ";
        maxHeap.remove();
    }
    std::cout << std::endl;

    return 0;
}
