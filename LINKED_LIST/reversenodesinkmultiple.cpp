#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) {
        val = value;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr) {
            return head;
        }

        int availableNodes = 0;
        ListNode* check = head;

        // Check whether at least k nodes are available
        while (check != nullptr && availableNodes < k) {
            check = check->next;
            availableNodes++;
        }

        // Leave the incomplete group unchanged
        if (availableNodes < k) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* temp = nullptr;

        int count = 0;

        // Reverse exactly k nodes
        while (curr != nullptr && count < k) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            count++;
        }

        // Connect the current group with the remaining groups
        head->next = reverseKGroup(curr, k);

        return prev;
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k;

    cout << "Enter the value of k: ";
    cin >> k;

    cout << "Original list: ";
    printList(head);

    Solution solution;
    head = solution.reverseKGroup(head, k);

    cout << "List after reversing in groups: ";
    printList(head);

    return 0;
}