#include <iostream>
#include "Linked_List.h"

using namespace std;

int main()
{
    try
    {
        Linked_List<int> l,k;

        l.insert(1,l.end());
        l.insert(2,l.end());
        l.insert(3,l.end());
        l.insert(4,l.end());
        l.insert(5,l.end());
        Linked_List<int>::iterator it = l.begin();
        ++it; ++it;
        cout << *it << endl;
        l.insert(10,it);
        Linked_List<int>::iterator it1 = l.begin();
        ++it1; ++it1;
        cout << *it1 << endl;
        for(Linked_List<int>::iterator i = l.begin();!(i == l.end());++i)
            cout << *i << endl;
        for(Linked_List<int>::iterator i = k.begin();!(i == k.end());++i)
            cout << *i << endl;
        k = l;
        cout << l.size() << " " << k.size() << endl;
        Linked_List<int>::iterator i = l.begin();++i;++i;
        l.erase(i);
        l.erase(l.begin());
        i = l.end();--i;
        l.erase(i);
        cout << l.size() << endl;
        cout << "hallo" << endl;
        for(Linked_List<int>::iterator i = l.begin();!(i == l.end());++i)
            cout << *i << endl;
        for(Linked_List<int>::iterator i = k.begin();!(i == k.end());++i)
            cout << *i << endl;
    }
    catch(const char *c)
    {
        cout << c;
    }
    Linked_List<int> myList;
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);
    Linked_List<int>::iterator it = myList.begin();
    ++it;
    cout<< *it;
    Linked_List<string> strings_list;
    strings_list.push_back("i");
    strings_list.push_back("am");
    strings_list.push_back("ok");
    strings_list.pop_front();
    Linked_List<string>::iterator itr = strings_list.begin();
    ++itr;
    cout<< *itr << endl;


    return 0;
}
