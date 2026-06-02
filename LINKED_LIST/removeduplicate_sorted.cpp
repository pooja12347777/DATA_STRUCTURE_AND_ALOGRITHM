#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

Node(int data){
    this->data = data;
    this->next = NULL;
}

};
Node*  removeduplicate(Node* head){
    // empty list
    if(head==NULL)
    return head;
    // non-emptylist
    Node*curr = head;
    while(curr!=NULL){
        if((curr->next!=NULL)&& curr->data == curr->next->data){
            Node*next_next= curr->next->next;
            Node*nodetodelete = curr->next;
            delete(nodetodelete);
            curr->next = next_next;
        }
        else{
            // not equal
            curr = curr->next;
        }
       
    }
     return head;
    
}
void print(Node* head){
    Node*temp = head;
    while(temp!=NULL){
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int main(){
Node*head = new Node(7);
head->next = new Node(7);
head->next->next= new Node(4);
head->next->next->next = new Node(8);
head->next->next->next->next = new Node(5);
head->next->next->next->next->next = new Node(5);
cout<< "duplicate linked list"<< endl;
print(head);
head = removeduplicate(head);
cout<< " removed duplicate"<< endl;
print(head);

}