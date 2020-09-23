//
// Created by TigerZhao on 2020-09-22.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  long long ax, ay, bx, by, tx, ty;
  cin >> ax >> ay >> bx >> by >> tx >> ty;
  int n; cin >> n;
  vector<long> distance_saved_a = {-1, 0}; //index, distance
  vector<long> distance_saved_b = {-1, 0};
  vector<vector<long long>> bottles;
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> bottles[i][0] >> bottles[i][1];
    long long distance = sqrt(bottles[i][0] * bottles[i][0] + bottles[i][1] * bottles[i][1]);
    bottles[i][3]
    if ((bottles[i][0] + bottles[i][1]) - (abs(ax - bottles[i][0]) + abs(ay - bottles[i][1]))
         > distance_saved_a[1]) {
      distance_saved_a[]
    }
  }
  return 0;
}
