#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H
#include "Linked_List.h"

template < class T , class U >
class Priority_Queue
{
    public:
        Priority_Queue();
        virtual ~Priority_Queue();
        T& front();
        int size();
        T enqueue(T , U);
        T dequeue();

    protected:

    private:
        Linked_List<T> List;
        Linked_List<U> P_List;

};

#endif // PRIORITY_QUEUE_H
