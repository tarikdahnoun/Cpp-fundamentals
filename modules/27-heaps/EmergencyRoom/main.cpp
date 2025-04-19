// Array-based heap implementation of priority queue resembling an emergency room

#include "Heap/ArrayMaxHeap.h"
#include "Heap/PrecondViolatedExcep.cpp"
#include "Patient.h"
#include <iostream>

int main()
{
    ArrayMaxHeap<Patient> ER;

    ER.add(Patient("Bob", 5));
    ER.add(Patient("Mary", 9));
    ER.add(Patient("Max", 1));

    ER.peekTop().print();
    cout << " will now see the doctor.\n";
    ER.remove();

    ER.add(Patient("Julio", 3));
    ER.add(Patient("Stacy", 7));
    ER.add(Patient("Paul", 4));
    ER.add(Patient("Reiko", 2));
    ER.add(Patient("Jennifer", 6));
    ER.add(Patient("Chang", 5));

    ER.peekTop().print();
    cout << " will now see the doctor.\n";
    ER.remove();

    ER.peekTop().print();
    cout << " will now see the doctor.\n";
    ER.remove();

    ER.peekTop().print();
    cout << " will now see the doctor.\n";
    ER.remove();

    cout << "Remaining patients: ";
    cout << endl;
    while (!ER.isEmpty())
    {
        cout << "- ";
        ER.peekTop().print();
        ER.remove();
        cout << endl;
    }

    return 0;
}

/* SAMPLE OUTPUT
Mary (Priority: 9) will now see the doctor.
Stacy (Priority: 7) will now see the doctor.
Jennifer (Priority: 6) will now see the doctor.
Bob (Priority: 5) will now see the doctor.
Remaining patients:
- Chang (Priority: 5)
- Paul (Priority: 4)
- Julio (Priority: 3)
- Reiko (Priority: 2)
- Max (Priority: 1)
*/