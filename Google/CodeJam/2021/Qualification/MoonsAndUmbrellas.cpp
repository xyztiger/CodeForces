#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    int x, y;
    cin >> x >> y;
    string art;
    cin >> art;
    int i = 0;
    int answer = 0;
    while (art[i] == '?' && i < art.length()) {
      i++;
    }
    bool C;
    if (i < art.length()) {
        C = art[i] == 'C' ? 1 : 0;
        for (i += 1; i < art.length(); i++) {
        if (art[i] == 'C' && !C) {
          C = 1;
          answer += y;
        } else if (art[i] == 'J' && C) {
          C = 0;
          answer += x;
        }
      }
    }
    cout << "Case #" << t << ": " << answer << '\n';
  }
  return 0;
}

