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
    Node* kreverse(Node* head, int k){
        //base case
        if(head == NULL){
            return  NULL;
        }
        // reverse first k node
        Node*next = NULL;
        Node*curr = head;
        Node* prev = NULL;
        int cnt = 0;
        
        while(curr!=NULL && cnt<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;

        }
        // recursion  will solve rest node
        if(next!=NULL){
            head->next= kreverse(next,k);
        }
        // return head
       return prev;
    }
  void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

  }  
     

int main(){
Node * head = new Node(6);
head->next = new Node(8);
head->next->next = new Node(0);
head->next->next->next = new Node(3);
head->next->next->next->next = new Node(1);

cout << " original linkedlist " ;
print(head);
int k;
cout<< "enter k";
cin >> k;
head = kreverse(head,k);

cout<< "reversed k linkedlist ";
print(head);
return 0;





}