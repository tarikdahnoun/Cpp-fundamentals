# Middle of the Linked List

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

# Solution: 
Two pointers, one goes twice as fast as the other. When the fast one hits the end, the slow one is at the middle.

Time: `O(n)`
Space: `O(1)`

``` c++
ListNode* findMiddle(Node* head)
{
    if (!head)
    {
        return nullptr;
    }

    if (!head->next)
    {
        return head;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
};
```
