#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue<int> q(1,3);
    int& x = q.front();
    x++; cout << q.front() << endl;
    q.push(3);
    q.push(4);
    while(q.size()>0)
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
