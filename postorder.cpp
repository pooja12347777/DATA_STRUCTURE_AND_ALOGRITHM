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
void postorder(Node*root){
    if(root == NULL){
        return;
    }
   
    postorder(root->left);
    
   postorder(root->right);
     cout<< root->data << " ";
}




int main() {
   

    Node* root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(7);
    root->left->right = new Node(11);
    root->right->right = new Node(17);

    cout << "post-order traversal:" << endl;
   postorder(root);

    return 0;
}