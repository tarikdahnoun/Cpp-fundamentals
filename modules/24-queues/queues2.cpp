#include <iostream>

using namespace std;

const int MAX_QUEUE = 3;

class Queue {
private:
   char entries[MAX_QUEUE + 1];
   int front;
   int back;

public:
   Queue() 
   {


      front = 0;
      back = 0;
   };

   bool isEmpty()
   {
      return front == back;
   }

   bool isFull()
   {
      return front == (back + 1) % (MAX_QUEUE + 1);
   }

   bool enqueue(char newEntry)
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

   bool dequeue()
   {
      /*
      Index:     0    1     2     3
      entries:  [ ] ['A'] ['B'] ['C']
                      ↑           ↑
                     front       back
      */
      if (isEmpty())
      {
         return false;
      }

      front = (front + 1) % (MAX_QUEUE + 1);
      return true;
   }

   char peek()
   {
      if (isEmpty())
      {
         cout << "Empty queue, nothing to peek.\n";
         return '\0';
      }
      
      return entries[(front + 1) % (MAX_QUEUE + 1)];
   }
};

int main()
{
   Queue q;
   bool res;

   cout << "Test queue isEmpty (should be true): " << q.isEmpty() << endl;

   cout << "Testing dequeue on empty (should be false): " << q.dequeue() << endl;

   cout << "Test queue, peek, and dequeue" << endl;
   q.enqueue('a');
   cout << "Added char (should be a): " << q.peek() << endl;
   q.dequeue();

   q.enqueue('b');
   cout << "Added char (should be b): " << q.peek() << endl;
   q.dequeue();

   q.enqueue('c');
   cout << "Added char (should be c): " << q.peek() << endl;
   q.dequeue();

   cout << "Testing dequeue can empty the array, isEmpty (should be true): " << q.isEmpty() << endl;

   cout << "Testing circular queue behavior:\n";

   q.enqueue('1');
   q.enqueue('2');
   q.enqueue('3');
   cout << "Added char: 1, 2, 3\n";
   cout << "\nQueue isEmpty (should be false): " << q.isEmpty() << endl;

   res = q.enqueue('4');
   cout << "Attempt to add '4' to queue (should fail): " << (res ? "Success" : "Failed") << endl;

   q.dequeue();
   cout << "Dequeue and peek (should be 2): " << q.peek() << endl;
   
   res = q.enqueue('4');
   cout << "Attempt to add '4' to queue (should succeed): " << (res ? "Success" : "Failed") << endl;

   cout << "Queue contents after wrap-around:\n";
   while (!q.isEmpty())
   {
      cout << q.peek() << " ";
      q.dequeue();
   }
   cout << "\nQueue isEmpty (should be true): " << q.isEmpty() << endl;

   return 0;
}