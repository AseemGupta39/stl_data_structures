#include <iostream>
#include "ll.cpp"
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(10);
    d.push_front(20);
    
    for(int i:d)
    {
        cout << i << " ";
    }
    ll(2);

    d.pop_front();

    for(int i:d)
    {
        cout << i << " ";
    }
    ll(2);

    deque<int> e;
    e.push_back(1);
    e.push_back(2);
    e.push_back(3);

    for(int i:e)
    {
     cout << i << " ";   
    }
    ll(2);
    
    cout << "element at first index: " << e.at(1);
    ll(2);

    cout << "front: " << e.front();
    ll();
    cout << "back: " << e.back();
    ll(2);

    cout << "empty or not: " << e.empty(); 
    ll(2);

    cout<< "before erase: " << e.size();
    ll();
    e.erase(e.begin(),e.begin()+1);
    cout << "after erase: " << e.size(); 
    ll(2);

    
    
    return 0;
}
