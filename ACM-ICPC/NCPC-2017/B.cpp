#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<float, string>> firstLeg;
  vector<pair<float, string>> secondLeg;
  for (int i = 0; i < n; i++) {
    float f, s;
    string name;
    cin >> name >> f >> s;
    firstLeg.emplace_back(f, name);
    secondLeg.emplace_back(s, name);
  }
  sort(firstLeg.begin(), firstLeg.end());
  sort(secondLeg.begin(), secondLeg.end());
  float msf = 81;
  vector<string> best = {};
  for (auto runner : firstLeg) {
    vector<string> team = {runner.second};
    float time = runner.first;
    int spots = 3;
    int i = 0;
    while (spots) {
      if (secondLeg[i].second != runner.second) {
        spots--;
        time += secondLeg[i].first;
        team.push_back(secondLeg[i].second);
      }
      i++;
    }
    if (time < msf) {
      msf = time;
      best = team;
    }
  }
  cout << msf << endl;
  for (string name : best) {
    cout << name << endl;
  }
  return 0;
}
