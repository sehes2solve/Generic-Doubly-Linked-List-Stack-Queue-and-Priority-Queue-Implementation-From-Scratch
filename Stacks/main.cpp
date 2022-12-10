#include <iostream>
#include "Stack.h"


using namespace std;

int main()
{
    Stack<int> s(1,3);
    int& x = s.top();
    x++; cout << s.top() << endl;
    s.push(3);
    s.push(4);
    while(s.size()>0)
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
