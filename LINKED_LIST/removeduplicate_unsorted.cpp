#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
Node* removeduplicate(Node* head){
    // empty list
    if(head == NULL)
    return head;
    // non-empty list
    Node*curr = head;

   
    while(curr!=NULL){
            Node*temp = curr;
        while(temp->next!=NULL){
            if(curr->data == temp->next->data){
                Node*nodetodelete = temp->next;
               temp->next=temp->next->next;
                
                delete(nodetodelete);
                 

            }
            else{
                temp = temp->next;
            }
        }
       curr = curr->next;
    }
     return head;
}
void print(Node* head){
    Node*temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;


}
int main(){
    Node* head = new Node(7);
     head->next = new Node(4);
     head->next->next = new Node(7);
     head = removeduplicate(head);
     print(head);


}