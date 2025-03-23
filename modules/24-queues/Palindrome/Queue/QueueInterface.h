/** @file QueueInterface.h */
#ifndef _QUEUE_INTERFACE
#define _QUEUE_INTERFACE
template<class ItemType>
class QueueInterface
{
public:
    /** Sees whether this queue is empty.
    @return True if the queue is empty, or false if not. */
    virtual bool isEmpty() const = 0;
    
    /** Sees whether this queue is full.
    @return True if the queue is full, or false if not. */
    virtual bool isFull() const = 0;

    /** Adds a new entry to the back of this queue.
    @post If the operation was successful, newEntry is at the back of the queue.
    @param newEntry The object to be added as a new entry.
    @return True if the addition is successful or false if not. */
    virtual bool enqueue(char newEntry) = 0;
    
    /** Removes the front of this queue.
    @post If the operation was successful, the front of the queue
    has been removed.
    @return True if the removal is successful or false if not. */
    virtual bool dequeue() = 0;
    
    /** Returns the front of this queue.
    @pre The queue is not empty.
    @post The front of the queue has been returned, and
    the queue is unchanged.
    @return The front of the queue. */
    virtual char peek() const = 0;
}; // end QueueInterface
#endif
