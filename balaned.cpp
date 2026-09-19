#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;

class Node {
public:
    int data;
    Node* right;
    Node* left;

    Node(int value) {
        data = value;
        right = NULL;
        left = NULL;
    }
};

// Pair: {isBalanced, height}
pair<bool, int> isBalancedFast(Node* root) {
    if (root == NULL) {
        return make_pair(true, 0);
    }

    pair<bool, int> left = isBalancedFast(root->left);
    pair<bool, int> right = isBalancedFast(root->right);

    bool leftAnswer = left.first;
    bool rightAnswer = right.first;

    bool difference =
        abs(left.second - right.second) <= 1;

    pair<bool, int> answer;

    // Store height
    answer.second = max(left.second, right.second) + 1;

    // Store whether the current tree is balanced
    answer.first = leftAnswer && rightAnswer && difference;

    return answer;
}

bool isBalanced(Node* root) {
    return isBalancedFast(root).first;
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(7);
    root->left->right = new Node(11);
    root->right->right = new Node(17);

    if (isBalanced(root)) {
        cout << "The binary tree is balanced." << endl;
    } else {
        cout << "The binary tree is not balanced." << endl;
    }

    return 0;
}