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
bool iscicularlineklist(Node* head){
    // empty list
    if(head==NULL){
        return true;

    }
    Node*temp = head->next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
       
}
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
    if(iscicularlineklist(tail)){
        cout << " linkedlist is circular"  << endl;

    }
    else{
        cout << "linkedlist is not circular" << endl;
        
    }
    return 0;
}