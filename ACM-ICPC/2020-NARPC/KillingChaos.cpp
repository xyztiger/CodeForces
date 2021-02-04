//
// Created by TigerZhao on 2021-01-16.
//


#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p;
  vector<int> order;
  for (int i = 0; i < n; i++) {
    int pi;
    cin >> pi;
    p.push_back(pi);
  }
  for (int i = 0; i < n; i++) {
    int oi;
    cin >> oi;
    order.push_back(oi);
  }
  int segments;
  vector<int> runningSum;
  int sumSF = 0;
  for (int i = 0; i < n; i++) {
    sumSF += p[i];
    runningSum.push_back(sumSF);
  }
  return 0;
}
//int TC(int, vector<int>, vector<int>, int);
//int main() {
//  int ncoa = 0;
//  cin >> ncoa;
//  vector<int> psg;
//  for (int i = 0; i < ncoa; i++) {
//    int x;
//    cin >> x;
//    psg.push_back(x);
//  }
//  vector<int> idx;
//  for (int i = 0; i < ncoa; i++) {
//    int x;
//    cin >> x;
//    idx.push_back(x - 1);
//  }
//  int Ctrain = 0, totalpsg = 0;
//  for (int i = 0; i < ncoa; i++) { totalpsg += psg[i]; }
//  Ctrain = totalpsg + 10 - (totalpsg % 10);
//  cout << TC(ncoa, psg, idx, Ctrain);
//  return 0;
//}
//
//int TC(int ncoa, vector<int> psg, vector<int> idx, int Ctrain) {
//  int max = Ctrain;
//  int Tc = 0;
//  int n = 0;
//  int nSeg = 1;
//  while (n < ncoa) {
//    psg[idx[n]] = 0;
//    if (idx[n] != 0 && idx[n] != ncoa - 1) {
//      if (psg[idx[n] + 1] != 0 && psg[idx[n] - 1] != 0)
//        nSeg++;
//    }
//    int psgInCoach = 0;
//    for (int i = 0; i < ncoa; i++) {
//      psgInCoach += psg[i];
//      if (psg[i] == 0 || i == ncoa - 1) {
//        if (psgInCoach % 10 != 0)
//          psgInCoach = psgInCoach + 10 - (psgInCoach % 10);
//        Tc += psgInCoach;
//        psgInCoach = 0;
//      }
//    }
//    Tc = Tc * nSeg;
//    if (Tc > max) { max = Tc; }
//    Tc = 0;
//    n++;
//  }
//  return max;
//}
