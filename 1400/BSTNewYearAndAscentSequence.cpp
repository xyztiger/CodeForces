//
// Created by TigerZhao on 2020-09-07.
//


#include <iostream>
#include <algorithm>

using namespace std;

class BST {
public:
    int value[2]{};
    BST *left;
    BST *right;

    BST(int val) {
        value[0] = val;
        value[1] = 1;
        left = nullptr;
        right = nullptr;
    }

    BST &insert(int val) {
        if (val < value[0]) {
            if (left == nullptr) {
                BST *newBST = new BST(val);
                left = newBST;
            } else {
                left->insert(val);
            }
        } else if (val > value[0]) {
            if (right == nullptr) {
                BST *newBST = new BST(val);
                right = newBST;
            } else {
                right->insert(val);
            }
        } else {
            value[1]++;
        }
        return *this;
    }

    int numGreater(int val) {
        int sum = 0;
        if (val < value[0]) {
            sum += value[1];
            if (right != nullptr) {
                sum += right->numOfNodes();
            }
            if (left != nullptr) {
                sum += left->numGreater(val);
            }
        } else {
            if (right != nullptr) {
                sum += right->numGreater(val);
            }
        }
        return sum;
    }

    int numLesser(int val) {
        int sum = 0;
        if (val > value[0]) {
            sum += value[1];
            if (left != nullptr) {
                sum += left->numOfNodes();
            }
            if (right != nullptr) {
                sum += right->numLesser(val);
            }
        } else {
            if (left != nullptr) {
                sum += left->numLesser(val);
            }
        }
        return sum;
    }

    int numOfNodes() {
        int sum = value[1];
        if (left != nullptr) {
            sum += left->numOfNodes();
        }
        if (right != nullptr) {
            sum += right->numOfNodes();
        }
        return sum;
    }
};

int main() {
    int n;
    cin >> n;
    int initial = n;
    long long answer = 0;
    BST minimums = NULL;
    BST maximums = NULL;
    bool initialized = false;
    int numAscending = 0;
    while (n--) {
        int l;
        cin >> l;
        int min, max;
        min = INT_MAX;
        max = INT_MIN;
        bool ascending = false;
        while (l--) {
            int s;
            cin >> s;
            if (s > min) {
                ascending = true;
                numAscending++;
            }
            min = std::min(min, s);
            max = std::max(max, s);
        }
        if (!ascending) {
            if (!initialized) {
                minimums = BST(min);
                maximums = BST(max);
                initialized = true;
            } else {
                minimums.insert(min);
                maximums.insert(max);
            }
            answer += minimums.numLesser(max);
            answer += maximums.numGreater(min);
            answer += 2 * numAscending;
            if (max > min) {
                answer--;
            }
        } else {
            answer += 2 * (initial - n) - 1;
        }
    }
    cout << answer << endl;
    return 0;
}
