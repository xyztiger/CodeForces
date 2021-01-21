#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  float totalQuality = 0;
  for (int i = 0; i < n; i++) {
    float quality, duration;
    cin >> quality >> duration;
    totalQuality += quality * duration;
  }
  cout << totalQuality << endl;
  return 0;
}
