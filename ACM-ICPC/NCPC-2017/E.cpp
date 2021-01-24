#include <bits/stdc++.h>

using namespace std;

struct Cell {
  int x, y, alt;
  int visited = 0;
};

vector<vector<Cell>> alt;

long long solve(int i, int j) {
  struct Cell curr = alt[i][j];
  vector<Cell> neighbours;
  for (int x = -1; x < 2; x++) {
    for (int y = -1; y < 2; y++) {
      if (i + y >= 0 && i + y < alt.length() && j + x >= 0 && j + x < alt[0].length()) {
        if (!c.vi) {
          neightbours.emplace_back(i + y, x + j);
        }
      }
    }
  }
  sort(

int main() {
  int h, w;
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    vector<Cell> row;
    for (int j = 0; j < w; j++) {
    struct Cell c;
      int a;
      cin >> a;
      c.y = i;
      c.x = j;
      c.alt = a;
      row.push_back(c);
    }
    alt.push_back(row);
  }
  int i, j;
  cin >> i >> j;
  cout << solve(i, j) << endl;
  return 0;
}
