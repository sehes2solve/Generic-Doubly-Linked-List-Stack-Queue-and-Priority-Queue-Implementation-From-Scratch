#ifndef STACK_H
#define STACK_H
#include"Linked_List.h"

template < class T >
class Stack
{
    public:
        Stack();
        Stack(T,int);
        T& top();
        void pop();
        void push(T);
        int size();
        virtual ~Stack();

    protected:

    private:
        Linked_List<T> List;
};

#endif // STACK_H
