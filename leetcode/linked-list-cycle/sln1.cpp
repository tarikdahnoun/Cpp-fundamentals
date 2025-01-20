#include <iostream>

using namespace std;

struct ListNode
{
    int value;
    ListNode* next;

    ListNode(int val) : value(val), next(nullptr) {}
};

// Floyd's Cycle Detection Algorithm
bool hasCycle(ListNode* head)
{
    if (!head || !head->next)
    {
        return false;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

int main() {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);

    node1->next = node2;
    node2->next = node3;

    ListNode* head = node1;

    cout << "Standard Linked List" << endl;
    cout << "====================" << endl;
    ListNode* current = head;

    while(current)
    {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "nullptr\n" << endl;

    cout << "Cycled Linked List" << endl;
    cout << "====================" << endl;
    current = head;
    node1->next = node2;
    node2->next = node3;
    node3->next = node2;

    cout << current->value
         << " -> "
         << current->next->value
         << " -> "
         << current->next->next->value
         << " -> "
         << current->next->next->next->value
         << " -> "
         << current->next->next->next->next->value;
    cout << "-> ..." << endl;
    
    cout << "Is this linked list cycled? " << hasCycle(current) << endl;

    node3->next = nullptr;
    delete node1;
    delete node2;
    delete node3;

    return 0;
}