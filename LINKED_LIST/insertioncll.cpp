#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    // ~Node() {
    //     int value = this->data;

    //     if(this->next != NULL) {
    //         delete next;
    //         next = NULL;
    //     }

    //     cout << "Memory is free for node with data "
    //          << value << endl;
    // }
};
void insertnode(Node* &tail,int element,int d){
    // empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next=newNode;
        return;


    }
    else{
        // non-empty list
        // assuming that element is present in the list
        Node* curr = tail;
        while(curr->data!=element){
            curr = curr->next;
        }
        // element is found
        Node*temp= new Node(d);
        temp->next=curr->next;
        curr->next = temp;
    }

}
void print(Node* tail){
    if (tail == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp=tail;
    do{
        cout << tail->data << " ";
        tail = tail->next;
    
    }while(tail!=temp);
    cout << endl;
}

int main(){
    Node* tail = NULL;
    insertnode(tail,3,5);
    print(tail);
    insertnode(tail,5,4);
    print(tail);
    return 0;
}