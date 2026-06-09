#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*next;


Node(int data){
    this ->data = data;
    this->next = NULL;
}
};
void solve(Node*first, Node*second){
    Node*curr1 = first;
    Node*next1 = curr1->next;
    Node*curr2 = second;
    Node*next2 = curr2->next;
    while(next1!=NULL && curr2!=NULL){
        if(curr2->data>=curr1->data && curr2->data <= next1->data){
            curr1->next= curr2;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
            
        
        if(curr2!=NULL){
            next2 = curr2->next;
        }
        }
        else{
            curr1 = next1;
            next1 = next1->next;

        }
    }
    if(curr2!=NULL){
        curr1->next = curr2;
    }
}
Node*sorttwolist(Node*first,Node*second){
    if(first==NULL){
 return second;
    }
    if(second==NULL){
        return first;
    }
    if(first->data <= second->data){
        solve(first,second);
        return first;
    }
   else{
    solve(second,first);
    return second;
   }
}
int main() {

    // First linked list: 1 -> 3 -> 5
    Node* first = new Node(1);
    first->next = new Node(3);
    first->next->next = new Node(5);

    // Second linked list: 2 -> 4 -> 6
    Node* second = new Node(2);
    second->next = new Node(4);
    second->next->next = new Node(6);

    // Merge the two sorted lists
    Node* ans = sorttwolist(first, second);

    // Print merged list
    while(ans != NULL) {
        cout << ans->data << " ";
        ans = ans->next;
    }

    return 0;
}

