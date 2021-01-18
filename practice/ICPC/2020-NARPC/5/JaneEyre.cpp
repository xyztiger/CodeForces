#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool sortBooks(const pair<string, pair<int, int>> &a, const pair<string, pair<int, int>> &b) {
  return (a.second.first < b.second.first);
}

bool beforeJaneEyre(string title) {
  string JE = "Jane Eyre";
  int minLength = min(JE.length(), title.length());
  for (int i = 0; i < minLength; i++) {
    if (title[i] > JE[i]) {
      return false;
    } else if (title[i] < JE[i]) {
      return true;
    }
  }
  return true;
}

pair<string, int> handleInput1(string s) {
  int split;
  for (int i = s.length() - 1; i >= 0; i--) {
    if (isspace(s[i])) {
      split = i;
      break;
    }
  }
  return make_pair(s.substr(1, split - 2),
                   stoi(s.substr(split + 1, s.length() - split - 1)));
}

pair<string, pair<int, int>> handleInput2(string s) {
  int split1, split2;
  for (int i = s.length() - 1; i >= 0; i--) {
    if (isspace(s[i])) {
      split2 = i;
      break;
    }
  }
  for (int i = 0; i < s.length(); i++) {
    if (isspace(s[i])) {
      split1 = i;
      break;
    }
  }
  return make_pair(s.substr(split1 + 2, split2 - split1 - 3),
                   make_pair(stoi(s.substr(0, split1)),
                             stoi(s.substr(split2 + 1, s.length() - split2 - 1))));
}

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  long long answer = 0;
  string throwaway;
  getline(cin, throwaway);
  while (n--) {
    string line;
    getline(cin, line);
    pair<string, int> input = handleInput1(line);
    int length = input.second;
    string title = input.first;
//    cout << title << " " << length << endl;
    if (title.compare("Jane Eyre") < 0) {
      answer += length;
    }
  }
  vector<pair<string, pair<int, int>>> newBooks = {};
  while (m--) {
    string line;
    getline(cin, line);
    pair<string, pair<int, int>> input = handleInput2(line);
    newBooks.push_back(input);
  }
  sort(newBooks.begin(), newBooks.end(), sortBooks);
  for (auto book : newBooks) {
    int t = book.second.first;
    int length = book.second.second;
    string s = book.first;
//    cout << t << " " << s << " " << length << endl;
    if (t <= answer) {
      if (s.compare("Jane Eyre") < 0) {
        answer += length;
      }
    }
  }
  answer += k;
  cout << answer << endl;
  return 0;
}
