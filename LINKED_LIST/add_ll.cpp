#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Solution class
class Solution {
private:
    // Reverse Linked List
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    // Insert at Tail
    void insertAtTail(Node* &head, Node* &tail, int val) {
        Node* temp = new Node(val);

        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        }

        tail->next = temp;
        tail = temp;
    }

    // Add two reversed linked lists
    Node* add(Node* first, Node* second) {
        int carry = 0;

        Node* ansHead = NULL;
        Node* ansTail = NULL;

        while (first != NULL || second != NULL || carry != 0) {

            int val1 = 0;
            if (first != NULL)
                val1 = first->data;

            int val2 = 0;
            if (second != NULL)
                val2 = second->data;

            int sum = carry + val1 + val2;

            int digit = sum % 10;
            carry = sum / 10;

            insertAtTail(ansHead, ansTail, digit);

            if (first != NULL)
                first = first->next;

            if (second != NULL)
                second = second->next;
        }

        return ansHead;
    }

public:
    Node* addTwoLists(Node* first, Node* second) {

        // Reverse both linked lists
        first = reverse(first);
        second = reverse(second);

        // Add them
        Node* ans = add(first, second);

        // Reverse answer
        ans = reverse(ans);

        return ans;
    }
};

// Insert node at end
void insert(Node* &head, Node* &tail, int data) {

    Node* temp = new Node(data);

    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}

// Print linked list
void print(Node* head) {

    while (head != NULL) {
        cout << head->data;
        if (head->next != NULL)
            cout << " -> ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    Node* first = NULL;
    Node* tail1 = NULL;

    Node* second = NULL;
    Node* tail2 = NULL;

    // First number = 243
    insert(first, tail1, 2);
    insert(first, tail1, 4);
    insert(first, tail1, 3);

    // Second number = 564
    insert(second, tail2, 5);
    insert(second, tail2, 6);
    insert(second, tail2, 4);

    cout << "First Number  : ";
    print(first);

    cout << "Second Number : ";
    print(second);

    Solution obj;

    Node* ans = obj.addTwoLists(first, second);

    cout << "Sum           : ";
    print(ans);

    return 0;
}