#include "ArrayMaxHeap.h"

int ArrayMaxHeap::getLeftChildIndex(const int nodeIndex) const { return 2 * nodeIndex + 1; };
// Returns the array index of the right child (if it exists).
int ArrayMaxHeap::getRightChildIndex(int nodeIndex) const { return 2 * nodeIndex + 2; };
// Returns the array index of the parent node.
int ArrayMaxHeap::getParentIndex(int nodeIndex) const { return (nodeIndex - 1) / 2; };
// Tests whether this node is a leaf.
bool isLeaf(int nodeIndex) const { return 2 * nodeIndex + 1 >= itemCount; };
// Swap two nodes
void swap(int index1, int index2)
{
    ItemType temp = items[index1];
    items[index1] = items[index2];
    items[index2] = temp;
}
// Converts a semiheap to a heap.
void heapRebuild(int subTreeRootIndex)
{
    int left = getLeftChildIndex(subTreeRootIndex);
    int right = getRightChildIndex(subTreeRootIndex);
    int largest = subTreeRootIndex;
    if (left < itemCount && items[left] > items[largest])
        largest = left;
    if (right < itemCount && items[right] > items[largest])
        largest = right;
    if (largest != subTreeRootIndex)
    {
        swap(subTreeRootIndex, largest);
        heapRebuild(largest);
    }
}
void bubbleUp(int index)
{
    while (index > ROOT_INDEX && items[index] > items[getParentIndex(index)])
    {
        swap(index, getParentIndex(index));
        index = getParentIndex(index);
    }
}
// Creates a heap from an unordered array.
void heapCreate()
{
    for (int index = itemCount / 2; index >= 0; index--)
        heapRebuild(index);
} // end heapCreate
public:
ArrayMaxHeap() : itemCount(0), maxItems(DEFAULT_CAPACITY)
{
    items = new ItemType[DEFAULT_CAPACITY]; // Allocate memory for the heap
}

ArrayMaxHeap(const ItemType someArray[], const int arraySize)
    : itemCount(arraySize), maxItems(2 * arraySize)
{
    // Allocate the array
    items = new ItemType[2 * arraySize];
    // Copy given values into the array
    for (int i = 0; i < itemCount; i++)
        items[i] = someArray[i];
    // Reorganize the array into a heap
    heapCreate();
} // end constructor

virtual ~ArrayMaxHeap()
{
    delete[] items;  // Properly deallocate memory
    items = nullptr; // Avoid dangling pointer
}

bool isEmpty() const { return itemCount == 0; }

int getNumberOfNodes() const { return itemCount; }

int getHeight() const override
{
    // Approx height of binary heap = floor(log2(n)) + 1
    int height = ROOT_INDEX, nodes = itemCount;
    while (nodes > ROOT_INDEX)
    {
        nodes /= 2;
        ++height;
    }
    return height;
}

ItemType peekTop() const override
{
    if (isEmpty())
        throw PrecondViolatedExcep("Heap is empty");
    return items[ROOT_INDEX];
}

bool add(const ItemType &newData) override
{
    if (itemCount >= DEFAULT_CAPACITY)
        return false;

    items[itemCount] = newData;
    bubbleUp(itemCount);
    itemCount++;
    return true;
}

bool remove() override
{
    if (isEmpty())
        return false;

    items[ROOT_INDEX] = items[--itemCount];
    heapRebuild(ROOT_INDEX);
    return true;
}

void clear() { itemCount = ROOT_INDEX; }
}
; // end ArrayMaxHeap

#endif
