//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  return 0;
}

void BFS(int start, int end, vector<vector<int>> adj, int n) {
  // Visited vector to so that
  // a vertex is not visited more than once
  // Initializing the vector to false as no
  // vertex is visited at the beginning
  vector<bool> visited(n * 3, false);
  vector<int> q;
  q.push_back(start);

  // Set source as visited
  visited[start] = true;

  int vis;
  while (!q.empty()) {
    vis = q[0];

    q.erase(q.begin());

    // For every adjacent vertex to the current vertex
    for (long long i = 0; i < n * 3; i++) {
      if (adj[vis][i] == 1 && (!visited[i])) {
        q.push_back(i);
        visited[i] = true;
      }
    }
  }
}



void DFS(int start, int end, vector<vector<int>> adj, int n) {
  // Initially mark all verices as not visited
  vector<bool> visited(n * 3, false);

  // Create a stack for DFS
  stack<int> stack;

  // Push the current source node.
  stack.push(start);

  while (!stack.empty())
  {
    // Pop a vertex from stack and print it
    int curr = stack.top();
    stack.pop();
    vector<int> path;

    // Stack may contain same vertex twice. So
    // we need to print the popped item only
    // if it is not visited.
    if (!visited[curr])
    {
      cout << curr << " ";
      visited[curr] = true;
    }

    // Get all adjacent vertices of the popped vertex s
    // If a adjacent has not been visited, then push it
    // to the stack.
    for (auto i = adj[curr].begin(); i != adj[curr].end(); ++i)
      if (!visited[*i])
        stack.push(*i);
  }
}