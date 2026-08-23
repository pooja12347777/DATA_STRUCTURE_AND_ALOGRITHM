#include <iostream>
using namespace std;

// Definition of a singly linked-list node
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        // Empty list or single-node list
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        // Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr &&
               fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the part after the middle
        ListNode* preMiddle = slow;
        ListNode* preCurrent = slow->next;

        while (preCurrent->next != nullptr) {
            ListNode* current = preCurrent->next;

            preCurrent->next = current->next;
            current->next = preMiddle->next;
            preMiddle->next = current;
        }

        // Start reordering
        slow = head;
        fast = preMiddle->next;

        while (slow != preMiddle) {
            preMiddle->next = fast->next;
            fast->next = slow->next;
            slow->next = fast;

            slow = fast->next;
            fast = preMiddle->next;
        }
    }
};

// Function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;

        if (head->next != nullptr) {
            cout << " -> ";
        }

        head = head->next;
    }

    cout << " -> NULL" << endl;
}

// Function to delete the linked list
void deleteList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Creating the linked list:
    // 4 -> 8 -> 15 -> 16 -> 23 -> NULL

    ListNode* head = new ListNode(4);
    head->next = new ListNode(8);
    head->next->next = new ListNode(15);
    head->next->next->next = new ListNode(16);
    head->next->next->next->next = new ListNode(23);

    cout << "Original list:" << endl;
    printList(head);

    Solution solution;
    solution.reorderList(head);

    cout << "\nReordered list:" << endl;
    printList(head);

    deleteList(head);

    return 0;
}