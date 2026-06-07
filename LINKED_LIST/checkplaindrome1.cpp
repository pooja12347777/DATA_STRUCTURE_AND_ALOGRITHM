#include<iostream>
#include<vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
class Solution{
    public:
    bool checkpalindrome(vector<int>arr){
        int n = arr.size();
        int s = 0;
        int e = (n-1);
        while(s<=e){
            if(arr[s]!=arr[e]){
                return 0;
            }
            s++;
            e--;
        }
        return true;
    }


public:
bool  isplaindrome(Node* head){
    vector<int>arr;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkpalindrome(arr);
}
};
void print(Node* head){
    Node*temp = head;
    while(temp!=NULL){
        cout << temp->data <<  " ";
        temp = temp->next;
        
    }
    cout << endl;
}
int main(){
    Node*head =new Node(0);
    head->next = new Node(2);
    head->next->next = new Node(1);
    Solution obj;
bool ans = obj.isplaindrome(head);

cout << ans << endl;
   

    
    
}

