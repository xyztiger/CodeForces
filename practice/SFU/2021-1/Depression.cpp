//
// Created by TigerZhao on 2021-01-12.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
  string time;
  cin >> time;
  stringstream sstrm;
  double hour,min;

  sstrm << time;

  sstrm >> hour;
  sstrm.get();
  sstrm >> min;

  double mAngle, hAngle;
  mAngle = fmod(min/60 * 360, 360);
  hAngle = fmod((hour + min/60)/12 * 360, 360);

  cout << hAngle << " " << mAngle << endl;

  return 0;
}
