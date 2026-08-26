#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) {
        val = value;
        next = NULL;
    }
};

void deleteNode(ListNode* node) {
    // The last node cannot be deleted using this method
    if (node == NULL || node->next == NULL) {
        return;
    }

    ListNode* nodeToDelete = node->next;

    node->val = nodeToDelete->val;
    node->next = nodeToDelete->next;

    delete nodeToDelete;
}

void printList(ListNode* head) {
    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val;

        if (temp->next != NULL) {
            cout << " -> ";
        }

        temp = temp->next;
    }

    cout << endl;
}

void deleteList(ListNode*& head) {
    while (head != NULL) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Linked list: 4 -> 5 -> 1 -> 9
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Before deletion: ";
    printList(head);

    // Delete the node containing 5
    ListNode* nodeToDelete = head->next;
    deleteNode(nodeToDelete);

    cout << "After deletion:  ";
    printList(head);

    deleteList(head);

    return 0;
}