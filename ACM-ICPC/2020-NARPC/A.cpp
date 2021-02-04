#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> residents = {};
  while (n--) {
    int enter, depart;
    cin >> enter >> depart;
    residents.push_back(make_pair(enter, 0));
    residents.push_back(make_pair(depart + k, 1));
  }
  sort(residents.begin(), residents.end());
  int count = 0;
  int answer = 0;
  for (auto resident : residents) {
    if (resident.second) {
      count--;
    } else {
      count++;
      answer = max(answer, count);
    }
  }
  cout << answer << endl;
  return 0;
}
