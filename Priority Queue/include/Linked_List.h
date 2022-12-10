#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <string>

using namespace std;

template < class T >
class Linked_List
{
    private:
        struct Node
        {
            T value;
            Node *next,*prev;
        };
        int sizz;
        Node *first,*last;
    public:
        class iterator
        {
            friend class Linked_List;
            private:
                Node* itr;
            public:
                void operator++();
                void operator--();
                T& operator*();
                bool operator==(const iterator&);
        };
        Linked_List();
        Linked_List(T,int);
        Linked_List(Linked_List&);
        Linked_List& operator=(Linked_List);
        int size();
        virtual ~Linked_List();
        void insert(T,iterator);
        iterator erase(iterator);
        iterator begin();
        iterator end();
        void clear();
        void push_back(T);
        void push_front(T);
        T pop_back();
        T pop_front();
    protected:

};

#endif // LINKED_LIST_H
