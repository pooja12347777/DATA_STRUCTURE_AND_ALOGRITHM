#include <deque>
#include <iostream>
#include <vector>
using namespace std;

vector<long long> printFirstNegative(
    long long int a[],
    long long int n,
    long long int k
) {
    deque<long long int> dq;
    vector<long long int> ans;

    // Process the first window
    for (int i = 0; i < k; i++) {
        if (a[i] < 0) {
            dq.push_back(i);
        }
    }

    // Answer for the first window
    if (!dq.empty()) {
        ans.push_back(a[dq.front()]);
    } else {
        ans.push_back(0);
    }

    // Process the remaining windows
    for (int i = k; i < n; i++) {
        // Remove indices outside the current window
        if (!dq.empty() && i - dq.front() >= k) {
            dq.pop_front();
        }

        // Add the current negative element's index
        if (a[i] < 0) {
            dq.push_back(i);
        }

        // Store the first negative element
        if (!dq.empty()) {
            ans.push_back(a[dq.front()]);
        } else {
            ans.push_back(0);
        }
    }

    return ans;
}

int main() {
    long long int a[] = {-8, 2, 3, -6, 10};
    long long int n = 5;
    long long int k = 2;

    vector<long long int> ans = printFirstNegative(a, n, k);

    cout << "First negative number in every window: ";

    for (long long int value : ans) {
        cout << value << " ";
    }

    return 0;
}