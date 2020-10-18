//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  int frequency[26];
  while (n--) {
    fill(frequency, frequency + 26, 0);
    string sentence;
    getline(cin, sentence);
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    for (char c : sentence) {
      int letter = (int)c - 97;
      if (letter >= 0 && letter <= 26) {
        frequency[letter]++;
      }
    }
    bool missing = false;
    for (int i = 0; i < 26; i++) {
      if (frequency[i] == 0) {
        if (!missing) {
          cout << "missing ";
          missing = true;
        }
        char c = 'a' + i;
        cout << c;
      }
    }
    if (!missing) {
      cout << "pangram";
    }
    cout << endl;
  }
  return 0;
}
