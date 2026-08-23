#include <iostream>
#include <map>
using namespace std;

// Definition for singly linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        map<ListNode*, int> visited;
        ListNode* temp = head;
        int index = 0;

        while (temp != NULL) {
            if (visited.find(temp) != visited.end()) {
                cout << "Tail connects to node index "
                     << visited[temp] << endl;

                return temp;
            }

            visited[temp] = index;
            index++;
            temp = temp->next;
        }

        return NULL;
    }
};

int main() {
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Tail connects to node at index 1
    head->next->next->next->next = head->next;

    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);

    if (cycleStart != NULL) {
        cout << "Cycle starts at node value: "
             << cycleStart->val << endl;
    } else {
        cout << "No cycle found." << endl;
    }

    return 0;
}