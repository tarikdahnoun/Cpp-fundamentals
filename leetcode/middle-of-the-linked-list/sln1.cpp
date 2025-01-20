#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

Node* findMiddle(Node* head)
{
    if (!head)
    {
        return nullptr;
    }

    if (!head->next)
    {
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
};

int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    Node* node7 = new Node(7);
    Node* node8 = new Node(8);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = nullptr;

    Node* head = node1;

    cout << "Standard Linked List" << endl;
    cout << "====================" << endl;
    Node* current = head;

    while(current)
    {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "nullptr\n" << endl;

    current = head;

    cout << "What is the middle of the linked list? " << findMiddle(current)->value << endl;

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    delete node6;
    delete node7;
    delete node8;

    return 0;
}