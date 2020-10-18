//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Sensor {
 public:
  int x;
  int y;
  int r;

  Sensor(int a, int b, int c) {
    x = a;
    y = b;
    r = c;
  }
};

int main() {
  int n;
  cin >> n;
  int answer = 0;
  vector<Sensor> sensors;
  while (n--) {
    int x, y, r;
    cin >> x >> y >> r;
    Sensor s = Sensor(x, y, r);
    for (Sensor i : sensors) {
      if ()
    }
  }
  return 0;
}
