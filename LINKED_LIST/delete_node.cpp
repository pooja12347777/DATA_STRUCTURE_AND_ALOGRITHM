#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
        cout << endl;
    
}
    void deleteNode(int position, Node* &head){
        // delete first pos
        if(position == 1){
            Node * temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;

        }
        else{
            Node* curr = head;
            Node* prev = NULL;
            int cnt = 1;
            while(cnt < position){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            prev-> next = curr->next;
            curr->next = NULL;
            delete curr;
        }


    
}
int main(){
    Node* node1 = new Node(3);

    Node* head = node1;

    // Create more nodes
    Node* node2 = new Node(5);
    node1->next = node2;

    Node* node3 = new Node(7);
    node2->next = node3;

    cout << "Before deletion: ";
    print(head);

    // Delete node at position 2
    deleteNode(2, head);

    cout << "After deletion: ";
    print(head);

    return 0;

}