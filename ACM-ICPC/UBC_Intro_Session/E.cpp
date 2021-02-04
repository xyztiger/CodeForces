#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  unordered_map<int, int> freq;
  vector<int> numbers;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (freq[i]) {
      freq[i]++;
    } else {
      freq[i] = 1;
      numbers.push_back(a);
    }
  }
  sort(numbers.begin(), numbers.end());
  unordered_map<int, long long> quotients;
  long long maxsf = 0;
  for (int a : numbers) {
    if (quotients[a / d]) {
      quotients[a / d] += (long long) freq[a] * (long long) a;
    } else {
      quotients[a / d] = (long long) freq[a] * (long long) a;
    }
    maxsf = max(maxsf, quotients[a / d]);
  }
  cout << maxsf << endl;
  return 0;
}
