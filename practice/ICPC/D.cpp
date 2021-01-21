#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> papers;
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    papers.push_back(p);
  }
  sort(papers.begin(), papers.end());
  int i = 0;
  while (i < n && papers[n - 1 - i] > i) {
    i++;
  }
  cout << i << endl;
  return 0;
}
