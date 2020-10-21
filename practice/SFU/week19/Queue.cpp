//
// Created by TigerZhao on 2020-10-20.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  int queue[n];
  map<int, int> line;
  vector<int> first = {};
  vector<int> last = {};
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (find(last.begin(), last.end(), a) != last.end()) {
      last.erase(remove(last.begin(), last.end(), a), last.end());
    } else {
      first.emplace_back(a);
    }
    if (find(first.begin(), first.end(), b) != first.end()) {
      first.erase(remove(first.begin(), first.end(), b), first.end());
    } else {
      last.emplace_back(b);
    }
    line[a] = b;
  }
  int next = first[0];
  for (int i = 0; i < n; i += 2) {
    queue[i] = next;
    next = line[next];
  }
  next = line[0];
  for (int i = 1; i < n; i += 2) {
    queue[i] = next;
    next = line[next];
  }
  for (int i = 0; i < n; i++) {
    cout << queue[i] << " ";
  }
  cout << endl;
  return 0;
}