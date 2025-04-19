#include "Heap/ArrayMaxHeap.h"
#include "Heap/PrecondViolatedExcep.cpp"
#include "Patient.h"
#include <iostream>

int main()
{
    ArrayMaxHeap<Patient> erQueue;

    erQueue.add(Patient("Alice", 3));
    erQueue.add(Patient("Bob", 5));
    erQueue.add(Patient("Charlie", 1));
    erQueue.add(Patient("Delta", 1));
    erQueue.add(Patient("Elf", 3));
    erQueue.add(Patient("Green", 2));

    while (!erQueue.isEmpty())
    {
        cout << "Next patient: ";
        erQueue.peekTop().print();
        cout << endl;

        cout << "Serving...\n";
        erQueue.remove();
    }

    return 0;
}
