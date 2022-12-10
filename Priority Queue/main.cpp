#include <iostream>
#include "Priority_Queue.h"

using namespace std;

int main()
{
    try
    {
        Priority_Queue<string,int> q;
        q.enqueue("world", 10);
        q.enqueue("Hallo", 5);
        cout << q.dequeue() << " " ;
        cout << q.dequeue() <<endl;
    }
    catch(const char* c)
    {
        cout << c <<endl;
    }
    return 0;
}
