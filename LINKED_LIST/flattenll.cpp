#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* child;

    Node() : data(0), next(nullptr), child(nullptr) {}

    Node(int x) : data(x), next(nullptr), child(nullptr) {}

    Node(int x, Node* next, Node* child)
        : data(x), next(next), child(child) {}
};


// Merge two sorted child-linked lists
Node* merge(Node* down, Node* right) {

    if (down == NULL) {
        return right;
    }

    if (right == NULL) {
        return down;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;

    while (down != NULL && right != NULL) {

        if (down->data < right->data) {

            temp->child = down;
            temp = down;
            down = down->child;

        }
        else {

            temp->child = right;
            temp = right;
            right = right->child;
        }
    }

    while (down != NULL) {

        temp->child = down;
        temp = down;
        down = down->child;
    }

    while (right != NULL) {

        temp->child = right;
        temp = right;
        right = right->child;
    }

    temp->child = NULL;

    ans = ans->child;

    return ans;
}


// Flatten the linked list
Node* flattenLinkedList(Node* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* down = head;

    Node* right = flattenLinkedList(head->next);

    Node* result = merge(down, right);

    return result;
}


// Print flattened list
void printList(Node* head) {

    while (head != NULL) {

        cout << head->data << " ";

        head = head->child;
    }

    cout << endl;
}


int main() {

    // Creating the list:
    //
    // 5 -> 10 -> 19 -> 28
    // |    |     |     |
    // 7    20    22    35
    // |          |     |
    // 8          50    40
    // |                |
    // 30               45
    //                  |
    //                  50

    Node* head = new Node(5);

    head->next = new Node(10);
    head->next->next = new Node(19);
    head->next->next->next = new Node(28);

    head->child = new Node(7);
    head->child->child = new Node(8);
    head->child->child->child = new Node(30);

    head->next->child = new Node(20);

    head->next->next->child = new Node(22);
    head->next->next->child->child = new Node(50);

    head->next->next->next->child = new Node(35);
    head->next->next->next->child->child = new Node(40);
    head->next->next->next->child->child->child = new Node(45);
    head->next->next->next->child->child->child->child = new Node(50);

    // Flatten the list
    head = flattenLinkedList(head);

    // Print flattened list
    printList(head);

    return 0;
}