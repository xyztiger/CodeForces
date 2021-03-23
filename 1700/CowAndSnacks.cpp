#include <bits/stdc++.h>
using namespace std;

struct hash_pair { 
  template <class T1, class T2> 
  size_t operator()(const pair<T1, T2>& p) const { 
    auto hash1 = hash<T1>{}(p.first); 
    auto hash2 = hash<T2>{}(p.second); 
    return hash1 ^ hash2; 
  }
};

bool removeUniques(unordered_map<pair<int, int>, vector<vector<int>>>& G) {
  bool ret = false;
  for (auto i = G.begin(); i != G.end(); i++) {
    if (i->second.size() < 2) {
      ret = true;
      pair<int, int> unique = i->first;
      G.erase(unique);
      for (auto j = G.begin(); j != G.end(); j++) {
        for (int l = 0; l < j->second.size(); l++) {
          if (j->second[l][0] == unique.first && j->second[l][1] == unique.second) {
            j->second.erase(j->second.begin() + l);
          }
        }
      }
    }
  }
  return ret;
}


void removeMostShared(unordered_map<pair<int, int>, vector<vector<int>>>& G) {
  int maxsf = 0;
  pair<int, int> mostShared;
  for (auto it = G.begin(); it != G.end(); it++) {
    if (it->second.size() > maxsf) {
      mostShared = it->first;
      maxsf = it->second.size();
    }
  }
  G.erase(mostShared);
  for (auto it = G.begin(); it != G.end(); it++) {
    for (int i = 0; i < it->second.size(); i++) {
      if (it->second[i][0] == mostShared.first && it->second[i][1] == mostShared.second) {
        it->second.erase(it->second.begin() + i);
      }
    }
  }
}

int solve(unordered_map<pair<int, int>, vector<vector<int>>> G, int count) {
  if (!G.size()) {
    return count;
  }
  if (removeUniques(G)) {
    return solve(G, count);
  } else {
    removeMostShared(G);
    count++;
    return solve(G, count);
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  unordered_map<pair<int, int>, vector<vector<int>>> G;
  int count = 0;
  for (int i = 0; i < k; i++) {
    int x, y;
    cin >> x >> y;
    pair<int, int> node = x < y ? make_pair(x, y) : make_pair(y, x);
    if (G.count(node)) {
      count++;
    } else {
    vector<vector<int>> adj;
      for (auto it = G.begin(); it != G.end(); it++) {
        if (node.first == it->first.first || node.first == it->first.second) {
          it->second.push_back({node.first, node.second, node.first});
          adj.push_back({it->first.first, it->first.second, node.first});
        }
        if (node.second == it->first.first || node.second == it->first.second) {
          it->second.push_back({node.first, node.second, node.second});
          adj.push_back({it->first.first, it->first.second, node.second});
        }
      }
    G.emplace(node, adj);
    }
  }
  int answer = solve(G, count);
  cout << answer << endl;
  return 0;
}
