#include <iostream>
#include <array>
#include "ll.cpp"
using namespace std;

int main() {

    array<int , 4> a = {1,2,3,4};
    
    int size = a.size();
    cout << a.size();
    ll(2);

    
    for(int i = 0; i < size; i++)
    {
        cout << a[i];
        ll();
    }
    ll();

    
    cout<< "element at 2nd index: " << a.at(2);
    ll();
    cout<< "element at 2nd index: " << a[2];
    ll(2);

    cout << "empty or not: " << a.empty();
    ll(2);

    cout<< "first element: " << a.front();
    ll();
    cout<< "last element : " << a.back();
    ll(2);

    return 0;
}
