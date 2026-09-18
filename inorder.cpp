#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};
void inorder(Node*root){
    if(root == NULL){
        return;
    }
   
    inorder(root->left);
     cout<< root->data << " ";
    inorder(root->right);
}




int main() {
   

    Node* root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(7);
    root->left->right = new Node(11);
    root->right->right = new Node(17);

    cout << "In-order traversal:" << endl;
   inorder(root);

    return 0;
}