#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    queue<int> arr;
    int sum = 0;
    int stop = false; 
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      arr.push(a);
    }
    while (!arr.empty()) {
      int a = arr.front();
      sum += arr.front();
      if (!stop && a % x == 0) {
        for (int i = 0; i < x; i++) {
          arr.push(a / x);
        }
      } else {
        stop = true;
      }
      arr.pop();
    }
    cout << sum << endl;
  }
  return 0;
}
