#include <bits/stdc++.h>

using namespace std;

unordered_map<string, unordered_map<string, float>> graph; 
vector<tuple<string, float, float, float>> planets;

int shortestPath(string p1, string p2) {
    unordered_map<string, float> d;
    unordered_map<string, string> p;
    for (auto v : d) {
      v.second = FLT_MAX;
    }


    

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case " << i << ":" << endl;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
      string name;
      float x, y, z;
      cin >> name >> x >> y >> z;
      planets.emplace_back(name, x, y ,z);
    }

    //initalize all edges
    for (int i = 0; i < p; i++) {
      for (int j = 0; i < p; j++) {
        if (i != j) {
          tuple<string, float, float, float> p1 = planets[i];
          tuple<string, float, float, float> p2 = planets[j];
          graph[get<0>(p1)][get<0>(p2)] = sqrt(pow(get<1>(p1) - get<1>(p2), 2) +
                                               pow(get<2>(p1) - get<2>(p2), 2) +
                                               pow(get<3>(p1) - get<3>(p2), 2));
        }
      }
    }

    int w;
    cin >> w;
    for (int i = 0; i < w; i++) {
      string p1, p2;
      cin >> p1 >> p2;
      graph[p1][p2] = 0;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
      string p1, p2;
      cin >> p1 >> p2;
      cout << "The distance from " << p1 << " to " << p2 << " is " 
           << shortestPath(p1, p2) << " parsecs." << endl;
    }
  }
  return 0;
}
