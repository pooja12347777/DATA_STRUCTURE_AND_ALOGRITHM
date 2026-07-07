#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node* arb;

    Node(int d) {
        data = d;
        next = NULL;
        arb = NULL;
    }
};

// Solution class
class Solution {
private:

    void insertAtTail(Node* &head, Node* &tail, int d) {

        Node* newNode = new Node(d);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:

    Node* copyList(Node* head) {

        if(head == NULL)
            return NULL;

        // Step 1: Create clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;

        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        // Step 2: Insert clone nodes in between original nodes

        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode != NULL) {

            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;

            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }

        // Step 3: Copy random pointers

        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode != NULL) {

            if(originalNode->arb != NULL)
                cloneNode->arb = originalNode->arb->next;
            else
                cloneNode->arb = NULL;

            originalNode = cloneNode->next;

            if(originalNode != NULL)
                cloneNode = originalNode->next;
        }

        // Step 4: Separate both lists

        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode != NULL && cloneNode != NULL) {

            originalNode->next = cloneNode->next;

            if(originalNode->next != NULL)
                cloneNode->next = originalNode->next->next;
            else
                cloneNode->next = NULL;

            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};

// Function to print list
void printList(Node* head) {

    while(head != NULL) {

        cout << "Node = " << head->data << " ";

        if(head->arb != NULL)
            cout << "Random = " << head->arb->data;
        else
            cout << "Random = NULL";

        cout << endl;

        head = head->next;
    }
}

// Main Function
int main() {

    // Creating Original List
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Setting Random Pointers
    head->arb = third;      // 1 -> 3
    second->arb = head;     // 2 -> 1
    third->arb = fourth;    // 3 -> 4
    fourth->arb = second;   // 4 -> 2

    cout << "Original List\n";
    printList(head);

    Solution obj;

    Node* cloneHead = obj.copyList(head);

    cout << "\nCloned List\n";
    printList(cloneHead);

    return 0;
}