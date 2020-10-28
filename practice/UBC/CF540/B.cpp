# include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> evens;
  vector<int> odds;
  vector<int> candies;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (i % 2 == 0) {
      evens.push_back(a);
    } else {
      odds.push_back(a);
    }
    candies.push_back(a);
  }
  long long evenSum = 0;
  long long evenSum = 0;
  int answer = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {



  
