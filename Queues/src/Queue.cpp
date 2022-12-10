#include "Queue.h"

template < class T >
Queue<T>::Queue()
{
    //ctor
}
template < class T >
Queue<T>::Queue(T value, int initial_size)
{
    if(initial_size > 0)
    {
        for(int i = 0;i < initial_size;i++)
            List.insert(value,List.begin());
    }
}
template < class T >
T& Queue<T>::front()
{
    if(List.size() == 0)
       throw "The Queue Is Empty!!!\n";
    return *List.begin();
}
template < class T >
void Queue<T>::pop()
{
    List.pop_front();
}
template < class T >
void Queue<T>::push(T value)
{
    List.push_back(value);
}
template < class T >
int Queue<T>::size()
{
    return List.size();
}
template < class T >
Queue<T>::~Queue()
{
    //dtor
}
template class Queue < int                     >;
template class Queue < long int                >;
template class Queue < short int               >;
template class Queue < unsigned int            >;
template class Queue < long long int           >;
template class Queue < unsigned long int       >;
template class Queue < unsigned short int      >;
template class Queue < unsigned long long int  >;

template class Queue < char        >;
template class Queue < float       >;
template class Queue < double      >;
template class Queue < string      >;
template class Queue < long double >;
