#include <iostream>
#include <algorithm>
#include <utility>
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

pair<int, int> diameterFast(Node* root) {
    // Pair: {diameter, height}
    if (root == NULL) {
        return make_pair(0, 0);
    }

    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int option1 = left.first;
    int option2 = right.first;
    int option3 = left.second + right.second + 1;

    pair<int, int> answer;

    // Diameter
    answer.first = max(option1, max(option2, option3));

    // Height
    answer.second = max(left.second, right.second) + 1;

    return answer;
}

int diameter(Node* root) {
    return diameterFast(root).first;
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(7);
    root->left->right = new Node(11);
    root->right->right = new Node(17);

    cout << "Diameter: " << diameter(root) << endl;

    return 0;
}