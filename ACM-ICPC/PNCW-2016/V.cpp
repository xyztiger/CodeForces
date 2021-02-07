#include <bits/stdc++.h>

using namespace std;

void deliver(int* k, int* m) {
  if (*m - *k < 0) {
    *k = *k - m;
    *m = 0;
  } else {
    *m -= *k;
    *k = 0;
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> houses;
  for (int i = 0; i < n; i++) {
    int x, m;
    cin >> x >> m;
    houses.emplace_back(x, m);
  }
  sort(houses.begin(), houses.end(), greater<pair<int, int>>());
  int i = 0;
  long long time = 0;
  while (i < houses.size()) {
    if (k && houses[i].second()) {
      deliver(&k, &houses[i].second());


}
