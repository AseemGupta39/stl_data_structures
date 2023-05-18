#include <iostream>
#include <set>
#include "ll.cpp"
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(0);
    s.insert(10);
    s.insert(15);
    s.insert(20);

    for(int i:s)
    {
        cout<<i<<" ";
    }
    ll(2);

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    
    cout << "is 5 present or not: " << s.count(5);
    ll(2);

    // set<int>::iterator itr = s.find(15);
    // cout << "element position at itr: " << *itr;
    // ll(2);
    
    return 0;
}