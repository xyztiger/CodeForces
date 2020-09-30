#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> individuals;
  vector<long long> total;
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    int curr;
    cin >> curr;
    sum += curr;
    total.emplace_back(sum);
    individuals.emplace_back(curr);
  }
  long long books = 0;
  for (int i = 0; i < n; i++) {
    int index = upper_bound(total.begin() + i, total.end(), t - individuals[i] + total[i]) - (total.begin() + i);
    books = max(books, index * 1ll);
  }
  cout << books << endl;   
  return 0;
}
