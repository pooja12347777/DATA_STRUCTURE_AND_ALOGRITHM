#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* swapPairs(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* prev = nullptr;
    Node* curr = head;
    Node* temp = nullptr;

    int count = 0;

    while (curr != nullptr && count < 2) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        count++;
    }

    head->next = swapPairs(curr);

    return prev;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original list: ";
    printList(head);

    head = swapPairs(head);

    cout << "After swapping pairs: ";
    printList(head);

    return 0;
}
