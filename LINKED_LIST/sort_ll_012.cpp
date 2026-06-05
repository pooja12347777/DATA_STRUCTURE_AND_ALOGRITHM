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

void insertattail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}

Node* sortlist(Node* head){

    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;

    Node* onehead = new Node(-1);
    Node* onetail = onehead;

    Node* twohead = new Node(-1);
    Node* twotail = twohead;

    Node* curr = head;

    // Create separate lists
    while(curr != NULL){

        Node* nextNode = curr->next;

        if(curr->data == 0){
            insertattail(zerotail, curr);
        }
        else if(curr->data == 1){
            insertattail(onetail, curr);
        }
        else{
            insertattail(twotail, curr);
        }

        curr = nextNode;
    }

    // Merge lists
    if(onehead->next != NULL){
        zerotail->next = onehead->next;
    }
    else{
        zerotail->next = twohead->next;
    }

    onetail->next = twohead->next;
    twotail->next = NULL;

    head = zerohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data<< " ";
        temp = temp->next;
        

    }
    cout  << endl;
}
int main(){
    Node*head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(2);
   
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(1);
    head = sortlist(head);
print(head);
return 0;
}