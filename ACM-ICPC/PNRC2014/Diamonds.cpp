#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<vector<double>> diamonds;
    vector<double> sentinel = {0.0, 10.1};
    diamonds.emplace_back(sentinel);
    int longest = 0;
    for (int i = 0; i < n; i++) {
      double c, w;
      cin >> c >> w;
      vector<double> entry = {c, w};
      diamonds.emplace_back(entry);
      if (sentinel[0] < c && sentinel[1] > w) {
        longest++;
        sentinel = entry;
      }
    }
    cout << longest << endl;
  }
  return 0;
}
