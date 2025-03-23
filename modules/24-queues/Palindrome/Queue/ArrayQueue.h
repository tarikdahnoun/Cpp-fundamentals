/** @file ArrayQueue.h */
#ifndef _ARRAY_QUEUE
#define _ARRAY_QUEUE

#include "QueueInterface.h"

const int MAX_QUEUE = 50;

class ArrayQueue : public QueueInterface<char> {
   private:
      char entries[MAX_QUEUE + 1];
      int front;
      int back;

   public:
      ArrayQueue();
      bool isEmpty() const override;
      bool isFull() const override;
      bool enqueue(char newEntry) override;
      bool dequeue() override;
      char peek() const override;
   };

#endif
