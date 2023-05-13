#include <iostream>
#include "ll.cpp"
#include <vector>
using namespace std;


int main()
{
    vector<int> v;
    vector<int> a(5,1); 
    
    // initial size = 5
    // intialially all values are 1

    // printing vector
    cout << "vector a: of size 5 and all ones";
    ll();
    for(int i:a)
    {
        cout << i << " ";
    }
    ll(2);

    // copying a vector and naming it last
    cout << "copying a vector and naming it last";
    vector<int> last(a);
    ll();
    for(int i:last)
    {
        cout << i << " ";
    }
    ll(2);
    
    cout << "capacity: " << v.capacity();
    ll();
    
    v.push_back(1);
    cout << "capacity: " << v.capacity();
    ll();
    
    v.push_back(2);
    cout << "capacity: " << v.capacity();
    ll();
    
    v.push_back(3);
    cout << "capacity: " << v.capacity();
    ll();
    
    cout << "size: " << v.size();
    ll(2);
    
    cout << "element at 2nd index: " << v.at(2);
    ll(2);

    cout << "front: " << v.front();
    ll();
    cout << "back: " << v.back();
    ll(2);

    cout << "before pop";
    ll();
    for(int i:v)
    {
        cout << i << " ";
        
    }
    ll(2);

    v.pop_back();
    
    cout << "after pop";
    ll();
    for(int i:v)
    {
        cout << i << " ";
        
    }
    ll(2);

    cout << "before clear size: " << v.size();
    ll(2);
    
    v.clear();

    cout << "before clear size: " << v.size();
    ll(2);
    
    return 0;
}


