#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  for (int test = 1; test <= t; test++) {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int i = 0;
    int j = n - 1;
    int goodness = 0;
    while (i < j) {
      if (s[i] != s[j]) {
        goodness++;
      }
      i++;
      j--;
    }
    int answer = abs(k - goodness);
    cout << "Case #" << test << ": " << answer << "\n";
  }
  return 0;
}

