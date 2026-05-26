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
Node*  reverselinkedlist(Node* head){
    // empty list
    if(head==NULL|| head->next==NULL){
        return head;

    }
    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;
    while(curr!= NULL){
        forward= curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    

    }
void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data<< " ";
        temp = temp->next;
        

    }
    cout  << endl;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    print(head);

    // Reverse the linked list
     head = reverselinkedlist(head);

    cout << "Reversed List: ";
    print(head);

    return 0;
}