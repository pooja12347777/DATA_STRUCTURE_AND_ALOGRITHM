#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Find middle node
Node* getMiddle(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL) {
        fast = fast->next;

        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;
}

// Print DLL
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(7);
    Node* third = new Node(0);
    Node* fourth = new Node(8);

    // Linking nodes
    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    print(head);

    Node* middle = getMiddle(head);
    cout << "Middle node: " << middle->data << endl;

    return 0;
}