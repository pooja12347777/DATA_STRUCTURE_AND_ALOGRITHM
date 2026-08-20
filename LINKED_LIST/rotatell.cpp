#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode() {
        val = 0;
        next = nullptr;
    }

    ListNode(int x) {
        val = x;
        next = nullptr;
    }

    ListNode(int x, ListNode* nextNode) {
        val = x;
        next = nextNode;
    }
};

class Solution {
private:
    ListNode* findNthListNode(ListNode* temp, int k) {
        int count = 1;

        while (temp != nullptr) {
            if (count == k) {
                return temp;
            }

            count++;
            temp = temp->next;
        }

        return nullptr;
    }

public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        ListNode* tail = head;
        int length = 1;

        while (tail->next != nullptr) {
            tail = tail->next;
            length++;
        }

        k = k % length;

        if (k == 0) {
            return head;
        }

        // Make the linked list circular
        tail->next = head;

        // Find the new last node
        ListNode* newLastNode =
            findNthListNode(head, length - k);

        // Set the new head
        head = newLastNode->next;

        // Break the circular linked list
        newLastNode->next = nullptr;

        return head;
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;

        if (head->next != nullptr) {
            cout << " -> ";
        }

        head = head->next;
    }

    cout << endl;
}

int main() {
    // Creating linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    cout << "Original linked list:" << endl;
    printList(head);

    Solution solution;
    head = solution.rotateRight(head, k);

    cout << "Linked list after rotating " << k
         << " positions:" << endl;
    printList(head);

    // Free allocated memory
    while (head != nullptr) {
        ListNode* nodeToDelete = head;
        head = head->next;
        delete nodeToDelete;
    }

    return 0;
}