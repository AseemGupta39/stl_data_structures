#include "ll.cpp"
#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<string> s;
  s.push("love");
  s.push("babbar");
  s.push("kumar");
  // s.push(40);
  // s.push(50);
  // s.push(60);
  cout << "top element: ";
  ll();
  cout << s.top();
  ll(2);

  cout << "Size: " << s.size();
  ll(2);

  cout << "Empty or not: " << s.empty();
  ll(2);

  s.pop();
  s.pop();
  s.pop();
  s.pop();
}