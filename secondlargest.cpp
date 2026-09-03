#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int largest = arr[0];
        int secondLargest = -1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } 
            else if (arr[i] < largest && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }

        return secondLargest;
    }
};

int main() {
    Solution s;
    vector<int> arr = {2, 3, 4, 1, 6};

    int answer = s.getSecondLargest(arr);

    cout << "Second largest element: " << answer << endl;

    return 0;
}