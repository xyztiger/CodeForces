#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    int n, c;
    cin >> n >> c;
    if (c > (n-1) * (n+2) / 2 || c < n - 1) {
      cout << "Case #" << t << ": " << "IMPOSSIBLE";
    } else {
      c -= (n - 1);
      vector<bool> flips(n, 0);
      for (int largest = n - 1; largest > 0; n--) {
        if (c >= largest) {
          c -= largest;
          flips[largest] = 1;
        }
      }
      vector<int> answer(n);
      int index = 0;
      bool r = 0;
      for (int i = n - 1, e = 1; i >= 0; i--, e++) {
        if (flips[i]) {
          r ^= r;
          index = r ? n - 1 - i : i;
        } else {
          answer[index] = e;
          r ? index-- : index++;
        }
      }
      cout << "Case #" << t << ":";
      for (int a : answer) {
        cout << " " << a; 
      }
      cout << '\n';
    }
  }
  return 0;
}

