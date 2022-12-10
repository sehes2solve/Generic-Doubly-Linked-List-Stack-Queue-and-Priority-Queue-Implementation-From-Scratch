#include "Stack.h"

template < class T >
Stack<T>::Stack()
{
    //ctor
}
template < class T >
Stack<T>::Stack(T value, int initial_size)
{
    if(initial_size > 0)
    {
        for(int i = 0;i < initial_size;i++)
            List.insert(value,List.begin());
    }
}
template < class T >
T& Stack<T>::top()
{
    if(List.size() == 0)
       throw "The Stack Is Empty!!!\n";
    typename Linked_List<T>::iterator i = List.end();
    --i;
    return *i;
}
template < class T >
void Stack<T>::pop()
{
    List.pop_back();
}
template < class T >
void Stack<T>::push(T value)
{
    List.push_back(value);
}
template < class T >
int Stack<T>::size()
{
    return List.size();
}
template < class T >
Stack<T>::~Stack()
{
    //dtor
}
template class Stack < int                     >;
template class Stack < long int                >;
template class Stack < short int               >;
template class Stack < unsigned int            >;
template class Stack < long long int           >;
template class Stack < unsigned long int       >;
template class Stack < unsigned short int      >;
template class Stack < unsigned long long int  >;

template class Stack < char        >;
template class Stack < float       >;
template class Stack < double      >;
template class Stack < string      >;
template class Stack < long double >;
