#include <iostream>
#include "ll.cpp"
#include <queue>
using namespace std;

int main() {
  // max heap
  priority_queue<int> p;

  // min heap
  priority_queue<int, vector<int>, greater<int>> mini;

  mini.push(12);
  mini.push(1);
  mini.push(4);
  mini.push(8);
  mini.push(16);

    int n = mini.size();
  for (int i = 0; i < n; i++) {
    cout << mini.top() << " ";
    mini.pop();
  }
  ll(2);

  return 0;
}