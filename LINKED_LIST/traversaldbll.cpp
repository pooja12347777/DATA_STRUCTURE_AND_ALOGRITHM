#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};

// Traversal / Print Function
void print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    Node* head = first;

    print(head);

    return 0;
}