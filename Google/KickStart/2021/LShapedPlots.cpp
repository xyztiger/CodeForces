#include <bits/stdc++.h>

using namespace std;

struct Segment {
  pair<int, int> p1;
  pair<int, int> p2;
  vector<Segment*> neighbours;
};

vector<vector<int>> graph;

vector<Segment*> segments;

int answer;

pair<int, int> findIntersect(Segment* s1, Segment* s2) {
  int r, c;
  if (s1->p1.first <= max(s2->p1.first, s2->p2.first) &&
      s1->p1.first >= min(s2->p1.first, s2->p2.first)) {
    r = s1->p1.first;
  } else {
    r = s2->p1.first;
  }
  if (s1->p1.second <= max(s2->p1.second, s2->p2.second) &&
      s1->p1.second >= min(s2->p1.second, s2->p2.second)) {
    c = s1->p1.second;
  } else {
    c = s2->p1.second;
  }
  return make_pair(r, c);
}

pair<int, int> legLength(Segment* s, pair<int, int> intersect) {
  if (s->p1.first == intersect.first) {
    return make_pair(abs(intersect.second - s->p1.second) + 1,
                     abs(intersect.second - s->p2.second) + 1);
  } else {
    return make_pair(abs(intersect.first - s->p1.first) + 1,
                     abs(intersect.first - s->p2.first) + 1);
  }
}

int numLs(int x, int y) {
  float l1 = (float)x;
  float l2 = (float)y;
  float ret = 0;
  float n, a;
  if (l1 < 2 || l2 < 2) {
    return 0;
  }
  if (l1 > 3) {
    n = min(l1 / 2 - 1, l2 - 1);
    a = l1 - 3;
    ret += (n/2) * (2*a + (n-1) * -2);
  }
  if (l2 > 3) {
    n = min(l2 / 2 - 1, l1 - 1);
    a = l2 - 3;
    ret += (n/2) * (2*a + (n-1) * -2);
  }
  return (int)ret;
}

void countLs() {
  for (Segment* s : segments) {
    for (Segment* n : s->neighbours) {
      pair<int, int> intersect = findIntersect(s, n);
      pair<int, int> l1 = legLength(s, intersect);
      pair<int, int> l2 = legLength(n, intersect);
      answer += numLs(l1.first, l2.first);
      answer += numLs(l1.first, l2.second);
      answer += numLs(l1.second, l2.first);
      answer += numLs(l1.second, l2.second);
    }
  }
}

void findSegments() {
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  for (int test = 1; test <= t; test++) {
    int r, c;
    cin >> r >> c;
    graph = {};
    segments = {};
    answer = 0;
    for (int i = 0; i < r; i++) {
      vector<int> row;
      for (int j = 0; j < c; j++) {
        int a;
        cin >> a;
        row.push_back(a);
      }
      graph.push_back(row);
    }
     // traverse row segments
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (graph[i][j] == 1) {
                    int begin_idx = j;
                    pair<int, int> beginning = {i ,begin_idx};
                    while (j < c && graph[i][j] == 1) {
                        j++;
                    }
                    if (begin_idx+1 < j) {
                        pair<int, int> end = {i, j-1};
                        Segment *seg = (Segment *) malloc(sizeof(struct Segment));
                        seg->p1 = beginning;
                        seg->p2 = end;
                        segments.push_back(seg);
                    }
                }
            }
        }
        // traverse col segments
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                if (graph[i][j] == 1) {
                    int begin_idx = i;
                    pair<int, int> beginning = {begin_idx ,j};
                    while (i < r && graph[i][j] == 1) {
                        i++;
                    }
                    if (begin_idx+1 < i) {
                        pair<int, int> end = {i-1, j};
                        Segment *seg = (Segment *) malloc(sizeof(struct Segment));
                        seg->p1 = beginning;
                        seg->p2 = end;
                        segments.push_back(seg);
                    }
                }
            }
        }
        for (Segment* segment : segments) {
            bool vertical = true;
            if (segment->p1.first == segment->p2.first)
                vertical = false;
            for (Segment* seg2 : segments) {
                //check if two lines overlap
                if (segment != seg2) {
                    // this segment is horizontal
                    if (seg2->p1.first == seg2->p2.first && vertical) {
                        if (segment->p1.second <= max(seg2->p2.second, seg2->p1.second) &&
                            segment->p1.second >= min(seg2->p2.second, seg2->p1.second))
                            segment->neighbours.push_back(seg2);
                    } else if (seg2->p1.second == seg2->p2.second && !vertical) {
                        // this segment is vertical
                        if (segment->p1.first <= max(seg2->p2.first, seg2->p1.first) &&
                            segment->p1.first >= min(seg2->p2.first, seg2->p1.first))
                            segment->neighbours.push_back(seg2);
                    }
                }
            }
        }
    countLs();
    cout << "Case #" << test << ": " << answer / 2 << "\n";
  }
  return 0;
}

