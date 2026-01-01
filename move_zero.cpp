#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void move_zero(vector<int>& num) {
        int non_zero = 0;
        for (int j = 0; j < num.size(); j++) {
            if (num[j] != 0) {
                swap(num[j], num[non_zero]);
                non_zero++;
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};

    s.move_zero(nums);

    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
