#include <queue>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<char>> lab;
vector<vector<bool>> visited;
vector<vector<pair<int, int>>> steps;

struct state {
  int l, r, i, j;

  state(int l, int r, int i, int j):
    l(l), r(r), i(i), j(j) {}
};

vector<pair<int, int>> validDirections(state curr) {
  vector<pair<int, int>> d = {{-1, 0}, {1, 0}};
  if (curr.l) {
    d.emplace_back(0, -1);
  }
  if (curr.r) {
    d.emplace_back(0, 1);
  }
  return d;
}

int reachable(int y, int x, int l, int r) {
  int count = 1;
  queue<state> q;
  q.emplace(l, r, y, x);
  visited[y][x] = true;
  while (!q.empty()) {
    state curr = q.front();
    q.pop();
    vector<pair<int, int>> directions = validDirections(curr);
    for (pair<int, int> d : directions) {
      int i = curr.i + d.first;
      int j = curr.j + d.second;
      if (i >= 0 && i < lab.size() && j >= 0 && j < lab[0].size()) {
        if (lab[i][j] == '.') {
          if (!visited[i][j]) {
            visited[i][j] = true;
            count++;
            steps[i][j] = make_pair(curr.l, curr.r);
            int lcount = d.second < 0 ? curr.l - 1 : curr.l;
            int rcount = d.second > 0 ? curr.r - 1 : curr.r;
            q.emplace(lcount, rcount, i, j);
          } else if (curr.l > steps[i][j].first || curr.r > steps[i][j].second) {
            int lcount = d.second < 0 ? curr.l - 1 : curr.l;
            int rcount = d.second > 0 ? curr.r - 1 : curr.r;
            q.emplace(lcount, rcount, i, j);
          }
        }
      }
    }
  }
  return count;
}

int main() {
  int n, m;
  cin >> n >> m;
  int x, y;
  cin >> y >> x;
  int r, l;
  cin >> l >> r;
  for (int i = 0; i < n; i++) {
    vector<char> row;
    for (int j = 0; j < m; j++) {
      char a;
      cin >> a;
      row.push_back(a);
    }
    lab.push_back(row);
  }
  visited.assign(n, vector<bool> (m, false));
  steps.assign(n, vector<pair<int, int>> (m, make_pair(0, 0)));
  int answer = reachable(y - 1, x - 1, l, r);
  cout << answer << endl;
  return 0;
}
