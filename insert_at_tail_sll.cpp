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
// functuon to insert at the head
void insertionathead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head ;
    head = temp;

}
// function to insert at tail
void insertionattail(Node* &tail,int data){
    Node *temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}
// printing the linked list
void print(Node* head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

int main(){
    Node * Node1 = new Node(7);
    
    Node *head = Node1;
    Node* tail = Node1;
    
    
    insertionathead(head,2);
   
    insertionattail(tail,3);
     print(head);
    
   
    return 0;

}