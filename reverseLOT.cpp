#include <iostream>
#include <queue>
#include<vector>
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
void reverselevelordertraversal(Node * root){
    if(root==NULL){
        return ;
    }
    queue<Node*>q;
    vector<Node*>ans;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*front = q.front();
        q.pop();
        ans.push_back(front);
        if(front == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(front->right!=NULL){
                q.push(front->right);
            }
            if(front->left!=NULL){
                q.push(front->left);
            }
        }
    }
    ans.pop_back();
    reverse(ans.begin(),ans.end());
    for(Node* Node : ans){
        if(Node == NULL){
            cout << endl;
        }
        else{
            cout << Node->data << " ";
        }
    }
    cout << endl;
   
}
int main() {
   

    Node* root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(7);
    root->left->right = new Node(11);
    root->right->right = new Node(17);

    cout << "Level-order traversal:" << endl;
    reverselevelordertraversal(root);

    return 0;
}