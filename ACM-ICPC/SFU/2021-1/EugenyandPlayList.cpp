#include <vector>
#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> songs = {0};
  for (int i = 0; i < n; i++) {
    int c, t;
    cin >> c >> t;
    songs.push_back(c * t + songs[i]);
  }
  vector<int> moments;
  int curr = 1;
  for (int i = 0; i < m; i++) {
    int moment;
    cin >> moment;
    while (songs[curr] < moment) {
      curr++;
    }
    cout << curr << endl;
  }
  return 0;
}
