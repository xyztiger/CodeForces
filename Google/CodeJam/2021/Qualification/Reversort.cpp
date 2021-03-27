#include <bits/stdc++.h>

using namespace std;

void reverse(vector<int>& list, pair<int, int> bounds) {
  int i = bounds.first;
  int j = bounds.second;
  while (i < j) {
    iter_swap(list.begin() + i, list.begin() + j);
    i++;
    j--;
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    int n;
    cin >> n;
    vector<int> list(n);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      list[i] = a;
    }
    int answer = 0;
    for (int i = 0; i < n - 1; i++) {
      int j = min_element(list.begin() + i, list.end()) - list.begin();
      reverse(list, make_pair(i, j));
      answer += j - i + 1;
    }
    cout << "Case #" << t << ": " << answer << '\n';
  }
  return 0;
}

