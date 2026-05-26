#include<iostream>
using namespace  std;
class Node{
    public:
int data;
Node* next;
Node(int data){
    this->data = data;
    this->next = NULL;

}
};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data << " ";
        temp= temp->next;
    }
    cout << endl;
}
void reverse(Node* &head, Node* curr,Node* prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    Node* forward = curr->next;
    curr->next = prev;
    reverse(head,forward,curr);
    

}
Node* reverselinkedlist(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    reverse(head,curr,prev);
    return head;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(0);
    head->next->next->next = new Node(9);

    cout << "original linked list" << endl;
    print(head);
    head = reverselinkedlist(head);
    cout << "reverse linkedlist" << " ";
    print(head);
}