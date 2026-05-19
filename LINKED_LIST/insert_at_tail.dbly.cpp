#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};
void print( Node* head){
     Node* temp = head;
     while(temp!=NULL){
        cout << temp->data<< " ";
        temp = temp->next;
     }
     cout << endl;
}
void insertatail(Node* &head,Node* &tail,int d){
    // empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertatail(head,tail,1);
    insertatail(head,tail,2);
    print (head);
    return 0;
}