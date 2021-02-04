//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <stack>
using namespace std;

vector<string> splitLine(string str)
{
  string word = "";
  vector<string> words;
  for (char x : str)
  {
    if (x == ' ')
    {
      words.emplace_back(word);
      word = "";
    }
    else
    {
      word = word + x;
    }
  }
  words.emplace_back(word);
  return words;
}


vector<int> DFS(int start, int end, vector<vector<int>> adj, int n) {
  vector<bool> visited(n * 3, false);
  stack<int> toVisit;
  toVisit.push(start);
  map<int, int> parents;
  vector<int> path;
  while (!toVisit.empty()) {
    int curr = toVisit.top();
    toVisit.pop();

    if (!visited[curr])
    {
      toVisit.push(curr);
      visited[curr] = true;
      if (curr == end) {
        while (parents[curr] != start) {
          path.emplace_back(curr);
          curr = parents[curr];
        }
        path.emplace_back(start);
      }
    }

    for (auto i = adj[curr].begin(); i != adj[curr].end(); ++i) {
      if (!visited[*i]) {
        toVisit.push(*i);
        parents[*i] = curr;
      }
    }

  }
  return path;
}

int main() {
  int n;
  cin >> n;
  cin.ignore();
  int index = 0;
  string piece;
  map<string, int> dict;
  map<int, string> dictR;
  vector<vector<int>> adj;
  for (int i = 0; i < n * 3; i++) {
    vector<int> toAdd;
    for (int j = 0; j < n * 3; j++) {
      toAdd.emplace_back(0);
    }
    adj.emplace_back(toAdd);
  }
  while (n--) {
    getline(cin, piece);
    vector<string> words = splitLine(piece);
    for (string word : words) {
      if (!dict.count(word)) {
        dict[word] = index;
        dictR[index] = word;
        index++;
      }
    }
    for (int i = 1; i < words.size(); i++) {
      adj[dict[words[i - 1]]][dict[words[i]]] = 1;
      adj[dict[words[i]]][dict[words[i - 1]]] = 1;
    }
  }
  string route;
  getline(cin, route);
  vector<string> words = splitLine(piece);
  vector<int> path = DFS(dict[words[0]], dict[words[1]], adj, n);
  vector<string> pathNames;
  for (int i = 0; i < path.size(); i++) {
    pathNames.emplace_back(dictR[path[i]]);
  }
  if (pathNames.empty()) {
    cout << "no route found" << endl;
  } else {
    for (string s : pathNames) {
      cout << s << " ";
    }
    cout << endl;
  }

  return 0;
}