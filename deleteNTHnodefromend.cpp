#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Solution {
private:
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = nullptr;
        Node* nextNode = nullptr;

        while (curr != nullptr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

public:
    Node* removeNthFromEnd(Node* head, int n) {
        if (head == nullptr || n <= 0) {
            return head;
        }

        // Reverse the linked list
        head = reverse(head);

        Node* curr = head;
        Node* prev = nullptr;
        int count = 1;

        // Reach the nth node
        while (count < n && curr != nullptr) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        // If n is greater than the list size
        if (curr == nullptr) {
            return reverse(head);
        }

        // Delete the first node of the reversed list
        if (prev == nullptr) {
            head = curr->next;
        } else {
            prev->next = curr->next;
        }

        curr->next = nullptr;
        delete curr;

        // Restore the original order
        return reverse(head);
    }
};

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {
    // Linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original linked list: ";
    printList(head);

    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution solution;
    head = solution.removeNthFromEnd(head, n);

    cout << "Linked list after deletion: ";
    printList(head);

    // Free the remaining memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}