#include <bits/stdc++.h>

using namespace std;

const vector<int> dx = {0, 0, 1, 1, 1, -1, -1, -1};
const vector<int> dy = {1, -1, 0, 1, -1, 0, 1, -1};

int w, h, b;
vector<vector<int>> image;
vector<vector<int>> imageTemp;

int wrapAround(int coord, int limit) {
  if (coord < 0) {
    return limit - 1;
  } else if (coord == limit) {
    return 0;
  } else {
    return coord;
  }
}

void blur() {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      for (int d = 0; d < 8; d++) {
        int nx = wrapAround(j + dx[d], w);
        int ny = wrapAround(i + dy[d], h);
        imageTemp[i][j] += image[ny][nx];
      }
    }
  }
  image = imageTemp;
}


int main() {
  cin >> w >> h >> b;
  for (int i = 0; i < h; i++) {
    vector<int> row;
    for (int j = 0; j < w; j++) {
      int pixel;
      cin >> pixel;
      row.push_back(pixel);
    }
    image.push_back(row);
  }
  imageTemp = image;
  while (b--) {
    blur();
  }
  unordered_set<int> seen;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
        seen.insert(image[i][j]);
    }
  }
  cout << seen.size() << endl;
  return 0;
}
