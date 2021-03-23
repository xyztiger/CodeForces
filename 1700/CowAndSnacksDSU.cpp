#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> sizes;

void make_set(int v) {
  parent[v] = v;
  sizes[v] = 1;
}

int find_set(int v) {
  if (v == parent[v]) {
    return v;
  }
  return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (sizes[a] < sizes[b]) {
      swap(a, b);
    }
    parent[b] = a;
    sizes[a] += sizes[b];
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> temp(n + 1, 0);
  parent = temp;
  sizes = temp;
  for (int i = 1; i <= n; i++) {
    make_set(i);
  }
  for (int i = 0; i < k; i++) {
    int x, y;
    cin >> x >> y;
    union_sets(x, y);
  }
  vector<int> seen(n + 1, 0);
  int count = -1;
  for (int s : parent) {
    int p = find_set(s);
    if (!seen[p]) {
      count++;
      seen[p] = 1;
    }
  }
  cout << k - (n - count) << endl;
  return 0;
}
