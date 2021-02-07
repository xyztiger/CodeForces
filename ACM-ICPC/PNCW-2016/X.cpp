#include <bits/stdc++.h>

using namespace std;

bool perfectSquare(int area) {
  int i = 3;
  while (i*i <= area) {
    if (i*i == area) {
      return true;
    }
    i++;
  }
  return false;
}

int main() {
  vector<pair<int,int>> rectangles;
  pair<int, int> p1, p2, p3;
  int s1, s2;
  int area = 0;
  cin >> s1 >> s2;
  p1 = s1 >= s2 ? make_pair(s1, s2) : make_pair(s2, s1); //1st = length, 2nd = width
  area += s1 * s2;
  cin >> s1 >> s2;
  p2 = s1 >= s2 ? make_pair(s1, s2) : make_pair(s2, s1);
  area += s1 * s2;
  cin >> s1 >> s2;
  p3 = s1 >= s2 ? make_pair(s1, s2) : make_pair(s2, s1);
  area += s1 * s2;

  int side;
  if (!perfectSquare(area)) {
    cout << "NO" << endl;
    return 0;
  } else {
    side = (int) sqrt(area);
  }

  rectangles.push_back(p1);
  rectangles.push_back(p2);
  rectangles.push_back(p3);
  sort(rectangles.rbegin(), rectangles.rend());

  //check if can fit 3 in a row
  if (rectangles[0].first == rectangles[2].first) {
    cout << "YES" << endl;
    return 0;
  }

  if (rectangles[0].first == side) {
    if (rectangles[1].first == rectangles[2].first && 
        rectangles[1].first + rectangles[0].second == side) {
      cout << "YES" << endl;
      return 0;
    }
    if (rectangles[1].second == rectangles[2].second &&
        rectangles[1].second + rectangles[0].second == side) {
      cout << "YES" << endl;
      return 0;
    }
    if (rectangles[1].second == rectangles[2].first &&
        rectangles[1].second + rectangles[0].second == side) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
