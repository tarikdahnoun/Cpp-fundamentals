/** @file ArrayQueue.cpp */
#include <iostream>
#include <stdexcept>
#include "ArrayQueue.h"

using namespace std;

ArrayQueue::ArrayQueue() 
{
   front = 0;
   back = 0;
};

bool ArrayQueue::isEmpty() const
{
   return front == back;
}

bool ArrayQueue::isFull() const
{
   return front == (back + 1) % (MAX_QUEUE + 1);
}

bool ArrayQueue::enqueue(char newEntry)
{
   /*
   Index:     0    1    2    3
   entries:  [ ] ['A'] [''] ['']
              ↑    ↑
            front  back
   */
   if (isFull())
   {
      cout << "ERROR: Failed enqueue, queue full.\n";
      return false;
   }
   back = (back + 1) % (MAX_QUEUE + 1);
   entries[back] = newEntry;
   return true;
}

bool ArrayQueue::dequeue()
{
   /*
   Index:     0    1     2     3
   entries:  [ ] ['A'] ['B'] ['C']
                   ↑           ↑
                  front       back
   */
   if (isEmpty())
   {
      cout << "ERROR: Failed dequeue, queue empty.\n";
      return false;
   }
   front = (front + 1) % (MAX_QUEUE + 1);
   return true;
}

char ArrayQueue::peek() const
{
   if (isEmpty())
   {
      throw std::runtime_error("Queue is empty");
   }
   return entries[(front + 1) % (MAX_QUEUE + 1)];
}
