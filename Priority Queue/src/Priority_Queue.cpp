#include "Priority_Queue.h"
template < class T , class U >
Priority_Queue<T,U>::Priority_Queue()
{
    //ctor
}

template < class T , class U >
T& Priority_Queue<T,U>::front()
{
    if(List.size() == 0)
       throw "The Queue Is Empty!!!\n";
    return *List.begin();
}
template < class T , class U >
T Priority_Queue<T,U>::enqueue(T value , U priority)
{
    typename Linked_List<T>::iterator i = List.end();
    typename Linked_List<U>::iterator j = P_List.end();
    if(List.size() != 0)
    {

        do{--i;--j;}while(!(i == List.begin()) &&  priority > *j);
        if(priority < *j)
        {
            ++i;++j;
        }
    }
    List.insert(value,i);
    P_List.insert(priority,j);
    return value;
}
template < class T , class U >
T Priority_Queue<T,U>::dequeue()
{
    T value = List.pop_front();
    P_List.pop_front();
    return value;
}
template < class T , class U >
int Priority_Queue<T,U>::size()
{
    return List.size();
}
template < class T , class U >
Priority_Queue<T,U>::~Priority_Queue()
{
    //dtor
}
/*template class Priority_Queue < int,                  >;
template class Priority_Queue < long int                >;
template class Priority_Queue < short int               >;
template class Priority_Queue < unsigned int            >;
template class Priority_Queue < long long int           >;
template class Priority_Queue < unsigned long int       >;
template class Priority_Queue < unsigned short int      >;
template class Priority_Queue < unsigned long long int  >;

template class Priority_Queue < char        >;
template class Priority_Queue < float       >;
template class Priority_Queue < double      >;
template class Priority_Queue < string      >;
template class Priority_Queue < long double >;*/
template class Priority_Queue <string,string                >;
template class Priority_Queue <string,int                   >;
template class Priority_Queue <string,char                  >;
template class Priority_Queue <string,float                 >;
template class Priority_Queue <string,double                >;
template class Priority_Queue <string,long int              >;
template class Priority_Queue <string,short int             >;
template class Priority_Queue <string,long double           >;
template class Priority_Queue <string,unsigned int          >;
template class Priority_Queue <string,long long int         >;
template class Priority_Queue <string,unsigned long int     >;
template class Priority_Queue <string,unsigned short int    >;
template class Priority_Queue <string,unsigned long long int>;
