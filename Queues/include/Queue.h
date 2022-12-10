#ifndef QUEUE_H
#define QUEUE_H
#include "Linked_List.h"

template < class T >
class Queue
{
    public:
        Queue();
        Queue(T,int);
        T& front();
        void pop();
        void push(T);
        int size();
        virtual ~Queue();

    protected:

    private:
        Linked_List<T> List;
};

#endif // QUEUE_H
