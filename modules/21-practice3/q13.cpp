#include <iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
};

void printReverse(Node* tail)
{
    Node* current = tail;

    while (current != nullptr)
    {
        cout << current-> data << ", ";
        current = current->prev;
    }
    cout << endl;
};


int main()
{
    Node* head = new Node{1, nullptr, nullptr};
    Node* second = new Node{2, nullptr, head};
    Node* third = new Node{3, nullptr, second};
    Node* fourth = new Node{4, nullptr, third};
    Node* tail = new Node{5, nullptr, fourth};
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = tail;

    printReverse(tail);

    delete[] head;
    delete[] second;
    delete[] third;
    delete[] fourth;
    delete[] tail;

    return 0;
}
