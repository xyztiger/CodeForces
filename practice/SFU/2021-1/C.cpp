#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> songs = {0};
  for (int i = 0; i < n; i++) {
    int c, t;
    cin >> c >> t;
    for (int j = 0; j < c * t; j++) {
      songs.push_back(i + 1);
    }
  }
  vector<int> moments;
  for (int i = 0; i < m; i++) {
    int moment;
    cin >> moment;
    cout << songs[moment] << endl;
  }
  return 0;
}
