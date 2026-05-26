# include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next =nullptr ;


    }
};
Node* getmiddle(Node*  &head){
    if(head==NULL|| head->next==NULL){
        return head;

    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!= NULL){
        fast= fast->next;
        if(fast!= NULL){
            fast = fast->next;
            slow = slow->next;


        }
        
    }
    return slow;


}
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
        cout<< endl;

    }
}
int main(){
    Node* head = new Node(1);
     head->next = new Node(7);
     head->next->next = new Node(0);
     head->next->next->next = new Node(8);
    
     print(head);
      Node* middle =  getmiddle(head);
      cout << "middle node";
      cout << middle->data << endl;
      return 0;



}