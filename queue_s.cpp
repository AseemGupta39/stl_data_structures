#include "ll.cpp"
#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<string> q;
  q.push("hello");
  q.push("i'm");
  q.push("aseem");

  cout << "first element: " << q.front();
  ll(2);
    
  cout << "last element: " << q.back();
  ll(2);

  while (!q.empty()) {
    cout << q.front();
    ll();
    q.pop();
  }
    
  ll();

  cout << "size: " << q.size();
  ll(2);
}