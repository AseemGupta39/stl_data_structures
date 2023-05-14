#include "ll.cpp"
#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> d;

  // pop_front,pop_back can also be used

  // copying a list
  // list<int> newl(d);
  // list<int> val_init(5,100);
  //                    size , value to be assigned

  d.push_back(2);
  d.push_back(3);
  d.push_back(4);
  d.push_front(1);

  for (int i : d) {
    cout << i << " ";
  }
  ll(2);

  d.erase(d.begin());

  cout << "after erase: ";
  ll();

  for (int i : d) {
    cout << i << " ";
  }
  ll(2);

  cout << "size: " << d.size();
  ll(2);
  return 0;
}