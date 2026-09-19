# include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*right;
    Node*left;

     Node(int value){
        data=value;
        right = NULL;
        left = NULL;
     }
};
int height(struct Node*node){
    if(node == NULL){
        return 0;
    }
    int leftH = height(node->left);
    int rightH = height(node->right);
    int ans = max(leftH,rightH) +1;
    return ans;



}
int main(){
    Node*root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(6);
    root->left->left = new Node(5);
    root->right->right = new Node(3);
    root->right->right->left = new Node(1);
    cout << " height" <<  endl << height(root);

}
