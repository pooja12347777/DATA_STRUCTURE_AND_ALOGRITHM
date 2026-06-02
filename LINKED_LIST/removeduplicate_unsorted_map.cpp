#include<iostream>
#include<map>
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

    if(head == NULL){
        return head;
    }

    map<int, bool> visited;

    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL){

        if(visited[curr->data]){

            prev->next = curr->next;

            Node* nodeToDelete = curr;
            curr = curr->next;

            delete nodeToDelete;
        }
        else{

            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){

    Node* head = new Node(8);
    head->next = new Node(0);
    head->next->next = new Node(8);

    head = removeduplicate(head);

    print(head);
}