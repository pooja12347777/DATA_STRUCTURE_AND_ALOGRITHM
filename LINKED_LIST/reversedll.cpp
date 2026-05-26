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
Node*  reverselinkedlist(Node* head){
    // empty list
    if(head==NULL|| head->next==NULL){
        return head;

    }
    Node* forward = NULL;
    Node* curr = head;
    
    Node* previ = NULL;
    
    while(curr!= NULL){
        forward= curr->next;
        curr->next = previ;
        previ = curr;
        curr = forward;

    }
    return previ;
    

    }


int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    print(head);

    // Reverse the linked list
     head = reverselinkedlist(head);

    cout << "Reversed List: ";
    print(head);

    return 0;
}