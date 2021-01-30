#include <bits/stdc++.h>

using namespace std;

struct gear {
  int id, r, x, y, rot;
}

vector<struct gear> gears;



int square(int x) {
  return x * x;
}

bool connected(struct gear g1, struct gear g2) {
  return square(g1.x - g2.x) + square(g1.y - g2.y) == square(g1.r + g2.r);
} 

int main() {
  int n;
  while (n--) {
    int x, y, r;
    struct gear g {r, x, y, 0};
    for (struct gear a : gears) {
      if (connected(g, a)) {

  }
  return 0;
}
