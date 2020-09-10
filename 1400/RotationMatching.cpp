//
// Created by TigerZhao on 2020-09-09.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

//struct Node {
//    int value;
//    Node *next;
//
//    Node(int val) {
//        value = val;
//        next = nullptr;
//    }
//
//    void setNext(Node *node) {
//        next = node;
//    }
//};

int main() {
    int n; cin >> n;
//    int first; cin >> first;
//    Node *a1 = new Node(first);
//    Node *prevNode = a1;
//    for (int i = 1; i < n; i++) {
//        int nextValue; cin >> nextValue;
//        Node *newNode = new Node(nextValue);
//        prevNode->setNext(newNode);
//        prevNode = newNode;
//    }
//    prevNode->setNext(a1);
    int a[n + 1];
    int first; cin >> first;
    int prev = first;
    for (int i = 1; i < n; i ++) {
        int current; cin >> current;
        a[prev] = current;
        prev = current;
    }
    a[prev] = first;
    int count = 1;
    int answer = 1;
    cin >> first;
    prev = first;
    for (int i = 1; i < n; i++) {
        int current;
        cin >> current;
        if (a[prev] == current) {
//            count++;
//            answer = max(answer, count);
//        } else {
//            count = 1;
            answer++;
        }
        prev = current;
    }
//    if (a[first] == prev && answer < n) {
//        answer++;
//    }
    cout << answer << endl;
    return 0;
}
