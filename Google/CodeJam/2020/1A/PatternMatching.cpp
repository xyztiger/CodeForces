#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    int n;
    vector<string> p(n);
    for (int i = 0; i < n; i++) {
      string a;
      cin >> a;
      p[i] = a;
    }

    cout << "Case #" << t << ": " << answer << '\n';
  }
  return 0;
}

