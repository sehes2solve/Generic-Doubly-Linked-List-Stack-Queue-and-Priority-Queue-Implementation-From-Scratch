#include "Linked_List.h"
#include "iterator"

template < class T >
Linked_List<T>::Linked_List()
{
    sizz = 0;
    first = new Node;
    last = first;
    last->next = nullptr;
    last->prev = nullptr;
    ///last->value = 0;
}

template < class T >
Linked_List<T>::Linked_List(T value,int initial_size):Linked_List()
{
    if(initial_size > 0)
    {
        for(int i = 0;i < initial_size;i++)
            insert(value,begin());
    }
}

template < class T >
Linked_List<T>::Linked_List(Linked_List& another_list):Linked_List()
{
    for(iterator i = another_list.begin();i.itr != another_list.last;++i)
        insert(*i,end());
}

template < class T >
Linked_List<T>& Linked_List<T>::operator= (Linked_List another_list)
{
    clear();
    for(iterator i = another_list.begin();i.itr != another_list.last;++i)
        insert(*i,end());
    return *this;
}

template < class T >
int Linked_List<T>::size()
{
    return sizz;
}

template < class T >
void Linked_List<T>::insert(T value,iterator position)
{
    Node *nw_node = new Node;
    nw_node->value = value;
    nw_node->prev = nullptr;
    if(position.itr->prev != nullptr)
    {
        position.itr->prev->next = nw_node;
        nw_node->prev = position.itr->prev;
    }
    else
        first = nw_node;
    position.itr->prev = nw_node;
    nw_node->next = position.itr;
    sizz++;
}

template < class T >
typename Linked_List<T>::iterator Linked_List<T>::erase(iterator position)
{
    Node* temp = position.itr;
    if(position.itr == last)///or position == end() or position.itr->next == nullptr
        throw "Position points after the last element.";
    else if(position.itr == first)///or position == begin() or position.itr->prev == nullptr
        first = position.itr->next;
    else
    {
        position.itr->prev->next = position.itr->next;
        position.itr->next->prev = position.itr->prev;
    }
    --sizz;++position;
    delete temp;
    return position;
}

template < class T >
void Linked_List<T>::push_back(T value)
{
    insert(value,end());
}

template < class T >
void Linked_List<T>::push_front(T value)
{
    insert(value,begin());
}

template < class T >
T Linked_List<T>::pop_back()
{
    if(sizz == 0)
        throw "Deleting from empty list.\n";
    iterator i = end();
    --i;
    T temp = *i;
    erase(i);
    return temp;
}

template < class T >
T Linked_List<T>::pop_front()
{
    if(sizz == 0)
        throw "Deleting from empty list.\n";
    iterator i = begin();
    T temp = *i;
    erase(i);
    return temp;
}

template < class T >
void Linked_List<T>::clear()
{
    iterator i = begin();
    while(sizz > 0)
        i = erase(i);
    i.itr->prev = nullptr;
}

template < class T >
Linked_List<T>::~Linked_List()
{
   for(iterator i = begin();sizz > 0;i = erase(i)){}
   delete first;
}

template < class T >
typename Linked_List<T>::iterator Linked_List<T>::begin()
{
    iterator itr;
    itr.itr = first;
    return itr;
}

template < class T >
typename Linked_List<T>::iterator Linked_List<T>::end()
{
    iterator itr;
    itr.itr = last;
    return itr;
}

template < class T >
void Linked_List<T>::iterator::operator++()
{
    if(itr->next == nullptr)
        throw "iterator currently pointing after the last element.\n";
    else
        itr = itr->next;
}

template < class T >
void Linked_List<T>::iterator::operator--()
{
    if(itr->prev == nullptr)
        throw "iterator currently pointing to the first element.\n";
    else
        itr = itr->prev;
}

template < class T >
T& Linked_List<T>::iterator::operator*()
{
    if(itr->next == nullptr)
        throw "iterator currently pointing after the last element.\n";
    return itr->value;
}

template < class T >
bool Linked_List<T>::iterator::operator==(const iterator& i)
{
    return itr == i.itr;
}
template class Linked_List < int                     >;
template class Linked_List < long int                >;
template class Linked_List < short int               >;
template class Linked_List < unsigned int            >;
template class Linked_List < long long int           >;
template class Linked_List < unsigned long int       >;
template class Linked_List < unsigned short int      >;
template class Linked_List < unsigned long long int  >;

template class Linked_List < char        >;
template class Linked_List < float       >;
template class Linked_List < double      >;
template class Linked_List < string      >;
template class Linked_List < long double >;
